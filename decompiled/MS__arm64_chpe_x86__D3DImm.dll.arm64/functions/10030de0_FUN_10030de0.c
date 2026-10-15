/*
 * FUN_10030de0 at 10030de0
 * undefined FUN_10030de0(void)
 * Address ranges: 10030de0-10030e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030de0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10029850(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
               (char)param_1[7]);
  if (param_1[8] != 0) {
    FUN_100792a0(*(int *)(iVar1 + 0x1d54) + 0x14f0,param_1[10],param_1[8],param_1[9]);
  }
  return;
}

