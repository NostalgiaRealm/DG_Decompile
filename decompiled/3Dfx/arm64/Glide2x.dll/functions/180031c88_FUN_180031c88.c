/*
 * FUN_180031c88 at 180031c88
 * undefined __cdecl FUN_180031c88(longlong param_1)
 * Address ranges: 180031c88-180031cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031c88(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 200);
  if ((*(char *)(lVar2 + 0x14c4) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x14b4) != DVar1)) {
    FUN_180043140(*(longlong *)(param_1 + 200) + 0x12c0);
  }
  return;
}

