/*
 * FUN_100598e0 at 100598e0
 * undefined FUN_100598e0(void)
 * Address ranges: 100598e0-10059973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100598e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10052398(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],0);
  if (param_1[7] != 0) {
    FUN_100edee8(*(int *)(iVar1 + 0xd9b8) + 0x14f0,param_1[9],param_1[7],param_1[8]);
  }
  return;
}

