/*
 * FUN_1800893e8 at 1800893e8
 * undefined FUN_1800893e8(void)
 * Address ranges: 1800893e8-18008942b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800893e8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1800e6028(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x110),0);
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  FUN_180083208(param_1 + 0x60,1,1);
  return;
}

