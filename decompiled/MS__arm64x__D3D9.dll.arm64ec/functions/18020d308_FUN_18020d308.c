/*
 * FUN_18020d308 at 18020d308
 * undefined FUN_18020d308(void)
 * Address ranges: 18020d308-18020d337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020d308(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 - 0x46U < 0xf) {
    uVar1 = 4;
  }
  else if (param_1 - 0x44U < 2) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

