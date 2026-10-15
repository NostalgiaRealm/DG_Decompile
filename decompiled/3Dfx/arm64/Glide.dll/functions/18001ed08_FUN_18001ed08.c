/*
 * FUN_18001ed08 at 18001ed08
 * undefined __cdecl FUN_18001ed08(longlong param_1)
 * Address ranges: 18001ed08-18001ed0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ed08(longlong param_1)

{
  FUN_18001e6a0(param_1);
  FUN_18001d3c8(param_1,1);
  *(undefined4 *)(param_1 + 0x2bb4) = *(undefined4 *)(param_1 + 0x2b84);
  *(undefined4 *)(param_1 + 0x2bb8) = *(undefined4 *)(param_1 + 0x2b88);
  *(undefined8 *)(param_1 + 0x2bc0) = *(undefined8 *)(param_1 + 0x2b90);
  *(undefined4 *)(param_1 + 0x2bc8) = *(undefined4 *)(param_1 + 0x2b98);
  *(undefined4 *)(param_1 + 0x2bcc) = *(undefined4 *)(param_1 + 0x2b9c);
  FUN_18001d270(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

