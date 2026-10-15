/*
 * FUN_1801ceef8 at 1801ceef8
 * undefined FUN_1801ceef8(void)
 * Address ranges: 1801ceef8-1801cef67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1801ceef8(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong extraout_x8;
  code *extraout_x11;
  
  if (*(char *)(param_1 + 0xc50b) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc506);
  }
  else {
    uVar1 = *(longlong *)(param_1 + 0x30) != 0;
    if ((bool)uVar1) {
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
      (*extraout_x11)(uVar2,extraout_x8 + 0x58);
    }
    *(undefined1 *)(param_1 + 0xc506) = uVar1;
    *(undefined1 *)(param_1 + 0xc50b) = 0;
  }
  return uVar1;
}

