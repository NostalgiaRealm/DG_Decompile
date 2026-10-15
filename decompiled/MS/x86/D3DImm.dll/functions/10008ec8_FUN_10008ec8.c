/*
 * FUN_10008ec8 at 10008ec8
 * float * __stdcall FUN_10008ec8(float * param_1, int * param_2)
 * Address ranges: 10008ec8-1000901d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_10008ec8(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 auVar6 [10];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  iVar5 = 0x40;
  if (*param_2 == 4) {
    iVar5 = 0x34;
  }
  fVar8 = *(float *)(iVar5 + 8 + (int)param_2);
  fVar11 = (float)*(undefined8 *)(iVar5 + (int)param_2);
  fVar12 = (float)((ulonglong)*(undefined8 *)(iVar5 + (int)param_2) >> 0x20);
  fVar1 = (float)param_2[0x16];
  auVar9._0_4_ = fVar11 * fVar11;
  auVar9._4_4_ = fVar12 * fVar12;
  auVar9._8_4_ = fVar8 * fVar8;
  auVar10._0_4_ = auVar9._0_4_ + auVar9._8_4_ + auVar9._4_4_;
  auVar10._4_8_ = auVar9._4_8_;
  auVar10._12_4_ = 0;
  fVar2 = (float)param_2[0x15];
  auVar10 = rsqrtss(auVar10,auVar10);
  fVar7 = auVar10._0_4_;
  fVar3 = (float)param_2[1];
  fVar4 = (float)param_2[2];
  param_1[4] = (float)param_2[0x17];
  param_1[5] = fVar1;
  param_1[6] = fVar2;
  param_1[7] = 0.0;
  fVar1 = (float)param_2[3];
  fVar2 = (float)param_2[9];
  *param_1 = fVar7 * fVar11;
  param_1[1] = fVar7 * fVar12;
  param_1[2] = fVar7 * fVar8;
  param_1[3] = fVar7 * 0.0;
  fVar8 = (float)param_2[4];
  fVar7 = (float)param_2[0xc];
  fVar11 = (float)param_2[10];
  param_1[8] = fVar1;
  param_1[9] = fVar4;
  param_1[10] = fVar3;
  param_1[0xb] = fVar8;
  fVar8 = (float)param_2[5];
  fVar1 = (float)param_2[8];
  fVar3 = (float)param_2[6];
  param_1[0xc] = (float)param_2[0xb];
  param_1[0xd] = fVar11;
  param_1[0xe] = fVar2;
  param_1[0xf] = fVar7;
  fVar2 = (float)param_2[0x19];
  param_1[0x10] = (float)param_2[7];
  param_1[0x11] = fVar3;
  param_1[0x12] = fVar8;
  param_1[0x13] = fVar1;
  auVar6 = FUN_1005c722(fVar2 * 0.5);
  fVar8 = (float)(float10)auVar6;
  param_1[0x18] = fVar8;
  param_1[0x19] = fVar8;
  param_1[0x1a] = fVar8;
  param_1[0x1b] = fVar8;
  auVar6 = FUN_1005c722((float)param_2[0x18] * 0.5);
  fVar1 = (float)(float10)auVar6;
  fVar8 = fVar1 - fVar8;
  param_1[0x1c] = fVar1;
  param_1[0x1d] = fVar1;
  param_1[0x1e] = fVar1;
  param_1[0x1f] = fVar1;
  if (fVar8 <= 0.0) {
    fVar8 = 1.0;
  }
  param_1[0x14] = fVar8;
  param_1[0x15] = fVar8;
  param_1[0x16] = fVar8;
  param_1[0x17] = fVar8;
  return param_1;
}

