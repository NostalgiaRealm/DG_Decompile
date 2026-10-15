/*
 * FUN_1800240b8 at 1800240b8
 * undefined FUN_1800240b8(void)
 * Address ranges: 1800240b8-1800240ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800240b8(undefined8 *param_1)

{
  if (*(uint *)(param_1 + 4) != 0xffffffff) {
    (**(code **)(*(longlong *)*param_1 + 0x80))
              ((longlong *)*param_1,param_1[1],
               *(undefined8 *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 4) * 8));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}

