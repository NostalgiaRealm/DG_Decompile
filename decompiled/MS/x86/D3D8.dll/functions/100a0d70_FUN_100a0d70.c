/*
 * FUN_100a0d70 at 100a0d70
 * undefined __fastcall FUN_100a0d70(uint * param_1, int * param_2)
 * Address ranges: 100a0d70-100a0dd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100a0d70(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100a15c6(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_100a14fb(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_100a14fb(param_2,7);
  }
  return;
}

