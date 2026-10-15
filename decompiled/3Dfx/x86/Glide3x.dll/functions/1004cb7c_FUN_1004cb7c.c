/*
 * FUN_1004cb7c at 1004cb7c
 * undefined __thiscall FUN_1004cb7c(void * this, int param_1, int param_2, undefined4 param_3, uint param_4, uint param_5, int * param_6, uint param_7, undefined4 param_8)
 * Address ranges: 1004cb7c-1004cd22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1004cbb0) */

void __thiscall
FUN_1004cb7c(void *this,int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
            int *param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  LPCRITICAL_SECTION local_c;
  int *local_8;
  
  local_c = (LPCRITICAL_SECTION)((int)this + 0xc);
  EnterCriticalSection(local_c);
  piVar3 = param_6;
  if ((param_6 == (int *)0x0) ||
     (uVar8 = (**(code **)(*param_6 + 0x20))(param_6), CONCAT44(param_8,param_7) <= uVar8)) {
    FUN_1004c663(this,param_1,param_2,param_3,param_4,param_5);
    goto LAB_1004cd13;
  }
  uVar1 = FUN_1003b5cf((void *)((int)this + 0x4c),(uint)piVar3,(int)piVar3 >> 0x1f);
  if (uVar1 == *(uint *)((int)this + 0x54)) {
LAB_1004cbed:
    piVar3 = (int *)FUN_1005225f(0x14);
    if (piVar3 == (int *)0x0) goto LAB_1004cd13;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = -1;
    piVar3[4] = -1;
    local_8 = piVar3;
    FUN_1003f09f((void *)((int)this + 0x4c),(uint *)&param_6,&local_8);
    piVar3 = local_8;
  }
  else {
    iVar5 = *(int *)((int)this + 0x50);
    iVar2 = uVar1 * 0x10;
    if (((*(int **)(iVar2 + iVar5) != piVar3) ||
        (*(uint *)(iVar2 + 4 + iVar5) != (int)piVar3 >> 0x1f)) ||
       (puVar7 = (undefined4 *)(iVar5 + 0xc + iVar2), puVar7 == (undefined4 *)0x0))
    goto LAB_1004cbed;
    piVar3 = (int *)*puVar7;
  }
  if (piVar3 != (int *)0x0) {
    iVar5 = piVar3[4];
    if (iVar5 != -1) {
      iVar2 = *piVar3;
      if (*(int *)(iVar5 * 0x20 + 0x18 + iVar2) != 0) {
        iVar5 = *(int *)(iVar5 * 0x20 + 0x1c + iVar2);
      }
      if (iVar5 != -1) {
        iVar6 = iVar5 * 0x20;
        *(int *)(iVar6 + 0x18 + iVar2) = param_1;
        iVar2 = *piVar3;
        *(int *)(iVar6 + iVar2) = param_2;
        *(undefined4 *)(iVar6 + 4 + iVar2) = param_3;
        iVar2 = *piVar3;
        *(uint *)(iVar6 + 8 + iVar2) = param_4;
        *(uint *)(iVar6 + 0xc + iVar2) = param_5;
        iVar2 = *piVar3;
        *(uint *)(iVar6 + 0x10 + iVar2) = param_7;
        *(undefined4 *)(iVar6 + 0x14 + iVar2) = param_8;
        piVar3[4] = iVar5;
        goto LAB_1004cd13;
      }
    }
    iVar5 = piVar3[1];
    local_2c = param_2;
    local_24 = param_4;
    local_1c = param_7;
    local_18 = param_8;
    local_28 = param_3;
    local_14 = param_1;
    local_20 = param_5;
    local_10 = 0xffffffff;
    uVar4 = FUN_1003bb77(piVar3,&local_2c);
    if ((char)uVar4 != '\0') {
      if (piVar3[4] != -1) {
        *(int *)(piVar3[4] * 0x20 + 0x1c + *piVar3) = iVar5;
      }
      piVar3[4] = iVar5;
      if (piVar3[3] == -1) {
        piVar3[3] = iVar5;
      }
    }
  }
LAB_1004cd13:
  LeaveCriticalSection(local_c);
  return;
}

