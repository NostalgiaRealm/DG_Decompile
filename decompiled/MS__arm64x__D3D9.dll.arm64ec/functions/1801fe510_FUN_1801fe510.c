/*
 * FUN_1801fe510 at 1801fe510
 * undefined FUN_1801fe510(void)
 * Address ranges: 1801fe510-1801fe58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fe510(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *extraout_x11;
  
  if ((param_1 != 0) && (iVar1 = FUN_1801042d0(param_1 + 8), iVar1 == 0)) {
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar2 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(param_1 + 0xc),uVar2);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1);
  }
  return;
}

