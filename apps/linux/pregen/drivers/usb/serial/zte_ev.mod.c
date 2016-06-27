#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v19D2pFFFFd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFFEd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFFDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF1d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFF6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFEEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19D2pFFEDd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFEBd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v19D2pFFECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p3197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p6000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p9008d*dc*dsc*dp*ic*isc*ip*in*");
