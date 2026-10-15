/*
 * FUN_100d57b0 at 100d57b0
 * undefined FUN_100d57b0(void)
 * Address ranges: 100d57b0-100d5943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d57b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong extraout_x10;
  ulonglong extraout_x11;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    iVar4 = param_1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      iVar4 = FUN_100071d0(0);
    }
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -0x5c;
  }
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = param_4 - 0x5c;
  }
  uVar7 = (ulonglong)uVar2;
  uVar5 = 0x8876086c;
  if (((((param_2 != 0) && (param_4 != 0 && param_2 != param_4)) && (*(int *)(iVar1 + 0x34) == 2))
      && ((*(int *)(uVar2 + 0x34) == 0 && ((*(uint *)(*(int *)(iVar1 + 4) + 0xb8) >> 0xb & 1) == 0))
         )) && (((*(uint *)(*(int *)(uVar2 + 4) + 0xb8) >> 0xb & 1) == 0 &&
                ((uVar6 = FUN_100d2960(iVar4,iVar1 + 0x28), (uVar6 & 1) == 0 &&
                 (uVar6 = FUN_100d2960(uVar6,extraout_x10 & 0xffffffff), (uVar6 & 1) == 0)))))) {
    uVar5 = FUN_10009ff0(param_1 + -0x66b4,extraout_x11 & 0xffffffff,param_3,param_3 != 0,
                         uVar7 & 0xffffffff,param_5);
  }
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar5;
}

