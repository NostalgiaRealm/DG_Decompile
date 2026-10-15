/*
 * FUN_18002cb50 at 18002cb50
 * undefined FUN_18002cb50(void)
 * Address ranges: 18002cb50-18002cd37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002cb50(longlong *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  plVar4 = (longlong *)param_1[0x1f36];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x1f3a];
  }
  auVar9 = NEON_ucvtf(*param_2,4);
  fVar11 = auVar9._12_4_;
  fVar10 = auVar9._8_4_;
  fVar7 = auVar9._4_4_;
  fVar8 = auVar9._0_4_;
  if ((((*(float *)(param_1 + 0x1d6) != fVar8) || (*(float *)((longlong)param_1 + 0xeb4) != fVar7))
      || (*(float *)(param_1 + 0x1d7) != fVar10)) ||
     (((*(float *)((longlong)param_1 + 0xebc) != fVar11 ||
       (*(float *)(param_1 + 0x1d8) != *(float *)param_2[1])) ||
      ((*(float *)((longlong)param_1 + 0xec4) != *(float *)(param_2[1] + 4) ||
       (*(char *)((longlong)param_1 + 0x7665) != '\0')))))) {
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
    if (plVar4 == (longlong *)0x0) {
      fVar13 = 1.0;
      fVar5 = 1.0;
    }
    else {
      uVar3 = *(uint *)((longlong)plVar4 + 0x24);
      uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,0);
      uVar1 = *(uint *)(plVar4 + 5);
      fVar5 = (float)uVar2 / (float)uVar3;
      uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,0);
      fVar13 = (float)uVar3 / (float)uVar1;
    }
    fVar12 = fVar5 * fVar10;
    *(float *)(param_1 + 0x1d7) = fVar10;
    *(float *)((longlong)param_1 + 0xebc) = fVar11;
    *(float *)(param_1 + 0x1d6) = fVar8;
    *(float *)((longlong)param_1 + 0xeb4) = fVar7;
    *(float *)(param_1 + 0x1dc) = fVar5 * fVar8;
    *(float *)((longlong)param_1 + 0xee4) = fVar13 * fVar7;
    fVar8 = fVar13 * fVar11;
    *(float *)(param_1 + 0x1dd) = fVar12;
    *(float *)((longlong)param_1 + 0xeec) = fVar8;
    uVar6 = *(undefined4 *)param_2[1];
    *(undefined4 *)(param_1 + 0x1de) = uVar6;
    *(undefined4 *)(param_1 + 0x1d8) = uVar6;
    uVar6 = *(undefined4 *)(param_2[1] + 4);
    *(undefined4 *)((longlong)param_1 + 0xef4) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xec4) = uVar6;
    fVar7 = 0.5;
    *(undefined1 *)((longlong)param_1 + 0xf68e) = 1;
    if (*(char *)((longlong)param_1 + 0x12) == '\0') {
      fVar13 = 0.5;
    }
    else {
      fVar13 = fVar13 * 0.5;
      fVar7 = fVar5 * 0.5;
      fVar8 = fVar11;
      fVar12 = fVar10;
    }
    *(float *)(param_1 + 0x1e2) = fVar7;
    *(float *)((longlong)param_1 + 0xf14) = fVar13;
    *(float *)(param_1 + 0xd2c) = fVar12;
    *(float *)((longlong)param_1 + 0x6964) = fVar8;
    *(float *)(param_1 + 0xd27) = fVar10;
    *(float *)((longlong)param_1 + 0x693c) = fVar11;
    *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    *(float *)(param_1 + 0xa36) = fVar12;
    *(float *)((longlong)param_1 + 0x51b4) = -fVar8;
    *(undefined1 *)((longlong)param_1 + 0xf6b4) = 1;
    FUN_180054430(param_1);
    *(undefined1 *)((longlong)param_1 + 0x7665) = 0;
  }
  return;
}

