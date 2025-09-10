//Q1


// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>
// #include <sys/types.h>
// #include <sys/wait.h>

// int main() {
//     int fd = open("testfile.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
//     if ( fd < 0 ) {
//         perror ("open");
//         exit (1); 
//     }

//     pid_t pid = fork ();

//     if ( pid < 0 ) {
//         perror ("fork");
//         exit (1);
//     }

//     if ( pid == 0 ) {
//         write (fd, "Child in file...\n", 17);
//         printf ("I am child\n");
//     } 
    
//     else { 
//         write (fd, "Parent in file...\n", 18);
//         wait (NULL);
//         printf ("I am father\n");
//     }

//     close (fd);
//     return 0;
// }


// Q2


// #include <stdio.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main() {

//     pid_t pid = fork ();  

//     if ( pid == 0 ) {  
//         printf ( "Child is here, PID : %d\n", getpid() );
//         sleep ( 2 ); 
//         printf ( "Child process is finished\n" );
//     } 
    
//     else { 
//         printf ( "I am parent, PID : %d\n", getpid() );
//         int status;
//         pid_t childPid = wait ( &status );  
//         printf ( "Child %d finished, parent here\n", childPid );
//     }

//     return 0;
// }


// Q3


// #include <stdio.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main() {

//     pid_t pid1, pid2, pid3;

//     pid1 = fork ();
//     if ( pid1 == 0 ) {  
//         sleep ( 1 );
//         printf ( "Child 1 is here.\n" );
//         return 0;
//     }
  
//     pid2 = fork ();
//     if ( pid2 == 0 ) {  
//         sleep ( 2 );
//         printf ( "Child 2 is here. \n" );
//         return 0;
//     }

//     pid3 = fork ();
//     if ( pid3 == 0 ) {  
//         sleep ( 3 );
//         printf ( "Child 3 is here. \n" );
//         return 0;
//     }

//     printf ( "Parent is waiting for child 1\n" );
//     waitpid ( pid1, NULL, 0 );

//     printf ( "Parent is waiting for child 2\n" );
//     waitpid ( pid2, NULL, 0 );

//     printf ( "Parent is waiting for child 3\n" );
//     waitpid ( pid3, NULL, 0 );

//     printf ( "Children finished working but parent is existing.\n" );

//     return 0;
// }


#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>


#define ITERATIONS 1000000


// Function to measure system call cost
void measure_syscall_cost() {
    struct timeval start, end;
    char buf;
    int fd = open("/dev/null", O_RDONLY); // Open /dev/null for read
    if (fd < 0) {
        perror("open");
        exit(1);
    }


    gettimeofday(&start, NULL);
    for (int i = 0; i < ITERATIONS; i++) {
        read(fd, &buf, 0); // 0-byte read
    }
    gettimeofday(&end, NULL);
    close(fd);


    double time_taken = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec);
    printf("System call cost: %.3f microseconds per call\n", time_taken / ITERATIONS);
}


// Function to measure context switch cost
void measure_context_switch_cost() {
    int pipe1[2], pipe2[2];
    struct timeval start, end;
    char buffer = 'X';


    if (pipe(pipe1) == -1 || pipe(pipe2) == -1) {
        perror("pipe");
        exit(1);
    }


    pid_t pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(1);
    }


    if (pid == 0) { // Child process
        for (int i = 0; i < ITERATIONS; i++) {
            read(pipe1[0], &buffer, 1);
            write(pipe2[1], &buffer, 1);
        }
        exit(0);
    } else { // Parent process
        gettimeofday(&start, NULL);
        for (int i = 0; i < ITERATIONS; i++) {
            write(pipe1[1], &buffer, 1);
            read(pipe2[0], &buffer, 1);
        }
        gettimeofday(&end, NULL);


        double time_taken = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec);
        printf("Context switch cost: %.3f microseconds per switch\n", time_taken / (2 * ITERATIONS));
    }
}


int main() {
    measure_syscall_cost();
    measure_context_switch_cost();
    return 0;
}
