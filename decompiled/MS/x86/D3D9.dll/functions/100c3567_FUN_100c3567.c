/*
 * FUN_100c3567 at 100c3567
 * undefined __fastcall FUN_100c3567(uint * param_1, int * param_2)
 * Address ranges: 100c3567-100c35b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c3567(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100c3e1b(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_100c417a(param_2);
  }
  else if (iVar1 == 0x51) {
    FUN_100c41e5(param_2);
  }
  return;
}

