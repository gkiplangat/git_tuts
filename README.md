PID && PPID 
Created a ```pid.c``` file
* The file contains code that helps to retrieve the process id of the current process
* Here is the code
```ts
#include <stdio.h>
#include <unistd.h>

/**
 * main -entry point
 * @void: - Means no argument
 * Return: 0 on success
 */
int main(void)
{
        pid_t my_pid;

        my_pid = getpid();
        printf("%u\n", my_pid);
        return (0);
}

```
