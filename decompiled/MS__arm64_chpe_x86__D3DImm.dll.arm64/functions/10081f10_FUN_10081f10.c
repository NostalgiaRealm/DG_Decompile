/*
 * FUN_10081f10 at 10081f10
 * undefined FUN_10081f10(void)
 * Address ranges: 10081f10-10081f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10081f10(undefined1 *param_1,undefined1 param_2,int param_3)

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

