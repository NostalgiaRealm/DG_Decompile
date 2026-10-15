/*
 * FUN_180063dd0 at 180063dd0
 * undefined __cdecl FUN_180063dd0(undefined8 * param_1, undefined8 * param_2)
 * Address ranges: 180063dd0-180063e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063dd0(undefined8 *param_1,undefined8 *param_2)

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

