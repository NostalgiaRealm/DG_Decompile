/*
 * FUN_180024d10 at 180024d10
 * undefined FUN_180024d10(void)
 * Address ranges: 180024d10-180024dcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024d10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  if (((*(char *)(param_1 + 0xed) != '\0') && (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != 0))
     && (*(char *)(param_1 + 0xec) == '\0')) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
      thunk_FUN_180001218(lVar1,lVar2,
                          (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                          *(int *)(param_1 + 0x8c));
    }
    else {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x90) != 0) {
        do {
          thunk_FUN_180001218(lVar1,lVar2,
                              (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + (ulonglong)*(uint *)(param_1 + 0xe8);
          lVar1 = lVar1 + (ulonglong)*(uint *)(param_1 + 0xd8);
        } while (uVar3 < *(uint *)(param_1 + 0x90));
      }
    }
  }
  *(undefined1 *)(param_1 + 0xed) = 0;
  return;
}

