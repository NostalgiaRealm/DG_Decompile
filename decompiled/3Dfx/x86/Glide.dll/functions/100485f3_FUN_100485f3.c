/*
 * FUN_100485f3 at 100485f3
 * undefined __fastcall FUN_100485f3(uint * param_1, int * param_2)
 * Address ranges: 100485f3-10048655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100485f3(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10048c5c(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_10048b18(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_10048b18(param_2,7);
  }
  return;
}

