/**
 * @file    fork1.c
 * 
 * @brief   Exemple de code C pour des processus (thread) avec la fonction fork, 
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
//#define _XOPEN_SOURCE 800 
#define _GNU_SOURCE

//#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() 
{
    pid_t pid;
    pid = fork();
    if(pid != 0)
    {
        printf("Je suis le processus: %d\n", pid);
    } else {
        printf("Ceci est le processus: %d\n", pid);
    }
    return 0;
}
