/*
 * FUN_180212360 at 180212360
 * undefined FUN_180212360(void)
 * Address ranges: 180212360-18021249b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180212360(longlong param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint uVar5;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar5 = *(uint *)(param_1 + 0x20);
    lVar4 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 0x30;
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar2 = (*extraout_x11)();
      if (uVar2 < *(ulonglong *)(lVar4 + 0x28)) {
        lVar4 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 0x30;
        uVar3 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(uVar3,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(param_1 + 0x30));
        thunk_FUN_1802238ec(*(undefined8 *)(param_1 + 0x30),0xffffffff);
      }
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        (*(code *)puVar1)();
        (*extraout_x11_01)();
        (*(code *)puVar1)();
        (*extraout_x11_02)();
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_180223824(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
  return;
}

