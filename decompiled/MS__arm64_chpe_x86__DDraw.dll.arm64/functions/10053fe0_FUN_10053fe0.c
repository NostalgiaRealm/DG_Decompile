/*
 * FUN_10053fe0 at 10053fe0
 * undefined FUN_10053fe0(void)
 * Address ranges: 10053fe0-1005402b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10053fe0(undefined8 param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong extraout_x10;
  int extraout_w11;
  undefined1 auStack_80 [128];
  
  uVar2 = 0x80070057;
  if ((param_2 != 0) &&
     (uVar1 = FUN_1004ca20(param_2,auStack_80), uVar2 = extraout_x10, (uVar1 & 1) != 0)) {
    uVar2 = FUN_100448a0(*(undefined4 *)(extraout_w11 + 4),auStack_80,param_3 & 0xffffffff);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2 & 0xffffffff;
}

