/*
 * FUN_18013a080 at 18013a080
 * undefined FUN_18013a080(void)
 * Address ranges: 18013a080-18013a297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013a080(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar5 = *(longlong *)(param_1 + 0xf9b0);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0xf9d0);
  }
  auVar9 = NEON_ucvtf(*param_2,4);
  fVar11 = auVar9._12_4_;
  fVar10 = auVar9._8_4_;
  fVar13 = auVar9._4_4_;
  fVar8 = auVar9._0_4_;
  if ((((*(float *)(param_1 + 0xeb0) != fVar8) || (*(float *)(param_1 + 0xeb4) != fVar13)) ||
      (*(float *)(param_1 + 0xeb8) != fVar10)) ||
     (((*(float *)(param_1 + 0xebc) != fVar11 ||
       (*(float *)(param_1 + 0xec0) != *(float *)param_2[1])) ||
      ((*(float *)(param_1 + 0xec4) != *(float *)(param_2[1] + 4) ||
       (*(char *)(param_1 + 0x7665) != '\0')))))) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1,0);
    if (lVar5 == 0) {
      fVar6 = 1.0;
      fVar14 = 1.0;
    }
    else {
      uVar4 = *(uint *)(lVar5 + 0x24);
      (*(code *)puVar2)(0x180224000);
      uVar3 = (*extraout_x11_00)(lVar5,0);
      uVar1 = *(uint *)(lVar5 + 0x28);
      fVar14 = (float)uVar3 / (float)uVar4;
      (*(code *)puVar2)(0x180224000);
      uVar4 = (*extraout_x11_01)(lVar5,0);
      fVar6 = (float)uVar4 / (float)uVar1;
    }
    fVar7 = fVar14 * fVar10;
    *(float *)(param_1 + 0xeb8) = fVar10;
    *(float *)(param_1 + 0xebc) = fVar11;
    *(float *)(param_1 + 0xeb0) = fVar8;
    *(float *)(param_1 + 0xeb4) = fVar13;
    *(float *)(param_1 + 0xee0) = fVar14 * fVar8;
    *(float *)(param_1 + 0xee4) = fVar6 * fVar13;
    fVar8 = fVar6 * fVar11;
    *(float *)(param_1 + 0xee8) = fVar7;
    *(float *)(param_1 + 0xeec) = fVar8;
    uVar12 = *(undefined4 *)param_2[1];
    *(undefined4 *)(param_1 + 0xef0) = uVar12;
    *(undefined4 *)(param_1 + 0xec0) = uVar12;
    uVar12 = *(undefined4 *)(param_2[1] + 4);
    *(undefined4 *)(param_1 + 0xef4) = uVar12;
    *(undefined4 *)(param_1 + 0xec4) = uVar12;
    fVar13 = 0.5;
    *(undefined1 *)(param_1 + 0xf68e) = 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      fVar6 = 0.5;
    }
    else {
      fVar6 = fVar6 * 0.5;
      fVar13 = fVar14 * 0.5;
      fVar8 = fVar11;
      fVar7 = fVar10;
    }
    *(float *)(param_1 + 0xf10) = fVar13;
    *(float *)(param_1 + 0xf14) = fVar6;
    *(float *)(param_1 + 0x6960) = fVar7;
    *(float *)(param_1 + 0x6964) = fVar8;
    *(float *)(param_1 + 0x6938) = fVar10;
    *(float *)(param_1 + 0x693c) = fVar11;
    *(undefined1 *)(param_1 + 0xf691) = 1;
    *(float *)(param_1 + 0x51b0) = fVar7;
    *(float *)(param_1 + 0x51b4) = -fVar8;
    *(undefined1 *)(param_1 + 0xf6b4) = 1;
    FUN_180164290(param_1);
    *(undefined1 *)(param_1 + 0x7665) = 0;
  }
  return;
}

