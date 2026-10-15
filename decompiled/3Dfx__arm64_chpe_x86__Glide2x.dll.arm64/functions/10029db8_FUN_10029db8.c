/*
 * FUN_10029db8 at 10029db8
 * undefined FUN_10029db8(void)
 * Address ranges: 10029db8-10029ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029db8(int param_1,float *param_2,float *param_3,float *param_4,uint param_5)

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
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar2 = *param_2;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if ((param_5 & 1) == 0) {
    fVar6 = *param_3;
    fVar8 = param_3[3];
    fVar7 = param_3[2];
    fVar5 = param_3[1];
    fVar9 = fVar1;
    fVar11 = fVar2;
    fVar12 = fVar3;
    fVar10 = fVar4;
  }
  else {
    fVar12 = (float)*(uint *)(*(int *)(param_1 + 4) + 0xa0);
    fVar10 = (float)*(uint *)(*(int *)(param_1 + 4) + 0xa4);
    fVar11 = fVar12 - (fVar3 - fVar2);
    fVar9 = fVar10 - (fVar4 - fVar1);
    fVar9 = 1.0 - (fVar9 + fVar9) / fVar10;
    fVar11 = (fVar11 + fVar11) / fVar12 - 1.0;
    fVar12 = (fVar12 + fVar12) / fVar12 - 1.0;
    fVar10 = 1.0 - (fVar10 + fVar10) / fVar10;
    fVar5 = fVar1;
    fVar6 = fVar2;
    fVar7 = fVar3;
    fVar8 = fVar4;
  }
  *param_4 = fVar11;
  param_4[1] = fVar9;
  param_4[2] = fVar6;
  param_4[3] = fVar5;
  param_4[4] = fVar12;
  param_4[5] = fVar9;
  param_4[6] = fVar7;
  param_4[7] = fVar5;
  param_4[8] = fVar11;
  param_4[9] = fVar10;
  param_4[10] = fVar6;
  param_4[0xb] = fVar8;
  param_4[0xc] = fVar12;
  param_4[0xd] = fVar10;
  param_4[0xe] = fVar7;
  param_4[0xf] = fVar8;
  return;
}

