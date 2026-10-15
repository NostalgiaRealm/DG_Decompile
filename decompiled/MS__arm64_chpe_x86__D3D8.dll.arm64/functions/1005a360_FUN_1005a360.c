/*
 * FUN_1005a360 at 1005a360
 * undefined FUN_1005a360(void)
 * Address ranges: 1005a360-1005a427
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a360(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_10052450(iVar1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
               param_1[8]);
  if (param_1[0xb] != 0) {
    FUN_100edee8(*(int *)(iVar1 + 0xd9b8) + 0x14f0,param_1[0xd],param_1[0xb],param_1[0xc]);
  }
  return;
}

