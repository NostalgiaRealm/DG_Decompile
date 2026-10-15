/*
 * FUN_18000c968 at 18000c968
 * longlong __cdecl FUN_18000c968(longlong param_1)
 * Address ranges: 18000c968-18000ca07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000c968(longlong param_1)

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
      FUN_18000cae8(lVar1,0x28,*(longlong *)(lVar1 + -8),FUN_18000bf18);
      thunk_FUN_180060a18((LPVOID)(lVar1 + -8));
    }
  }
  thunk_FUN_180060a18((LPVOID)(param_1 + -8));
  return param_1 + -8;
}

