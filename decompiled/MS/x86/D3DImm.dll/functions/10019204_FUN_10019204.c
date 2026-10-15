/*
 * FUN_10019204 at 10019204
 * undefined __thiscall FUN_10019204(void * this, int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 param_6)
 * Address ranges: 10019204-10019268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10019204(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6)

{
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  FUN_1002d4b0(this,param_1,param_2,1,0,param_3,param_4,param_5,'\0',param_6);
  return;
}

