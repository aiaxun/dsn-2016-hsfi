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
"depends=";

MODULE_ALIAS("pci:v00001002d00004C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005245sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005246sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005247sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000544Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005454sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005455sv*sd*bc*sc*i*");
