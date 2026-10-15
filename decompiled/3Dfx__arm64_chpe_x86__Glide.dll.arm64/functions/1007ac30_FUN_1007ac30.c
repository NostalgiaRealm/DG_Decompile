/*
 * FUN_1007ac30 at 1007ac30
 * undefined FUN_1007ac30(void)
 * Address ranges: 1007ac30-1007ac5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_1007ac30(undefined1 *param_1,undefined1 param_2,int param_3)

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

