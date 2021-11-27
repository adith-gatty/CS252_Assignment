## Assignment 1

This kernel module Assignment_1.c is compiled using the Makefile accompanying the source code with this project. To compile the module, enter the following on the command line:
``` 
make
```
The compilation produces several files. The file Assignment_1.ko represents the compiled kernel module. The following step illustrates inserting this module into the Linux kernel

Kernel modules are loaded using the insmod command, which is run as follows:
```
sudo insmod Assignment_1.ko
```
To check whether the module has loaded, enter the lsmod command and search for the module Assignment_1.
This creates a new entry in the /proc/jiffies file system. It displays the value of Jiffies when the following command in entered
```
cat /proc/jiffies
```
**Output**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/Assignment_1/Assignment_1_images/Assignment_1_proc.JPG)

Removing the kernel module involves invoking the rmmod command (notice that the .ko suffix is unnecessary):
```
sudo rmmod Assignment_1
```
To be sure that we have removed /proc/jiffies once the module is removed we must first enter the following command:
```
cat /proc/jiffies
```
It must show an error indicating that there is no such file or directory

**Required Output:**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/Assignment_1/Assignment_1_images/Assignment_1_all.JPG)


