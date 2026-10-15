/*
 * FUN_18000c6e0 at 18000c6e0
 * undefined __cdecl FUN_18000c6e0(longlong * param_1)
 * Address ranges: 18000c6e0-18000c77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000c6e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
    lVar4 = lVar1 + lVar3 * 0x18;
    while (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar4 + -0x10);
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -0x18;
      if (lVar2 != 0) {
        FUN_18000cae8(lVar2,0x28,*(longlong *)(lVar2 + -8),FUN_18000bf18);
        thunk_FUN_180060a18((LPVOID)(lVar2 + -8));
      }
    }
    thunk_FUN_180060a18((LPVOID)(lVar1 + -8));
  }
  return;
}

