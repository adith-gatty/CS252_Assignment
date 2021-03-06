# CS252_Assignment
**Name:** Adith Shekhar Gatty\
**Roll No:** 191ME203\
**Batch:** M2\
**Branch:** Mechanical Engineering\
**Type of Projects:** 1 Medium level Question (Project 1 in Chapter 2) - Individual\
**Textbook:** [Operating system Concepts 10th Edition by Abraham Silberschatz , Peter Galvin and Greg Gagne](https://drive.google.com/file/d/17YCH4pmuPNHppcsclKFZygoaIRBZ8Vcf/view)

## Introduction
* In this project, we will learn to create a kernel module, load it into the Linux kernel and then modify it so that it creates an entry in the /proc file system.
* We will have to use the terminal application to compile the programs, and we will have to enter commands on the command line to manage the modules in the kernel.

## Environment Setup
I used Oracle VM Virtual Box to set up an Ubuntu Virtual Machine by downloading Ubuntu version 20.04.3 disc image file.\
Link to download Oracle Virtual Box : [Click here](https://www.virtualbox.org/wiki/Downloads)\
Link to download Ubuntu 20.04.3 LTS: [Click here](https://ubuntu.com/download/desktop)\
Used gedit in VM as text editor to write C files.\
Installed various packages required for creation of linux modules. 

## Challenges faced
I had to refresh my knowledge on linux commands because of transition from working on Windows to Ubuntu by watching various youtube videos.I had to look for solutions online to the errors I got when I compiled the simple.c program given in the textbook. I did the following changes to the code given in the textbook so as to make it compile successsfully on Ubuntu VM.
* Changed the module entry point and module exit function given in the textbook as shown\
``int simple init(void);`` to `` static int __init ModuleInit(void);``\
``int simple exit(void);`` to `` static int __init ModuleExit(void);``\
Reference used for this change: [Click here](https://www.youtube.com/watch?v=4tgluSJDA_E)
* For the Assignment problems I made certain changes to avoid the errors caused  by replacing file_operations with proc_ops,changing the variable name proc_ops to p_ops and other different changes as shown

**Original code in textbook**
```
ssize t proc_read(struct file *file, char user *usr buf, size t count, loff t *pos);
static struct file_operations proc_ops = {
.owner = THIS_MODULE,
.read = proc_read,
};
/* This function is called when the module is loaded. */
int proc_init(void)
{

proc create(PROC_NAME, 0666, NULL, &proc_ops);
return 0;
}
```
**Edited code with no errors**
```
ssize_t p_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos);
static const struct proc_ops p_ops= {
	.proc_read = p_read,
};
/* This function is called when the module is loaded. */
static int __init ModuleInit(void) {

	proc_create(PROC_NAME, 0666, NULL, &p_ops);
	return 0;
}
```
Reference used to solve this error: [Click here](https://stackoverflow.com/questions/64931555/how-to-fix-error-passing-argument-4-of-proc-create-from-incompatible-pointer)




## mymodule
The first part of this project involved doing the following while loading and removing the modules.(Referred from the Textbook)
1. Print out the value of GOLDEN RATIO PRIME when the module is loaded.
2. Print out the greatest common divisor of 3,300 and 24 when the module is removed.
3. Print out the values of jiffies and HZ when the module is loaded.
4. Print out the value of jiffies when the module is removed.

The code for this project is in the mymodule folder.

## Assignment_1
The first assignment of this project was as follows: (Referred from the Textbook)

Design a kernel module that creates a /proc file named /proc/jiffies that reports the current value of jiffies when the /proc/jiffies file is read, such as with the command\
``cat /proc/jiffies``\
Be sure to remove /proc/jiffies when the module is removed.

The code for this project is in the Assignment_1 folder.

## Assignment_2
The 2nd assignment of this project was as follows: (Refered from the Textbook)

Design a kernel module that creates a proc file named /proc/seconds that reports the number of elapsed seconds since the kernel module was loaded. This will involve using the value of jiffies as well as the HZ rate. When a user enters the command\
``cat /proc/seconds``\
your kernel module will report the number of seconds that have elapsed since the kernel module was first loaded. Be sure to remove /proc/seconds when the module is removed.

The code for this project is in the Assignment_2 folder.

## References
* Textbook referred for this project: Operating System Concepts [Click here](https://drive.google.com/file/d/17YCH4pmuPNHppcsclKFZygoaIRBZ8Vcf/view)
* Link to download Oracle Virtual Box : [Click here](https://www.virtualbox.org/wiki/Downloads)
* Link to download Ubuntu 20.04.3 LTS: [Click here](https://ubuntu.com/download/desktop)
* Link to create Makefile: [Click here](https://www.youtube.com/watch?v=4tgluSJDA_E)
* Link to guide you to install Ubuntu on Oracle Virtual Box: [Click here](https://www.youtube.com/watch?v=x5MhydijWmc)
* Link that helped me write the readme file: [Click here](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
* Stackoverflow solution for the /proc system error: [Click here](https://stackoverflow.com/questions/64931555/how-to-fix-error-passing-argument-4-of-proc-create-from-incompatible-pointer)
