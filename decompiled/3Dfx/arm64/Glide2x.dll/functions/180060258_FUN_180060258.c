/*
 * FUN_180060258 at 180060258
 * undefined __cdecl FUN_180060258(undefined8 * param_1, undefined8 * param_2)
 * Address ranges: 180060258-18006028f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060258(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  while (param_1 < param_2) {
    puVar2 = param_1 + 1;
    pcVar1 = (code *)*param_1;
    param_1 = puVar2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  return;
}

