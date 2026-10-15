/*
 * FUN_10037cce at 10037cce
 * undefined4 * __thiscall FUN_10037cce(void * this, undefined4 * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 10037cce-10037d01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10037cce(void *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  FUN_10038014(param_1,*(int *)((int)this + 4),*(int *)((int)this + 8),param_2,param_3,
               *(int *)((int)this + 0x20),*(undefined4 **)((int)this + 0x1c),
               *(int *)((int)this + 0xc) + 0x10,(int)this + 0x2c);
  return param_1;
}

