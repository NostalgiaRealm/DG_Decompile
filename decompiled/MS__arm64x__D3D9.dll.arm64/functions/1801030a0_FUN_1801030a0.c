/*
 * FUN_1801030a0 at 1801030a0
 * undefined FUN_1801030a0(void)
 * Address ranges: 1801030a0-1801030d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801030a0(undefined8 *param_1,undefined8 *param_2)

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

