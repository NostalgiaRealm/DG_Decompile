/*
 * FUN_18005d530 at 18005d530
 * undefined8 __fastcall FUN_18005d530(longlong param_1)
 * Address ranges: 18005d530-18005d53e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005d530(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_1 + 8) - 1;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 < 0xfffffffffffffffe);
}

