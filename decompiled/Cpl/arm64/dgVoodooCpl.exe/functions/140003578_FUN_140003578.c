/*
 * FUN_140003578 at 140003578
 * undefined8 __cdecl FUN_140003578(longlong param_1, int param_2)
 * Address ranges: 140003578-1400035a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140003578(longlong param_1,int param_2)

{
  if (param_2 == 0x3f6) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  }
  return 1;
}

