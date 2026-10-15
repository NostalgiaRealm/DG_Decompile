/*
 * FUN_1000ef50 at 1000ef50
 * undefined FUN_1000ef50(void)
 * Address ranges: 1000ef50-1000f013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ef50(float param_1,undefined8 param_2,float param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int extraout_w15;
  double extraout_d0;
  double dVar6;
  float extraout_s22;
  float extraout_s22_00;
  float extraout_s22_01;
  undefined8 extraout_d23;
  undefined8 extraout_d23_00;
  undefined8 extraout_d24;
  double dVar7;
  double extraout_d25;
  float fVar8;
  float extraout_s26;
  
  uVar3 = ZEXT48(param_4 + 1);
  *param_4 = 0;
  fVar8 = 255.0;
  *(undefined4 *)(param_4 + 1) = 0;
  uVar2 = (ulonglong)((int)param_4 + 4);
  uVar5 = 1;
  dVar7 = (double)(1.0 / param_1);
  dVar6 = (double)(1.0 / param_3);
  do {
    iVar4 = uVar5 * 3;
    iVar1 = FUN_10046758((double)((float)uVar5 / fVar8),dVar7);
    fVar8 = extraout_s22;
    if ((float)extraout_d0 <= extraout_s22) {
      fVar8 = (float)extraout_d0;
    }
    *(float *)(iVar1 + iVar4 * 4) = fVar8;
    dVar7 = (double)FUN_10046758(extraout_d23,extraout_d24);
    fVar8 = extraout_s22_00;
    if ((float)dVar7 <= extraout_s22_00) {
      fVar8 = (float)dVar7;
    }
    *(float *)((int)uVar2 + iVar4 * 4) = fVar8;
    dVar7 = (double)FUN_10046758(extraout_d23_00,dVar6);
    uVar5 = extraout_w15 + 1;
    fVar8 = extraout_s22_01;
    if ((float)dVar7 <= extraout_s22_01) {
      fVar8 = (float)dVar7;
    }
    *(float *)((int)uVar3 + iVar4 * 4) = fVar8;
    dVar7 = extraout_d25;
    fVar8 = extraout_s26;
  } while (uVar5 < 0x100);
  return;
}

