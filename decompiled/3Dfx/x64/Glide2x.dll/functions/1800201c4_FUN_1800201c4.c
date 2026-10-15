/*
 * FUN_1800201c4 at 1800201c4
 * undefined __fastcall FUN_1800201c4(longlong param_1, float * param_2, float * param_3, float * param_4, char param_5)
 * Address ranges: 1800201c4-1800202e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800201c4(longlong param_1,float *param_2,float *param_3,float *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_2;
  fVar7 = param_2[2];
  fVar3 = param_2[1];
  fVar8 = param_2[3];
  if (param_5 != '\0') {
    fVar4 = (float)*(uint *)(*(longlong *)(param_1 + 8) + 0xb0);
    fVar5 = (float)*(uint *)(*(longlong *)(param_1 + 8) + 0xb4);
    fVar6 = fVar4 - (fVar7 - fVar6);
    fVar3 = fVar5 - (fVar8 - fVar3);
    fVar7 = (fVar4 + fVar4) / fVar4 - 1.0;
    fVar6 = (fVar6 + fVar6) / fVar4 - 1.0;
    fVar3 = 1.0 - (fVar3 + fVar3) / fVar5;
    fVar8 = 1.0 - (fVar5 + fVar5) / fVar5;
    param_3 = param_2;
  }
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  *param_4 = fVar6;
  param_4[1] = fVar3;
  param_4[2] = fVar5;
  param_4[3] = fVar4;
  param_4[4] = fVar7;
  param_4[5] = fVar3;
  param_4[6] = fVar1;
  param_4[7] = fVar4;
  param_4[8] = fVar6;
  param_4[9] = fVar8;
  param_4[10] = fVar5;
  param_4[0xb] = fVar2;
  param_4[0xc] = fVar7;
  param_4[0xd] = fVar8;
  param_4[0xe] = fVar1;
  param_4[0xf] = fVar2;
  return;
}

