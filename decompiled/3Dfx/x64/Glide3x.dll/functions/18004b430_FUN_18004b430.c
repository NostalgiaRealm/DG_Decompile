/*
 * FUN_18004b430 at 18004b430
 * undefined8 __fastcall FUN_18004b430(longlong param_1)
 * Address ranges: 18004b430-18004b454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004b430(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x48))();
  }
  return 0x80004005;
}

