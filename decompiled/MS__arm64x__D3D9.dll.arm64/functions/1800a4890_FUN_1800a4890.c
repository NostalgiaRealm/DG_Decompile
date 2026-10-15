/*
 * FUN_1800a4890 at 1800a4890
 * undefined FUN_1800a4890(void)
 * Address ranges: 1800a4890-1800a4907
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4890(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong extraout_x10;
  ulonglong extraout_x11;
  longlong extraout_x12;
  
  uVar2 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) &&
     (uVar1 = FUN_180002178(param_1 + -0xa0,param_3), uVar2 = extraout_x10, (uVar1 & 1) != 0)) {
    uVar2 = FUN_1800022a8(extraout_x12 + -0xa0,extraout_x11 & 0xffffffff);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2 & 0xffffffff;
}

