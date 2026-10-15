/*
 * FUN_10035bf6 at 10035bf6
 * undefined __thiscall FUN_10035bf6(void * this, undefined4 * param_1, int param_2, int param_3, undefined4 * param_4, uint param_5, uint param_6)
 * Address ranges: 10035bf6-10035c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035bf6(void *this,undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,uint param_5
            ,uint param_6)

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
  FUN_10054109(this,param_1,param_2,'\0',&local_8,param_4,param_5,param_6,'\0',0,
               (uint)*(byte *)((int)local_8 + 0x28));
  return;
}

