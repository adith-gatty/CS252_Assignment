#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/hash.h>
#include <linux/gcd.h>
#include <asm/param.h>
#include <linux/jiffies.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adith");
MODULE_DESCRIPTION("mymodule");

/* This function is called when the module is loaded. */
static int __init ModuleInit(void) {
	printk(KERN_INFO "Loading Kernel Module\n");
	printk("GOLDEN RATIO PRIME: %llu\n",GOLDEN_RATIO_PRIME);
	printk("JIFFIES: %lu HZ: %d\n",jiffies,HZ);
	return 0;
}

/* This function is called when the module is removed. */
static void __exit ModuleExit(void) {
	printk(KERN_INFO "Removing Kernel Module\n");
	printk("GCD(3300,24): %lu\n",gcd(3300,24));
	printk("JIFFIES: %lu\n",jiffies);
}

/* Macros for registering module entry and exit points. */
module_init(ModuleInit);
module_exit(ModuleExit);
