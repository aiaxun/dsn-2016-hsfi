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
"depends=snd-pcm,snd,videobuf-dma-sg,dvb-core,videodev,rc-core,cx2341x,v4l2-common,altera-ci,videobuf-dvb,tda18271,videobuf-core,btcx-risc,altera-stapl,tveeprom";

MODULE_ALIAS("pci:v000014F1d00008852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008880sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "269E5D70B2D06BE9322DDEF");
