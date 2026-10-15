/*
 * FUN_1004be11 at 1004be11
 * undefined4 __fastcall FUN_1004be11(int param_1)
 * Address ranges: 1004be11-1004be38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004be11(int param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 == 2) {
      return 1;
    }
    if (param_1 == 3) {
      uStack_4 = 2;
    }
    else {
      if (param_1 != 4) {
        return 0;
      }
      uStack_4 = 3;
    }
    return uStack_4;
  }
  return 0;
}

