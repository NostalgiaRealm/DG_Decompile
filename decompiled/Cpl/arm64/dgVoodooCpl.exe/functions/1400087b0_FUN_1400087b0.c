/*
 * FUN_1400087b0 at 1400087b0
 * undefined8 __cdecl FUN_1400087b0(longlong param_1, int param_2)
 * Address ranges: 1400087b0-1400088cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400087b0(longlong param_1,int param_2)

{
  if (param_2 == 0x3f1) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x4f) = *(byte *)(*(longlong *)(param_1 + 8) + 0x4f) ^ 1;
  }
  else if (param_2 == 0x3f5) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x50) = *(byte *)(*(longlong *)(param_1 + 8) + 0x50) ^ 1;
  }
  else if (param_2 == 0x3f8) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x52) = *(byte *)(*(longlong *)(param_1 + 8) + 0x52) ^ 1;
  }
  else if (param_2 == 0x3fb) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x53) = *(byte *)(*(longlong *)(param_1 + 8) + 0x53) ^ 1;
  }
  else if (param_2 == 0x3fc) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x51) = *(byte *)(*(longlong *)(param_1 + 8) + 0x51) ^ 1;
  }
  else if (param_2 == 0x3fd) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x54) = *(byte *)(*(longlong *)(param_1 + 8) + 0x54) ^ 1;
  }
  else if (param_2 == 0x3fe) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x55) = *(byte *)(*(longlong *)(param_1 + 8) + 0x55) ^ 1;
  }
  else if (param_2 == 0x3ff) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x56) = *(byte *)(*(longlong *)(param_1 + 8) + 0x56) ^ 1;
  }
  else if (param_2 == 0x400) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x57) = *(byte *)(*(longlong *)(param_1 + 8) + 0x57) ^ 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}

