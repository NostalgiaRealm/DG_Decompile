/*
 * FUN_1003c3aa at 1003c3aa
 * undefined __thiscall FUN_1003c3aa(void * this, int * param_1, int param_2, int * param_3, uint param_4, undefined4 param_5)
 * Address ranges: 1003c3aa-1003c514
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1003c3ea) */

void __thiscall
FUN_1003c3aa(void *this,int *param_1,int param_2,int *param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int *local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  LPCRITICAL_SECTION local_c;
  
  piVar1 = param_1;
  if (param_1 == (int *)0xffffffff) {
    return;
  }
  local_c = (LPCRITICAL_SECTION)((int)this + 0x1c);
  EnterCriticalSection(local_c);
  piVar4 = param_3;
  if ((param_3 == (int *)0x0) ||
     (uVar9 = (**(code **)(*param_3 + 0x20))(param_3), CONCAT44(param_5,param_4) <= uVar9)) {
    FUN_1003bff0(this,(uint)piVar1,param_2);
    goto LAB_1003c505;
  }
  param_1 = piVar4;
  uVar2 = FUN_10038aea((void *)((int)this + 0x40),(uint)piVar4,(int)piVar4 >> 0x1f);
  if (uVar2 == *(uint *)((int)this + 0x48)) {
LAB_1003c429:
    piVar4 = (int *)FUN_1004f60f(0x14);
    if (piVar4 == (int *)0x0) goto LAB_1003c505;
    piVar4[3] = -1;
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[4] = -1;
    param_1 = piVar4;
    FUN_1003c5ba((void *)((int)this + 0x40),(uint *)&param_3,&param_1);
    piVar4 = param_1;
  }
  else {
    iVar8 = *(int *)((int)this + 0x44);
    iVar3 = uVar2 * 0x10;
    if (((*(int **)(iVar3 + iVar8) != param_1) ||
        (*(uint *)(iVar3 + 4 + iVar8) != (int)piVar4 >> 0x1f)) ||
       (puVar7 = (undefined4 *)(iVar8 + 0xc + iVar3), puVar7 == (undefined4 *)0x0))
    goto LAB_1003c429;
    piVar4 = (int *)*puVar7;
  }
  if (piVar4 != (int *)0x0) {
    iVar8 = piVar4[4];
    if (iVar8 != -1) {
      iVar3 = *piVar4;
      if (*(int *)(iVar8 * 0x18 + iVar3) != -1) {
        iVar8 = *(int *)(iVar8 * 0x18 + 0x10 + iVar3);
      }
      if (iVar8 != -1) {
        iVar6 = iVar8 * 0x18;
        *(int **)(iVar6 + iVar3) = piVar1;
        *(int *)(iVar6 + 4 + *piVar4) = param_2;
        iVar3 = *piVar4;
        *(uint *)(iVar6 + 8 + iVar3) = param_4;
        *(undefined4 *)(iVar6 + 0xc + iVar3) = param_5;
        piVar4[4] = iVar8;
        goto LAB_1003c505;
      }
    }
    iVar8 = piVar4[1];
    local_24 = param_2;
    local_20 = param_4;
    local_1c = param_5;
    local_28 = piVar1;
    local_18 = 0xffffffff;
    uVar5 = FUN_1003c62c(piVar4,&local_28);
    if ((char)uVar5 != '\0') {
      if (piVar4[4] != -1) {
        *(int *)(piVar4[4] * 0x18 + 0x10 + *piVar4) = iVar8;
      }
      piVar4[4] = iVar8;
      if (piVar4[3] == -1) {
        piVar4[3] = iVar8;
      }
    }
  }
LAB_1003c505:
  LeaveCriticalSection(local_c);
  return;
}

