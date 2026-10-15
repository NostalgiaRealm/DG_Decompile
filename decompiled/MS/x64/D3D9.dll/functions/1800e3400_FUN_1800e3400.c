/*
 * FUN_1800e3400 at 1800e3400
 * undefined __fastcall FUN_1800e3400(longlong param_1, longlong param_2)
 * Address ranges: 1800e3400-1800e3454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3400(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x20)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf0))();
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x20) = param_2;
    FUN_1800fbea0((undefined1 *)(param_1 + 0x68),0,0x100);
  }
  return;
}

