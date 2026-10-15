/*
 * FUN_1004da09 at 1004da09
 * int * __thiscall FUN_1004da09(void * this, int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 1004da09-1004da39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1004da09(void *this,int *param_1,uint param_2,undefined4 param_3)

{
  FUN_1004de33(this,param_1,*(int *)((int)this + 4),param_2,param_3,*(int *)((int)this + 0x20),
               *(undefined4 **)((int)this + 0x1c),*(int *)((int)this + 0xc) + 0x10,(int)this + 0x2c)
  ;
  return param_1;
}

