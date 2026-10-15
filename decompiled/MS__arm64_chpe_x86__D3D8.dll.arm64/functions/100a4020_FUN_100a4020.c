/*
 * FUN_100a4020 at 100a4020
 * undefined FUN_100a4020(void)
 * Address ranges: 100a4020-100a4093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100a4020(int param_1)

{
  undefined1 uVar1;
  
  FUN_100fd9e8(*(int *)(param_1 + -0x80) + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 + 0x1880)
  ;
  uVar1 = FUN_100adeb0(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

