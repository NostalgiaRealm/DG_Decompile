/*
 * FUN_100c46a0 at 100c46a0
 * undefined FUN_100c46a0(void)
 * Address ranges: 100c46a0-100c4713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100c46a0(int param_1)

{
  undefined1 uVar1;
  
  FUN_10130fb8(*(int *)(param_1 + -0x80) + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 + 0x1880)
  ;
  uVar1 = FUN_100ce6a0(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

