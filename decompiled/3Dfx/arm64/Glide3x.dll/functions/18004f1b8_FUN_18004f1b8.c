/*
 * FUN_18004f1b8 at 18004f1b8
 * undefined __cdecl FUN_18004f1b8(longlong param_1, longlong param_2)
 * Address ranges: 18004f1b8-18004f207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f1b8(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_18004e3c0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

