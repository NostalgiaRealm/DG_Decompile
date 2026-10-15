/*
 * FUN_10002652 at 10002652
 * char __fastcall FUN_10002652(uint param_1, int param_2)
 * Address ranges: 10002652-100026ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10002652(uint param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 1) {
    if (param_1 == 0) {
      return '\x01';
    }
    if (param_1 == 2) {
      return '\x01';
    }
    if (param_1 == 1) {
      return '\x01';
    }
    bVar1 = param_1 == 3;
    goto LAB_100026c3;
  }
  if (param_2 == 2) {
LAB_100026ae:
    bVar1 = param_1 == 0;
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) goto LAB_100026ae;
      if (param_2 != 5) {
        if (param_2 == 6) {
          return '\x01' - ((param_1 & 0xfffffc07) != 0);
        }
        if (param_2 == 7) {
          return '\x01' - ((param_1 & 0xfffffc07) != 0);
        }
        return '\0';
      }
    }
    if (param_1 == 0) {
      return '\x01';
    }
    if (param_1 == 2) {
      return '\x01';
    }
    if (param_1 == 1) {
      return '\x01';
    }
    bVar1 = param_1 == 3;
  }
  if (bVar1) {
    return '\x01';
  }
  bVar1 = param_1 == 0x200;
LAB_100026c3:
  if (bVar1) {
    return '\x01';
  }
  return '\0';
}

