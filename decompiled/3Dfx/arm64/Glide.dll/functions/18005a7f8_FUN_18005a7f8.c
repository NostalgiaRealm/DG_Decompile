/*
 * FUN_18005a7f8 at 18005a7f8
 * undefined1 __cdecl FUN_18005a7f8(longlong param_1, undefined1 param_2)
 * Address ranges: 18005a7f8-18005a84b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18005a7f8(longlong param_1,undefined1 param_2)

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

