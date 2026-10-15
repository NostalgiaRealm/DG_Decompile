/*
 * FUN_100380c0 at 100380c0
 * undefined FUN_100380c0(void)
 * Address ranges: 100380c0-1003814b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100380c0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  FUN_100196b8(param_1,*(int *)(param_1 + 0x2b2c) != 0,*(int *)(param_1 + 0x2b30) != 0,param_2,
               param_3,param_4,param_5);
  *(undefined1 *)(param_1 + 0x2b88) = param_2;
  *(undefined1 *)(param_1 + 0x2b89) = param_3;
  *(undefined1 *)(param_1 + 0x2b8a) = param_4;
  *(undefined1 *)(param_1 + 0x2b8b) = param_5;
  return;
}

