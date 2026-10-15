/*
 * FUN_100277c3 at 100277c3
 * undefined4 __stdcall FUN_100277c3(int param_1)
 * Address ranges: 100277c3-100277d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100277c3(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

