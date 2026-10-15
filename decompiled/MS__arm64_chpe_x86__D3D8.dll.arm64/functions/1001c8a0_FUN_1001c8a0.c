/*
 * FUN_1001c8a0 at 1001c8a0
 * undefined FUN_1001c8a0(void)
 * Address ranges: 1001c8a0-1001cb83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001c8a0(int param_1,uint param_2,int param_3,int *param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  code *extraout_w11;
  int iVar8;
  undefined1 auVar9 [16];
  
  iVar8 = -0x7789f794;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + 0x10);
  }
  piVar1 = (int *)(param_1 + 0x2c);
  puVar3 = (uint *)&DAT_00000b0c;
  if (*piVar1 != 0) {
    puVar3 = (uint *)(*piVar1 + -0x4dd4);
  }
  if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
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
  if ((*(int *)(param_1 + 0x44) == 0) ||
     (((*(uint *)(param_1 + 0x34) >> 9 & 1) == 0 && (*(char *)(param_1 + 99) == '\0')))) {
    iVar5 = FUN_10032020(param_1);
    if (iVar5 != 0) goto LAB_1001cb3c;
    *param_4 = *(int *)(param_1 + 4) + param_2;
    if ((*(int *)(param_1 + 0x40) == 0) && ((param_5 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar7 = *(uint *)(param_1 + 0x10);
LAB_1001cb08:
      *(uint *)(param_1 + 0x18) = uVar7;
    }
    else {
      uVar2 = param_2 + param_3;
      if (param_2 < *(uint *)(param_1 + 0x14)) {
        *(uint *)(param_1 + 0x14) = param_2;
      }
      if (*(uint *)(param_1 + 0x18) < uVar2) {
        *(uint *)(param_1 + 0x18) = uVar2;
        uVar7 = *(uint *)(param_1 + 0x10);
        if (uVar7 < uVar2) goto LAB_1001cb08;
      }
    }
    iVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar5 = 0;
      if (*piVar1 != 0) {
        iVar5 = *piVar1 + -0x58e0;
      }
      FUN_1000ca30(iVar5,param_1);
      if ((((param_5 >> 0xd & 1) == 0) || (*(char *)(param_1 + 0x61) == '\0')) ||
         (*(char *)(param_1 + 0x62) != '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      auVar9 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(int *)(param_1 + 0x44),uVar6,(param_5 & 0x3000) != 0);
      iVar5 = (*extraout_w11)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_ & 0xffffffff);
      if (iVar5 == 0) {
        if (*(uint *)(param_1 + 0x5c) != 0xffffffff) {
          puVar3 = (uint *)&DAT_00005890;
          if (*piVar1 != 0) {
            puVar3 = (uint *)(*piVar1 + -0x50);
          }
          *puVar3 = 1 << (ulonglong)(*(uint *)(param_1 + 0x5c) & 0x1f) | *puVar3;
        }
        *(byte *)(param_1 + 0x62) = (byte)(param_5 >> 0xd) & 1;
        goto LAB_1001ca64;
      }
    }
    else {
LAB_1001ca64:
      iVar8 = 0;
    }
    *param_4 = param_2 + *(int *)(param_1 + 0xc);
    if (iVar8 < 0) goto LAB_1001cb3c;
  }
  iVar5 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar5 + 1;
  if (iVar5 == 0) {
    FUN_100ff690(*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(param_1 + 0x10));
  }
LAB_1001cb3c:
  if (bVar4) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar8;
}

