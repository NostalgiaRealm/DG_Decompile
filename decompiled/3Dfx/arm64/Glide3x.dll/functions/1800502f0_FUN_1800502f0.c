/*
 * FUN_1800502f0 at 1800502f0
 * undefined4 __cdecl FUN_1800502f0(longlong param_1)
 * Address ranges: 1800502f0-18005031b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800502f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

