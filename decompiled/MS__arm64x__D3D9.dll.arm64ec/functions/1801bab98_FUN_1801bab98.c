/*
 * FUN_1801bab98 at 1801bab98
 * undefined FUN_1801bab98(void)
 * Address ranges: 1801bab98-1801bac1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801bab98(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  iVar1 = (*extraout_x11)(uVar2,*(undefined4 *)(extraout_x8 + 0x28));
  if (iVar1 == -0x7785fffb) {
    uVar2 = 2;
  }
  else if (iVar1 == -0x7785fffa) {
    uVar2 = 1;
  }
  else if (iVar1 == -0x7785fff9) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

