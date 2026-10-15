/*
 * FUN_100205ed at 100205ed
 * undefined __thiscall FUN_100205ed(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 100205ed-10020662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100205ed(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x170))();
  iVar1 = param_1 * 0x1a0;
  *(int *)(iVar1 + 0x2d70 + (int)this) = param_2;
  *(int *)(iVar1 + 0x2d74 + (int)this) = param_3;
  *(int *)(iVar1 + 0x2d78 + (int)this) = param_6;
  *(int *)((param_1 + 0x1c) * 0x1a0 + (int)this) = param_4;
  *(int *)(iVar1 + 0x2d84 + (int)this) = param_5;
  *(int *)(iVar1 + 0x2d88 + (int)this) = param_7;
  FUN_1001fdd5(this,param_1);
  FUN_1001fe52(this,param_1);
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

