/*
 * FUN_10006e41 at 10006e41
 * int __thiscall FUN_10006e41(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10006e41-10006e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10006e41(void *this,int param_1,int param_2,int param_3)

{
  return *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x5c) + 4 + param_1 * 0x10) + 0x10 +
                          param_2 * 0x1c) + param_3 * 8) + *(int *)((int)this + 0x44);
}

