/*
 * FUN_10057140 at 10057140
 * undefined __fastcall FUN_10057140(uint * param_1, int * param_2)
 * Address ranges: 10057140-100571a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10057140(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100576ba(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_10057663(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_10057663(param_2,7);
  }
  return;
}

