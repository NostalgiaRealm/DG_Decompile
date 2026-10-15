/*
 * FUN_1800e4b60 at 1800e4b60
 * undefined __fastcall FUN_1800e4b60(longlong param_1, longlong param_2)
 * Address ranges: 1800e4b60-1800e4bab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e4b60(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

