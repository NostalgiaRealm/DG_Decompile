/*
 * FUN_1002c90e at 1002c90e
 * undefined __thiscall FUN_1002c90e(void * this, int param_1, uint param_2, int param_3)
 * Address ranges: 1002c90e-1002c96e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c90e(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = param_1 * 0x180;
  *(uint *)(iVar1 + 0x2d14 + (int)this) =
       ~-(uint)(*(char *)(*(int *)((int)this + 4) + 0x4f) != '\0') & param_2;
  *(uint *)(iVar1 + 0x2d18 + (int)this) =
       -(uint)(param_3 != 0) & 4 | *(uint *)(iVar1 + 0x2d18 + (int)this) & 0xfffffffb;
  FUN_1002c4ed(this,param_1);
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

