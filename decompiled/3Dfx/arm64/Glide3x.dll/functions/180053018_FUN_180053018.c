/*
 * FUN_180053018 at 180053018
 * undefined __cdecl FUN_180053018(undefined8 param_1, longlong param_2)
 * Address ranges: 180053018-18005301b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053018(undefined8 param_1,longlong param_2)

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

