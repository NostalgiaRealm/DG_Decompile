/*
 * FUN_180156288 at 180156288
 * undefined FUN_180156288(void)
 * Address ranges: 180156288-1801564b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180156288(longlong *param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float local_70;
  float fStack_6c;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar7 = *param_1;
  uVar15 = param_1[2];
  lVar6 = *(longlong *)(lVar7 + 0xfcc0);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar7 + 0xfce0);
  }
  local_70 = (float)param_1[3];
  fStack_6c = (float)((ulonglong)param_1[3] >> 0x20);
  uVar14 = (uint)((ulonglong)param_1[1] >> 0x20);
  fVar18 = (float)(param_1[1] & 0xffffffff);
  uVar16 = (uint)(uVar15 >> 0x20);
  if ((((*(float *)(lVar7 + 0xeb0) != fVar18) || (*(float *)(lVar7 + 0xeb4) != (float)uVar14)) ||
      (*(float *)(lVar7 + 0xeb8) != (float)(uVar15 & 0xffffffff))) ||
     (((*(float *)(lVar7 + 0xebc) != (float)uVar16 || (*(float *)(lVar7 + 0xec0) != local_70)) ||
      ((*(float *)(lVar7 + 0xec4) != fStack_6c || (*(char *)(lVar7 + 0x7665) != '\0')))))) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar7,0);
    if (lVar6 == 0) {
      fVar8 = 1.0;
      fVar17 = 1.0;
    }
    else {
      uVar5 = *(uint *)(lVar6 + 0x24);
      (*(code *)puVar2)(0x180224000);
      uVar4 = (*extraout_x11_00)(lVar6,0);
      uVar1 = *(uint *)(lVar6 + 0x28);
      fVar17 = (float)uVar4 / (float)uVar5;
      (*(code *)puVar2)(0x180224000);
      uVar5 = (*extraout_x11_01)(lVar6,0);
      fVar8 = (float)uVar5 / (float)uVar1;
    }
    fVar10 = (float)(uVar15 & 0xffffffff);
    fVar11 = (float)uVar16;
    *(float *)(lVar7 + 0xef0) = local_70;
    *(float *)(lVar7 + 0xef4) = fStack_6c;
    *(float *)(lVar7 + 0xec0) = local_70;
    *(float *)(lVar7 + 0xec4) = fStack_6c;
    fVar12 = (float)uVar14;
    *(float *)(lVar7 + 0xeb8) = fVar10;
    *(float *)(lVar7 + 0xebc) = fVar11;
    *(float *)(lVar7 + 0xeb0) = fVar18;
    *(float *)(lVar7 + 0xeb4) = fVar12;
    *(float *)(lVar7 + 0xee0) = fVar18 * fVar17;
    *(float *)(lVar7 + 0xee4) = fVar12 * fVar8;
    fVar18 = fVar10 * fVar17;
    *(float *)(lVar7 + 0xee8) = fVar18;
    *(float *)(lVar7 + 0xeec) = fVar11 * fVar8;
    *(undefined1 *)(lVar7 + 0xf68e) = 1;
    bVar3 = *(char *)(lVar7 + 0x12) == '\0';
    fVar12 = fVar11;
    if (bVar3) {
      fVar12 = fVar11 * fVar8;
    }
    fVar9 = 0.5;
    fVar13 = fVar9;
    if (!bVar3) {
      fVar9 = fVar8 * 0.5;
      fVar13 = fVar17 * 0.5;
      fVar18 = fVar10;
    }
    *(float *)(lVar7 + 0xf10) = fVar13;
    *(float *)(lVar7 + 0xf14) = fVar9;
    *(float *)(lVar7 + 0x6960) = fVar18;
    *(float *)(lVar7 + 0x6964) = fVar12;
    *(float *)(lVar7 + 0x6938) = fVar10;
    *(float *)(lVar7 + 0x693c) = fVar11;
    *(undefined1 *)(lVar7 + 0xf691) = 1;
    *(float *)(lVar7 + 0x51b0) = fVar18;
    *(float *)(lVar7 + 0x51b4) = -fVar12;
    *(undefined1 *)(lVar7 + 0xf6b4) = 1;
    FUN_180164290(lVar7);
    *(undefined1 *)(lVar7 + 0x7665) = 0;
  }
  return;
}

