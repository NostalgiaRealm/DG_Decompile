/*
 * FUN_1002a130 at 1002a130
 * undefined FUN_1002a130(void)
 * Address ranges: 1002a130-1002a237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a130(int param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (float)*param_2;
  fVar8 = (float)param_2[1];
  fVar7 = (float)param_2[2];
  fVar6 = (float)param_2[3];
  fVar1 = (float)*(uint *)(*(int *)(param_1 + 4) + 0xa0);
  fVar4 = (float)*(uint *)(*(int *)(param_1 + 4) + 0xa4);
  fVar5 = (fVar9 + fVar9) / fVar1 - 1.0;
  *param_3 = fVar5;
  fVar3 = 1.0 - (fVar8 + fVar8) / fVar4;
  param_3[1] = fVar3;
  param_3[2] = fVar9;
  param_3[3] = fVar8;
  fVar2 = (fVar7 + fVar7) / fVar1 - 1.0;
  param_3[4] = fVar2;
  param_3[5] = fVar3;
  param_3[6] = fVar7;
  param_3[7] = fVar8;
  param_3[8] = fVar5;
  fVar1 = 1.0 - (fVar6 + fVar6) / fVar4;
  param_3[9] = fVar1;
  param_3[10] = fVar9;
  param_3[0xb] = fVar6;
  param_3[0xc] = fVar2;
  param_3[0xd] = fVar1;
  param_3[0xe] = fVar7;
  param_3[0xf] = fVar6;
  return;
}

