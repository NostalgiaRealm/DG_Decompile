/*
 * FUN_1801e5d38 at 1801e5d38
 * undefined FUN_1801e5d38(void)
 * Address ranges: 1801e5d38-1801e5dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e5d38(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar2;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = 0;
  if (*(short *)(param_1 + 0x3c) != 0) {
    do {
      (*(code *)puVar1)();
      (*extraout_x11)(param_1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0x3c));
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}

