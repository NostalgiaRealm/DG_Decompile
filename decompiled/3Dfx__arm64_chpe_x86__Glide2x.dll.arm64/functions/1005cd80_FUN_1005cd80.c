/*
 * FUN_1005cd80 at 1005cd80
 * undefined FUN_1005cd80(void)
 * Address ranges: 1005cd80-1005cdeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005cd80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + param_2 * 0x16c0;
  iVar1 = param_1 + 0x1378;
  uVar3 = FUN_10055600(iVar1);
  if ((uVar3 & 1) == 0) {
    FUN_10055558(iVar1);
  }
  piVar2 = (int *)(param_1 + 0x14bc);
  FUN_1005fc70(*piVar2 + 4,0);
  iVar1 = *piVar2;
  FUN_100565e8(*(undefined4 *)(iVar1 + 0x8e0),*(undefined8 *)(iVar1 + 0x940));
  return;
}

