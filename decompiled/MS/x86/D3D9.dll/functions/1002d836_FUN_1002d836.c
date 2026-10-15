/*
 * FUN_1002d836 at 1002d836
 * undefined __fastcall FUN_1002d836(undefined4 * param_1)
 * Address ranges: 1002d836-1002d859
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d836(undefined4 *param_1)

{
  if (param_1[5] != -1) {
    (**(code **)(*(int *)*param_1 + 0x40))(param_1[1],*(undefined4 *)(param_1[2] + param_1[5] * 4));
    param_1[5] = 0xffffffff;
  }
  return;
}

