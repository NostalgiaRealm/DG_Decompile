/*
 * FUN_100d15a0 at 100d15a0
 * undefined FUN_100d15a0(void)
 * Address ranges: 100d15a0-100d1657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100d15a0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_100cfee0();
    (*(code *)PTR_FUN_1016c06c)(DAT_10175b54);
    DAT_10175b54 = (undefined *)0x0;
  }
  else if (param_2 == 1) {
    DAT_10175b54 = &DAT_10170f40;
    DAT_10175b50 = param_1;
    DAT_10175c54 = param_1;
    (*(code *)PTR_FUN_1016c0bc)(&DAT_10170f40);
    DAT_10170f58 = 0;
    DAT_10170f5c = 0;
    DAT_10170f60 = 0;
    DAT_10170b04 = &DAT_10170f40;
    DAT_101701e0 = 0x100000001;
    DAT_101701e8 = 1;
    PTR_DAT_101701ec = s__dgVoodoo__10162da8;
    DAT_101701f0 = 1;
  }
  return 1;
}

