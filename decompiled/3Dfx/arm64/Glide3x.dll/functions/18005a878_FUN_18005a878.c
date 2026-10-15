/*
 * FUN_18005a878 at 18005a878
 * undefined8 __cdecl FUN_18005a878(int param_1)
 * Address ranges: 18005a878-18005a8db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005a878(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 - 0x50U & 0xfffcffff) == 0 && param_1 != 0x30050) {
    uVar1 = 0x50;
  }
  else if ((param_1 - 0x51U & 0xfffcffff) == 0 && param_1 != 0x30051) {
    uVar1 = 0x51;
  }
  else if ((param_1 - 0x40U & 0xfffeffff) == 0) {
    uVar1 = 0x40;
  }
  else if (param_1 == 0x41) {
    uVar1 = 0x41;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

