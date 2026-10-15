/*
 * FUN_1800f4530 at 1800f4530
 * undefined FUN_1800f4530(void)
 * Address ranges: 1800f4530-1800f45bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f4530(undefined4 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  int iVar1;
  undefined8 extraout_x10;
  
  iVar1 = func_0x000180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    FUN_1800f5b00(extraout_x10,4,0x40000a2,0x107000,param_3 & 0xffffffff,0x10);
  }
  else if (iVar1 == 0x51) {
    FUN_1800f5b00(extraout_x10,7,0x70060a2,0x307000,param_3 & 0xffffffff,param_4 & 0xffffffff,
                  param_5 & 0xffffffff,0x10,0);
  }
  return;
}

