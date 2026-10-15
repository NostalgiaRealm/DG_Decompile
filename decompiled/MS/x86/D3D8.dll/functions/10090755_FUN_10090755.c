/*
 * FUN_10090755 at 10090755
 * undefined4 __fastcall FUN_10090755(int param_1)
 * Address ranges: 10090755-1009077c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10090755(int param_1)

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

