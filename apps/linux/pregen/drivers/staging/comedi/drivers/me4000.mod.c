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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi";

MODULE_ALIAS("pci:v00001402d00004650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004661sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004683sv*sd*bc*sc*i*");
