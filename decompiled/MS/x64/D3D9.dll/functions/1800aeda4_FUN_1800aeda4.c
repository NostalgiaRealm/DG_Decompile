/*
 * FUN_1800aeda4 at 1800aeda4
 * undefined8 __fastcall FUN_1800aeda4(undefined8 param_1, int param_2)
 * Address ranges: 1800aeda4-1800aee69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800aeda4(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_1800ad4e4();
    DeleteCriticalSection(DAT_1801123a8);
    DAT_1801123a8 = (LPCRITICAL_SECTION)0x0;
  }
  else if (param_2 == 1) {
    DAT_1801123a8 = (LPCRITICAL_SECTION)&DAT_180112370;
    DAT_1801123b0 = param_1;
    DAT_1801123c0 = param_1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_180112370);
    _DAT_180112398 = 0;
    _DAT_18011239c = 0;
    PTR_DAT_180111110 = s__dgVoodoo__180103e88;
    _DAT_1801123a0 = 0;
    DAT_180111f68 = &DAT_180112370;
    _DAT_180111100 = 1;
    _DAT_180111104 = 1;
    _DAT_180111108 = 1;
    _DAT_180111118 = 1;
    _DAT_180111120 = 0;
  }
  return 1;
}

