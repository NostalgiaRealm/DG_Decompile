/*
 * FUN_1002c762 at 1002c762
 * undefined __thiscall FUN_1002c762(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 1002c762-1002c7d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c762(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_2;
  }
  *(uint *)(param_1 * 0x180 + 0x2d0c + (int)this) = uVar2;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_3;
  }
  *(uint *)(param_1 * 0x180 + 0x2d10 + (int)this) = uVar2;
  *(undefined1 *)((int)this + 0x3150) = 1;
  *(undefined1 *)(param_1 + 0x3153 + (int)this) = 1;
  return;
}

