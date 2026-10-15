/*
 * FUN_140004b64 at 140004b64
 * undefined8 __cdecl FUN_140004b64(longlong param_1, int param_2)
 * Address ranges: 140004b64-140004cbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140004b64(longlong param_1,int param_2)

{
  if (param_2 == 0x3f8) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x86) = *(byte *)(*(longlong *)(param_1 + 8) + 0x86) ^ 1;
  }
  else if (param_2 == 0x401) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x80) = *(byte *)(*(longlong *)(param_1 + 8) + 0x80) ^ 1;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  }
  else if (param_2 == 0x403) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x81) = *(byte *)(*(longlong *)(param_1 + 8) + 0x81) ^ 1;
  }
  else if (param_2 == 0x404) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x82) = *(byte *)(*(longlong *)(param_1 + 8) + 0x82) ^ 1;
  }
  else if (param_2 == 0x405) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x83) = *(byte *)(*(longlong *)(param_1 + 8) + 0x83) ^ 1;
  }
  else if (param_2 == 0x409) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x84) = *(byte *)(*(longlong *)(param_1 + 8) + 0x84) ^ 1;
  }
  else if (param_2 == 0x40a) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x85) = *(byte *)(*(longlong *)(param_1 + 8) + 0x85) ^ 1;
  }
  else if (param_2 == 0x40d) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x89) = *(byte *)(*(longlong *)(param_1 + 8) + 0x89) ^ 1;
  }
  else if (param_2 == 0x40e) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x87) = *(byte *)(*(longlong *)(param_1 + 8) + 0x87) ^ 1;
    FUN_140004f60(param_1 + -0x78);
  }
  else if (param_2 == 0x40f) {
    *(byte *)(*(longlong *)(param_1 + 8) + 0x88) = *(byte *)(*(longlong *)(param_1 + 8) + 0x88) ^ 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}

