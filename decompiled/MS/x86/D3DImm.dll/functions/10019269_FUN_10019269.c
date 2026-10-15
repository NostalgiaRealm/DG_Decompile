/*
 * FUN_10019269 at 10019269
 * undefined __thiscall FUN_10019269(void * this, uint param_1, int param_2, int param_3, uint param_4, undefined4 param_5, uint * param_6, uint param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 10019269-100192d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10019269(void *this,uint param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            uint *param_6,uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  FUN_1002e299(this,param_1,param_2,1,0,param_3,param_4,param_5,param_6,param_7,0,'\0','\0',param_10
              );
  return;
}

