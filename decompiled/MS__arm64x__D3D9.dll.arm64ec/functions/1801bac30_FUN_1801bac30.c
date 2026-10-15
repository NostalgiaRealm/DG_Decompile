/*
 * FUN_1801bac30 at 1801bac30
 * undefined FUN_1801bac30(void)
 * Address ranges: 1801bac30-1801baca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801bac30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  lVar3 = (*extraout_x11)(uVar2,*(undefined4 *)(extraout_x8 + 0x28));
  if (lVar3 != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar2,param_2);
  }
  return lVar3 != 0;
}

