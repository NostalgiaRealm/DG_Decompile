/*
 * FUN_1001a8f4 at 1001a8f4
 * float * __stdcall FUN_1001a8f4(float * param_1, int param_2)
 * Address ranges: 1001a8f4-1001aa3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_1001a8f4(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [10];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  fVar7 = *(float *)(param_2 + 0x48);
  fVar10 = (float)*(undefined8 *)(param_2 + 0x40);
  fVar11 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  fVar1 = *(float *)(param_2 + 0x58);
  auVar8._0_4_ = fVar10 * fVar10;
  auVar8._4_4_ = fVar11 * fVar11;
  auVar8._8_4_ = fVar7 * fVar7;
  auVar9._0_4_ = auVar8._0_4_ + auVar8._8_4_ + auVar8._4_4_;
  auVar9._4_8_ = auVar8._4_8_;
  auVar9._12_4_ = 0;
  fVar2 = *(float *)(param_2 + 0x54);
  auVar9 = rsqrtss(auVar9,auVar9);
  fVar6 = auVar9._0_4_;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  param_1[4] = *(float *)(param_2 + 0x5c);
  param_1[5] = fVar1;
  param_1[6] = fVar2;
  param_1[7] = 0.0;
  fVar1 = *(float *)(param_2 + 0xc);
  fVar2 = *(float *)(param_2 + 0x24);
  *param_1 = fVar6 * fVar10;
  param_1[1] = fVar6 * fVar11;
  param_1[2] = fVar6 * fVar7;
  param_1[3] = fVar6 * 0.0;
  fVar7 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar10 = *(float *)(param_2 + 0x28);
  param_1[8] = fVar1;
  param_1[9] = fVar4;
  param_1[10] = fVar3;
  param_1[0xb] = fVar7;
  fVar7 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x20);
  fVar3 = *(float *)(param_2 + 0x18);
  param_1[0xc] = *(float *)(param_2 + 0x2c);
  param_1[0xd] = fVar10;
  param_1[0xe] = fVar2;
  param_1[0xf] = fVar6;
  fVar2 = *(float *)(param_2 + 100);
  param_1[0x10] = *(float *)(param_2 + 0x1c);
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar7;
  param_1[0x13] = fVar1;
  auVar5 = FUN_100cfd22(fVar2 * 0.5);
  fVar7 = (float)(float10)auVar5;
  param_1[0x18] = fVar7;
  param_1[0x19] = fVar7;
  param_1[0x1a] = fVar7;
  param_1[0x1b] = fVar7;
  auVar5 = FUN_100cfd22(*(float *)(param_2 + 0x60) * 0.5);
  fVar1 = (float)(float10)auVar5;
  fVar7 = fVar1 - fVar7;
  param_1[0x1c] = fVar1;
  param_1[0x1d] = fVar1;
  param_1[0x1e] = fVar1;
  param_1[0x1f] = fVar1;
  if (fVar7 <= 0.0) {
    fVar7 = 1.0;
  }
  param_1[0x14] = fVar7;
  param_1[0x15] = fVar7;
  param_1[0x16] = fVar7;
  param_1[0x17] = fVar7;
  return param_1;
}

