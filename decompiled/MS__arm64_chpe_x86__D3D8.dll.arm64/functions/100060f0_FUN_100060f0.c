/*
 * FUN_100060f0 at 100060f0
 * undefined FUN_100060f0(void)
 * Address ranges: 100060f0-10006167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100060f0(int param_1,uint param_2,ulonglong param_3,ulonglong param_4,int param_5,
                      ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong extraout_x11;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  
  uVar2 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + 0x4c)) && ((int)param_3 - 1U < 3)) &&
     (uVar1 = FUN_100033f0(param_1,param_3 & 0xffffffff), uVar2 = extraout_x11, (uVar1 & 1) != 0)) {
    uVar2 = FUN_10003a80(extraout_x13 & 0xffffffff,extraout_x12 & 0xffffffff,param_3 & 0xffffffff,
                         param_4 & 0xffffffff,param_5 != 0,param_6 & 0xffffffff,0,1);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2 & 0xffffffff;
}

