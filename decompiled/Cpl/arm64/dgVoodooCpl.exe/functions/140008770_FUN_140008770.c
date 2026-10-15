/*
 * FUN_140008770 at 140008770
 * undefined8 __cdecl FUN_140008770(longlong param_1, int param_2)
 * Address ranges: 140008770-1400087af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008770(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x3f2) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 0x3f4) {
      return 1;
    }
    uVar1 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),uVar1);
  return 1;
}

