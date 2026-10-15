/*
 * FUN_100e67f0 at 100e67f0
 * undefined FUN_100e67f0(void)
 * Address ranges: 100e67f0-100e685b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e67f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = param_1 + 0x1378;
  uVar3 = FUN_100fda90(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_100fd9e8(iVar1);
  }
  piVar2 = (int *)(param_1 + 0x14bc);
  FUN_100e1060(*piVar2 + 4,0);
  iVar1 = *piVar2;
  FUN_100e91a8(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

