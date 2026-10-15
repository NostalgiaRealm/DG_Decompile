/*
 * FUN_100205d6 at 100205d6
 * undefined __thiscall FUN_100205d6(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, uint param_8, int param_9, byte param_10, uint param_11)
 * Address ranges: 100205d6-10020636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100205d6(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
            ,int param_7,uint param_8,int param_9,byte param_10,uint param_11)

{
  void *this_00;
  
  (**(code **)(*(int *)this + 0x198))();
  FUN_100202db((uint *)(param_1 * 0x250 + 0x2f10 + (int)this),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11);
  FUN_1001f9f3(this,param_1);
  FUN_1001fa63(this_00,param_1);
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

