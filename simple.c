#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

static int __init simple_init(void) {
    printk(KERN_INFO "Loading Module\nHola Sistos!");
    return 0;
}

static void __exit simple_exit(void) {
    printk(KERN_INFO "Removing Module\nAdiós Sistos!");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("simple cargar y descargar");
MODULE_AUTHOR("JJCampos");
