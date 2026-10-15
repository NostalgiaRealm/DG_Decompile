/*
 * FUN_1000da30 at 1000da30
 * undefined FUN_1000da30(void)
 * Address ranges: 1000da30-1000db33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000da30(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if ((param_3 != 0) && (uVar3 = FUN_1000af10(param_1,param_2), (uVar3 & 1) != 0)) {
    if (param_2 < 0x18) {
      iVar4 = *(int *)(&DAT_1012b000 + param_2 * 4);
    }
    else {
      iVar4 = param_2 - 0xf6;
    }
    if (((*(uint *)(param_1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar2 == 0) {
        FUN_10006560(0);
      }
    }
    FUN_10022da0(param_1,iVar4,param_3);
    uVar5 = 0;
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar5;
}

