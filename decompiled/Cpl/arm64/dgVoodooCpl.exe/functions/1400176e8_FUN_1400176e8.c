/*
 * FUN_1400176e8 at 1400176e8
 * longlong __cdecl FUN_1400176e8(longlong param_1)
 * Address ranges: 1400176e8-140017787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1400176e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + -8);
  lVar3 = param_1 + lVar2 * 0x18;
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar3 + -0x10);
    lVar2 = lVar2 + -1;
    lVar3 = lVar3 + -0x18;
    if (lVar1 != 0) {
      FUN_140013b88(lVar1,0x28,*(longlong *)(lVar1 + -8),FUN_140016ca8);
      thunk_FUN_140024830((LPVOID)(lVar1 + -8));
    }
  }
  thunk_FUN_140024830((LPVOID)(param_1 + -8));
  return param_1 + -8;
}

