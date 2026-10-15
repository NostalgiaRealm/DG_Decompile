/*
 * FUN_100d5ef0 at 100d5ef0
 * undefined FUN_100d5ef0(void)
 * Address ranges: 100d5ef0-100d6157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d5ef0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  int *extraout_w10;
  ulonglong uVar9;
  ulonglong extraout_x11;
  undefined1 auVar10 [12];
  undefined8 local_40;
  int local_38;
  int iStack_34;
  
  iVar6 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_3 == 0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    iVar5 = param_1;
  }
  else {
    bVar4 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      iVar5 = FUN_100071d0(0);
    }
  }
  piVar7 = (int *)(param_2 + -0x34);
  uVar9 = (ulonglong)(param_2 - 0x5c);
  uVar8 = (ulonglong)(param_3 - 0x5c);
  iVar3 = iVar6;
  if ((((*(uint *)(param_2 + -0x2c) & 3) != 0) &&
      (*(int *)(param_2 + -0x1c) == *(int *)(param_3 + -0x1c))) &&
     (*(int *)(param_2 + -0x18) == *(int *)(param_3 + -0x18))) {
    auVar10 = FUN_100d2960(iVar5,piVar7);
    piVar7 = auVar10._8_4_;
    iVar5 = 0;
    if ((auVar10._0_8_ & 0xff) != 0) {
      iVar5 = iVar6;
    }
    uVar9 = extraout_x11;
    if ((auVar10._0_8_ & 0xff) == 0) {
      if (*piVar7 != *extraout_w10) {
        iVar5 = iVar6;
      }
      if ((-1 < iVar5) &&
         (((piVar7[3] != 0 || (extraout_w10[3] != 2)) ||
          (((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 0xb & 1) != 0 ||
           ((*(uint *)(*(int *)(param_3 + -0x58) + 0xb8) >> 0xb & 1) != 0)))))) goto LAB_100d6050;
    }
    iVar3 = iVar5;
  }
LAB_100d6050:
  bVar1 = false;
  bVar2 = false;
  if (*(int *)(param_2 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x2c) + 0x88);
    bVar1 = (*(uint *)(iVar5 + 0x30) >> 10 & 1) != 0 && iVar5 != (int)uVar9;
  }
  if (*(int *)(param_3 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(param_3 + 0x2c) + 0x88);
    bVar2 = (*(uint *)(iVar5 + 0x30) >> 10 & 1) != 0 && iVar5 != (int)uVar8;
  }
  if (((!bVar1) && (!bVar2)) && (iVar6 = iVar3, -1 < iVar3)) {
    if (*(char *)(param_1 + -0x17) == '\0') {
      local_40 = 0;
      local_38 = piVar7[6];
      iStack_34 = piVar7[7];
      iVar6 = FUN_100d4120(param_1 + -0x66b4,uVar9 & 0xffffffff,uVar8 & 0xffffffff,&local_40,
                           &local_40,0);
    }
    else {
      iVar6 = -0x7789f798;
    }
  }
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar6;
}

