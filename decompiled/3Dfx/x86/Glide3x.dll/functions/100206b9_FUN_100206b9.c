/*
 * FUN_100206b9 at 100206b9
 * undefined __thiscall FUN_100206b9(void * this, int param_1, uint param_2, int param_3)
 * Address ranges: 100206b9-10020719
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100206b9(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x170))();
  iVar1 = param_1 * 0x1a0;
  *(uint *)(iVar1 + 0x2db4 + (int)this) =
       ~-(uint)(*(char *)(*(int *)((int)this + 4) + 0x4f) != '\0') & param_2;
  *(uint *)(iVar1 + 0x2db8 + (int)this) =
       -(uint)(param_3 != 0) & 4 | *(uint *)(iVar1 + 0x2db8 + (int)this) & 0xfffffffb;
  FUN_1001fe52(this,param_1);
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

