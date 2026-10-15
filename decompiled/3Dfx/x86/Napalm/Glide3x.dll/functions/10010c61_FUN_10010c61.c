/*
 * FUN_10010c61 at 10010c61
 * bool __stdcall FUN_10010c61(int param_1, undefined4 param_2)
 * Address ranges: 10010c61-10010cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10010c61(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = false;
  switch(param_2) {
  case 0:
    if ((param_1 == 0) || (param_1 == 0xc)) {
      return true;
    }
    break;
  case 1:
    if (param_1 == 1) {
      return true;
    }
    if (param_1 == 0xd) {
      return true;
    }
    break;
  case 2:
    if (param_1 == 2) {
      return true;
    }
    if (param_1 == 0xe) {
      return true;
    }
    break;
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    return param_1 == 5;
  case 7:
    return param_1 == 0xf;
  case 8:
    bVar1 = param_1 == 8;
  default:
    goto switchD_10010c6e_default;
  }
  bVar1 = false;
switchD_10010c6e_default:
  return bVar1;
}

