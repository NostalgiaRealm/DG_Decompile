/*
 * FUN_100e63d0 at 100e63d0
 * undefined FUN_100e63d0(void)
 * Address ranges: 100e63d0-100e6683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e63d0(int param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  code *extraout_w11;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  iVar8 = param_1 + -0x4c;
  uVar10 = 0x8876086c;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + -0x3c);
  }
  piVar1 = (int *)(param_1 + -0x20);
  puVar2 = (uint *)&DAT_00000dd0;
  if (*piVar1 != 0) {
    puVar2 = (uint *)(*piVar1 + -0x58e4);
  }
  if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  if ((*(int *)(param_1 + -0xc) == 0) ||
     (((*(uint *)(param_1 + -0x18) >> 9 & 1) == 0 && (*(char *)(param_1 + -1) == '\0')))) {
    iVar8 = FUN_1003bef0(iVar8);
    if (iVar8 != 0) goto LAB_100e663c;
    uVar3 = param_3 + param_2;
    *param_4 = *(int *)(param_1 + -0x48) + param_2;
    if (param_2 < *(uint *)(param_1 + -0x38)) {
      *(uint *)(param_1 + -0x38) = param_2;
    }
    puVar2 = (uint *)(param_1 + -0x34);
    if (*puVar2 < uVar3) {
      *puVar2 = uVar3;
      if (*(uint *)(param_1 + -0x3c) < uVar3) {
        *puVar2 = *(uint *)(param_1 + -0x3c);
      }
    }
  }
  else {
    iVar7 = *piVar1;
    pcVar4 = &DAT_00000010;
    if (iVar7 != 0) {
      pcVar4 = (char *)(iVar7 + -0x66a4);
    }
    if (*pcVar4 != '\0') {
      if (*(int *)(param_1 + -0x40) == 0) {
        iVar5 = 0;
        if (iVar7 != 0) {
          iVar5 = iVar7 + -0x66b4;
        }
        FUN_1000dd90(iVar5,iVar8);
        if ((((param_5 >> 0xd & 1) == 0) || (*(char *)(param_1 + -3) == '\0')) ||
           (*(char *)(param_1 + -2) != '\0')) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        auVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                            (*(int *)(param_1 + -0xc),uVar9,(param_5 & 0x3000) != 0);
        iVar8 = (*extraout_w11)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_ & 0xffffffff);
        if (iVar8 == 0) {
          if (*(char *)(param_1 + -4) != '\0') {
            puVar2 = (uint *)&DAT_0000666c;
            if (*piVar1 != 0) {
              puVar2 = (uint *)(*piVar1 + -0x48);
            }
            *puVar2 = *puVar2 | 1;
          }
          *(byte *)(param_1 + -2) = (byte)(param_5 >> 0xd) & 1;
          goto LAB_100e65a4;
        }
      }
      else {
LAB_100e65a4:
        uVar10 = 0;
      }
      *param_4 = *(int *)(param_1 + -0x40) + param_2;
      goto LAB_100e663c;
    }
    iVar8 = FUN_1003bef0(iVar8);
    if (iVar8 != 0) goto LAB_100e663c;
    *param_4 = *(int *)(param_1 + -0x48) + param_2;
  }
  uVar10 = 0;
LAB_100e663c:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar10;
}

