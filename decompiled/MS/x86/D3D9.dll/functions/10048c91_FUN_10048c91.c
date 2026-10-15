/*
 * FUN_10048c91 at 10048c91
 * undefined __cdecl FUN_10048c91(int * param_1)
 * Address ranges: 10048c91-10048cef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10048c91(int *param_1)

{
  LPVOID pvVar1;
  int local_260;
  int local_25c [148];
  int *local_c;
  undefined1 local_8;
  
  FUN_100cfed0(local_25c,0,0x250);
  local_c = &local_260;
  pvVar1 = (LPVOID)param_1[1];
  local_260 = param_1[2];
  local_8 = local_260 != 0;
  FUN_1004b168((void *)(*param_1 + 0xf708),&local_c);
  FUN_100cfd6c(pvVar1);
  return;
}

