/*
 * FUN_1001933a at 1001933a
 * undefined __thiscall FUN_1001933a(void * this, uint param_1, int param_2, int param_3, undefined4 param_4, uint * param_5, uint param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 1001933a-100193a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001933a(void *this,uint param_1,int param_2,int param_3,undefined4 param_4,uint *param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  if (*(int **)((int)this + 0x1e58) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e58) + 4))
              (*(undefined4 *)((int)this + 0x1e6c),*(undefined4 *)((int)this + 0x1e7c),0);
  }
  if (*(int **)((int)this + 0x1e68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1e68) + 4))
              (*(undefined4 *)((int)this + 0x1e8c),*(undefined4 *)((int)this + 0x1e90),0);
  }
  FUN_1002e299(this,param_1,param_2,1,0,param_3,0,param_4,param_5,param_6,0,'\0','\x01',param_9);
  return;
}

