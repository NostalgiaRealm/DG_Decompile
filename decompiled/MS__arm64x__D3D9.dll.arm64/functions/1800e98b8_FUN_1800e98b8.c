/*
 * FUN_1800e98b8 at 1800e98b8
 * undefined FUN_1800e98b8(void)
 * Address ranges: 1800e98b8-1800e98ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e98b8(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x40) = param_2;
  }
  return;
}

