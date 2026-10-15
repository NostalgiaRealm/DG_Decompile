/*
 * FUN_10048867 at 10048867
 * undefined __stdcall FUN_10048867(int param_1, int param_2, float * param_3, int param_4, int param_5)
 * Address ranges: 10048867-10048b25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048867(int param_1,int param_2,float *param_3,int param_4,int param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  iVar3 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20);
  if (iVar3 < 2) {
    fVar7 = 0.0;
  }
  else {
    iVar2 = (*(int *)(param_2 + 0x18) - *(int *)(param_1 + 0x18)) - *(int *)(param_2 + 0x10);
    fVar7 = (float)((double)iVar2 + (double)(&DAT_1005b850)[-(iVar2 >> 0x1f)]) / (float)(iVar3 + -1)
            - (float)((double)*(int *)(param_1 + 0x18) +
                     (double)(&DAT_1005b850)[-(*(int *)(param_1 + 0x18) >> 0x1f)]);
  }
  iVar3 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x24);
  if (1 < iVar3) {
    iVar2 = (*(int *)(param_2 + 0x1c) - *(int *)(param_1 + 0x1c)) - *(int *)(param_2 + 0x14);
    fVar6 = (float)((double)iVar2 + (double)(&DAT_1005b850)[-(iVar2 >> 0x1f)]) / (float)(iVar3 + -1)
            - (float)((double)*(int *)(param_1 + 0x1c) +
                     (double)(&DAT_1005b850)[-(*(int *)(param_1 + 0x1c) >> 0x1f)]);
  }
  *param_3 = (float)*(int *)(param_2 + 0x20) + 0.495;
  param_3[1] = (float)*(int *)(param_2 + 0x24) + 0.495;
  param_3[4] = (float)*(int *)(param_2 + 0x28) + 0.495;
  param_3[5] = (float)*(int *)(param_2 + 0x24) + 0.495;
  param_3[8] = (float)*(int *)(param_2 + 0x20) + 0.495;
  param_3[9] = (float)*(int *)(param_2 + 0x2c) + 0.495;
  param_3[0xc] = (float)*(int *)(param_2 + 0x28) + 0.495;
  param_3[0xd] = (float)*(int *)(param_2 + 0x2c) + 0.495;
  if (param_4 == 0) {
    param_3[2] = (float)*(int *)(param_2 + 0x10);
    param_3[3] = (float)*(int *)(param_2 + 0x14);
    param_3[6] = (float)*(int *)(param_2 + 0x18) + fVar7;
    param_3[7] = (float)*(int *)(param_2 + 0x14);
    param_3[10] = (float)*(int *)(param_2 + 0x10);
    param_3[0xb] = (float)*(int *)(param_2 + 0x1c) + fVar6;
    param_3[0xe] = (float)*(int *)(param_2 + 0x18) + fVar7;
    fVar4 = (float)*(int *)(param_2 + 0x1c) + fVar6;
  }
  else {
    fVar5 = (float)((double)param_4 + (double)(&DAT_1005b850)[-(param_4 >> 0x1f)]);
    dVar1 = (double)(&DAT_1005b850)[-(param_5 >> 0x1f)];
    param_3[2] = ((float)*(int *)(param_2 + 0x10) + 0.5) / fVar5;
    fVar4 = (float)((double)param_5 + dVar1);
    param_3[3] = ((float)*(int *)(param_2 + 0x14) + 0.5) / fVar4;
    param_3[6] = ((float)*(int *)(param_2 + 0x18) + fVar7 + 0.5) / fVar5;
    param_3[7] = ((float)*(int *)(param_2 + 0x14) + 0.5) / fVar4;
    param_3[10] = ((float)*(int *)(param_2 + 0x10) + 0.5) / fVar5;
    param_3[0xb] = ((float)*(int *)(param_2 + 0x1c) + fVar6 + 0.5) / fVar4;
    param_3[0xe] = ((float)*(int *)(param_2 + 0x18) + fVar7 + 0.5) / fVar5;
    fVar4 = ((float)*(int *)(param_2 + 0x1c) + fVar6 + 0.5) / fVar4;
  }
  param_3[0xf] = fVar4;
  return;
}

