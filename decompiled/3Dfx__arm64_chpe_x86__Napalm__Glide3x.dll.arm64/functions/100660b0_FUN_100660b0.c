/*
 * FUN_100660b0 at 100660b0
 * undefined FUN_100660b0(void)
 * Address ranges: 100660b0-1006611b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100660b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = param_1 + 0x1378;
  uVar3 = FUN_1004ba20(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_1004b978(iVar1);
  }
  piVar2 = (int *)(param_1 + 0x14bc);
  FUN_10068fa0(*piVar2 + 4,0);
  iVar1 = *piVar2;
  FUN_1005f928(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

