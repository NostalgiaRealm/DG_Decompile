/*
 * FUN_10068cb2 at 10068cb2
 * undefined4 * __stdcall FUN_10068cb2(int param_1)
 * Address ranges: 10068cb2-10068ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10068cb2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_100d2508;
  if (param_1 == 2) {
    puVar1 = (undefined4 *)&DAT_100d2538;
  }
  else if (param_1 == 3) {
    puVar1 = (undefined4 *)&DAT_100d2528;
  }
  else if (param_1 == 4) {
    puVar1 = (undefined4 *)&DAT_100d2518;
  }
  return puVar1;
}

