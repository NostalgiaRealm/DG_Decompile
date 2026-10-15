/*
 * FUN_1800d8b90 at 1800d8b90
 * undefined FUN_1800d8b90(void)
 * Address ranges: 1800d8b90-1800d8c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d8b90(longlong *param_1)

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
        FUN_180001cf0(lVar2,0x28,*(undefined8 *)(lVar2 + -8),FUN_1800d8508);
        thunk_FUN_180102fc0(lVar2 + -8,*(longlong *)(lVar2 + -8) * 0x28 + 8);
      }
    }
    thunk_FUN_180102fc0(lVar1 + -8,*(longlong *)(lVar1 + -8) * 0x18 + 8);
  }
  return;
}

