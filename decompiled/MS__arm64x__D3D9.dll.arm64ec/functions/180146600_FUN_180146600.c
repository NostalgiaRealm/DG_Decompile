/*
 * FUN_180146600 at 180146600
 * undefined FUN_180146600(void)
 * Address ranges: 180146600-180146623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180146600(undefined8 *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_180239150;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(int *)(param_1 + 4) != 0) {
    uVar4 = *(uint *)(param_1 + 5);
    lVar5 = param_1[3] + (ulonglong)uVar4 * 0x30;
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar2 = (*extraout_x11)();
      if (uVar2 < *(ulonglong *)(lVar5 + 0x28)) {
        lVar5 = param_1[3] + (ulonglong)uVar4 * 0x30;
        uVar3 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)(uVar3,*(undefined8 *)(lVar5 + 0x28),param_1[8]);
        thunk_FUN_1802238ec(param_1[8],0xffffffff);
      }
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        (*(code *)puVar1)();
        (*extraout_x11_01)();
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 4));
    }
    FUN_1802229d8(param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    thunk_FUN_180223824(param_1[8]);
    param_1[8] = 0;
  }
  FUN_1802229d8(param_1[3]);
  FUN_1802229d8(param_1,0x48);
  return param_1;
}

