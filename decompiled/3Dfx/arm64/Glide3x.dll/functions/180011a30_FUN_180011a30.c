/*
 * FUN_180011a30 at 180011a30
 * undefined __cdecl FUN_180011a30(longlong param_1)
 * Address ranges: 180011a30-180011a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180011a30(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x35a0) + 0x98))(param_1 + 0x35a0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return;
}

