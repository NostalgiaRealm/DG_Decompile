/*
 * FUN_1800e34ac at 1800e34ac
 * undefined __fastcall FUN_1800e34ac(longlong param_1, longlong param_2)
 * Address ranges: 1800e34ac-1800e34f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e34ac(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

