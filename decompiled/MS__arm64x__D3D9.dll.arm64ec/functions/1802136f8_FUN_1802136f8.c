/*
 * FUN_1802136f8 at 1802136f8
 * undefined FUN_1802136f8(void)
 * Address ranges: 1802136f8-18021374f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1802136f8(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_w1;
  
  iVar1 = FUN_180213038(*param_1);
  if ((iVar1 - 0x40U < 0x11) && ((0x10003U >> (ulonglong)(iVar1 - 0x40U & 0x1f) & 1) != 0)) {
    uVar2 = extraout_w1 | 0x20010600;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_4 | param_3 << 0xe | 0x20020600;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

