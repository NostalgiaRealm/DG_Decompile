/*
 * FUN_180028364 at 180028364
 * undefined __cdecl FUN_180028364(longlong param_1)
 * Address ranges: 180028364-1800283bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028364(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  if ((*(char *)(lVar2 + 0x14c4) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x14b4) != DVar1)) {
    FUN_180043140(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x12c0);
  }
  return;
}

