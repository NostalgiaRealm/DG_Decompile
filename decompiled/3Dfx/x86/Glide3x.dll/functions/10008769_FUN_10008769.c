/*
 * FUN_10008769 at 10008769
 * undefined __thiscall FUN_10008769(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10008769-100087ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008769(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + param_1 * 4 + 0x2a40) != 0) {
    (**(code **)(*(int *)this + 0x170))();
  }
  iVar1 = param_1 * 0x1a0;
  *(uint *)(iVar1 + 0x2dd0 + (int)this) = param_2 >> 0x18;
  *(uint *)(iVar1 + 0x2dd4 + (int)this) = param_2 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2dd8 + (int)this) = param_2 >> 8 & 0xff;
  *(uint *)(iVar1 + 0x2de0 + (int)this) = param_3 >> 0x18;
  *(uint *)(iVar1 + 0x2de4 + (int)this) = param_3 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0x2de8 + (int)this) = param_3 >> 8 & 0xff;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

