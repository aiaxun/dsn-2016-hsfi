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
"depends=hdlc";

MODULE_ALIAS("pci:v000013C0d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013C0d00000090sv*sd*bc*sc*i*");
