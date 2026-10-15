/*
 * FUN_1800291b0 at 1800291b0
 * undefined __cdecl FUN_1800291b0(longlong param_1)
 * Address ranges: 1800291b0-1800291b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800291b0(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  if ((*(char *)(lVar2 + 0x14c4) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x14b4) != DVar1)) {
    FUN_180043f90(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x12c0);
  }
  return;
}

