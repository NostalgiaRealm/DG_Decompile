/*
 * FUN_1800aa244 at 1800aa244
 * undefined __fastcall FUN_1800aa244(longlong param_1, uint param_2, longlong param_3, uint param_4)
 * Address ranges: 1800aa244-1800aa2df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa244(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x1ceb0) = param_4;
  uVar1 = FUN_1800a9828(param_1,param_2,param_3,param_4);
  *(uint *)(param_1 + 0x1ceb4) = uVar1;
  uVar1 = *(uint *)(&DAT_18010ff10 + (longlong)(int)param_2 * 0x2c);
  if (uVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)((double)(uVar1 & param_4) / (double)uVar1);
  }
  *(float *)(param_1 + 0x1ce8c) = fVar3;
  lVar2 = 0;
  do {
    *(uint *)(param_1 + 0x1cee0 + lVar2 * 4) =
         (uint)(byte)(&DAT_18010ff38)[lVar2 + (ulonglong)param_2 * 0x2c];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  return;
}

