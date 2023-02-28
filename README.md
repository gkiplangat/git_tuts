## Tuts
### This directory contains the learning tutorials

##### ==============================================================================
#### Pointers
* [change_pointer.c](https://github.com/gkiplangat/git_tuts/blob/main/change_pointer.c)
This is a c program the execute the following
	* declare two variables **a** and **b** and initialize with values
	```ts
	int a = 10;
	int b = 20;
	```
	* declare a **pointer**
	```ts
	int *pointer;
	```
	* initialize **pointer** to store the address of variable **a**
	```ts
	pointer = &a;
	```
	* print out the content of the pointer variable which is also the memory address of variable **a**
	```ts
	printf("%p\n",pointer);
	```
	* reassign the address of variable **b** into the the **pointer**
	``` ts
	pointer = &b;
	```
	* print out the content of the pointer variable which is also the memory address of variable **b**
	```ts
        printf("%p\n",pointer);
        ```

The first printf line prints the memory address of variable *a* and the second printf line prints the memory address of variable **b**
### Conclusion
It is possible for a pointer variable to be reassign the memory address of another variable

##### ================================================================================
