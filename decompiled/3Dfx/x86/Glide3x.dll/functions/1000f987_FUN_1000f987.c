/*
 * FUN_1000f987 at 1000f987
 * bool __stdcall FUN_1000f987(int param_1, undefined4 param_2)
 * Address ranges: 1000f987-1000f9db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000f987(int param_1,undefined4 param_2)

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
    goto switchD_1000f994_default;
  }
  bVar1 = false;
switchD_1000f994_default:
  return bVar1;
}

