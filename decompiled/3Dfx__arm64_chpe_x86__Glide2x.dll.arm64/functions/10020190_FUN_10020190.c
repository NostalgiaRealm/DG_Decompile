/*
 * FUN_10020190 at 10020190
 * undefined FUN_10020190(void)
 * Address ranges: 10020190-100201ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10020190(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x31e8) = param_3;
  *(undefined4 *)(param_1 + 0x31c0) = param_4;
  *(undefined4 *)(param_1 + 0x31c4) = param_5;
  *(undefined4 *)(param_1 + 0x31f0) = *(undefined4 *)(&DAT_10096bd8 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x3236) = 1;
  FUN_10060bf0(*(undefined4 *)(*(int *)(param_1 + 0x3188) + 0x1304),param_2);
  return;
}

