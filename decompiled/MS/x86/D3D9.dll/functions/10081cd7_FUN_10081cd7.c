/*
 * FUN_10081cd7 at 10081cd7
 * undefined __thiscall FUN_10081cd7(void * this, uint param_1, int param_2)
 * Address ranges: 10081cd7-10081dc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10081cd7(void *this,uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_1c [6];
  
  if (*(int *)((int)this + 0x24) != -1) {
    return;
  }
  iVar3 = *(int *)((int)this + 0x2c);
  if (iVar3 == 0x1c) {
    uVar5 = 0x1d;
  }
  else if (iVar3 == 0x47) {
    uVar5 = 0x48;
  }
  else if (iVar3 == 0x4a) {
    uVar5 = 0x4b;
  }
  else {
    if (iVar3 != 0x4d) {
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x18);
      return;
    }
    uVar5 = 0x4e;
  }
  uVar2 = FUN_100b9ed6(*(void **)(*(int *)((int)this + 8) + 0x15d8),1);
  *(uint *)((int)this + 0x24) = uVar2;
  if (uVar2 == 0xffffffff) {
    return;
  }
  local_24 = 0x1688;
  local_28 = (param_1 & 0xff) * 4 + 5;
  puVar4 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (local_28 == 5) {
    local_1c[3] = 1;
    local_1c[4] = 0;
    local_1c[5] = 0;
  }
  else if (local_28 != 9) goto LAB_10081d84;
  local_1c[2] = 0;
  local_1c[1] = 0xffffffff;
  local_1c[0] = 0;
LAB_10081d84:
  local_2c = uVar5;
  FUN_100ba192(*(void **)(*(int *)((int)this + 8) + 0x15d8),(int *)&param_1,uVar2,0);
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = *(int *)((int)this + 0xc);
  }
  piVar1 = *(int **)(*(int *)((int)this + 4) * 0x18 + 0x520 + *(int *)this);
  (**(code **)(*piVar1 + 0x48))(piVar1,iVar3,&local_2c,param_1);
  return;
}

