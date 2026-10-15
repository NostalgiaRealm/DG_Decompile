/*
 * FUN_100559d0 at 100559d0
 * undefined FUN_100559d0(void)
 * Address ranges: 100559d0-100559e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100559d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(param_1 + 0x3ac) == 0xc000) {
    uVar1 = 6;
  }
  return uVar1;
}

