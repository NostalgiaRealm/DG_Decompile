/*
 * FUN_1006b840 at 1006b840
 * undefined FUN_1006b840(void)
 * Address ranges: 1006b840-1006ba87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b840(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  byte *pbVar1;
  float *pfVar2;
  code *pcVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_w1;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  byte bVar10;
  longlong extraout_x15;
  undefined4 unaff_w29;
  float fVar11;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x40) = unaff_w29;
  iVar6 = FUN_100013c0();
  uVar5 = (ZEXT48(&stack0x00000000) - 0x40) + extraout_x15 * -0x10;
  piVar4 = (int *)uVar5;
  (*(code *)PTR_FUN_1009d03c)(iVar6 + 0x4a0);
  pbVar1 = (byte *)(extraout_w1 + 0xd59);
  *pbVar1 = 1;
  uVar9 = 0;
  do {
    pfVar2 = (float *)(param_3 + uVar9 * 0xc);
    fVar11 = (float)uVar9 / 255.0;
    *(float *)(extraout_w1 + 0x38 + uVar9 * 0xc) = *pfVar2;
    *(undefined4 *)(extraout_w1 + (uVar9 + 5) * 0xc) = *(undefined4 *)(param_3 + 4 + uVar9 * 0xc);
    *(undefined4 *)(extraout_w1 + 0x40 + uVar9 * 0xc) = *(undefined4 *)(param_3 + 8 + uVar9 * 0xc);
    if (((0.003921569 <= ABS(*pfVar2 - fVar11)) || (0.003921569 <= ABS(pfVar2[1] - fVar11))) ||
       (bVar10 = 1, 0.003921569 <= ABS(pfVar2[2] - fVar11))) {
      bVar10 = 0;
    }
    uVar9 = uVar9 + 1;
    *pbVar1 = *pbVar1 & bVar10;
  } while (uVar9 < 0x100);
  *piVar4 = 0;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar7,uVar5 & 0xffffffff);
  if (*piVar4 != 0) {
    if (*(char *)(extraout_w1 + 0xd58) == '\0') {
      uVar7 = (*pcVar3)();
      iVar8 = (*extraout_w11_00)(uVar7,piVar4 + 2);
      if (iVar8 == 0) {
        (*pcVar3)();
        (*extraout_w11_01)(piVar4[4],piVar4[3],param_4 & 0xffffffff,piVar4[5],piVar4 + 6,
                           piVar4 + 0x40e,param_3);
        uVar7 = (*pcVar3)();
        (*extraout_w11_02)(uVar7,piVar4 + 0x408);
      }
    }
    uVar7 = (*pcVar3)();
    (*extraout_w11_03)(uVar7);
  }
  (*(code *)PTR_FUN_1009d090)(iVar6 + 0x4a0);
  return;
}

