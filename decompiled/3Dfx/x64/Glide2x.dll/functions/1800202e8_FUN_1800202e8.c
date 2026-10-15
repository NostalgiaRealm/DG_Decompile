/*
 * FUN_1800202e8 at 1800202e8
 * bool __fastcall FUN_1800202e8(undefined8 param_1, int param_2, int param_3)
 * Address ranges: 1800202e8-18002034e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800202e8(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 == 0) {
    if (param_2 == 0) {
      return true;
    }
    bVar1 = param_2 == 0xc;
  }
  else {
    if (param_3 == 1) {
      if (param_2 == 1) {
        return true;
      }
      if (param_2 != 0xd) {
        return false;
      }
      return true;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        return false;
      }
      if (param_3 != 4) {
        if (param_3 == 5) {
          return false;
        }
        if (param_3 == 6) {
          bVar1 = param_2 == 5;
        }
        else {
          if (param_3 != 7) {
            return false;
          }
          bVar1 = param_2 == 0xf;
        }
        return bVar1;
      }
      return false;
    }
    if (param_2 == 2) {
      return true;
    }
    bVar1 = param_2 == 0xe;
  }
  if (bVar1) {
    return true;
  }
  return false;
}

