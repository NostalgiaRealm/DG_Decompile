/*
 * FUN_180052400 at 180052400
 * undefined __cdecl FUN_180052400(longlong param_1, longlong param_2, undefined8 param_3, undefined8 param_4, uint param_5, uint param_6, uint param_7, uint param_8, uint param_9, float * param_10)
 * Address ranges: 180052400-18005251f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052400(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,float *param_10)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  
  *param_10 = (float)param_5;
  param_10[1] = (float)param_6;
  param_10[5] = (float)*(uint *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x24);
  param_10[9] = (float)(param_6 / 0x5dc + 1);
  param_10[6] = (float)uVar2;
  if ((*(char *)(param_2 + 0xd68) == '\0') && (bVar3 = FUN_1800541a0(param_1,param_2), bVar3)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.4013e-45;
  }
  param_10[8] = fVar4;
  param_10[2] = (float)param_8 / 100.0;
  param_10[3] = (float)param_7 / 100.0;
  param_10[4] = (float)param_9 / 100.0;
  param_10[10] = (float)*(uint *)(&DAT_180063240 + (longlong)*(int *)(param_2 + 0x34) * 4);
  param_10[0xb] = *(float *)(&DAT_180063230 + (longlong)*(int *)(param_2 + 0x34) * 4);
  lVar5 = 0;
  do {
    lVar1 = lVar5 + 1;
    param_10[lVar5 * 4 + 0x10] = *(float *)(param_2 + 0x40 + lVar5 * 0xc);
    param_10[lVar5 * 4 + 0x11] = *(float *)(param_2 + 0x44 + lVar5 * 0xc);
    param_10[lVar5 * 4 + 0x12] = *(float *)(param_2 + 0x48 + lVar5 * 0xc);
    lVar5 = lVar1;
  } while (lVar1 != 0x100);
  return;
}

