/*
 * FUN_18019f7f8 at 18019f7f8
 * undefined FUN_18019f7f8(void)
 * Address ranges: 18019f7f8-18019f863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019f7f8(void)

{
  undefined4 *puVar1;
  longlong extraout_x8;
  code *extraout_x11;
  undefined1 auVar2 [16];
  
  auVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  puVar1 = auVar2._8_8_;
  (*extraout_x11)(auVar2._0_8_,*(undefined8 *)(extraout_x8 + 0x38),*puVar1,puVar1[1],puVar1[2],
                  puVar1[3],puVar1[4],*(undefined8 *)(puVar1 + 6),puVar1[8],
                  *(undefined8 *)(puVar1 + 10),puVar1[0xc]);
  return;
}

