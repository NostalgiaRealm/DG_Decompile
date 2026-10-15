/*
 * FUN_180056610 at 180056610
 * undefined __cdecl FUN_180056610(int * param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5, undefined8 param_6, ulonglong param_7, undefined8 param_8)
 * Address ranges: 180056610-18005669b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056610(int *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,ulonglong param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *extraout_x10;
  
  uVar2 = FUN_180056fa8(*param_1);
  uVar1 = (int)uVar2 - 0x40;
  if ((uVar1 < 0x11) && ((0x10003U >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) {
    FUN_180056d68(extraout_x10,4,0x40000a2,0x107000,param_3 & 0xffffffff,param_7 & 0xffffffff,
                  param_7,param_8);
  }
  else if ((int)uVar2 == 0x51) {
    FUN_180056d68(extraout_x10,7,0x70060a2,0x307000,param_3 & 0xffffffff,param_4 & 0xffffffff,
                  param_5 & 0xffffffff,param_7 & 0xffffffff);
  }
  return;
}

