/*
 * FUN_1802002e0 at 1802002e0
 * undefined FUN_1802002e0(void)
 * Address ranges: 1802002e0-18020039b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1802002e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  
  lVar1 = param_1 + (ulonglong)param_2 * 0x28;
  iVar2 = *(int *)(lVar1 + 0x28) + -1;
  *(int *)(lVar1 + 0x28) = iVar2;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar2 == 0) {
    param_1 = param_1 + (ulonglong)param_2 * 0x18c0;
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)();
      *(undefined8 *)(param_1 + 0x6c0) = 0;
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_00)();
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      (*(code *)puVar3)(0x180224000);
      (*extraout_x11_01)();
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

