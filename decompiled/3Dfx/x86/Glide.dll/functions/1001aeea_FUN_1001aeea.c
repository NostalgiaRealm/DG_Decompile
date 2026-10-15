/*
 * FUN_1001aeea at 1001aeea
 * undefined __thiscall FUN_1001aeea(void * this, float * param_1, float * param_2)
 * Address ranges: 1001aeea-1001b1bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001aeea(void *this,float *param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_114 [15];
  float local_d8 [15];
  float local_9c [15];
  float local_60 [15];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  float local_10;
  int local_c;
  int local_8;
  
  if (*(char *)((int)this + 0x2bca) == '\0') {
    (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,2);
    if (*(int *)(*(int *)((int)this + 0x3160) + 0x30) != 2) {
      (**(code **)(*(int *)this + 0x150))();
      *(undefined4 *)(*(int *)((int)this + 0x3160) + 0x30) = 2;
    }
    FUN_1002cb52(*(void **)((int)this + 0x3160),2,2);
    FUN_1001a4d8(*(void **)((int)this + 0x3160),param_1,1,0);
    FUN_1001a4d8(*(void **)((int)this + 0x3160),param_2,1,0);
    **(int **)(*(int *)((int)this + 0x3160) + 0x28) =
         *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -2;
    *(int *)(*(int *)(*(int *)((int)this + 0x3160) + 0x28) + 4) =
         *(int *)(*(int *)((int)this + 0x3160) + 0x2c) + -1;
    piVar1 = (int *)(*(int *)((int)this + 0x3160) + 0x28);
    *piVar1 = *piVar1 + 8;
    FUN_1001dfa8(this);
    (**(code **)(**(int **)((int)this + 0x315c) + 0x48))();
  }
  else {
    fVar8 = (float10)4.0;
    fVar9 = (float10)fscale((float10)*param_1,fVar8);
    fVar10 = (float10)fscale((float10)param_1[1],fVar8);
    fVar9 = (float10)fscale((float10)(int)(short)(int)ROUND(fVar9),-fVar8);
    local_24 = (float)fVar9;
    fVar8 = (float10)fscale((float10)(int)(short)(int)ROUND(fVar10),-fVar8);
    local_1c = (float)fVar8;
    local_14 = &local_18;
    fVar8 = (float10)4.0;
    fVar9 = (float10)fscale((float10)*param_2,fVar8);
    fVar10 = (float10)fscale((float10)param_2[1],fVar8);
    local_c = (int)(short)(int)ROUND(fVar9);
    fVar9 = (float10)fscale((float10)local_c,-fVar8);
    local_8 = (int)(short)(int)ROUND(fVar10);
    local_20 = (float)fVar9;
    fVar8 = (float10)fscale((float10)local_8,-fVar8);
    local_18 = (float)fVar8;
    local_10 = (local_20 - local_24) * (local_20 - local_24) +
               (local_18 - local_1c) * (local_18 - local_1c);
    fVar8 = FUN_1005007a(local_10);
    fVar2 = (float)(fVar8 * (float10)2.799999952316284);
    fVar3 = *(float *)((int)this + 0x2bb8);
    iVar5 = 0xf;
    pfVar6 = param_1;
    pfVar7 = local_d8;
    local_10 = fVar2;
    for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    pfVar6 = local_114;
    for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *param_1;
      param_1 = param_1 + 1;
      pfVar6 = pfVar6 + 1;
    }
    fVar3 = ((local_18 - local_1c) * fVar3 * -0.5) / fVar2;
    pfVar6 = param_2;
    pfVar7 = local_60;
    for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_114[0] = fVar3 + local_24;
    pfVar6 = local_9c;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *param_2;
      param_2 = param_2 + 1;
      pfVar6 = pfVar6 + 1;
    }
    local_60[1] = ((local_20 - local_24) * *(float *)((int)this + 0x2bbc) * 0.5) / fVar2;
    local_114[1] = local_60[1] + local_1c;
    local_d8[0] = local_24 - fVar3;
    local_d8[1] = local_1c - local_60[1];
    local_9c[0] = local_20 - fVar3;
    local_9c[1] = local_18 - local_60[1];
    local_60[0] = local_20 + fVar3;
    local_60[1] = local_60[1] + local_18;
    (**(code **)(*(int *)this + 0x178))(local_114,local_d8,local_9c,0);
    (**(code **)(*(int *)this + 0x178))(local_9c,local_60,local_114,0);
    if (*(int *)((int)this + 0x2ac4) != 1) {
      (**(code **)(*(int *)this + 0x178))(local_114,local_9c,local_d8,0);
      (**(code **)(*(int *)this + 0x178))(local_9c,local_114,local_60,0);
    }
  }
  return;
}

