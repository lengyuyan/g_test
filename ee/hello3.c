#include<linux/module.h> /* 头文件在顶层目录的include文件夹里面 */
#include<linux/init.h> //init & exit相关的宏
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GPZ ");
MODULE_DESCRIPTION("hello3 world module");
static int __init hello3_init(void)
{
    printk(KERN_ERR "hello3 world!");
    /*如果按照hello1,hello2,hello3的顺序插入模块，
    因为是头插法，那么这里会把hello3的下一个节点变成hello1 */
    if (__this_module.list.next)
        __this_module.list.next = __this_module.list.next->next;
    return 0;

}

static void hello3_exit(void)
{
    printk(KERN_ERR "hello3 exit!");
}
module_init(hello3_init);
module_exit(hello3_exit);
