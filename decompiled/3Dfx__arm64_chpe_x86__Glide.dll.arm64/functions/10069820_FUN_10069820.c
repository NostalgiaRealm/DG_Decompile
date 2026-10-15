/*
 * FUN_10069820 at 10069820
 * undefined FUN_10069820(void)
 * Address ranges: 10069820-10069ad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069820(undefined8 param_1,int param_2,int param_3,float *param_4,uint param_5,
                 uint param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  piVar1 = (int *)(param_3 + 0x28);
  iVar8 = *(int *)(param_3 + 0x20);
  piVar2 = (int *)(param_3 + 0x18);
  piVar3 = (int *)(param_3 + 0x10);
  iVar9 = *piVar1 - iVar8;
  if (iVar9 < 2) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)((*piVar2 - *piVar3) - *(uint *)(param_2 + 0x18)) / (float)(iVar9 + -1) -
             (float)*(uint *)(param_2 + 0x18);
  }
  piVar4 = (int *)(param_3 + 0x2c);
  piVar5 = (int *)(param_3 + 0x24);
  piVar6 = (int *)(param_3 + 0x1c);
  if (*piVar4 - *piVar5 < 2) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)((*piVar6 - *(uint *)(param_2 + 0x1c)) - *(int *)(param_3 + 0x14)) /
             (float)((*piVar4 - *piVar5) + -1) - (float)*(uint *)(param_2 + 0x1c);
  }
  piVar7 = (int *)(param_3 + 0x14);
  *param_4 = (float)iVar8 + 0.495;
  param_4[1] = (float)*piVar5 + 0.495;
  param_4[4] = (float)*piVar1 + 0.495;
  param_4[5] = (float)*piVar5 + 0.495;
  param_4[8] = (float)*(int *)(param_3 + 0x20) + 0.495;
  param_4[9] = (float)*piVar4 + 0.495;
  param_4[0xc] = (float)*piVar1 + 0.495;
  param_4[0xd] = (float)*piVar4 + 0.495;
  if (param_5 == 0) {
    param_4[2] = (float)*piVar3;
    param_4[3] = (float)*piVar7;
    param_4[6] = (float)*piVar2 + fVar11;
    param_4[7] = (float)*piVar7;
    param_4[10] = (float)*piVar3;
    param_4[0xb] = (float)*piVar6 + fVar10;
    param_4[0xe] = (float)*piVar2 + fVar11;
    fVar12 = (float)*piVar6 + fVar10;
  }
  else {
    fVar13 = (float)param_5;
    fVar12 = (float)param_6;
    param_4[2] = ((float)*piVar3 + 0.5) / fVar13;
    param_4[3] = ((float)*piVar7 + 0.5) / fVar12;
    param_4[6] = ((float)*piVar2 + fVar11 + 0.5) / fVar13;
    param_4[7] = ((float)*piVar7 + 0.5) / fVar12;
    param_4[10] = ((float)*piVar3 + 0.5) / fVar13;
    param_4[0xb] = ((float)*piVar6 + fVar10 + 0.5) / fVar12;
    param_4[0xe] = ((float)*piVar2 + fVar11 + 0.5) / fVar13;
    fVar12 = ((float)*piVar6 + fVar10 + 0.5) / fVar12;
  }
  param_4[0xf] = fVar12;
  return;
}

