/*
 * FUN_140006fe8 at 140006fe8
 * undefined8 __cdecl FUN_140006fe8(longlong param_1, int param_2)
 * Address ranges: 140006fe8-140007037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140006fe8(longlong param_1,int param_2)

{
  if (param_2 == 0x3ed) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 0;
  }
  else if (param_2 == 0x3f0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x20) = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),1);
  return 1;
}

