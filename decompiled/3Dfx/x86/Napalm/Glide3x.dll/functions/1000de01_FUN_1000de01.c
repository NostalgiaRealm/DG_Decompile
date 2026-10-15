/*
 * FUN_1000de01 at 1000de01
 * uint * __fastcall FUN_1000de01(uint param_1, uint param_2, uint * param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1000de01-1000de8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall
FUN_1000de01(uint param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6)

{
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  if (param_5 < 3) {
    *param_3 = (uint)(byte)(&DAT_10057a54)[param_5];
  }
  if (param_4 < 2) {
    param_3[2] = (uint)(byte)(&DAT_10057a50)[param_4];
  }
  param_3[4] = (uint)(byte)(&DAT_10057a48)[param_2 & 7];
  param_3[5] = (uint)(7 < (int)param_2);
  if (param_1 < 0x11) {
    param_3[6] = (uint)(byte)(&DAT_10057a34)[param_1];
    param_3[1] = (uint)(byte)(&DAT_10057a20)[param_1];
    param_3[3] = (uint)(byte)(&DAT_10057a0c)[param_1];
  }
  param_3[9] = param_6;
  return param_3;
}

