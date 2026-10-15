/*
 * FUN_100910cc at 100910cc
 * undefined4 __stdcall FUN_100910cc(undefined4 param_1, int param_2)
 * Address ranges: 100910cc-10091162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100910cc(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10090081();
    DeleteCriticalSection(DAT_100deaa4);
    DAT_100deaa4 = (LPCRITICAL_SECTION)0x0;
  }
  else if (param_2 == 1) {
    DAT_100dea9c = param_1;
    DAT_100deed0 = param_1;
    DAT_100deaa4 = (LPCRITICAL_SECTION)&DAT_100deea8;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_100deea8);
    _DAT_100deec0 = 0;
    _DAT_100deec4 = 0;
    DAT_100dea98 = &DAT_100deea8;
    _DAT_100deec8 = 0;
    DAT_100ddf10 = 1;
    DAT_100ddf14 = 1;
    _DAT_100ddf18 = 1;
    PTR_DAT_100ddf1c = s__dgVoodoo__100d69b4;
    _DAT_100ddf20 = 1;
    _DAT_100ddf24 = 0;
  }
  return 1;
}

