ifneq ($(KERNELRELEASE),)
obj-m :=hello1.o hello2.o hello3.o
else
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
endif

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	rm -f  *.o *.mod.o *.mod.c *.symvers *.unsigned *.order

#这个歌makefile是要进入两次的,第一次执行else,第二次进入后执行if



