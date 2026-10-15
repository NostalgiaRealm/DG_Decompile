/*
 * FUN_1801c47c0 at 1801c47c0
 * undefined FUN_1801c47c0(void)
 * Address ranges: 1801c47c0-1801c486f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801c47c0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 0x50) >> 1 & 1) == 0) {
      return 0x8876086c;
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      return 0x8876086c;
    }
    if (*(longlong *)(param_2 + 0x28) != param_1) {
      return 0x8876086c;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,0x8876086c);
    (*extraout_x11)(param_2);
    if (*(longlong *)(param_2 + 0x30) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_18010a318();
  }
  *(longlong *)(param_1 + 0x50) = param_2;
  *(undefined1 *)(param_1 + 0xc509) = 1;
  return 0;
}

