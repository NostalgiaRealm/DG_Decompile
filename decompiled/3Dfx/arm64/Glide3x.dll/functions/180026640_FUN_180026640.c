/*
 * FUN_180026640 at 180026640
 * undefined __cdecl FUN_180026640(longlong param_1)
 * Address ranges: 180026640-180026693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026640(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 200);
  if ((*(char *)(lVar2 + 0x14c4) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x14b4) != DVar1)) {
    FUN_180038c00(*(longlong *)(param_1 + 200) + 0x12c0);
  }
  return;
}

