/*
 * FUN_10028c66 at 10028c66
 * undefined __thiscall FUN_10028c66(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10028c66-10028ce6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10028c66(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = param_1;
  local_1c = 0x3d;
  local_18 = 4;
  local_14 = 0;
  local_10 = 0xffffffff;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = param_3;
  uVar2 = *param_4;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0x10) = uVar2;
  local_c = 0;
  local_8 = 0;
  param_1 = 0;
  piVar3 = *(int **)(*(int *)((int)this + 0x10) * 0x1510 + 0x510 + *(int *)((int)this + 0xc));
  (**(code **)(*piVar3 + 0x1c))(piVar3,uVar2,&local_1c,&param_1);
  *(int *)(*(int *)this + 0xc + iVar4 * 0x10) = param_1;
  return;
}

