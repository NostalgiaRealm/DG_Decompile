/*
 * FUN_1002e3ca at 1002e3ca
 * undefined4 * __thiscall FUN_1002e3ca(void * this, undefined4 * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1002e3ca-1002e3fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002e3ca(void *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  FUN_1002e3fb(param_1,*(int *)((int)this + 4),*(int *)((int)this + 8),param_2,param_3,
               *(int *)((int)this + 0x20),*(undefined4 **)((int)this + 0x1c),
               *(int *)((int)this + 0xc) + 0x10);
  return param_1;
}

