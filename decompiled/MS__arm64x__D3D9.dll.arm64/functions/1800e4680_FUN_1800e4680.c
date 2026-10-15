/*
 * FUN_1800e4680 at 1800e4680
 * undefined FUN_1800e4680(void)
 * Address ranges: 1800e4680-1800e479f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,float *param_10)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  
  *param_10 = (float)param_5;
  param_10[1] = (float)param_6;
  param_10[5] = (float)*(uint *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x24);
  param_10[9] = (float)(param_6 / 0x5dc + 1);
  param_10[6] = (float)uVar2;
  if ((*(char *)(param_2 + 0xd68) == '\0') && (uVar2 = FUN_1800e6328(), (uVar2 & 1) != 0)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 1.4013e-45;
  }
  param_10[8] = fVar3;
  param_10[2] = (float)param_8 / 100.0;
  param_10[3] = (float)param_7 / 100.0;
  param_10[4] = (float)param_9 / 100.0;
  param_10[10] = (float)*(uint *)(&DAT_180232ed0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  param_10[0xb] = *(float *)(&DAT_180232ec0 + (longlong)*(int *)(param_2 + 0x34) * 4);
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    param_10[lVar4 * 4 + 0x10] = *(float *)(param_2 + 0x40 + lVar4 * 0xc);
    param_10[lVar4 * 4 + 0x11] = *(float *)(param_2 + 0x44 + lVar4 * 0xc);
    param_10[lVar4 * 4 + 0x12] = *(float *)(param_2 + 0x48 + lVar4 * 0xc);
    lVar4 = lVar1;
  } while (lVar1 != 0x100);
  return;
}

