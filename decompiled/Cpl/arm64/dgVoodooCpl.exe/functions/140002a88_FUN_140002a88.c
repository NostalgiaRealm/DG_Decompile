/*
 * FUN_140002a88 at 140002a88
 * undefined8 __cdecl FUN_140002a88(longlong param_1, int param_2)
 * Address ranges: 140002a88-140002ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002a88(longlong param_1,int param_2)

{
  if (param_2 == 0x413) {
    *(byte *)(*(longlong *)(param_1 + 0x10) + 0x20b) =
         *(byte *)(*(longlong *)(param_1 + 0x10) + 0x20b) ^ 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}

