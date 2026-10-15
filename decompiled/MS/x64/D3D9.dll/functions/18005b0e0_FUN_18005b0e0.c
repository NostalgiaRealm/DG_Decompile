/*
 * FUN_18005b0e0 at 18005b0e0
 * undefined __fastcall FUN_18005b0e0(longlong * param_1, longlong param_2, longlong param_3, uint * param_4, longlong * param_5)
 * Address ranges: 18005b0e0-18005b38c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b0e0(longlong *param_1,longlong param_2,longlong param_3,uint *param_4,
                  longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(param_1 + 0x1d6);
  fVar9 = (float)*param_4;
  fVar8 = (float)param_4[1];
  fVar6 = (float)param_4[2];
  fVar7 = (float)param_4[3];
  if ((((fVar4 != fVar9) || (fVar4 = *(float *)((longlong)param_1 + 0xeb4), fVar4 != fVar8)) ||
      (fVar4 = *(float *)(param_1 + 0x1d7), fVar4 != fVar6)) ||
     (((fVar4 = *(float *)((longlong)param_1 + 0xebc), fVar4 != fVar7 ||
       (fVar4 = *(float *)(param_1 + 0x1d8), fVar4 != (float)param_4[4])) ||
      ((fVar4 = *(float *)((longlong)param_1 + 0xec4), fVar4 != (float)param_4[5] ||
       (*(char *)((longlong)param_1 + 0x7665) != '\0')))))) {
    (**(code **)(*param_1 + 0x1d8))(fVar4,0);
    if (param_5 == (longlong *)0x0) {
      fVar5 = 1.0;
      fVar4 = 1.0;
    }
    else {
      uVar3 = *(uint *)((longlong)param_5 + 0x24);
      uVar2 = (**(code **)(*param_5 + 0x40))(param_5,0);
      uVar1 = *(uint *)(param_5 + 5);
      fVar5 = (float)uVar2 / (float)uVar3;
      uVar3 = (**(code **)(*param_5 + 0x48))(param_5,0);
      fVar4 = (float)uVar3 / (float)uVar1;
    }
    *(float *)(param_2 + 0xe00) = fVar9;
    *(float *)(param_2 + 0xe04) = fVar8;
    *(float *)(param_2 + 0xe08) = fVar6;
    *(float *)(param_2 + 0xe0c) = fVar7;
    *(float *)(param_2 + 0xe30) = fVar5 * fVar9;
    fVar9 = fVar5 * fVar6;
    *(float *)(param_2 + 0xe34) = fVar4 * fVar8;
    fVar8 = fVar4 * fVar7;
    *(float *)(param_2 + 0xe38) = fVar9;
    *(float *)(param_2 + 0xe3c) = fVar8;
    uVar3 = param_4[4];
    *(uint *)(param_2 + 0xe40) = uVar3;
    *(uint *)(param_2 + 0xe10) = uVar3;
    uVar3 = param_4[5];
    *(uint *)(param_2 + 0xe44) = uVar3;
    *(uint *)(param_2 + 0xe14) = uVar3;
    *(undefined1 *)(param_3 + 0xe) = 1;
    if (*(char *)((longlong)param_1 + 0x12) == '\0') {
      fVar4 = 0.5;
      fVar5 = 0.5;
    }
    else {
      fVar4 = fVar4 * 0.5;
      fVar5 = fVar5 * 0.5;
      fVar8 = fVar7;
      fVar9 = fVar6;
    }
    *(float *)(param_2 + 0xe60) = fVar5;
    *(float *)(param_2 + 0xe64) = fVar4;
    *(float *)(param_2 + 0x68b4) = fVar8;
    *(float *)(param_2 + 0x68b0) = fVar9;
    *(float *)(param_2 + 0x6888) = fVar6;
    *(float *)(param_2 + 0x688c) = fVar7;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x5104) = -fVar8;
    *(float *)(param_2 + 0x5100) = fVar9;
    *(undefined1 *)(param_3 + 0x34) = 1;
    FUN_18005a5c0((longlong)param_1);
    *(undefined1 *)((longlong)param_1 + 0x7665) = 0;
  }
  return;
}

