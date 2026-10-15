/*
 * FUN_100496b9 at 100496b9
 * undefined4 __fastcall FUN_100496b9(int param_1)
 * Address ranges: 100496b9-100496e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100496b9(int param_1)

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

