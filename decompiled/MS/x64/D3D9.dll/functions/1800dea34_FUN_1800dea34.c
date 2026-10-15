/*
 * FUN_1800dea34 at 1800dea34
 * undefined __fastcall FUN_1800dea34(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, float * param_10)
 * Address ranges: 1800dea34-1800deb68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dea34(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,float *param_10)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_10 = (float)param_5;
  param_10[1] = (float)param_6;
  param_10[5] = (float)*(uint *)(param_2 + 0x20);
  param_10[6] = (float)*(uint *)(param_2 + 0x24);
  param_10[9] = (float)(param_6 / 0x5dc + 1);
  if (*(char *)(param_2 + 0xd68) == '\0') {
    uVar2 = FUN_1800e0764(param_1,param_2);
    if ((char)uVar2 != '\0') {
      fVar1 = 0.0;
      goto LAB_1800deab6;
    }
  }
  fVar1 = 1.4013e-45;
LAB_1800deab6:
  param_10[8] = fVar1;
  param_10[2] = (float)param_8 / 100.0;
  param_10[3] = (float)param_7 / 100.0;
  param_10[4] = (float)param_9 / 100.0;
  param_10[10] = (float)*(uint *)(&DAT_180100460 + (longlong)*(int *)(param_2 + 0x34) * 4);
  param_10[0xb] = *(float *)(&DAT_180100450 + (longlong)*(int *)(param_2 + 0x34) * 4);
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    param_10[lVar3 * 4 + 0x10] = *(float *)(param_2 + 0x40 + lVar3 * 0xc);
    param_10[lVar3 * 4 + 0x11] = *(float *)(param_2 + 0x44 + lVar3 * 0xc);
    param_10[lVar3 * 4 + 0x12] = *(float *)(param_2 + 0x48 + lVar3 * 0xc);
    lVar3 = lVar4;
  } while (lVar4 != 0x100);
  return;
}

