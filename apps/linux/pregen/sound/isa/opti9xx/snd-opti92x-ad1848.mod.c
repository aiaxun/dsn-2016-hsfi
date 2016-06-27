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
"depends=snd,snd-opl3-lib,snd-opl4-lib,snd-mpu401-uart,snd-wss-lib";

MODULE_ALIAS("pnp:dOPT0000*");
MODULE_ALIAS("acpi*:OPT0000:*");
MODULE_ALIAS("pnp:dOPT0002*");
MODULE_ALIAS("acpi*:OPT0002:*");
MODULE_ALIAS("pnp:dOPT0005*");
MODULE_ALIAS("acpi*:OPT0005:*");
MODULE_ALIAS("pnp:dOPT9250*");
MODULE_ALIAS("acpi*:OPT9250:*");
