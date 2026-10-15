/*
 * FUN_1005ac10 at 1005ac10
 * undefined FUN_1005ac10(void)
 * Address ranges: 1005ac10-1005ac9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ac10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10052398(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],0,param_1[5],1);
  if (param_1[6] != 0) {
    FUN_100edee8(*(int *)(iVar1 + 0xd9b8) + 0x14f0,param_1[8],param_1[6],param_1[7]);
  }
  return;
}

