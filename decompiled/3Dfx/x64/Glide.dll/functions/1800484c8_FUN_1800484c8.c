/*
 * FUN_1800484c8 at 1800484c8
 * undefined __fastcall FUN_1800484c8(longlong param_1, longlong param_2)
 * Address ranges: 1800484c8-180048513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800484c8(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

