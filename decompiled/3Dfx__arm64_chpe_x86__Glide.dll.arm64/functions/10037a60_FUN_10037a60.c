/*
 * FUN_10037a60 at 10037a60
 * undefined FUN_10037a60(void)
 * Address ranges: 10037a60-10037ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037a60(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10029590(iVar1,param_1[1],param_1[2],(char)param_1[3]);
  if (param_1[4] != 0) {
    FUN_1006dc00(*(int *)(iVar1 + 0x3188) + 0x14f0,param_1[5],param_1[4],param_1[6]);
  }
  return;
}

