/*
 * FUN_18005d9d0 at 18005d9d0
 * undefined8 __fastcall FUN_18005d9d0(longlong param_1)
 * Address ranges: 18005d9d0-18005d9de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005d9d0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(longlong *)(param_1 + 8) - 1;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 < 0xfffffffffffffffe);
}

