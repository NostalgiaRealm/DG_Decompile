/*
 * FUN_1400038c8 at 1400038c8
 * undefined8 __cdecl FUN_1400038c8(longlong param_1, int param_2)
 * Address ranges: 1400038c8-1400038fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400038c8(longlong param_1,int param_2)

{
  if (param_2 - 0x415U < 4) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  }
  return 1;
}

