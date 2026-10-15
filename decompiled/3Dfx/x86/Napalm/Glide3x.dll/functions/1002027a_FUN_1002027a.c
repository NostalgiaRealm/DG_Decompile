/*
 * FUN_1002027a at 1002027a
 * undefined __thiscall FUN_1002027a(void * this, int param_1, uint param_2, int param_3)
 * Address ranges: 1002027a-100202da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002027a(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x198))();
  iVar1 = param_1 * 0x250;
  *(uint *)(iVar1 + 0x2f78 + (int)this) =
       ~-(uint)(*(char *)(*(int *)((int)this + 4) + 0x4f) != '\0') & param_2;
  *(uint *)(iVar1 + 0x2f7c + (int)this) =
       -(uint)(param_3 != 0) & 4 | *(uint *)(iVar1 + 0x2f7c + (int)this) & 0xfffffffb;
  FUN_1001fa63(this,param_1);
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

