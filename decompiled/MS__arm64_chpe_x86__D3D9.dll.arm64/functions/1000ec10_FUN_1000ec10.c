/*
 * FUN_1000ec10 at 1000ec10
 * undefined FUN_1000ec10(void)
 * Address ranges: 1000ec10-1000ed13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ec10(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if ((param_3 != 0) && (uVar3 = FUN_1000bf70(param_1,param_2), (uVar3 & 1) != 0)) {
    if (param_2 < 0x18) {
      iVar4 = *(int *)(&DAT_101608c0 + param_2 * 4);
    }
    else {
      iVar4 = param_2 - 0xf6;
    }
    if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar2 == 0) {
        FUN_100071d0(0);
      }
    }
    FUN_10028b80(param_1,iVar4,param_3);
    uVar5 = 0;
    if (bVar1) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar5;
}

