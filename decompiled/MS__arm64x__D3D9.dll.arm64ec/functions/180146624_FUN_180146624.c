/*
 * FUN_180146624 at 180146624
 * undefined FUN_180146624(void)
 * Address ranges: 180146624-18014670f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180146624(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong unaff_x19;
  uint uVar4;
  longlong lVar5;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar4 = *(uint *)(unaff_x19 + 0x28);
  lVar5 = *(longlong *)(unaff_x19 + 0x18) + (ulonglong)uVar4 * 0x30;
  if (*(longlong *)(lVar5 + 0x20) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar2 = (*extraout_x11)();
    if (uVar2 < *(ulonglong *)(lVar5 + 0x28)) {
      lVar5 = *(longlong *)(unaff_x19 + 0x18) + (ulonglong)uVar4 * 0x30;
      uVar3 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x19 + 0x40));
      thunk_FUN_1802238ec(*(undefined8 *)(unaff_x19 + 0x40),0xffffffff);
    }
  }
  uVar4 = 0;
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    do {
      (*(code *)puVar1)();
      (*extraout_x11_01)();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(unaff_x19 + 0x20));
  }
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x18));
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  thunk_FUN_180223824(*(undefined8 *)(unaff_x19 + 0x40));
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_1802229d8();
  return;
}

