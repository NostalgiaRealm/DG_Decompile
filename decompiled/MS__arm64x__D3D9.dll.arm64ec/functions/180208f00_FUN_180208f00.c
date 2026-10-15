/*
 * FUN_180208f00 at 180208f00
 * undefined FUN_180208f00(void)
 * Address ranges: 180208f00-180208f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208f00(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *extraout_x11;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 8;
  if (param_3 != *(longlong *)(lVar1 + 0x68)) {
    FUN_180206ff8();
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,param_2 & 0xffffffff,param_3);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(lVar1 + 0x68) = param_3;
  }
  return;
}

