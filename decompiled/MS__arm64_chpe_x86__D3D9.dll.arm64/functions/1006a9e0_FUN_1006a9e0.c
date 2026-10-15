/*
 * FUN_1006a9e0 at 1006a9e0
 * undefined FUN_1006a9e0(void)
 * Address ranges: 1006a9e0-1006aaa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a9e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_100628a8(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
               param_1[8]);
  if (param_1[0xb] != 0) {
    FUN_10120738(*(int *)(iVar1 + 0xf6b8) + 0x14f0,param_1[0xd],param_1[0xb],param_1[0xc]);
  }
  return;
}

