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
* [Click here](https://www.youtube.com/watch?v=4tgluSJDA_E)
* Link to guide you to install Ubuntu on Oracle Virtual Box: [Click here](https://www.youtube.com/watch?v=x5MhydijWmc)
* Link that helped me write the readme file: [Click here](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
