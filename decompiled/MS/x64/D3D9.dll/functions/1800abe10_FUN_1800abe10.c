/*
 * FUN_1800abe10 at 1800abe10
 * undefined __fastcall FUN_1800abe10(longlong param_1, longlong param_2, undefined1 param_3)
 * Address ranges: 1800abe10-1800abe2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800abe10(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_1800aaccc(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar1 + 0x2c) = param_3;
  }
  return;
}

