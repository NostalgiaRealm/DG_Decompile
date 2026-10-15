/*
 * FUN_18000d500 at 18000d500
 * undefined __cdecl FUN_18000d500(float param_1, undefined1[16] param_2, float param_3, undefined8 * param_4)
 * Address ranges: 18000d500-18000d5b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000d500(float param_1,undefined1 param_2 [16],float param_3,undefined8 *param_4)

{
  uint uVar1;
  int extraout_w14;
  float *extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  undefined1 auVar2 [16];
  double dVar3;
  float extraout_s22;
  float extraout_s22_00;
  float extraout_s22_01;
  double extraout_d23;
  double extraout_d23_00;
  double extraout_d24;
  double dVar4;
  double extraout_d25;
  float fVar5;
  float extraout_s26;
  
  *(undefined4 *)(param_4 + 1) = 0;
  uVar1 = 1;
  *param_4 = 0;
  fVar5 = 255.0;
  dVar4 = (double)(1.0 / param_1);
  dVar3 = (double)(1.0 / param_3);
  do {
    auVar2 = FUN_180038f80((double)((float)uVar1 / fVar5),dVar4);
    fVar5 = extraout_s22;
    if ((float)auVar2._0_8_ <= extraout_s22) {
      fVar5 = (float)auVar2._0_8_;
    }
    *extraout_x15 = fVar5;
    auVar2 = FUN_180038f80(extraout_d23,extraout_d24);
    fVar5 = extraout_s22_00;
    if ((float)auVar2._0_8_ <= extraout_s22_00) {
      fVar5 = (float)auVar2._0_8_;
    }
    *(float *)(extraout_x15_00 + 4) = fVar5;
    auVar2 = FUN_180038f80(extraout_d23_00,dVar3);
    uVar1 = extraout_w14 + 1;
    fVar5 = extraout_s22_01;
    if ((float)auVar2._0_8_ <= extraout_s22_01) {
      fVar5 = (float)auVar2._0_8_;
    }
    *(float *)(extraout_x15_01 + 8) = fVar5;
    dVar4 = extraout_d25;
    fVar5 = extraout_s26;
  } while (uVar1 < 0x100);
  return;
}

