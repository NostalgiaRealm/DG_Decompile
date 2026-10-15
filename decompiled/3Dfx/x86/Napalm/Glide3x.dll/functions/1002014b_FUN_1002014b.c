/*
 * FUN_1002014b at 1002014b
 * undefined __thiscall FUN_1002014b(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 1002014b-100201c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002014b(void *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*(int *)this + 0x198))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_2;
  }
  *(uint *)(param_1 * 0x250 + 0x2f70 + (int)this) = uVar2;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x4b);
  if (iVar1 == 0x200) {
    uVar2 = 1;
  }
  else {
    uVar2 = -(uint)(iVar1 != 0x100) & param_3;
  }
  *(uint *)(param_1 * 0x250 + 0x2f74 + (int)this) = uVar2;
  *(undefined1 *)((int)this + 0x3650) = 1;
  *(undefined1 *)(param_1 + 0x3653 + (int)this) = 1;
  return;
}

