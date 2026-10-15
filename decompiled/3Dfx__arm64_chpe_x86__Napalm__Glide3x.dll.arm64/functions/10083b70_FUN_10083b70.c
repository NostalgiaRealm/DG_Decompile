/*
 * FUN_10083b70 at 10083b70
 * undefined FUN_10083b70(void)
 * Address ranges: 10083b70-10083b9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10083b70(undefined1 *param_1,undefined1 param_2,int param_3)

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

