/*
 * FUN_1800f4470 at 1800f4470
 * undefined FUN_1800f4470(void)
 * Address ranges: 1800f4470-1800f4513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f4470(undefined4 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  undefined8 extraout_x9;
  
  iVar1 = func_0x000180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    param_8 = param_8 & 0xf;
    FUN_1800f5b00(extraout_x9,4,0x4004058,0x107000,param_3 & 0xffffffff,
                  param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4);
  }
  else if (iVar1 == 0x51) {
    param_8 = param_8 & 0xf;
    FUN_1800f5b00(extraout_x9,7,0x7004058,0x307000,param_3 & 0xffffffff,param_4 & 0xffffffff,
                  param_5 & 0xffffffff,param_8 | (param_8 | (param_8 | param_8 << 4) << 4) << 4,0);
  }
  return;
}

