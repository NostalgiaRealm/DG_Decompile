/*
 * FUN_1000c040 at 1000c040
 * undefined FUN_1000c040(void)
 * Address ranges: 1000c040-1000c43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c040(int param_1,ulonglong param_2,int param_3,int param_4)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 auStack_48 [8];
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 == 0) {
    bVar14 = 0;
    if (param_4 == 0) {
      param_4 = 0;
      uVar6 = 0;
      iVar12 = 0;
      goto LAB_1000c13c;
    }
    uVar6 = *(undefined4 *)(param_4 + 0x94);
    iVar12 = *(int *)(param_4 + 0xa8);
    iVar8 = *(int *)(param_4 + 0xb0);
    iVar11 = 0;
    bVar14 = 0;
    if (*(int *)(param_4 + 0x14) != 0) {
      iVar11 = *(int *)(param_4 + 0x14) + -0x66b4;
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_3 + 0x44);
    iVar12 = *(int *)(param_3 + 0x58);
    iVar8 = *(int *)(param_3 + 0x60);
    iVar11 = 0;
    if (*(int *)(param_3 + 0x14) != 0) {
      iVar11 = *(int *)(param_3 + 0x14) + -0x66b4;
    }
    param_4 = param_3;
    bVar14 = (byte)*(undefined4 *)(param_3 + 0x54) & 1;
  }
  if (((iVar8 == 3) || (((iVar8 == 2 && (*(int *)(param_1 + 0xdc8) != 3)) || (iVar11 != 0)))) &&
     (iVar11 != param_1)) {
    return;
  }
LAB_1000c13c:
  uVar15 = (uint)param_2;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    piVar3 = (int *)(param_1 + (uVar15 + 0x496) * 4);
    if (param_4 != *piVar3) {
      FUN_10157b40(auStack_48);
      pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (param_4 == 0) {
        uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_03)(uVar6,param_2 & 0xffffffff,0,0,0,0,0,0);
        uVar13 = 1 << (ulonglong)(uVar15 & 0x1f);
      }
      else {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11_01)(param_4);
        uVar13 = 1 << (ulonglong)(uVar15 & 0x1f);
        *(uint *)(param_4 + 0x2c) = uVar13 | *(uint *)(param_4 + 0x2c);
        uVar7 = (*pcVar5)();
        (*extraout_w11_02)(uVar7,param_2 & 0xffffffff,0,uVar6,0,0,0,0);
      }
      if (*piVar3 != 0) {
        puVar1 = (uint *)(*piVar3 + 0x2c);
        *puVar1 = *puVar1 & (uVar13 ^ 0xffffffff);
        uVar6 = (*pcVar5)();
        (*extraout_w11_04)(uVar6);
      }
      *piVar3 = param_4;
      pcVar2 = (char *)(uVar15 + param_1 + 0xc78);
      *(uint *)(param_1 + 0xcc8) =
           (uint)((param_4 != 0) != (bool)*pcVar2) << (ulonglong)(uVar15 & 0x1f) |
           *(uint *)(param_1 + 0xcc8);
      *pcVar2 = param_4 != 0;
      if (param_4 == 0 || 1 < iVar12 - 0x28U) {
        uVar10 = *(uint *)(param_1 + 0x667c) & (uVar13 ^ 0xffffffff);
        uVar9 = *(uint *)(param_1 + 0x6678) & (uVar13 ^ 0xffffffff);
      }
      else {
        uVar10 = uVar13 | *(uint *)(param_1 + 0x667c);
        uVar9 = uVar13 | *(uint *)(param_1 + 0x6678);
      }
      *(uint *)(param_1 + 0x6678) = uVar9;
      *(uint *)(param_1 + 0x667c) = uVar10;
      *(byte *)(param_1 + 0xcc4) = *(byte *)(param_1 + 0xcc4) | bVar14;
      *(undefined1 *)(uVar15 + param_1 + 0xc88) = 0;
      if ((*piVar3 == 0) || (*(char *)(*piVar3 + 0x32) == '\0')) {
        iVar11 = 0;
      }
      else {
        iVar11 = 1;
      }
      *(uint *)(param_1 + 0xccc) =
           *(uint *)(param_1 + 0xccc) & (uVar13 ^ 0xffffffff) | iVar11 << (ulonglong)(uVar15 & 0x1f)
      ;
      FUN_10157a90(auStack_48);
    }
  }
  else {
    if (param_4 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_4);
    }
    iVar11 = *(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4);
    piVar3 = (int *)(iVar11 + (uVar15 + 0x14b6) * 4);
    if (*piVar3 != 0) {
      uVar6 = (*pcVar5)();
      (*extraout_w11_00)(uVar6);
    }
    *piVar3 = param_4;
    pbVar4 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                     iVar11 + ((uVar15 >> 5) + 0x2b03) * 4);
    *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(uVar15 & 7));
  }
  return;
}

