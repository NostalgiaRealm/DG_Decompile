/*
 * FUN_10005b31 at 10005b31
 * undefined __fastcall FUN_10005b31(undefined4 * param_1)
 * Address ranges: 10005b31-10005b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005b31(undefined4 *param_1)

{
  if (param_1[5] != -1) {
    (**(code **)(*(int *)*param_1 + 0x40))(param_1[1],*(undefined4 *)(param_1[2] + param_1[5] * 4));
    param_1[5] = 0xffffffff;
  }
  return;
}

