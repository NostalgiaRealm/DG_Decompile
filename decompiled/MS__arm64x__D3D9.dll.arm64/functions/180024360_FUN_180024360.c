/*
 * FUN_180024360 at 180024360
 * undefined FUN_180024360(void)
 * Address ranges: 180024360-18002443f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024360(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                    (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x98));
  if (cVar1 == '\0') {
    if (((*(char *)(param_1 + 0xed) != '\0') && (lVar2 = *(longlong *)(param_1 + 0xd0), lVar2 != 0))
       && (*(char *)(param_1 + 0xec) == '\0')) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
        thunk_FUN_180001218(lVar2,lVar3,
                            (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                            *(int *)(param_1 + 0x8c));
      }
      else {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x90) != 0) {
          do {
            thunk_FUN_180001218(lVar2,lVar3,
                                (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + (ulonglong)*(uint *)(param_1 + 0xe8);
            lVar2 = lVar2 + (ulonglong)*(uint *)(param_1 + 0xd8);
          } while (uVar4 < *(uint *)(param_1 + 0x90));
        }
      }
    }
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  *(undefined1 *)(param_1 + 0xee) = 0;
  return;
}

