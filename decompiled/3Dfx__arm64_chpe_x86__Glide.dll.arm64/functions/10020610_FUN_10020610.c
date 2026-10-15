/*
 * FUN_10020610 at 10020610
 * undefined FUN_10020610(void)
 * Address ranges: 10020610-1002067f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020610(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x31e8) = param_3;
  *(undefined4 *)(param_1 + 0x31c0) = param_4;
  *(undefined4 *)(param_1 + 0x31c4) = param_5;
  *(undefined4 *)(param_1 + 0x31f0) = *(undefined4 *)(&DAT_10096c08 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x3236) = 1;
  FUN_10061070(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),param_2);
  return;
}

