/*
 * FUN_18019a0d0 at 18019a0d0
 * undefined FUN_18019a0d0(void)
 * Address ranges: 18019a0d0-18019a15b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019a0d0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar2 = (*extraout_x11)();
  if ((lVar2 == 0) || (uVar3 = FUN_180199fb8(param_1), (uVar3 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(param_1,param_2,param_3);
    uVar4 = 1;
  }
  return uVar4;
}

