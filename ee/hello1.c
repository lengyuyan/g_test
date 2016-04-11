#include<linux/module.h> /* 头文件在顶层目录的include文件夹里面 */
#include<linux/init.h> //init & exit相关的宏
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GPZ ");
MODULE_DESCRIPTION("hello1 world module");

int var_c = 1;
EXPORT_SYMBOL(var_c);

int test_export_fun(int a, int b)
{
    return a + b ;
}
EXPORT_SYMBOL(test_export_fun);



static int __init hello1_init(void)
{
    printk(KERN_ERR "hello1 world!");
    return 0;

}

static void hello1_exit(void)
{
    printk(KERN_ERR "hello1 exit!");
}
module_init(hello1_init);
module_exit(hello1_exit);


