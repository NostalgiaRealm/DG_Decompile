/*
 * FUN_10044138 at 10044138
 * undefined FUN_10044138(void)
 * Address ranges: 10044138-1004416b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10044138(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760250;
  if ((*(uint *)(param_1 + 0x1b8) >> 7 & 1) != 0) {
    uVar1 = 0x887601c2;
    if (*(char *)(param_1 + 8) == '\0') {
      uVar1 = 0x80004001;
    }
  }
  return uVar1;
}

