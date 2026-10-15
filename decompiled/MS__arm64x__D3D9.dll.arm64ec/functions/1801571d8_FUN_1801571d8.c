/*
 * FUN_1801571d8 at 1801571d8
 * undefined FUN_1801571d8(void)
 * Address ranges: 1801571d8-180157207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801571d8(undefined8 *param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_c = *(undefined4 *)(param_1 + 2);
  local_8 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_4 = *(undefined4 *)(param_1 + 3);
  FUN_180168110(*param_1,*(undefined4 *)(param_1 + 1),&local_10);
  return;
}

