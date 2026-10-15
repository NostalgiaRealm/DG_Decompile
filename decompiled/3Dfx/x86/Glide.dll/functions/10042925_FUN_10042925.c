/*
 * FUN_10042925 at 10042925
 * undefined __thiscall FUN_10042925(void * this, int * param_1, undefined4 param_2, undefined4 param_3, int param_4, uint param_5, int param_6, int param_7, int param_8, float * param_9)
 * Address ranges: 10042925-10042aba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10042925(void *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6,int param_7,int param_8,float *param_9)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  
  *param_9 = (float)((double)param_4 + (double)(&DAT_10055140)[-(param_4 >> 0x1f)]);
  param_9[1] = (float)((double)(int)param_5 + (double)(&DAT_10055140)[-((int)param_5 >> 0x1f)]);
  param_9[5] = (float)((double)param_1[6] + (double)(&DAT_10055140)[-(param_1[6] >> 0x1f)]);
  iVar2 = param_1[7];
  dVar1 = (double)(&DAT_10055140)[-(iVar2 >> 0x1f)];
  param_9[9] = (float)(param_5 / 0x5dc + 1);
  param_9[6] = (float)((double)iVar2 + dVar1);
  if ((char)param_1[0x356] == '\0') {
    bVar3 = FUN_1004445d(this,param_1);
    if (bVar3) {
      fVar4 = 0.0;
      goto LAB_100429df;
    }
  }
  fVar4 = 1.4013e-45;
LAB_100429df:
  param_9[8] = fVar4;
  param_9[2] = (float)((double)param_7 + (double)(&DAT_10055140)[-(param_7 >> 0x1f)]) / 100.0;
  param_9[3] = (float)((double)param_6 + (double)(&DAT_10055140)[-(param_6 >> 0x1f)]) / 100.0;
  param_9[4] = (float)((double)param_8 + (double)(&DAT_10055140)[-(param_8 >> 0x1f)]) / 100.0;
  param_9[10] = (float)((double)*(int *)(&DAT_10051eac + param_1[0xb] * 4) +
                       (double)(&DAT_10055140)
                               [-(*(int *)(&DAT_10051eac + param_1[0xb] * 4) >> 0x1f)]);
  param_9[0xb] = *(float *)(&DAT_10051e9c + param_1[0xb] * 4);
  uVar5 = 0;
  do {
    uVar6 = uVar5 + 1;
    param_9[uVar5 * 4 + 0x10] = (float)param_1[uVar5 * 3 + 0xe];
    param_9[uVar5 * 4 + 0x11] = (float)param_1[uVar5 * 3 + 0xf];
    param_9[uVar5 * 4 + 0x12] = (float)param_1[uVar5 * 3 + 0x10];
    uVar5 = uVar6;
  } while (uVar6 < 0x100);
  return;
}

