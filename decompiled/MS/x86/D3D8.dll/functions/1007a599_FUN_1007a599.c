/*
 * FUN_1007a599 at 1007a599
 * undefined4 __stdcall FUN_1007a599(undefined4 param_1, int param_2)
 * Address ranges: 1007a599-1007a62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1007a599(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_10079be5();
    DeleteCriticalSection(DAT_100ba2e4);
    DAT_100ba2e4 = (LPCRITICAL_SECTION)0x0;
  }
  else if (param_2 == 1) {
    DAT_100ba2dc = param_1;
    DAT_100ba710 = param_1;
    DAT_100ba2e4 = (LPCRITICAL_SECTION)&DAT_100ba6e8;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_100ba6e8);
    _DAT_100ba700 = 0;
    _DAT_100ba704 = 0;
    DAT_100ba2d8 = &DAT_100ba6e8;
    _DAT_100ba708 = 0;
    DAT_100b9820 = 1;
    DAT_100b9824 = 1;
    _DAT_100b9828 = 1;
    PTR_DAT_100b982c = s__dgVoodoo__100b3204;
    _DAT_100b9830 = 1;
    _DAT_100b9834 = 0;
  }
  return 1;
}

