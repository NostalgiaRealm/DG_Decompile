/*
 * FUN_100375e0 at 100375e0
 * undefined FUN_100375e0(void)
 * Address ranges: 100375e0-10037657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100375e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10029110(iVar1,param_1[1],param_1[2],(char)param_1[3]);
  if (param_1[4] != 0) {
    FUN_1006d780(*(int *)(iVar1 + 0x3188) + 0x14f0,param_1[5],param_1[4],param_1[6]);
  }
  return;
}

