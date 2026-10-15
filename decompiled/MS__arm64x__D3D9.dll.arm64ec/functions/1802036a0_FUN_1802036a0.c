/*
 * FUN_1802036a0 at 1802036a0
 * undefined FUN_1802036a0(void)
 * Address ranges: 1802036a0-180203713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1802036a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  lVar4 = 0;
  if (*(uint *)(param_1 + 0x650) != 0) {
    uVar2 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x648) + uVar2 * 8);
      if (*plVar3 == param_2) {
        lVar4 = plVar3[0x1ae];
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x650));
  }
  thunk_FUN_18022370c(param_1 + 0x620);
  return lVar4;
}

