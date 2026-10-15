/*
 * FUN_1800aa158 at 1800aa158
 * undefined8 __fastcall FUN_1800aa158(undefined8 param_1, uint param_2, longlong param_3, uint param_4, char param_5, float * param_6)
 * Address ranges: 1800aa158-1800aa242
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800aa158(undefined8 param_1,uint param_2,longlong param_3,uint param_4,char param_5,
             float *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  
  if (param_5 == '\0') {
    bVar4 = true;
    uVar1 = FUN_1800a9828(0,param_2,param_3,param_4);
    lVar3 = (ulonglong)param_2 * 0x2c;
    *param_6 = (float)(uVar1 >> 0x18 & (uint)(byte)(&DAT_18010ff38)[lVar3]) / 255.0;
    uVar2 = (ulonglong)(uVar1 >> 8);
    param_6[1] = (float)(uVar1 >> 0x10 & (uint)(byte)(&DAT_18010ff39)[lVar3]) / 255.0;
    param_6[2] = (float)((uint)(byte)(&DAT_18010ff3a)[lVar3] & uVar1 >> 8) / 255.0;
    fVar5 = (float)((byte)(&DAT_18010ff3b)[lVar3] & uVar1) / 255.0;
  }
  else {
    param_6[1] = 0.0;
    param_6[2] = 0.0;
    uVar2 = (ulonglong)(float)param_4;
    *param_6 = (float)param_4;
    fVar5 = 0.0;
    bVar4 = param_4 == (uint)uVar2;
  }
  param_6[3] = fVar5;
  return CONCAT71((int7)(uVar2 >> 8),bVar4);
}

