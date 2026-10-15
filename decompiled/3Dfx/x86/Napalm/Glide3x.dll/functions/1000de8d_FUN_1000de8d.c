/*
 * FUN_1000de8d at 1000de8d
 * undefined4 * __fastcall FUN_1000de8d(uint param_1, uint param_2, undefined4 * param_3, undefined4 param_4)
 * Address ranges: 1000de8d-1000defd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1000de8d(uint param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  param_3[1] = 0;
  param_3[3] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  *param_3 = 0xe;
  param_3[2] = 0xb;
  param_3[4] = (uint)(byte)(&DAT_10057a04)[param_2 & 7];
  param_3[5] = (uint)(7 < (int)param_2);
  if (param_1 < 0x11) {
    param_3[6] = (uint)(byte)(&DAT_10057a34)[param_1];
    param_3[1] = (uint)(byte)(&DAT_10057a20)[param_1];
    param_3[3] = (uint)(byte)(&DAT_10057a0c)[param_1];
  }
  param_3[9] = param_4;
  return param_3;
}

