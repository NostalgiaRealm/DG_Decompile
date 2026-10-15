/*
 * FUN_18000cb28 at 18000cb28
 * undefined FUN_18000cb28(void)
 * Address ranges: 18000cb28-18000cba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cb28(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  longlong extraout_x11;
  
  func_0x000180107018(*(undefined4 *)(param_1 + 0x48));
  func_0x000180107140(extraout_x10 & 0xffffffff);
  func_0x0001801071f0(extraout_x10_00 & 0xffffffff);
  uVar1 = func_0x000180106dc0(extraout_x10_01 & 0xffffffff);
  lVar2 = func_0x00018012fa50(*(undefined8 *)(extraout_x11 + 8),*(undefined4 *)(extraout_x11 + 0x60)
                              ,*(undefined4 *)(extraout_x11 + 100),1,uVar1);
  *(undefined1 *)(lVar2 + 0x27) = 0;
  return;
}

