/*
 * FUN_140004f20 at 140004f20
 * undefined8 __cdecl FUN_140004f20(longlong param_1, int param_2)
 * Address ranges: 140004f20-140004f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140004f20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x402) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 0x407) {
      return 1;
    }
    uVar1 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),uVar1);
  return 1;
}

