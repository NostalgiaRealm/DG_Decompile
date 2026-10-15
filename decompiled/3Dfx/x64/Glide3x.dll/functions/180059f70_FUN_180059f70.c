/*
 * FUN_180059f70 at 180059f70
 * undefined1 __fastcall FUN_180059f70(longlong param_1, undefined1 param_2)
 * Address ranges: 180059f70-180059fac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180059f70(longlong param_1,undefined1 param_2)

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

