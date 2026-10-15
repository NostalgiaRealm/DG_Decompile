/*
 * FUN_100930e5 at 100930e5
 * undefined __thiscall FUN_100930e5(void * this, int param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 100930e5-10093165
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100930e5(void *this,int param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar3 = *(int *)(param_3 + uVar2 * 4);
      if (*(int *)((int)this + uVar2 * 4 + param_1 * 0x1510 + 0x7fc) != iVar3) {
        *(int *)((int)this + uVar2 * 4 + param_1 * 0x1510 + 0x7fc) = iVar3;
        iVar4 = iVar4 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
    if (3 < param_2) goto LAB_10093134;
  }
  puVar5 = (undefined4 *)((int)this + (param_2 + 0x1ff) * 4 + param_1 * 0x1510);
  for (iVar3 = 4 - param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
LAB_10093134:
  if ((iVar4 != 0) || (param_4 != *(int *)((int)this + param_1 * 0x1510 + 0x80c))) {
    piVar1 = *(int **)((int)this + param_1 * 0x1510 + 0x514);
    (**(code **)(*piVar1 + 0x84))(piVar1,param_2,param_3,param_4);
    *(int *)((int)this + param_1 * 0x1510 + 0x80c) = param_4;
  }
  return;
}

