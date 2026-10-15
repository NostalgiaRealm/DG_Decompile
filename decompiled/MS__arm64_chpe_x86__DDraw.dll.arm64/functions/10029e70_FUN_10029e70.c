/*
 * FUN_10029e70 at 10029e70
 * undefined FUN_10029e70(void)
 * Address ranges: 10029e70-10029ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10029e70(int param_1)

{
  undefined1 uVar1;
  
  FUN_10090418(*(int *)(param_1 + -0x80) + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 + 0x1880)
  ;
  uVar1 = FUN_10033a70(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

