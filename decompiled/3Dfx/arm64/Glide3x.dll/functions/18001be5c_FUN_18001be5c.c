/*
 * FUN_18001be5c at 18001be5c
 * undefined __cdecl FUN_18001be5c(longlong param_1)
 * Address ranges: 18001be5c-18001beb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001be5c(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
  if ((*(char *)(lVar2 + 0x14c4) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x14b4) != DVar1)) {
    FUN_180038c00(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x12c0);
  }
  return;
}

