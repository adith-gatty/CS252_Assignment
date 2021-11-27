#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <asm/uaccess.h>
#include <asm/param.h>
#include <linux/jiffies.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adith");
MODULE_DESCRIPTION("Assignment_1");


#define BUFFER_SIZE 128
#define PROC_NAME "jiffies"

ssize_t p_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos);


static const struct proc_ops p_ops= {
	.proc_read = p_read,
};

/* This function is called when the module is loaded. */
static int __init ModuleInit(void) {
	/* creates the /proc/jiffies entry */
	proc_create(PROC_NAME, 0666, NULL, &p_ops);
	return 0;
}

/* This function is called when the module is removed. */
static void __exit ModuleExit(void) {
	
	/* removes the /proc/jiffies entry */
	remove_proc_entry(PROC_NAME, NULL);
}

/* This function is called each time /proc/jiffies is read */
ssize_t p_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos)
{
int rv = 0;
char buffer[BUFFER_SIZE];
static int completed = 0;

if (completed) {
completed = 0;
return 0;
}

completed = 1;
/* print jiffies */
rv = sprintf(buffer, "JIFFIES: %lu\n",jiffies);
/* copies kernel space buffer to user space usr buf */
copy_to_user(usr_buf, buffer, rv);
return rv;
}

/* Macros for registering module entry and exit points. */
module_init(ModuleInit);
module_exit(ModuleExit);
