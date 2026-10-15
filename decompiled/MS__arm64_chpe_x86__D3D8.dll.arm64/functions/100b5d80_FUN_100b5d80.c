/*
 * FUN_100b5d80 at 100b5d80
 * undefined FUN_100b5d80(void)
 * Address ranges: 100b5d80-100b5ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b5d80(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_5c [4];
  int local_58 [6];
  
  uVar6 = 0x8876086c;
  if (((*(int *)(param_1 + -0x5898) != 3) && (param_2 - 1U < 6)) &&
     (param_4 < *(uint *)(*(int *)(param_1 + 0x14) + 0xb4))) {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar4 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar4 = true;
      iVar5 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar5 == 0) {
        FUN_10006560(0);
      }
    }
    FUN_10121020(auStack_5c);
    iVar5 = param_1 + -0x58e0;
    FUN_100b5500(iVar5,local_58);
    if ((((*(uint *)(local_58[0] + 0x10) & (*(uint *)(param_1 + -100) ^ 0xffffffff)) == 0) &&
        (uVar6 = 0, *(char *)(param_1 + -0x23) == '\0')) && (*(int *)(param_1 + -0x58c8) != 0)) {
      uVar7 = FUN_1000f700(iVar5,local_58[0]);
      if (((uVar7 & 1) == 0) ||
         ((*(int *)(param_1 + -0x5434) == 0 && (*(char *)(param_1 + -0x21) != '\0')))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((*(int *)(param_1 + -0x5638) == 0) && (*(int *)(local_58[0] + 4) == 0)) &&
         (*(char *)(param_1 + -0x21) != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar8 = 3;
      if (!bVar2 || !bVar3) {
        uVar8 = 1;
      }
      uVar1 = *(uint *)(param_1 + -0x56d4);
      uVar9 = 4;
      if (*(int *)(param_1 + -0x5434) == 0) {
        uVar9 = 0;
      }
      uVar8 = uVar9 | uVar1 & 0xfffffff9 | uVar8;
      *(uint *)(param_1 + -0x56d4) = uVar8;
      *(byte *)(param_1 + -0x4ede) = uVar8 != uVar1 | *(byte *)(param_1 + -0x4ede);
      FUN_100b5bc0(iVar5,*(int *)(param_1 + 100) == 0);
      uVar6 = FUN_10010710(iVar5,local_58,param_2,param_3,param_4);
    }
    FUN_10120f70(auStack_5c);
    if (bVar4) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar6;
}

