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
"depends=ci_hdrc";

MODULE_ALIAS("pci:v0000153Fd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000153Fd00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000829sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A96681F3B1C30DD0FAA6718");
