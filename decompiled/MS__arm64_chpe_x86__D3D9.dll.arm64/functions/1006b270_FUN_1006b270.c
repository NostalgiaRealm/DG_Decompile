/*
 * FUN_1006b270 at 1006b270
 * undefined FUN_1006b270(void)
 * Address ranges: 1006b270-1006b2ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b270(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_100627f0(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],1);
  if (param_1[6] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

