/*
 * FUN_10004193 at 10004193
 * undefined __fastcall FUN_10004193(int * param_1)
 * Address ranges: 10004193-100041a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004193(int *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_100041a5(param_1);
  *(bool *)((int)param_1 + 0x27) = CONCAT31(extraout_var,cVar1) != 0;
  return;
}

