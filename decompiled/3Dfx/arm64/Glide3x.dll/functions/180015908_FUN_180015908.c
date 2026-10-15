/*
 * FUN_180015908 at 180015908
 * bool __cdecl FUN_180015908(undefined8 param_1, int param_2, undefined4 param_3)
 * Address ranges: 180015908-180015963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180015908(undefined8 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = false;
  switch(param_3) {
  case 0:
    bVar1 = param_2 == 0 || param_2 == 0xc;
    break;
  case 1:
    bVar1 = param_2 == 1 || param_2 == 0xd;
    break;
  case 2:
    bVar1 = param_2 == 2 || param_2 == 0xe;
    break;
  case 3:
  case 4:
  case 5:
    bVar1 = false;
    break;
  case 6:
    bVar1 = param_2 == 5;
    break;
  case 7:
    bVar1 = param_2 == 0xf;
  }
  return bVar1;
}

