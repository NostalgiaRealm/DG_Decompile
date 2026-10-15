/*
 * FUN_180117f68 at 180117f68
 * undefined FUN_180117f68(void)
 * Address ranges: 180117f68-180117fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180117f68(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong extraout_x10;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x11_01;
  
  FUN_180107018(*(undefined4 *)(param_1 + 0x48));
  FUN_180107140(extraout_x11 & 0xffffffff);
  FUN_1801071f0(extraout_x11_00 & 0xffffffff);
  uVar1 = FUN_180106dc0(extraout_x11_01 & 0xffffffff);
  lVar2 = FUN_18012fa50(*(undefined8 *)(extraout_x10 + 8),*(undefined4 *)(extraout_x10 + 0x60),
                        *(undefined4 *)(extraout_x10 + 100),1,uVar1);
  *(undefined1 *)(lVar2 + 0x27) = 0;
  return;
}

