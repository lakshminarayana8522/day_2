#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/jiffies.h>
#include <linux/timer.h>
#include <linux/kdev_t.h>
#include <linux/input.h>
#include <asm/io.h>

#define TIMEOUT 20000

static struct timer_list my_timer;
static struct input_dev *my_dev;

void timer_callback(struct timer_list *data)
{
	input_report_key(my_dev,KEY_A,inb(0x60) & 0x80);
	input_report_key(my_dev,KEY_A,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_B,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_B,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_C,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_C,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_D,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_D,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_E,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_E,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_F,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_F,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_G,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_G,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_H,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_H,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_I,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_I,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_J,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_J,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_K,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_K,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_L,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_L,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_M,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_M,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_N,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_N,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_O,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_O,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_P,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_P,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_Q,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_Q,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_R,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_R,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_S,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_S,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_T,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_T,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_U,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_U,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_V,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_V,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_W,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_W,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_X,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_X,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_Y,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_Y,inb(0x60) & 0x7f);
	input_report_key(my_dev,KEY_Z,inb(0x60) & 0x80);
        input_report_key(my_dev,KEY_Z,inb(0x60) & 0x7f);
	input_sync(my_dev);
	

	mod_timer(&my_timer,jiffies+msecs_to_jiffies(TIMEOUT));
}


static int my_timer_init(void)
{
	my_dev = input_allocate_device();

	set_bit(EV_KEY,my_dev->evbit);
	set_bit(KEY_A,my_dev->keybit);
	set_bit(KEY_B,my_dev->keybit);
	set_bit(KEY_C,my_dev->keybit);
	set_bit(KEY_D,my_dev->keybit);
	set_bit(KEY_E,my_dev->keybit);
	set_bit(KEY_F,my_dev->keybit);
	set_bit(KEY_G,my_dev->keybit);
	set_bit(KEY_H,my_dev->keybit);
	set_bit(KEY_I,my_dev->keybit);
	set_bit(KEY_J,my_dev->keybit);
	set_bit(KEY_K,my_dev->keybit);
	set_bit(KEY_L,my_dev->keybit);
	set_bit(KEY_M,my_dev->keybit);
	set_bit(KEY_N,my_dev->keybit);
	set_bit(KEY_O,my_dev->keybit);
	set_bit(KEY_P,my_dev->keybit);
	set_bit(KEY_Q,my_dev->keybit);
	set_bit(KEY_R,my_dev->keybit);
	set_bit(KEY_S,my_dev->keybit);
	set_bit(KEY_T,my_dev->keybit);
	set_bit(KEY_U,my_dev->keybit);
	set_bit(KEY_V,my_dev->keybit);
	set_bit(KEY_W,my_dev->keybit);
	set_bit(KEY_X,my_dev->keybit);
	set_bit(KEY_Y,my_dev->keybit);
	set_bit(KEY_Z,my_dev->keybit);

	input_register_device(my_dev);


	timer_setup(&my_timer,timer_callback,0);
	mod_timer(&my_timer,msecs_to_jiffies(TIMEOUT));
	pr_info("timer module is loaded into kernel..\n");
	return 0;
}

static void my_timer_exit(void)
{
	del_timer(&my_timer);
	input_unregister_device(my_dev);
	pr_info("timer module is unloaded from the kernel..\n");

}

module_init(my_timer_init);
module_exit(my_timer_exit);

MODULE_LICENSE("GPL");

