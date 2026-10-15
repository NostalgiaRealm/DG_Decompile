/*
 * FUN_100ff690 at 100ff690
 * undefined FUN_100ff690(void)
 * Address ranges: 100ff690-100ff6bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_100ff690(undefined1 *param_1,undefined1 param_2,int param_3)

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

