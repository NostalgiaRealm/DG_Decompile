/*
 * FUN_1800ed018 at 1800ed018
 * undefined FUN_1800ed018(void)
 * Address ranges: 1800ed018-1800ed057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed018(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    FUN_1800f1570(*(undefined8 *)(param_1 + 0x1b500),param_2,1);
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return;
}

