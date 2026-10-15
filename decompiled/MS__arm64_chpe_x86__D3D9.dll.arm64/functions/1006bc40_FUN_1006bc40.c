/*
 * FUN_1006bc40 at 1006bc40
 * undefined FUN_1006bc40(void)
 * Address ranges: 1006bc40-1006bd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bc40(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_100628a8(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],param_1[6],param_1[7])
  ;
  if (param_1[10] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[0xc],param_1[10],param_1[0xb]);
  }
  return;
}

