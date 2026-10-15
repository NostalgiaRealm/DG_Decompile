/*
 * FUN_10048263 at 10048263
 * undefined __fastcall FUN_10048263(uint * param_1, int * param_2)
 * Address ranges: 10048263-100482c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10048263(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100488cc(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_10048788(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_10048788(param_2,7);
  }
  return;
}

