/*
 * FUN_1800acbe0 at 1800acbe0
 * undefined __fastcall FUN_1800acbe0(void)
 * Address ranges: 1800acbe0-1800acc26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800acbe0(void)

{
  WNDPROC pWVar1;
  
  pWVar1 = FUN_1800f80a0();
  if (pWVar1 != (WNDPROC)0x0) {
    _DAT_180111100 = *(undefined8 *)(pWVar1 + 0xd0);
    _DAT_180111108 = *(undefined8 *)(pWVar1 + 0xd8);
    PTR_DAT_180111110 = *(undefined **)(pWVar1 + 0xe0);
    _DAT_180111118 = *(undefined8 *)(pWVar1 + 0xe8);
    _DAT_180111120 = *(undefined8 *)(pWVar1 + 0xf0);
    FUN_1800f8148((undefined8 *)pWVar1);
  }
  return;
}

