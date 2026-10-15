/*
 * FUN_1006e94c at 1006e94c
 * undefined4 __thiscall FUN_1006e94c(void * this, int param_1, int param_2, int param_3, int param_4, int * param_5)
 * Address ranges: 1006e94c-1006e99c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1006e94c(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined3 uVar1;
  byte bVar2;
  void *pvVar3;
  undefined3 extraout_var;
  
  FUN_100ac680(*(int *)((int)this + -0x7c) + 0x11c0);
  bVar2 = 0;
  pvVar3 = (void *)(**(code **)(*(int *)((int)this + -0xc0) + 0x60))(1);
  uVar1 = 0;
  if (pvVar3 != (void *)0x0) {
    bVar2 = FUN_1006d0d4((void *)((int)this + -0xc0),pvVar3,param_1,param_2,param_3,param_4,param_5)
    ;
    uVar1 = extraout_var;
  }
  return CONCAT31(uVar1,bVar2);
}

