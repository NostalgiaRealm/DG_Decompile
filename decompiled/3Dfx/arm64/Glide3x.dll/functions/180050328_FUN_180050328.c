/*
 * FUN_180050328 at 180050328
 * undefined4 __cdecl FUN_180050328(longlong param_1)
 * Address ranges: 180050328-180050353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180050328(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))();
  }
  return 0x80004005;
}

