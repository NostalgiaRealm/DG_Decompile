/*
 * FUN_1000f720 at 1000f720
 * undefined __thiscall FUN_1000f720(void * this, int * param_1, float * param_2)
 * Address ranges: 1000f720-1000f80e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f720(void *this,int *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)((int)this + 4);
  fVar2 = (float)*param_1;
  fVar3 = (float)param_1[1];
  fVar4 = (float)param_1[2];
  fVar5 = (float)param_1[3];
  fVar7 = (float)*(int *)(iVar1 + 0xa0);
  if (*(int *)(iVar1 + 0xa0) < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar6 = (fVar2 + fVar2) / fVar7 - 1.0;
  fVar8 = (float)*(int *)(iVar1 + 0xa4);
  if (*(int *)(iVar1 + 0xa4) < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar9 = 1.0 - (fVar3 + fVar3) / fVar8;
  fVar7 = (fVar4 + fVar4) / fVar7 - 1.0;
  fVar8 = 1.0 - (fVar5 + fVar5) / fVar8;
  *param_2 = fVar6;
  param_2[1] = fVar9;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  param_2[4] = fVar7;
  param_2[5] = fVar9;
  param_2[6] = fVar4;
  param_2[7] = fVar3;
  param_2[8] = fVar6;
  param_2[9] = fVar8;
  param_2[0xd] = fVar8;
  param_2[10] = fVar2;
  param_2[0xb] = fVar5;
  param_2[0xf] = fVar5;
  param_2[0xc] = fVar7;
  param_2[0xe] = fVar4;
  return;
}

