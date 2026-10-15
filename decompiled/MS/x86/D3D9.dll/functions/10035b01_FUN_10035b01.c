/*
 * FUN_10035b01 at 10035b01
 * undefined __thiscall FUN_10035b01(void * this, undefined4 * param_1, int param_2, undefined4 * param_3, uint param_4, undefined4 param_5)
 * Address ranges: 10035b01-10035b71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10035b01(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5)

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
  FUN_10054109(this,param_1,param_2,'\x01',0,param_3,0,param_4,'\x01',param_5,0);
  return;
}

