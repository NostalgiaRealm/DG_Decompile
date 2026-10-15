/*
 * _grEnable@4 at 18000206c
 * undefined __fastcall _grEnable@4(int param_1)
 * Address ranges: 18000206c-18000212c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grEnable_4(int param_1)

{
  bool bVar1;
  uint uVar2;
  WNDPROC pWVar3;
  longlong lVar4;
  int iVar5;
  
                    /* 0x206c  33  _grEnable@4
                       0x206c  133  grEnable */
  pWVar3 = (WNDPROC)FUN_1800069ac();
  bVar1 = FUN_180006a64((longlong)pWVar3);
  if (bVar1) {
    if (param_1 == 4) {
      pWVar3[0x98] = (code)0x1;
    }
    else if ((((param_1 == 6) &&
              (uVar2 = FUN_1800079d4(pWVar3), (&DAT_18006d299)[(ulonglong)uVar2 * 0x20] != '\0')) &&
             (*(longlong *)(pWVar3 + 0x18) != 0)) &&
            (iVar5 = 0, 0 < *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x833))) {
      do {
        lVar4 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(longlong *)(pWVar3 + 0x18) + 0x330 + lVar4 * 0x4e8) = 0;
        *(int *)(*(longlong *)(pWVar3 + 0x18) + 0x334 + lVar4 * 0x4e8) =
             *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x833) *
             *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x82f);
      } while (iVar5 < *(int *)(*(longlong *)(pWVar3 + 0x30) + 0x833));
    }
  }
  return;
}

