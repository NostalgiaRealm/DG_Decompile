/*
 * FUN_1009130d at 1009130d
 * undefined __stdcall FUN_1009130d(void)
 * Address ranges: 1009130d-1009135b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009130d(void)

{
  uint uVar1;
  WNDPROC pWVar2;
  uint uVar3;
  
  pWVar2 = FUN_100cc325();
  if (pWVar2 == (WNDPROC)0x0) {
    return;
  }
  uVar1 = *(uint *)(pWVar2 + 0x58);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*(undefined ***)(*(int *)(pWVar2 + 0x54) + uVar3 * 4) == &PTR_PTR_100de964) {
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
  FUN_100cc3aa((undefined4 *)pWVar2);
  return;
}

