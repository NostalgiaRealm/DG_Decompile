/*
 * FUN_10023110 at 10023110
 * undefined __thiscall FUN_10023110(void * this, uint param_1, int param_2, int param_3, uint param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9, undefined4 param_10)
 * Address ranges: 10023110-10023181
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10023110(void *this,uint param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9,undefined4 param_10)

{
  if (*(int **)((int)this + 0x1f6c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1f6c) + 4))
              (*(undefined4 *)((int)this + 0x1f80),*(undefined4 *)((int)this + 0x1f90),0);
  }
  if (*(int **)((int)this + 0x1f7c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1f7c) + 4))
              (*(undefined4 *)((int)this + 0x1fa0),*(undefined4 *)((int)this + 0x1fa4),0);
  }
  FUN_1002e299(this,param_1,param_2,1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,'\0'
               ,param_10);
  return;
}

