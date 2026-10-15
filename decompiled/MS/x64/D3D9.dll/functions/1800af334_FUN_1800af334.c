/*
 * FUN_1800af334 at 1800af334
 * undefined __fastcall FUN_1800af334(void)
 * Address ranges: 1800af334-1800af3a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af334(void)

{
  WNDPROC pWVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  pWVar1 = FUN_1800f80a0();
  if (pWVar1 != (WNDPROC)0x0) {
    uVar3 = *(uint *)(pWVar1 + 0x80);
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        iVar2 = (int)uVar4;
        if (*(undefined ***)(*(longlong *)(pWVar1 + 0x78) + uVar4 * 8) == &PTR_PTR_180111db0) {
          if (iVar2 != -1) {
            uVar5 = iVar2 + 1;
            if (uVar5 < uVar3) {
              do {
                uVar4 = (ulonglong)uVar5;
                uVar3 = uVar5 - 1;
                uVar5 = uVar5 + 1;
                *(undefined8 *)(*(longlong *)(pWVar1 + 0x78) + (ulonglong)uVar3 * 8) =
                     *(undefined8 *)(*(longlong *)(pWVar1 + 0x78) + uVar4 * 8);
              } while (uVar5 < *(uint *)(pWVar1 + 0x80));
            }
            *(int *)(pWVar1 + 0x80) = *(int *)(pWVar1 + 0x80) + -1;
          }
          break;
        }
        uVar4 = (ulonglong)(iVar2 + 1U);
      } while (iVar2 + 1U < uVar3);
    }
    FUN_1800f8148((undefined8 *)pWVar1);
  }
  return;
}

