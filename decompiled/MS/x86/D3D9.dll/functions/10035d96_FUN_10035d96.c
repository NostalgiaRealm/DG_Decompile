/*
 * FUN_10035d96 at 10035d96
 * undefined __thiscall FUN_10035d96(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 10035d96-10035e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035d96(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9)

{
  int *piVar1;
  uint uVar2;
  void *local_8;
  
  uVar2 = 0;
  local_8 = this;
  do {
    piVar1 = *(int **)((int)this + uVar2 * 4 + 0xf830);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))
                (*(undefined4 *)((int)this + uVar2 * 4 + 0xf844),
                 *(undefined4 *)((int)this + uVar2 * 4 + 0xf854),0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (*(int **)((int)this + 0xf840) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xf840) + 4))
              (*(undefined4 *)((int)this + 0xf864),*(undefined4 *)((int)this + 0xf868),0);
  }
  local_8 = (void *)(param_3 + -0x18);
  if (param_3 == 0) {
    local_8 = (void *)0x0;
  }
  FUN_10054ff8(this,param_1,param_2,'\0',&local_8,param_4,0,param_5,param_6,param_7,param_8,param_9,
               '\x01',0,(uint)*(byte *)((int)local_8 + 0x28));
  return;
}

