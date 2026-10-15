/*
 * FUN_180057e0c at 180057e0c
 * undefined1 __fastcall FUN_180057e0c(longlong param_1, undefined1 param_2)
 * Address ranges: 180057e0c-180057e48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180057e0c(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b500);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
  uVar1 = *(undefined1 *)(lVar2 + 0x50);
  *(undefined1 *)(lVar2 + 0x50) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
  return uVar1;
}

