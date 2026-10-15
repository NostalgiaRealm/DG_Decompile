/*
 * FUN_1801c3d00 at 1801c3d00
 * undefined FUN_1801c3d00(void)
 * Address ranges: 1801c3d00-1801c3d8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1801c3d00(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *extraout_x11;
  
  if (*(char *)(param_1 + 0xc50c) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc507);
  }
  else {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(param_1 + 0x730) != 0) {
        thunk_FUN_180223d24(param_1 + 0x6f68);
      }
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar2,param_1 + 0x6f68);
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xc507) = uVar1;
    *(undefined1 *)(param_1 + 0xc50c) = 0;
  }
  return uVar1;
}

