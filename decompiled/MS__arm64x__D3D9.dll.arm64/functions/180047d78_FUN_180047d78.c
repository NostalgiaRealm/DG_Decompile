/*
 * FUN_180047d78 at 180047d78
 * undefined FUN_180047d78(void)
 * Address ranges: 180047d78-180047da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047d78(undefined8 *param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_c = *(undefined4 *)(param_1 + 2);
  local_8 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_4 = *(undefined4 *)(param_1 + 3);
  FUN_180057fc0(*param_1,*(undefined4 *)(param_1 + 1),&local_10);
  return;
}

