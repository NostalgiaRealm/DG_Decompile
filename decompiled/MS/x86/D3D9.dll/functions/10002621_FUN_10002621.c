/*
 * FUN_10002621 at 10002621
 * undefined4 __fastcall FUN_10002621(int param_1)
 * Address ranges: 10002621-1000266a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002621(int param_1)

{
  bool bVar1;
  
  if (param_1 < 0x3259555a) {
    if (param_1 == 0x32595559) {
      return 1;
    }
    if (param_1 == 0x31495441) {
      return 4;
    }
    if (param_1 == 0x31545844) {
      return 4;
    }
    if (param_1 == 0x32495441) {
      return 4;
    }
    bVar1 = param_1 == 0x32545844;
  }
  else {
    if (param_1 == 0x33545844) {
      return 4;
    }
    if (param_1 == 0x34545844) {
      return 4;
    }
    bVar1 = param_1 == 0x35545844;
  }
  if (bVar1) {
    return 4;
  }
  return 1;
}

