## mymodule

This kernel module mymodule.c is compiled using the Makefile accompanying the source code with this project. To compile the module, enter the following on the command line:
``` 
make
```
The compilation produces several files. The file mymodule.ko represents the compiled kernel module. The following step illustrates inserting this module into the Linux kernel

Kernel modules are loaded using the insmod command, which is run as follows:
```
sudo insmod mymodule.ko
```
To check whether the module has loaded, enter the lsmod command and search for the module mymodule.
Module entry point is invoked when the module is inserted into the kernel.

To check the contents of this message in the kernel log buffer, enter the command.
```
dmesg | tail
```
You should see the message "Loading Module" along with golden ratio prime and jiffies value.

**Output**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/mymodule/mymodule_images/mymodule_insert.JPG)

Removing the kernel module involves invoking the rmmod command (notice that the .ko suffix is unnecessary):
```
sudo rmmod mymodule
```
To make sure the module has been removed we check the contents of this message in the kernel log buffer,enter the command.
```
dmesg | tail
```
You should see the message "Removing Kernel Module" along with values of greatest common divisor of 3,300 and 24 and the value of jiffies at the time of module removal.

**Output**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/mymodule/mymodule_images/mymodule_remove.JPG)

Because the kernel log buffer can fill up quickly, it often makes sense to clear the buffer periodically. This can be accomplished as follows:
```
sudo dmesg -c
```

**Required Output:**\
![Output](https://github.com/adith-gatty/CS252_Assignment/blob/main/mymodule/mymodule_images/mymodule_all.JPG)


