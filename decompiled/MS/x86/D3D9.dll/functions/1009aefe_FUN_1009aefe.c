/*
 * FUN_1009aefe at 1009aefe
 * undefined4 __stdcall FUN_1009aefe(int param_1, uint param_2, uint param_3, undefined4 * param_4)
 * Address ranges: 1009aefe-1009af4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009aefe(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((((param_2 < 0x10) && (param_3 != 0)) && (param_3 < 0xe)) && (param_4 != (undefined4 *)0x0)) {
    if ((&DAT_100de748)[param_3 * 8] == '\0') {
      *param_4 = 0;
    }
    else {
      uVar1 = 0;
      *param_4 = *(undefined4 *)(param_1 + 0x234 + (param_2 * 0xe + param_3) * 4);
    }
  }
  return uVar1;
}

