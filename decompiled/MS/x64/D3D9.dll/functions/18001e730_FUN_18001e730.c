/*
 * FUN_18001e730 at 18001e730
 * float * __fastcall FUN_18001e730(undefined8 param_1, float * param_2, longlong param_3)
 * Address ranges: 18001e730-18001e88e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float * FUN_18001e730(undefined8 param_1,float *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  
  fVar5 = *(float *)(param_3 + 0x48);
  fVar9 = (float)*(undefined8 *)(param_3 + 0x40);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  uVar1 = *(undefined4 *)(param_3 + 0x58);
  auVar7._0_4_ = fVar9 * fVar9 + fVar5 * fVar5 + fVar10 * fVar10;
  fVar4 = *(float *)(param_3 + 0x10);
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  auVar8 = rsqrtss(auVar7,auVar7);
  fVar6 = auVar8._0_4_;
  uVar2 = *(undefined4 *)(param_3 + 0x5c);
  fVar3 = *(float *)(param_3 + 8);
  *param_2 = fVar6 * fVar9;
  param_2[1] = fVar6 * fVar10;
  param_2[2] = fVar6 * fVar5;
  param_2[3] = fVar6 * 0.0;
  fVar5 = *(float *)(param_3 + 4);
  auVar8._4_4_ = uVar1;
  auVar8._0_4_ = uVar2;
  auVar8._8_4_ = *(undefined4 *)(param_3 + 0x54);
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar8;
  fVar6 = *(float *)(param_3 + 0x28);
  fVar9 = *(float *)(param_3 + 0x30);
  fVar10 = *(float *)(param_3 + 0x24);
  param_2[8] = *(float *)(param_3 + 0xc);
  param_2[9] = fVar3;
  param_2[10] = fVar5;
  param_2[0xb] = fVar4;
  fVar5 = *(float *)(param_3 + 0x18);
  fVar4 = *(float *)(param_3 + 0x20);
  fVar3 = *(float *)(param_3 + 0x14);
  param_2[0xc] = *(float *)(param_3 + 0x2c);
  param_2[0xd] = fVar6;
  param_2[0xe] = fVar10;
  param_2[0xf] = fVar9;
  fVar6 = *(float *)(param_3 + 100);
  param_2[0x10] = *(float *)(param_3 + 0x1c);
  param_2[0x11] = fVar5;
  param_2[0x12] = fVar3;
  param_2[0x13] = fVar4;
  fVar4 = FUN_1800fbc88(fVar6 * 0.5);
  fVar5 = *(float *)(param_3 + 0x60);
  param_2[0x18] = fVar4;
  param_2[0x19] = fVar4;
  param_2[0x1a] = fVar4;
  param_2[0x1b] = fVar4;
  fVar5 = FUN_1800fbc88(fVar5 * 0.5);
  fVar4 = fVar5 - fVar4;
  param_2[0x1c] = fVar5;
  param_2[0x1d] = fVar5;
  param_2[0x1e] = fVar5;
  param_2[0x1f] = fVar5;
  if (fVar4 <= 0.0) {
    fVar4 = 1.0;
  }
  param_2[0x14] = fVar4;
  param_2[0x15] = fVar4;
  param_2[0x16] = fVar4;
  param_2[0x17] = fVar4;
  return param_2;
}

