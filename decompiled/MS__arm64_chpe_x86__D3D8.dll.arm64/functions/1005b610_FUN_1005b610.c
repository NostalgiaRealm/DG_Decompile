/*
 * FUN_1005b610 at 1005b610
 * undefined FUN_1005b610(void)
 * Address ranges: 1005b610-1005b6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005b610(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10052450(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],param_1[6],param_1[7])
  ;
  if (param_1[10] != 0) {
    FUN_100edee8(*(int *)(iVar1 + 0xd9b8) + 0x14f0,param_1[0xc],param_1[10],param_1[0xb]);
  }
  return;
}

