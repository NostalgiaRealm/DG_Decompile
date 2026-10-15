/*
 * FUN_1004ad4b at 1004ad4b
 * undefined __fastcall FUN_1004ad4b(uint * param_1, int * param_2)
 * Address ranges: 1004ad4b-1004adad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004ad4b(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004b3b4(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_1004b270(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_1004b270(param_2,7);
  }
  return;
}

