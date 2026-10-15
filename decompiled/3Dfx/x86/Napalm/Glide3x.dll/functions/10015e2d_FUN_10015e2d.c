/*
 * FUN_10015e2d at 10015e2d
 * undefined __thiscall FUN_10015e2d(void * this, undefined4 * param_1)
 * Address ranges: 10015e2d-10015f0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015e2d(void *this,undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = *(int *)(*(int *)((int)this + 4) + 0x138);
  iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x9e);
  fVar5 = (float)iVar4;
  if (iVar4 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  iVar4 = *(int *)((int)this + 8);
  fVar1 = (float)param_1[9];
  fVar2 = (float)param_1[8];
  fVar6 = (float)*(int *)(iVar4 + 0x2c);
  if (*(int *)(iVar4 + 0x2c) < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  fVar7 = (float)*(int *)(iVar4 + 0x28);
  if (*(int *)(iVar4 + 0x28) < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  FUN_1004c037(*(void **)(iVar3 + 0x3680),*(int *)(iVar3 + 0x3684),(int *)*param_1,param_1[1],
               param_1[2],fVar2 * 0.0 + (float)param_1[10],fVar1 * 0.0 + (float)param_1[0xb],
               fVar7 * fVar2 + (float)param_1[10],fVar6 * fVar1 + (float)param_1[0xb],fVar5 * fVar2,
               fVar5 * fVar1);
  return;
}

