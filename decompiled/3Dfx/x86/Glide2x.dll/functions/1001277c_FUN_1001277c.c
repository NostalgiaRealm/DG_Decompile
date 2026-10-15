/*
 * FUN_1001277c at 1001277c
 * undefined * __stdcall FUN_1001277c(void)
 * Address ranges: 1001277c-1001282b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1001277c(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  _DAT_10059830 = &PTR_LAB_10053574;
  _DAT_10059834 = &PTR_FUN_10053564;
  _DAT_10059838 = &PTR_LAB_10053560;
  _DAT_1005983c = 0;
  _DAT_10059840 = 0;
  _DAT_10059844 = 0;
  _DAT_10059848 = 0;
  _DAT_1005984c = 0;
  _DAT_10059850 = 0;
  _DAT_10059854 = 0;
  _DAT_10059858 = 0;
  _DAT_1005985c = 0;
  _DAT_10059860 = 0;
  _DAT_10059864 = 0;
  _DAT_10059868 = 0;
  _DAT_1005986c = 0;
  DAT_10059870 = 0;
  FUN_10014bb4((undefined4 *)&DAT_1005988c);
  DAT_100598bc = (undefined1)extraout_EDX;
  puVar2 = &DAT_10059874;
  _DAT_100598ac = extraout_EDX;
  _DAT_100598b0 = extraout_EDX;
  _DAT_100598b4 = extraout_EDX;
  _DAT_100598b8 = extraout_EDX;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return &DAT_10059830;
}

