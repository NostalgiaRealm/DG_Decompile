/*
 * FUN_10020517 at 10020517
 * undefined __thiscall FUN_10020517(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10020517-1002058d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020517(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*(int *)this + 0x170))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_2;
  }
  *(uint *)(param_1 * 0x1a0 + 0x2dac + (int)this) = uVar2;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_3;
  }
  *(uint *)(param_1 * 0x1a0 + 0x2db0 + (int)this) = uVar2;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  *(undefined1 *)(param_1 + 0x32d3 + (int)this) = 1;
  return;
}

