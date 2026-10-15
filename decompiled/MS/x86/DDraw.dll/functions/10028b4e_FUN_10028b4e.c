/*
 * FUN_10028b4e at 10028b4e
 * undefined4 __stdcall FUN_10028b4e(undefined4 param_1, int param_2)
 * Address ranges: 10028b4e-10028bd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10028b4e(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10023d71();
    DeleteCriticalSection(DAT_1006c254);
    DAT_1006c254 = (LPCRITICAL_SECTION)0x0;
  }
  else if (param_2 == 1) {
    DAT_1006c250 = param_1;
    DAT_1006c29c = param_1;
    DAT_1006c254 = (LPCRITICAL_SECTION)&DAT_1006c258;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1006c258);
    DAT_1006c230 = &DAT_1006c258;
    _DAT_1006c270 = 0;
    DAT_1006b440 = 1;
    DAT_1006b444 = 1;
    _DAT_1006b448 = 1;
    PTR_DAT_1006b44c = s__dgVoodoo__10064284;
    _DAT_1006b450 = 1;
    _DAT_1006b454 = 0;
  }
  return 1;
}

