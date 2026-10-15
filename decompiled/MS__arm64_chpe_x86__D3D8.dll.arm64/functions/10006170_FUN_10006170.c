/*
 * FUN_10006170 at 10006170
 * undefined FUN_10006170(void)
 * Address ranges: 10006170-100061e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10006170(int param_1,uint param_2,int param_3,ulonglong param_4,ulonglong param_5,
                      undefined4 param_6)

{
  ulonglong uVar1;
  ulonglong extraout_x11;
  ulonglong extraout_x12;
  undefined1 auVar2 [16];
  
  param_4 = param_4 & 0xffffffff;
  param_5 = param_5 & 0xffffffff;
  uVar1 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + 0x4c)) && (param_3 - 1U < 3)) &&
     (auVar2 = FUN_100033f0(param_1,param_3,param_4,param_5), uVar1 = extraout_x11,
     (auVar2._0_8_ & 1) != 0)) {
    uVar1 = FUN_10002a88(extraout_x12 & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_4 & 0xffffffff,
                         param_5 & 0xffffffff,param_6);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1 & 0xffffffff;
}

