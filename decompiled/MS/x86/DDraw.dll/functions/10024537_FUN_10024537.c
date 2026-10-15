/*
 * FUN_10024537 at 10024537
 * undefined4 __fastcall FUN_10024537(int param_1)
 * Address ranges: 10024537-1002454a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10024537(int param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x108);
  }
  return 0;
}

