#include<linux/module.h> /* ͷ�ļ��ڶ���Ŀ¼��include�ļ������� */
#include<linux/init.h> //init & exit��صĺ�
MODULE_LICENSE("GPL");
MODULE_AUTHOR("GPZ ");
MODULE_DESCRIPTION("hello3 world module");
static int __init hello3_init(void)
{
    printk(KERN_ERR "hello3 world!");
    /*�������hello1,hello2,hello3��˳�����ģ�飬
    ��Ϊ��ͷ�巨����ô������hello3����һ���ڵ���hello1 */
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
