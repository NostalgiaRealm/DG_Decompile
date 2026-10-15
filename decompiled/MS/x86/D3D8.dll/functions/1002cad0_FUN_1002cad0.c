/*
 * FUN_1002cad0 at 1002cad0
 * undefined __thiscall FUN_1002cad0(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, undefined4 param_6, uint * param_7, uint param_8, int param_9, char param_10)
 * Address ranges: 1002cad0-1002cb55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cad0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,uint *param_7,uint param_8,int param_9,char param_10)

{
  void *local_8;
  
  local_8 = this;
  if (*(int **)((int)this + 0xdacc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdacc) + 4))
              (*(undefined4 *)((int)this + 0xdae0),*(undefined4 *)((int)this + 0xdaf0),0);
  }
  if (*(int **)((int)this + 0xdadc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdadc) + 4))
              (*(undefined4 *)((int)this + 0xdb00),*(undefined4 *)((int)this + 0xdb04),0);
  }
  local_8 = (void *)(param_3 + -0x18);
  if (param_3 == 0) {
    local_8 = (void *)0x0;
  }
  FUN_100469e3(this,param_1,param_2,'\0',&local_8,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,'\0',0,(uint)*(byte *)((int)local_8 + 0x28));
  return;
}

