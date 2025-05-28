#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

sem_t sem;

void* thread_func(void* arg) {
    printf("Thread waiting on semaphore...\n");
    sem_wait(&sem);          // P operation (wait)
    printf("Thread inside critical section!\n");
    sem_post(&sem);          // V operation (signal)
    return NULL;
}

int main() {
    pthread_t t;

    sem_init(&sem, 0, 1);    // Initialize semaphore with value 1

    pthread_create(&t, NULL, thread_func, NULL);

    // Main thread also waits on semaphore
    sem_wait(&sem);
    printf("Main thread inside critical section!\n");
    sem_post(&sem);

    pthread_join(t, NULL);
    sem_destroy(&sem);       // Clean up

    return 0;
}
