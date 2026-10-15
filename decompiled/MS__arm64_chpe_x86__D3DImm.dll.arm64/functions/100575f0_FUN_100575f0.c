/*
 * FUN_100575f0 at 100575f0
 * undefined FUN_100575f0(void)
 * Address ranges: 100575f0-10057a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100575f0(int param_1,ulonglong param_2,int param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  undefined4 uVar9;
  uint uVar10;
  undefined1 auStack_48 [8];
  
  iVar7 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar7 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_48);
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = 0x80070057;
  uVar10 = (uint)param_2;
  if (7 < uVar10) goto LAB_10057a4c;
  uVar9 = 0;
  if (param_3 == 0) {
    if (*(char *)(param_1 + 0x224) == '\0') {
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_08)(uVar8,param_2 & 0xffffffff,0,0,0,0,0,0);
      iVar7 = param_1 + uVar10 * 4;
      piVar1 = (int *)(iVar7 + 0x14f4);
      if (*piVar1 != 0) {
        uVar8 = (*pcVar6)();
        (*extraout_w11_09)(uVar8);
      }
      *piVar1 = 0;
      pcVar2 = (char *)(uVar10 + param_1 + 0x8f4);
      *(undefined4 *)(iVar7 + 0x14d4) = 0;
      *(uint *)(param_1 + 0x934) =
           (uint)(*pcVar2 != '\0') << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0x934);
      *(undefined1 *)(uVar10 + param_1 + 0x8fc) = 0;
      *pcVar2 = '\0';
      goto LAB_10057a4c;
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    iVar3 = iVar7 + uVar10 * 4;
    piVar1 = (int *)(iVar3 + 0x9fc);
    if (*piVar1 != 0) {
      uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_07)(uVar8);
    }
    *piVar1 = 0;
    *(undefined4 *)(iVar3 + 0x9dc) = 0;
    iVar7 = iVar7 + ((uVar10 >> 5) + 0x294) * 4;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar7 = (*extraout_w11)(param_3);
    if ((*(uint *)(iVar7 + 0x68) >> 0xc & 1) == 0) goto LAB_10057a4c;
    if (*(char *)(param_1 + 0x224) == '\0') {
      iVar3 = param_1 + uVar10 * 4;
      piVar1 = (int *)(iVar3 + 0x14d4);
      if (param_3 != *piVar1) {
        (*pcVar6)();
        (*extraout_w11_02)(param_4);
        uVar8 = *(undefined4 *)(iVar7 + 0x40);
        uVar4 = *(undefined4 *)(*(int *)(param_3 + 4) + 0x50);
        (*pcVar6)();
        (*extraout_w11_03)(param_3);
        (*pcVar6)();
        (*extraout_w11_04)(*(undefined4 *)(param_1 + 0x14),param_2 & 0xffffffff,*extraout_w8,uVar4,
                           uVar8);
        (*pcVar6)();
        (*extraout_w11_05)(param_3);
        *(byte *)(param_1 + 0x930) = *(byte *)(param_1 + 0x930) | 1;
        *(undefined1 *)(uVar10 + param_1 + 0x8fc) = 0;
        *piVar1 = param_3;
        piVar1 = (int *)(iVar3 + 0x14f4);
        if (*piVar1 != 0) {
          uVar8 = (*pcVar6)();
          (*extraout_w11_06)(uVar8);
        }
        pcVar2 = (char *)(uVar10 + param_1 + 0x8f4);
        *piVar1 = param_4;
        *(uint *)(param_1 + 0x934) =
             (uint)(*pcVar2 == '\0') << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0x934);
        *(undefined1 *)(param_1 + 0xa89) = 1;
        *pcVar2 = '\x01';
        *(uint *)(param_1 + 0x938) = 1 << (ulonglong)(uVar10 & 0x1f) | *(uint *)(param_1 + 0x938);
      }
      goto LAB_10057a4c;
    }
    (*pcVar6)();
    (*extraout_w11_00)(param_4);
    iVar7 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    iVar3 = iVar7 + uVar10 * 4;
    piVar1 = (int *)(iVar3 + 0x9fc);
    if (*piVar1 != 0) {
      uVar8 = (*pcVar6)();
      (*extraout_w11_01)(uVar8);
    }
    *piVar1 = param_4;
    *(int *)(iVar3 + 0x9dc) = param_3;
    iVar7 = iVar7 + ((uVar10 >> 5) + 0x294) * 4;
  }
  pbVar5 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) + iVar7);
  *pbVar5 = *pbVar5 | (byte)(1 << (ulonglong)(uVar10 & 7));
LAB_10057a4c:
  FUN_10096790(auStack_48);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar9;
}

