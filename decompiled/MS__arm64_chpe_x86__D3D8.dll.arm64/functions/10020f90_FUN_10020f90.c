/*
 * FUN_10020f90 at 10020f90
 * undefined FUN_10020f90(void)
 * Address ranges: 10020f90-100211a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10020f90(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  float fVar10;
  
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x24c) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  FUN_100ff690(param_1 + 0x28c,0,0x2b8);
  if (*(int *)(param_1 + 4) != 0) {
    uVar9 = 0;
    do {
      iVar1 = uVar9 * 4;
      iVar2 = uVar9 * 8;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(param_1 + 0x28c + iVar1) = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 + 4);
    } while (uVar9 < 0xae);
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar9 = 1;
  uVar7 = extraout_x1;
  do {
    while (*(char *)(uVar9 + 0x1012d280) == '\0') {
LAB_100210b0:
      uVar9 = uVar9 + 1;
      if (0xad < uVar9) {
        return 1;
      }
    }
    pfVar3 = (float *)(param_1 + (uVar9 + 0xa3) * 4);
    if (uVar9 == 0x1a) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x933);
      if (iVar1 == 0) {
        uVar8 = 0;
      }
      else if ((iVar1 == 1) && (*(int *)(*(int *)(param_1 + 0xc) + 0x92f) != 0)) {
        uVar8 = (ulonglong)(uint)*pfVar3;
      }
      else {
        uVar8 = 1;
      }
      uVar6 = (*pcVar5)(*(undefined4 *)(param_1 + 0x14),uVar7,uVar8);
      (*extraout_w11_01)(uVar6,0x1a,uVar8 & 0xffffffff);
      uVar7 = extraout_x1_02;
    }
    else {
      if (uVar9 != 0xa4) {
        uVar6 = (*pcVar5)();
        (*extraout_w11)(uVar6,uVar9,*extraout_w8);
        uVar7 = extraout_x1_00;
        goto LAB_100210b0;
      }
      uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + 0x94f);
      if (uVar4 < 9) {
        if (uVar4 == 0) {
          fVar10 = *pfVar3;
        }
        else {
          fVar10 = (float)uVar4;
        }
      }
      else {
        fVar10 = 8.0;
      }
      uVar6 = (*pcVar5)(fVar10,*(undefined4 *)(param_1 + 0x14),uVar4 != 0);
      (*extraout_w11_00)(uVar6);
      uVar7 = extraout_x1_01;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

