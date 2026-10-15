/*
 * FUN_100029cf at 100029cf
 * undefined4 __stdcall FUN_100029cf(void)
 * Address ranges: 100029cf-10002a10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100029cf(void)

{
  int iVar1;
  
  if (*(int *)(DAT_1006c210 + 0x93f) == 0) {
    iVar1 = *(int *)(DAT_1006c210 + 0x836);
    if (iVar1 == 0) {
      return 0x1c;
    }
    if (iVar1 == 2) {
      return 0x16;
    }
    iVar1 = iVar1 + -3;
    if (iVar1 == 0) {
      return 0x16;
    }
  }
  else {
    iVar1 = *(int *)(DAT_1006c210 + 0x93f) + -2;
    if (iVar1 == 0) {
      return 0x15;
    }
  }
  if (iVar1 == 1) {
    return 0x16;
  }
  return 6;
}

