/*
 * FUN_1800abdf4 at 1800abdf4
 * undefined __fastcall FUN_1800abdf4(longlong param_1, longlong param_2, undefined4 param_3)
 * Address ranges: 1800abdf4-1800abe0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800abdf4(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_1800aaccc(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = param_3;
  }
  return;
}

