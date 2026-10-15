/*
 * FUN_1002cb56 at 1002cb56
 * undefined __thiscall FUN_1002cb56(void * this, int param_1, int param_2, int param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1002cb56-1002cbce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002cb56(void *this,int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

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
  FUN_10045b79(this,param_1,param_2,'\0',&local_8,param_4,0,param_5,'\x01',0,
               (uint)*(byte *)((int)local_8 + 0x28));
  return;
}

