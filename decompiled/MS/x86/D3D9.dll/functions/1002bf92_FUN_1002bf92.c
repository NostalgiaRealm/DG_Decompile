/*
 * FUN_1002bf92 at 1002bf92
 * undefined __fastcall FUN_1002bf92(int * param_1)
 * Address ranges: 1002bf92-1002bfa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002bf92(int *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_1002bfa4(param_1);
  *(bool *)((int)param_1 + 0x27) = CONCAT31(extraout_var,cVar1) != 0;
  return;
}

