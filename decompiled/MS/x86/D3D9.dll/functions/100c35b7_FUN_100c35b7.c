/*
 * FUN_100c35b7 at 100c35b7
 * undefined __fastcall FUN_100c35b7(uint * param_1, int * param_2)
 * Address ranges: 100c35b7-100c3617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100c35b7(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100c3e1b(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_100c3d50(param_2,4);
  }
  else if (iVar1 == 0x51) {
    FUN_100c3d50(param_2,7);
  }
  return;
}

