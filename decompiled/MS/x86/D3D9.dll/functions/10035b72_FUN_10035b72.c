/*
 * FUN_10035b72 at 10035b72
 * undefined __thiscall FUN_10035b72(void * this, int param_1, int param_2, int param_3, undefined4 param_4, uint * param_5, uint param_6, int param_7, char param_8, undefined4 param_9)
 * Address ranges: 10035b72-10035bf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035b72(void *this,int param_1,int param_2,int param_3,undefined4 param_4,uint *param_5,
            uint param_6,int param_7,char param_8,undefined4 param_9)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
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
  FUN_10054ff8(this,param_1,param_2,'\x01',0,param_3,0,param_4,param_5,param_6,param_7,
               param_8 != '\0','\x01',param_9,0);
  return;
}

