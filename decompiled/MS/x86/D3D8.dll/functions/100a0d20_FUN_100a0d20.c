/*
 * FUN_100a0d20 at 100a0d20
 * undefined __fastcall FUN_100a0d20(uint * param_1, int * param_2)
 * Address ranges: 100a0d20-100a0d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a0d20(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100a15c6(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_100a1925(param_2);
  }
  else if (iVar1 == 0x51) {
    FUN_100a1990(param_2);
  }
  return;
}

