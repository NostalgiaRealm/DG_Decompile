/*
 * FUN_101325d0 at 101325d0
 * undefined FUN_101325d0(void)
 * Address ranges: 101325d0-101325ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_101325d0(undefined1 *param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = param_2;
      puVar1 = puVar1 + 1;
    } while (puVar1 != param_1 + param_3);
    do {
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

