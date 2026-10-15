/*
 * FUN_18000ba58 at 18000ba58
 * longlong __cdecl FUN_18000ba58(longlong param_1)
 * Address ranges: 18000ba58-18000baf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000ba58(longlong param_1)

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
      FUN_18000bbd8(lVar1,0x28,*(longlong *)(lVar1 + -8),FUN_18000b008);
      thunk_FUN_18005fbc8((LPVOID)(lVar1 + -8));
    }
  }
  thunk_FUN_18005fbc8((LPVOID)(param_1 + -8));
  return param_1 + -8;
}

