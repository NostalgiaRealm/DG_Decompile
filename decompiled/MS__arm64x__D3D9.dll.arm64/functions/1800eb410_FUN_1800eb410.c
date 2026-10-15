/*
 * FUN_1800eb410 at 1800eb410
 * undefined FUN_1800eb410(void)
 * Address ranges: 1800eb410-1800eb45f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eb410(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x38)) {
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 600))(*(longlong **)(param_1 + 0x688),param_2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined1 *)(param_1 + 0x674) = 1;
  }
  return;
}

