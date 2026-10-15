/*
 * FUN_1001bb9e at 1001bb9e
 * bool __stdcall FUN_1001bb9e(int param_1, undefined4 param_2)
 * Address ranges: 1001bb9e-1001bbf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1001bb9e(int param_1,undefined4 param_2)

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
    bVar1 = param_1 == 0xf;
  default:
    goto switchD_1001bbab_default;
  }
  bVar1 = false;
switchD_1001bbab_default:
  return bVar1;
}

