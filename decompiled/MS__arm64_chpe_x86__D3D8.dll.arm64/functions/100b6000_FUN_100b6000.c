/*
 * FUN_100b6000 at 100b6000
 * undefined FUN_100b6000(void)
 * Address ranges: 100b6000-100b624f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b6000(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_60 [8];
  int local_58 [6];
  
  uVar6 = 0x8876086c;
  if (((((*(int *)(param_1 + -0x5898) != 3) && (*(int *)(param_1 + -0x588c) == 1)) &&
       (param_2 - 1U < 6 && param_4 != 0)) &&
      ((param_3 < *(uint *)(*(int *)(param_1 + 0x14) + 0xb4) &&
       (uVar6 = 0, *(char *)(param_1 + -0x23) == '\0')))) && (*(int *)(param_1 + -0x58c8) != 0)) {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar3 = true;
      iVar5 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar5 == 0) {
        FUN_10006560(0);
      }
    }
    FUN_10121020(auStack_60);
    iVar5 = param_1 + -0x58e0;
    FUN_100b5500(iVar5,local_58);
    if ((*(int *)(param_1 + -0x5434) == 0) && (*(char *)(param_1 + -0x21) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + -0x5638) == 0) && (*(int *)(local_58[0] + 4) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar8 = 3;
    if (!bVar2 || !bVar4) {
      uVar8 = 1;
    }
    uVar1 = *(uint *)(param_1 + -0x56d4);
    uVar7 = 4;
    if (*(int *)(param_1 + -0x5434) == 0) {
      uVar7 = 0;
    }
    uVar8 = uVar7 | uVar1 & 0xfffffff9 | uVar8;
    *(uint *)(param_1 + -0x56d4) = uVar8;
    *(byte *)(param_1 + -0x4ede) = uVar8 != uVar1 | *(byte *)(param_1 + -0x4ede);
    FUN_100b5bc0(iVar5,*(int *)(param_1 + 100) == 0);
    uVar6 = FUN_100100e0(iVar5,local_58,param_2,param_3,param_4,param_5);
    FUN_10120f70(auStack_60);
    if (bVar3) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar6;
}

