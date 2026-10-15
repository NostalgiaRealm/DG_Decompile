/*
 * FUN_100321e9 at 100321e9
 * int __fastcall FUN_100321e9(int param_1)
 * Address ranges: 100321d4-100321ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100321e9(int param_1)

{
  while ((param_1 != 0 && ((*(uint *)(*(int *)(param_1 + 4) + 200) >> 1 & 1) == 0))) {
    param_1 = *(int *)(param_1 + 0x110);
  }
  return param_1;
}

