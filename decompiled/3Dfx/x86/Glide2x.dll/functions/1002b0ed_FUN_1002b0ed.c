/*
 * FUN_1002b0ed at 1002b0ed
 * undefined __thiscall FUN_1002b0ed(void * this, int param_1)
 * Address ranges: 1002b0ed-1002b1d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002b0ed(void *this,int param_1)

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
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar6 = (float)*(int *)(iVar4 + 0x2c);
  if (*(int *)(iVar4 + 0x2c) < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  fVar7 = (float)*(int *)(iVar4 + 0x28);
  if (*(int *)(iVar4 + 0x28) < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  FUN_10040cf7(*(void **)(iVar3 + 0x3180),*(int *)(iVar3 + 0x3184),*(undefined4 *)(param_1 + 4),
               *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),
               fVar2 * 0.0 + *(float *)(param_1 + 0x24),fVar1 * 0.0 + *(float *)(param_1 + 0x28),
               fVar7 * fVar2 + *(float *)(param_1 + 0x24),fVar6 * fVar1 + *(float *)(param_1 + 0x28)
               ,fVar5 * fVar2,fVar5 * fVar1);
  return;
}

