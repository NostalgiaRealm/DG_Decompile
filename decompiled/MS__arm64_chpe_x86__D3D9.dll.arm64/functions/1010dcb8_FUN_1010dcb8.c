/*
 * FUN_1010dcb8 at 1010dcb8
 * undefined FUN_1010dcb8(void)
 * Address ranges: 1010dcb8-1010de43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010dcb8(undefined4 param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,uint param_9,undefined4 param_10,
                 float *param_11)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  
  *param_11 = (float)param_5;
  param_11[1] = (float)param_6;
  param_11[5] = (float)*(uint *)(param_2 + 0x18);
  param_11[6] = (float)*(uint *)(param_2 + 0x1c);
  param_11[9] = (float)(param_6 / 0x5dc + 1);
  if ((*(char *)(param_2 + 0xd58) == '\0') &&
     (uVar3 = FUN_10110658(param_1,param_2), (uVar3 & 1) != 0)) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 1.4013e-45;
  }
  param_11[8] = fVar5;
  param_11[2] = (float)param_8 / 100.0;
  param_11[3] = (float)param_7 / 100.0;
  param_11[4] = (float)param_9 / 100.0;
  param_11[10] = (float)*(uint *)(&DAT_10165870 + *(int *)(param_2 + 0x2c) * 4);
  param_11[0xb] = *(float *)(&DAT_10165860 + *(int *)(param_2 + 0x2c) * 4);
  uVar4 = 0;
  do {
    param_11[(uVar4 + 4) * 4] = *(float *)(param_2 + 0x38 + uVar4 * 0xc);
    iVar1 = uVar4 * 0xc;
    param_11[uVar4 * 4 + 0x11] = *(float *)(param_2 + (uVar4 + 5) * 0xc);
    iVar2 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    param_11[iVar2 + 0x12] = *(float *)(param_2 + 0x40 + iVar1);
  } while (uVar4 < 0x100);
  return;
}

