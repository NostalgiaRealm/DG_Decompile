/*
 * FUN_18004d624 at 18004d624
 * undefined __cdecl FUN_18004d624(longlong param_1, undefined8 param_2)
 * Address ranges: 18004d624-18004d67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d624(longlong param_1,undefined8 param_2)

{
  FUN_1800611b0((undefined1 *)(param_1 + 0x20),0,0x660);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x58))(*(longlong **)(param_1 + 0x688),param_2);
  return;
}

