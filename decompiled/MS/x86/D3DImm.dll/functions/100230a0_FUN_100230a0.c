/*
 * FUN_100230a0 at 100230a0
 * undefined __thiscall FUN_100230a0(void * this, int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 param_6)
 * Address ranges: 100230a0-10023105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100230a0(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6)

{
  if (*(int **)((int)this + 0x1f6c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1f6c) + 4))
              (*(undefined4 *)((int)this + 0x1f80),*(undefined4 *)((int)this + 0x1f90),0);
  }
  if (*(int **)((int)this + 0x1f7c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1f7c) + 4))
              (*(undefined4 *)((int)this + 0x1fa0),*(undefined4 *)((int)this + 0x1fa4),0);
  }
  FUN_1002d4b0(this,param_1,param_2,1,0,param_3,param_4,param_5,'\0',param_6);
  return;
}

