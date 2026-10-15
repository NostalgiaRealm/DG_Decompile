/*
 * FUN_10002956 at 10002956
 * bool __fastcall FUN_10002956(int param_1, int param_2)
 * Address ranges: 10002956-100029a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10002956(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_1 == param_2;
  if (param_1 == 0x15) {
    bVar1 = bVar1 || param_2 == 0x16;
  }
  else {
    if (param_1 == 0x16) {
      bVar2 = param_2 == 0x15;
    }
    else if (param_1 == 0x18) {
      bVar2 = param_2 == 0x19;
    }
    else if (param_1 == 0x19) {
      bVar2 = param_2 == 0x18;
    }
    else if (param_1 == 0x1a) {
      bVar2 = param_2 == 0x1e;
    }
    else {
      if (param_1 != 0x1e) {
        return bVar1;
      }
      bVar2 = param_2 == 0x1a;
    }
    bVar1 = (bool)(bVar1 | bVar2);
  }
  return bVar1;
}

