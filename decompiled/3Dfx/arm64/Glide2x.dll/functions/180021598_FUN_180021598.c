/*
 * FUN_180021598 at 180021598
 * undefined __cdecl FUN_180021598(longlong param_1, float * param_2, float * param_3, float * param_4, uint param_5)
 * Address ranges: 180021598-180021627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021598(longlong param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *param_2;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if ((param_5 & 1) != 0) {
    fVar6 = (float)*(uint *)(*(longlong *)(param_1 + 8) + 0xb4);
    fVar7 = (float)*(uint *)(*(longlong *)(param_1 + 8) + 0xb0);
    fVar5 = fVar6 - (fVar4 - fVar1);
    fVar1 = fVar7 - (fVar3 - fVar2);
    fVar4 = 1.0 - (fVar6 + fVar6) / fVar6;
    fVar3 = (fVar7 + fVar7) / fVar7 - 1.0;
    fVar2 = (fVar1 + fVar1) / fVar7 - 1.0;
    fVar1 = 1.0 - (fVar5 + fVar5) / fVar6;
    param_3 = param_2;
  }
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar6 = param_3[2];
  fVar5 = param_3[3];
  *param_4 = fVar2;
  param_4[1] = fVar1;
  param_4[2] = fVar7;
  param_4[3] = fVar8;
  param_4[4] = fVar3;
  param_4[5] = fVar1;
  param_4[6] = fVar6;
  param_4[7] = fVar8;
  param_4[8] = fVar2;
  param_4[9] = fVar4;
  param_4[10] = fVar7;
  param_4[0xb] = fVar5;
  param_4[0xc] = fVar3;
  param_4[0xd] = fVar4;
  param_4[0xe] = fVar6;
  param_4[0xf] = fVar5;
  return;
}

