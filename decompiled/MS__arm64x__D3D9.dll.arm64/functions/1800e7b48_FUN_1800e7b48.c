/*
 * FUN_1800e7b48 at 1800e7b48
 * undefined FUN_1800e7b48(void)
 * Address ranges: 1800e7b48-1800e7bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800e7b48(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_3 >> 0x10) * 0x10)
              + 0x48))();
  *param_2 = *param_2 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20));
  return param_2;
}

