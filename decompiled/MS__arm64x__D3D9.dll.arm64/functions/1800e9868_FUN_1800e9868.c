/*
 * FUN_1800e9868 at 1800e9868
 * undefined FUN_1800e9868(void)
 * Address ranges: 1800e9868-1800e98b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9868(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x30)) {
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 200))(*(longlong **)(param_1 + 0x688),param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

