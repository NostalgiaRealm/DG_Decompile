/*
 * FUN_1800c08a0 at 1800c08a0
 * undefined4 __fastcall FUN_1800c08a0(longlong param_1)
 * Address ranges: 1800c08a0-1800c08d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c08a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 8) && (iVar1 != 9)) {
    if (iVar1 == 10) {
      return 8;
    }
    if (iVar1 != 0xb) {
      if (iVar1 == 0xc) {
        return 8;
      }
      return 0;
    }
  }
  return 4;
}

