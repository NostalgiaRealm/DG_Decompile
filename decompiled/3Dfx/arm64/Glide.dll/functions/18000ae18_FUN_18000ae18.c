/*
 * FUN_18000ae18 at 18000ae18
 * longlong __cdecl FUN_18000ae18(longlong param_1)
 * Address ranges: 18000ae18-18000ae9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000ae18(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint local_20 [4];
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40) + 1;
    *(longlong *)(param_1 + 0x40) = lVar1;
    if (lVar1 != *(longlong *)(param_1 + 0x48)) {
      return lVar1;
    }
    local_20[0] = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                      (*(longlong **)(param_1 + 0x38),0x1000,*(undefined8 *)(param_1 + 0x30),
                       local_20);
    if (iVar2 == 0) {
      *(bool *)(param_1 + 0x50) = local_20[0] == 0;
      lVar1 = 0;
      if (local_20[0] != 0) {
        lVar1 = *(longlong *)(param_1 + 0x30);
      }
      *(longlong *)(param_1 + 0x40) = lVar1;
      *(ulonglong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x30) + (ulonglong)local_20[0];
      return lVar1;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return 0;
}

