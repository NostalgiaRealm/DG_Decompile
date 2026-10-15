/*
 * FUN_10035a7c at 10035a7c
 * undefined __thiscall FUN_10035a7c(void * this, int param_1, int param_2, int param_3, uint param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9, undefined4 param_10)
 * Address ranges: 10035a7c-10035b00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035a7c(void *this,int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9,undefined4 param_10)

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
  FUN_10054ff8(this,param_1,param_2,'\x01',0,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9 != '\0','\0',param_10,0);
  return;
}

