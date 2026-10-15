/*
 * FUN_1801bce80 at 1801bce80
 * undefined FUN_1801bce80(void)
 * Address ranges: 1801bce80-1801bcef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801bce80(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong extraout_x10;
  longlong extraout_x11;
  ulonglong uVar2;
  ulonglong extraout_x12;
  
  uVar2 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) &&
     (uVar1 = FUN_1801072a0(param_1 + -0xa0,param_3), uVar2 = extraout_x12, (uVar1 & 1) != 0)) {
    uVar2 = FUN_1801074b0(extraout_x11 + -0xa0,extraout_x10 & 0xffffffff);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2 & 0xffffffff;
}

