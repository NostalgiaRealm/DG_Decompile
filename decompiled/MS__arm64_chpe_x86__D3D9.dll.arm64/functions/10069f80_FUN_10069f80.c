/*
 * FUN_10069f80 at 10069f80
 * undefined FUN_10069f80(void)
 * Address ranges: 10069f80-1006a013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069f80(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_100627f0(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],0);
  if (param_1[7] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[9],param_1[7],param_1[8]);
  }
  return;
}

