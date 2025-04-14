#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

int main() {
    struct stat file;
    const char *filename = "sample.txt"; // This is Hardcoded file name
    

    if (stat(filename, &file) == -1) {
        perror(filename);
        exit(-1);
    }

    printf("User id           : %d\n", file.st_uid);
    printf("Group id          : %d\n", file.st_gid);
    printf("Block size        : %d\n", file.st_blksize);
    printf("Blocks allocated  : %d\n", file.st_blocks);
    printf("Inode no.         : %lu\n", file.st_ino);
    printf("Last accessed     : %s", ctime(&(file.st_atime)));
    printf("Last modified     : %s", ctime(&(file.st_mtime)));
    printf("File size         : %lld bytes\n", (long long)file.st_size);
    printf("No. of links      : %lu\n", file.st_nlink);

    printf("Permissions       : ");
    printf((S_ISDIR(file.st_mode)) ? "d" : "-");
    printf((file.st_mode & S_IRUSR) ? "r" : "-");
    printf((file.st_mode & S_IWUSR) ? "w" : "-");
    printf((file.st_mode & S_IXUSR) ? "x" : "-");
    printf((file.st_mode & S_IRGRP) ? "r" : "-");
    printf((file.st_mode & S_IWGRP) ? "w" : "-");
    printf((file.st_mode & S_IXGRP) ? "x" : "-");
    printf((file.st_mode & S_IROTH) ? "r" : "-");
    printf((file.st_mode & S_IWOTH) ? "w" : "-");
    printf((file.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n");

    if (S_ISREG(file.st_mode))
        printf("File type         : Regular\n");
    else if (S_ISDIR(file.st_mode))
        printf("File type         : Directory\n");

    return 0;
}
