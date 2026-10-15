/*
 * FUN_18020c3b0 at 18020c3b0
 * undefined FUN_18020c3b0(void)
 * Address ranges: 18020c3b0-18020c45f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020c3b0(longlong param_1,ulonglong param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar2 = (*extraout_x11)();
  while (uVar2 < param_2) {
    uVar3 = (*(code *)puVar1)();
    (*extraout_x11_00)(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    thunk_FUN_1802238ec(*(undefined8 *)(param_1 + 0x20),0xffffffff);
    (*(code *)puVar1)();
    uVar2 = (*extraout_x11_01)();
  }
  return;
}

