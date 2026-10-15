/*
 * FUN_100161ed at 100161ed
 * uint * __fastcall FUN_100161ed(uint param_1, uint param_2, uint * param_3, uint param_4, uint param_5, int param_6, byte param_7)
 * Address ranges: 100161ed-1001627f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_100161ed(uint param_1,uint param_2,uint *param_3,uint param_4,uint param_5,int param_6,
            byte param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)param_7 * 2 + 2;
  uVar4 = uVar3 * param_6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (param_1 < param_2) {
    uVar1 = param_1 / uVar4;
    param_3[1] = uVar1;
    uVar2 = (uint)(((ulonglong)param_1 % (ulonglong)uVar4) / (ulonglong)uVar3);
    *param_3 = uVar2;
    param_3[3] = param_2 / uVar4;
    uVar3 = (uint)(((ulonglong)param_2 % (ulonglong)uVar4) / (ulonglong)uVar3);
    param_3[2] = uVar3;
    if (param_4 < uVar2) {
      uVar1 = uVar1 + 1;
      *param_3 = 0;
      param_3[1] = uVar1;
    }
    if (param_4 < uVar3) {
      param_3[2] = param_4;
    }
    if (param_5 <= uVar1) {
      param_3[1] = param_5;
    }
    if (param_5 <= param_2 / uVar4) {
      param_3[2] = param_4;
      param_3[3] = param_5 - 1;
    }
  }
  return param_3;
}

