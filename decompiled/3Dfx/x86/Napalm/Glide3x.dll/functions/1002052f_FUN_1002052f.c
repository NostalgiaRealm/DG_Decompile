/*
 * FUN_1002052f at 1002052f
 * undefined __thiscall FUN_1002052f(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, uint param_7, int param_8, byte param_9, uint param_10)
 * Address ranges: 1002052f-10020574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002052f(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6
            ,uint param_7,int param_8,byte param_9,uint param_10)

{
  (**(code **)(*(int *)this + 0x198))();
  FUN_100202db((uint *)((int)this + 0x2eb0),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

