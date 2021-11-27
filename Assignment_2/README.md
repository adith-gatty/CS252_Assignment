## Assignment 2

This kernel module Assignment_2.c is compiled using the Makefile accompanying the source code with this project. To compile the module, enter the following on the command line:
``` 
make
```
The compilation produces several files. The file Assignment_2.ko represents the compiled kernel module. The following step illustrates inserting this module into the Linux kernel

Kernel modules are loaded using the insmod command, which is run as follows:
```
sudo insmod Assignment_2.ko
```
To check whether the module has loaded, enter the lsmod command and search for the module Assignment_1.
This creates a new entry in the /proc/seconds file system. It displays the value of number of elasped seconds since the kernel module was loaded.
```
cat /proc/seconds
```
This command can be entered various times to check whether its displaying the correct amount of seconds elasped.

**Output**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/Assignment_2/Assignment_2_images/Assignment_2_proc.JPG)

Removing the kernel module involves invoking the rmmod command (notice that the .ko suffix is unnecessary):
```
sudo rmmod Assignment_2
```
To be sure that we have removed /proc/seconds once the module is removed we must first enter the following command:
```
cat /proc/seconds
```
It must show an error indicating that there is no such file or directory

**Required Output:**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/Assignment_2/Assignment_2_images/Assignment_2_all.JPG)


