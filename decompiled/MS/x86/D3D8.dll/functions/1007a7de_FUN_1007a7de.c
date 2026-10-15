/*
 * FUN_1007a7de at 1007a7de
 * undefined __stdcall FUN_1007a7de(void)
 * Address ranges: 1007a7de-1007a82b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a7de(void)

{
  uint uVar1;
  WNDPROC pWVar2;
  uint uVar3;
  
  pWVar2 = FUN_100a9a56();
  if (pWVar2 == (WNDPROC)0x0) {
    return;
  }
  uVar1 = *(uint *)(pWVar2 + 0x58);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*(undefined ***)(*(int *)(pWVar2 + 0x54) + uVar3 * 4) == &PTR_PTR_100ba094) {
        if (uVar3 != 0xffffffff) {
          uVar3 = uVar3 + 1;
          if (uVar3 < uVar1) {
            do {
              *(undefined4 *)(*(int *)(pWVar2 + 0x54) + -4 + uVar3 * 4) =
                   *(undefined4 *)(*(int *)(pWVar2 + 0x54) + uVar3 * 4);
              uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint *)(pWVar2 + 0x58));
          }
          *(int *)(pWVar2 + 0x58) = *(int *)(pWVar2 + 0x58) + -1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_100a9adb((undefined4 *)pWVar2);
  return;
}

