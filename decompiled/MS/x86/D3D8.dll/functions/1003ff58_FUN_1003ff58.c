/*
 * FUN_1003ff58 at 1003ff58
 * int * __thiscall FUN_1003ff58(void * this, int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1003ff58-1003ff85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1003ff58(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  FUN_1003ffc5(this,param_1,*(int *)((int)this + 4),param_2,param_3,*(int *)((int)this + 0x20),
               *(undefined4 **)((int)this + 0x1c),*(int *)((int)this + 0xc) + 0x10);
  return param_1;
}

