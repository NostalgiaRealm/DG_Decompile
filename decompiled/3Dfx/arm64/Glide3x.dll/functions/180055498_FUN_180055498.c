/*
 * FUN_180055498 at 180055498
 * undefined __cdecl FUN_180055498(undefined8 param_1, longlong param_2, longlong param_3, float * param_4, uint param_5, uint param_6)
 * Address ranges: 180055498-1800556cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055498(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,uint param_5,
                  uint param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = 0.0;
  iVar1 = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
  if (1 < iVar1) {
    fVar3 = (float)((*(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x10)) -
                   *(uint *)(param_2 + 0x20)) / (float)(iVar1 + -1) -
            (float)*(uint *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_3 + 0x2c) - *(int *)(param_3 + 0x24);
  if (iVar1 < 2) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)((*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x14)) -
                   *(uint *)(param_2 + 0x24)) / (float)(iVar1 + -1) -
            (float)*(uint *)(param_2 + 0x24);
  }
  *param_4 = (float)*(int *)(param_3 + 0x20) + 0.495;
  param_4[1] = (float)*(int *)(param_3 + 0x24) + 0.495;
  param_4[4] = (float)*(int *)(param_3 + 0x28) + 0.495;
  param_4[5] = (float)*(int *)(param_3 + 0x24) + 0.495;
  param_4[8] = (float)*(int *)(param_3 + 0x20) + 0.495;
  param_4[9] = (float)*(int *)(param_3 + 0x2c) + 0.495;
  param_4[0xc] = (float)*(int *)(param_3 + 0x28) + 0.495;
  param_4[0xd] = (float)*(int *)(param_3 + 0x2c) + 0.495;
  if (param_5 == 0) {
    param_4[2] = (float)*(int *)(param_3 + 0x10);
    param_4[3] = (float)*(int *)(param_3 + 0x14);
    param_4[6] = (float)*(int *)(param_3 + 0x18) + fVar3;
    param_4[7] = (float)*(int *)(param_3 + 0x14);
    param_4[10] = (float)*(int *)(param_3 + 0x10);
    param_4[0xb] = (float)*(int *)(param_3 + 0x1c) + fVar2;
    param_4[0xe] = (float)*(int *)(param_3 + 0x18) + fVar3;
    fVar4 = (float)*(int *)(param_3 + 0x1c) + fVar2;
  }
  else {
    fVar5 = (float)param_5;
    fVar4 = (float)param_6;
    param_4[2] = ((float)*(int *)(param_3 + 0x10) + 0.5) / fVar5;
    param_4[3] = ((float)*(int *)(param_3 + 0x14) + 0.5) / fVar4;
    param_4[6] = ((float)*(int *)(param_3 + 0x18) + fVar3 + 0.5) / fVar5;
    param_4[7] = ((float)*(int *)(param_3 + 0x14) + 0.5) / fVar4;
    param_4[10] = ((float)*(int *)(param_3 + 0x10) + 0.5) / fVar5;
    param_4[0xb] = ((float)*(int *)(param_3 + 0x1c) + fVar2 + 0.5) / fVar4;
    param_4[0xe] = ((float)*(int *)(param_3 + 0x18) + fVar3 + 0.5) / fVar5;
    fVar4 = ((float)*(int *)(param_3 + 0x1c) + fVar2 + 0.5) / fVar4;
  }
  param_4[0xf] = fVar4;
  return;
}

