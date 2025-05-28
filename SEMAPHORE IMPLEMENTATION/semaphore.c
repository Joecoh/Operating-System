#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

sem_t sem;

void* thread_func(void* arg) {
    printf("Thread waiting on semaphore...\n");
    sem_wait(&sem);         
    printf("Thread inside critical section!\n");
    sem_post(&sem);          
    return NULL;
}

int main() {
    pthread_t t;

    sem_init(&sem, 0, 1);   

    pthread_create(&t, NULL, thread_func, NULL);

    sem_wait(&sem);
    printf("Main thread inside critical section!\n");
    sem_post(&sem);

    pthread_join(t, NULL);
    sem_destroy(&sem);      

    return 0;
}
