/*
 * FUN_18004976c at 18004976c
 * undefined __cdecl FUN_18004976c(longlong param_1, ulonglong param_2)
 * Address ranges: 18004976c-1800497d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004976c(longlong param_1,ulonglong param_2)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  if ((*(char *)(lVar2 + 0x171c) != '\0') &&
     (DVar1 = GetCurrentThreadId(), *(DWORD *)(lVar2 + 0x170c) != DVar1)) {
    FUN_180043f90(lVar2 + 0x1518);
  }
  FUN_18004baf0(*(longlong *)(lVar2 + 0x1760) + 8,0);
  FUN_180044bd0(*(longlong *)(*(longlong *)(lVar2 + 0x1760) + 0xb10),
                *(ulonglong *)(*(longlong *)(lVar2 + 0x1760) + 0xb80));
  return;
}

