/*
 * _grDisable@4 at 180002130
 * undefined __fastcall _grDisable@4(int param_1)
 * Address ranges: 180002130-180002190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisable_4(int param_1)

{
  bool bVar1;
  uint uVar2;
  WNDPROC pWVar3;
  
                    /* 0x2130  25  _grDisable@4
                       0x2130  125  grDisable */
  pWVar3 = (WNDPROC)FUN_1800069ac();
  bVar1 = FUN_180006a64((longlong)pWVar3);
  if (bVar1) {
    if (param_1 == 4) {
      pWVar3[0x98] = (code)0x0;
    }
    else if (param_1 == 6) {
      uVar2 = FUN_1800079d4(pWVar3);
      if ((&DAT_18006d299)[(ulonglong)uVar2 * 0x20] != '\0') {
        FUN_180006b04((longlong)pWVar3);
      }
    }
  }
  return;
}

