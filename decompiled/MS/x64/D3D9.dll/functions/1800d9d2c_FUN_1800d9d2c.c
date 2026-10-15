/*
 * FUN_1800d9d2c at 1800d9d2c
 * undefined __fastcall FUN_1800d9d2c(undefined8 param_1, longlong param_2)
 * Address ranges: 1800d9d2c-1800d9dae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d9d2c(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0xdc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
    *(undefined8 *)(param_2 + 0xdc0) = 0;
  }
  if (*(longlong **)(param_2 + 0xdb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdb8) + 0x10))();
    *(undefined8 *)(param_2 + 0xdb8) = 0;
  }
  if (*(longlong **)(param_2 + 0xdd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdd0) + 0x10))();
    *(undefined8 *)(param_2 + 0xdd0) = 0;
  }
  if (*(longlong **)(param_2 + 0xdc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xdc8) + 0x10))();
    *(undefined8 *)(param_2 + 0xdc8) = 0;
  }
  return;
}

