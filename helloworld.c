#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long sleeping(char *buff ,int number)
{
       
        printk("\n[BARBER SHOP]: Customer[%d]: %s",number,buff);

	return 0;
}

