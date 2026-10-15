/*
 * FUN_10012ace at 10012ace
 * undefined * __stdcall FUN_10012ace(void)
 * Address ranges: 10012ace-10012b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10012ace(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  _DAT_10059860 = &PTR_LAB_10053574;
  _DAT_10059864 = &PTR_FUN_10053564;
  _DAT_10059868 = &PTR_LAB_10053560;
  _DAT_1005986c = 0;
  _DAT_10059870 = 0;
  _DAT_10059874 = 0;
  _DAT_10059878 = 0;
  _DAT_1005987c = 0;
  _DAT_10059880 = 0;
  _DAT_10059884 = 0;
  _DAT_10059888 = 0;
  _DAT_1005988c = 0;
  _DAT_10059890 = 0;
  _DAT_10059894 = 0;
  _DAT_10059898 = 0;
  _DAT_1005989c = 0;
  DAT_100598a0 = 0;
  FUN_10014f42((undefined4 *)&DAT_100598bc);
  DAT_100598ec = (undefined1)extraout_EDX;
  puVar2 = &DAT_100598a4;
  _DAT_100598dc = extraout_EDX;
  _DAT_100598e0 = extraout_EDX;
  _DAT_100598e4 = extraout_EDX;
  _DAT_100598e8 = extraout_EDX;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return &DAT_10059860;
}

