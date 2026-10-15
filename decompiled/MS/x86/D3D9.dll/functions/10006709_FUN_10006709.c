/*
 * FUN_10006709 at 10006709
 * undefined4 __thiscall FUN_10006709(void * this, uint param_1, int * param_2, int param_3, int param_4)
 * Address ranges: 10006709-10006898
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10006709(void *this,uint param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = param_2;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = (int *)param_2[0xf];
  }
  if (((*(int **)((int)this + param_1 * 4 + 26000) == piVar1) &&
      (*(int *)((int)this + param_1 * 4 + 0x65d0) == param_4)) &&
     (*(int *)((int)this + param_1 * 4 + 0x6610) == param_3)) goto LAB_10006890;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *(uint *)((int)this + 0x668c) = *(uint *)((int)this + 0x668c) | 1 << (param_1 & 0x1f);
  }
  iVar3 = *(int *)((int)this + param_1 * 4 + 26000);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x5c) = 0xffffffff;
    (**(code **)(**(int **)((int)this + param_1 * 4 + 26000) + 0xc))();
  }
  *(int **)((int)this + param_1 * 4 + 26000) = piVar1;
  *(int *)((int)this + param_1 * 4 + 0x65d0) = param_4;
  *(int *)((int)this + param_1 * 4 + 0x6610) = param_3;
  if (piVar1 == (int *)0x0) {
    *(uint *)((int)this + 0x6650) = *(uint *)((int)this + 0x6650) & ~(1 << (param_1 & 0x1f));
    uVar2 = *(uint *)((int)this + 0x6664);
LAB_100067de:
    uVar2 = uVar2 & ~(1 << (param_1 & 0x1f));
  }
  else {
    piVar1[0x17] = param_1;
    *(uint *)((int)this + 0x6650) = *(uint *)((int)this + 0x6650) | 1 << (param_1 & 0x1f);
    uVar2 = *(uint *)((int)this + 0x6664);
    if (piVar1[3] == 0) goto LAB_100067de;
    uVar2 = uVar2 | 1 << (param_1 & 0x1f);
  }
  *(uint *)((int)this + 0x6664) = uVar2;
  if (param_2 == (int *)0x0) {
    uVar2 = *(uint *)((int)this + 0x6658) & ~(1 << (param_1 & 0x1f));
  }
  else {
    uVar2 = *(uint *)((int)this + 0x6658) | 1 << (param_1 & 0x1f);
  }
  *(uint *)((int)this + 0x6658) = uVar2;
  if ((piVar1 == (int *)0x0) || ((*(byte *)(piVar1 + 0xd) & 0x10) == 0)) {
    *(uint *)((int)this + 0x665c) = *(uint *)((int)this + 0x665c) & ~(1 << (param_1 & 0x1f));
    if (piVar1 != (int *)0x0) goto LAB_1000682f;
LAB_1000684b:
    *(uint *)((int)this + 0x6660) = *(uint *)((int)this + 0x6660) & ~(1 << (param_1 & 0x1f));
    if (piVar1 == (int *)0x0) {
      param_4 = (**(code **)(**(int **)((int)this + 0x14) + 0xb0))(param_1,0,0,param_4);
      goto LAB_10006890;
    }
  }
  else {
    *(uint *)((int)this + 0x665c) = *(uint *)((int)this + 0x665c) | 1 << (param_1 & 0x1f);
LAB_1000682f:
    if (piVar1[0x11] == 0) goto LAB_1000684b;
    *(uint *)((int)this + 0x6660) = *(uint *)((int)this + 0x6660) | 1 << (param_1 & 0x1f);
  }
  iVar3 = piVar1[0x11];
  *(undefined1 *)((int)piVar1 + 0x61) = 1;
  if (iVar3 == 0) {
    iVar3 = piVar1[0x12];
  }
  param_4 = (**(code **)(**(int **)((int)this + 0x14) + 0xb0))(param_1,iVar3,param_3,param_4);
LAB_10006890:
  return CONCAT31((int3)((uint)param_4 >> 8),1);
}

