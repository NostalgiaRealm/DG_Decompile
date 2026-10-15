/*
 * FUN_1000f80f at 1000f80f
 * undefined __thiscall FUN_1000f80f(void * this, float * param_1, float * param_2, float * param_3, char param_4)
 * Address ranges: 1000f80f-1000f986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f80f(void *this,float *param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float local_20;
  float local_1c;
  float local_18;
  float local_8;
  
  bVar7 = param_4 == '\0';
  _param_4 = (float *)*param_1;
  fVar1 = param_1[1];
  local_8 = param_1[2];
  local_1c = param_1[3];
  if (bVar7) {
    local_20 = param_2[3];
    local_18 = param_2[2];
    fVar2 = param_2[1];
    fVar6 = fVar1;
    param_2 = (float *)*param_2;
  }
  else {
    iVar3 = *(int *)((int)this + 4);
    fVar2 = (float)*(int *)(iVar3 + 0xa0);
    if (*(int *)(iVar3 + 0xa0) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar4 = fVar2 - (local_8 - (float)_param_4);
    fVar5 = (float)*(int *)(iVar3 + 0xa4);
    if (*(int *)(iVar3 + 0xa4) < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar6 = fVar5 - (local_1c - fVar1);
    fVar6 = 1.0 - (fVar6 + fVar6) / fVar5;
    param_2 = _param_4;
    _param_4 = (float *)((fVar4 + fVar4) / fVar2 - 1.0);
    local_20 = local_1c;
    local_1c = 1.0 - (fVar5 + fVar5) / fVar5;
    local_18 = local_8;
    local_8 = (fVar2 + fVar2) / fVar2 - 1.0;
    fVar2 = fVar1;
  }
  *param_3 = (float)_param_4;
  param_3[1] = fVar6;
  param_3[2] = (float)param_2;
  param_3[3] = fVar2;
  param_3[4] = local_8;
  param_3[5] = fVar6;
  param_3[6] = local_18;
  param_3[7] = fVar2;
  param_3[8] = (float)_param_4;
  param_3[9] = local_1c;
  param_3[10] = (float)param_2;
  param_3[0xb] = local_20;
  param_3[0xc] = local_8;
  param_3[0xd] = local_1c;
  param_3[0xe] = local_18;
  param_3[0xf] = local_20;
  return;
}

