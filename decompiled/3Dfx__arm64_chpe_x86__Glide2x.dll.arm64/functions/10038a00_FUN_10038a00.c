/*
 * FUN_10038a00 at 10038a00
 * undefined FUN_10038a00(void)
 * Address ranges: 10038a00-10038a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10038a00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_100294e0(iVar1,param_1[1],param_1[2]);
  if (param_1[3] != 0) {
    FUN_1006d780(*(int *)(iVar1 + 0x3188) + 0x14f0,param_1[5],param_1[3],param_1[4]);
  }
  return;
}

