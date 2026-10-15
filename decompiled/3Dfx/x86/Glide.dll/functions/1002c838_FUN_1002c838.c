/*
 * FUN_1002c838 at 1002c838
 * undefined __thiscall FUN_1002c838(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * Address ranges: 1002c838-1002c8b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c838(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = param_1 * 0x180;
  *(int *)(iVar1 + 0x2cd0 + (int)this) = param_2;
  *(int *)(iVar1 + 0x2cd4 + (int)this) = param_3;
  *(int *)(iVar1 + 0x2cd8 + (int)this) = param_6;
  *(int *)(iVar1 + 0x2ce0 + (int)this) = param_4;
  *(int *)(iVar1 + 0x2ce4 + (int)this) = param_5;
  *(int *)(iVar1 + 0x2ce8 + (int)this) = param_7;
  FUN_1002c475(this,param_1);
  FUN_1002c4ed(this,param_1);
  FUN_1002c9a9(this,*(byte *)((int)this + 0x2994));
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

