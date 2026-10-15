/*
 * FUN_1800fb7d0 at 1800fb7d0
 * undefined8 __fastcall FUN_1800fb7d0(longlong param_1)
 * Address ranges: 1800fb7d0-1800fb7de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fb7d0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_1 + 8) - 1;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 < 0xfffffffffffffffe);
}

