/*
 * FUN_1801fb4c0 at 1801fb4c0
 * undefined FUN_1801fb4c0(void)
 * Address ranges: 1801fb4c0-1801fb52b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801fb4c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar2 = (*extraout_x11)();
  if (lVar2 != 0) {
    uVar3 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar3,param_3);
  }
  return lVar2 != 0;
}

