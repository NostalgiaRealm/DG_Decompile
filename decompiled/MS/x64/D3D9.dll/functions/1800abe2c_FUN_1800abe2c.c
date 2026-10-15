/*
 * FUN_1800abe2c at 1800abe2c
 * undefined __fastcall FUN_1800abe2c(longlong param_1, longlong param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800abe2c-1800abe56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800abe2c(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_1800aaccc(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x24) = param_3;
    *(undefined4 *)(puVar1 + 5) = param_4;
  }
  return;
}

