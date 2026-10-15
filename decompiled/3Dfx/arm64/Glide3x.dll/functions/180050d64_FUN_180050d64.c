/*
 * FUN_180050d64 at 180050d64
 * undefined __cdecl FUN_180050d64(longlong param_1, longlong param_2)
 * Address ranges: 180050d64-180050daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050d64(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

