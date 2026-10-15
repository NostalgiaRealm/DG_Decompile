/*
 * FUN_1801f51d8 at 1801f51d8
 * undefined FUN_1801f51d8(void)
 * Address ranges: 1801f51d8-1801f5277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801f51d8(longlong param_1)

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
      FUN_180105ef0(lVar1,0x28,*(undefined8 *)(lVar1 + -8),FUN_1801f4898);
      FUN_1802229d8(lVar1 + -8,*(longlong *)(lVar1 + -8) * 0x28 + 8);
    }
  }
  FUN_1802229d8(param_1 + -8,*(longlong *)(param_1 + -8) * 0x18 + 8);
  return param_1 + -8;
}

