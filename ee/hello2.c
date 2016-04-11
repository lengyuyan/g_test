#include<linux/module.h> /* 头文件在顶层目录的include文件夹里面 */
#include<linux/init.h> //init & exit相关的宏
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GPZ ");
MODULE_DESCRIPTION("hello2 world module");


extern int var_c;
extern int test_export_fun(int a, int b);
static int __init hello2_init(void)
{
    printk(KERN_ERR "hello2 world!\n");
    printk(KERN_ERR "var_c is %d\n",var_c);
    printk(KERN_ERR "fun(1+2)=  %d\n",test_export_fun(1,2));
    return 0;

}

static void hello2_exit(void)
{
    printk(KERN_ERR "hello2 exit!");
}
module_init(hello2_init);
module_exit(hello2_exit);
