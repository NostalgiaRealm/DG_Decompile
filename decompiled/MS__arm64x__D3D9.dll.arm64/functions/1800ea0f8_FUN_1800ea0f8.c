/*
 * FUN_1800ea0f8 at 1800ea0f8
 * undefined FUN_1800ea0f8(void)
 * Address ranges: 1800ea0f8-1800ea13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea0f8(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

