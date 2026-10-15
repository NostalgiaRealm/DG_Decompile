/*
 * FUN_180046fb8 at 180046fb8
 * undefined FUN_180046fb8(void)
 * Address ranges: 180046fb8-1800471af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046fb8(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float fStack_7c;
  
  plVar5 = (longlong *)*param_1;
  uVar12 = param_1[2];
  plVar6 = (longlong *)plVar5[0x1f98];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar5[0x1f9c];
  }
  local_80 = (float)param_1[3];
  fStack_7c = (float)((ulonglong)param_1[3] >> 0x20);
  uVar11 = (uint)((ulonglong)param_1[1] >> 0x20);
  fVar8 = (float)(param_1[1] & 0xffffffff);
  uVar13 = (uint)(uVar12 >> 0x20);
  if ((((*(float *)(plVar5 + 0x1d6) != fVar8) ||
       (*(float *)((longlong)plVar5 + 0xeb4) != (float)uVar11)) ||
      (*(float *)(plVar5 + 0x1d7) != (float)(uVar12 & 0xffffffff))) ||
     (((*(float *)((longlong)plVar5 + 0xebc) != (float)uVar13 ||
       (*(float *)(plVar5 + 0x1d8) != local_80)) ||
      ((*(float *)((longlong)plVar5 + 0xec4) != fStack_7c ||
       (*(char *)((longlong)plVar5 + 0x7665) != '\0')))))) {
    (**(code **)(*plVar5 + 0x1d8))(plVar5,0);
    if (plVar6 == (longlong *)0x0) {
      fVar17 = 1.0;
      fVar7 = 1.0;
    }
    else {
      uVar4 = *(uint *)((longlong)plVar6 + 0x24);
      uVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,0);
      uVar1 = *(uint *)(plVar6 + 5);
      fVar7 = (float)uVar3 / (float)uVar4;
      uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6,0);
      fVar17 = (float)uVar4 / (float)uVar1;
    }
    fVar9 = (float)uVar11;
    fVar16 = (float)(uVar12 & 0xffffffff);
    *(float *)(plVar5 + 0x1de) = local_80;
    *(float *)((longlong)plVar5 + 0xef4) = fStack_7c;
    fVar15 = (float)uVar13;
    *(float *)(plVar5 + 0x1d8) = local_80;
    *(float *)((longlong)plVar5 + 0xec4) = fStack_7c;
    *(float *)(plVar5 + 0x1d6) = fVar8;
    *(float *)((longlong)plVar5 + 0xeb4) = fVar9;
    *(float *)(plVar5 + 0x1d7) = fVar16;
    *(float *)((longlong)plVar5 + 0xebc) = fVar15;
    *(float *)(plVar5 + 0x1dc) = fVar8 * fVar7;
    *(float *)((longlong)plVar5 + 0xee4) = fVar9 * fVar17;
    fVar8 = fVar16 * fVar7;
    *(float *)(plVar5 + 0x1dd) = fVar8;
    *(float *)((longlong)plVar5 + 0xeec) = fVar15 * fVar17;
    *(undefined1 *)((longlong)plVar5 + 0xf68e) = 1;
    bVar2 = *(char *)((longlong)plVar5 + 0x12) == '\0';
    fVar9 = fVar15;
    if (bVar2) {
      fVar9 = fVar15 * fVar17;
    }
    fVar14 = 0.5;
    fVar10 = fVar14;
    if (!bVar2) {
      fVar14 = fVar17 * 0.5;
      fVar10 = fVar7 * 0.5;
      fVar8 = fVar16;
    }
    *(float *)(plVar5 + 0x1e2) = fVar10;
    *(float *)((longlong)plVar5 + 0xf14) = fVar14;
    *(float *)(plVar5 + 0xd2c) = fVar8;
    *(float *)((longlong)plVar5 + 0x6964) = fVar9;
    *(float *)(plVar5 + 0xd27) = fVar16;
    *(float *)((longlong)plVar5 + 0x693c) = fVar15;
    *(undefined1 *)((longlong)plVar5 + 0xf691) = 1;
    *(float *)(plVar5 + 0xa36) = fVar8;
    *(float *)((longlong)plVar5 + 0x51b4) = -fVar9;
    *(undefined1 *)((longlong)plVar5 + 0xf6b4) = 1;
    FUN_180054430(plVar5);
    *(undefined1 *)((longlong)plVar5 + 0x7665) = 0;
  }
  return;
}

