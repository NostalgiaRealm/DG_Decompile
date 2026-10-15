/*
 * FUN_1003d0e4 at 1003d0e4
 * undefined __cdecl FUN_1003d0e4(int * param_1)
 * Address ranges: 1003d0e4-1003d144
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1003d0e4(int *param_1)

{
  LPVOID pvVar1;
  int *local_c0;
  undefined1 local_bc;
  int local_b8;
  int local_b4 [44];
  
  FUN_100ada8e(local_b4,0,0xac);
  local_c0 = &local_b8;
  pvVar1 = (LPVOID)param_1[1];
  local_b8 = param_1[2];
  local_bc = local_b8 != 0;
  FUN_1003f5c1((void *)(*param_1 + 0xda08),&local_c0);
  FUN_100ad48c(pvVar1);
  return;
}

