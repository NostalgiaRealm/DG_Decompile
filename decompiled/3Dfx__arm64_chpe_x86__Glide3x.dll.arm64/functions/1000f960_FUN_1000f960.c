/*
 * FUN_1000f960 at 1000f960
 * undefined FUN_1000f960(void)
 * Address ranges: 1000f960-1000f9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000f960(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x3368) = param_3;
  *(undefined4 *)(param_1 + 0x3340) = param_4;
  *(undefined4 *)(param_1 + 0x3344) = param_5;
  *(undefined4 *)(param_1 + 0x3370) = *(undefined4 *)(&DAT_10099938 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x33b6) = 1;
  FUN_10064880(*(undefined4 *)(*(int *)(param_1 + 0x3308) + 0x1304),param_2);
  return;
}

