/*
 * FUN_1002cbcf at 1002cbcf
 * undefined __thiscall FUN_1002cbcf(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 1002cbcf-1002cc53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cbcf(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9)

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
  FUN_100469e3(this,param_1,param_2,'\0',&local_8,param_4,0,param_5,param_6,param_7,param_8,param_9,
               '\x01',0,(uint)*(byte *)((int)local_8 + 0x28));
  return;
}

