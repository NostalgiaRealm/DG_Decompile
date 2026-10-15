/*
 * FUN_1001365e at 1001365e
 * undefined __thiscall FUN_1001365e(void * this, float * param_1, float * param_2)
 * Address ranges: 1001365e-100136e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001365e(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)this;
  fVar3 = *(float *)((int)this + 8);
  fVar4 = *(float *)((int)this + 0xc);
  *param_1 = param_2[1] * fVar1 + *param_2 * fVar2 + param_2[2] * fVar3 + param_2[3] * fVar4;
  param_1[1] = param_2[7] * fVar4 + param_2[6] * fVar3 + param_2[4] * fVar2 + param_2[5] * fVar1;
  param_1[2] = param_2[0xb] * fVar4 + param_2[10] * fVar3 + param_2[8] * fVar2 + param_2[9] * fVar1;
  param_1[3] = fVar3 * param_2[0xe] + param_2[0xd] * fVar1 + param_2[0xc] * fVar2 +
               param_2[0xf] * fVar4;
  return;
}

