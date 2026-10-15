/*
 * FUN_10025efc at 10025efc
 * undefined4 __thiscall FUN_10025efc(void * this, int param_1, uint param_2, int * param_3, undefined4 param_4, undefined * param_5)
 * Address ranges: 10025efc-10026263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10025efc(void *this,int param_1,uint param_2,int *param_3,undefined4 param_4,undefined *param_5)

{
  undefined1 uVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int local_a8 [5];
  undefined4 local_94;
  int local_60 [8];
  uint local_40;
  undefined4 local_28 [9];
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar7 = 0x80070057;
  if (param_5 == (undefined *)0x0) goto LAB_1002624d;
  uVar6 = param_2 & 7;
  if ((param_2 & 0x18) == 0x10) {
    if ((uVar6 == 1) || (((uVar6 == 2 || (uVar6 == 4)) && (param_3 != (int *)0x0)))) {
      for (iVar8 = *(int *)((int)this + 300); iVar8 != 0; iVar8 = iVar8 + -1) {
        if (uVar6 == 2) {
          uVar7 = FUN_1002500c((int)param_3,
                               *(int *)(*(int *)((int)this + 0x128) + -4 + iVar8 * 4) + 0x150);
          if ((char)uVar7 != '\0') {
LAB_10025fb2:
            piVar5 = *(int **)(*(int *)((int)this + 0x128) + -4 + iVar8 * 4);
            iVar3 = FUN_10034b5b(param_1,piVar5,piVar5 + 0x54,param_5,param_4);
            if (iVar3 == 0) break;
          }
        }
        else if ((uVar6 != 4) ||
                (uVar7 = FUN_1002500c((int)param_3,
                                      *(int *)(*(int *)((int)this + 0x128) + -4 + iVar8 * 4) + 0x150
                                     ), (char)uVar7 == '\0')) goto LAB_10025fb2;
      }
      uVar7 = 0;
    }
    goto LAB_1002624d;
  }
  if ((((param_2 & 0x18) != 8) || (uVar6 != 2)) || (param_3 == (int *)0x0)) goto LAB_1002624d;
  piVar5 = local_a8;
  for (iVar8 = 0x1f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar5 = *param_3;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 1;
  }
  if (((local_a8[1] & 1U) == 0) || ((local_40 & 0x200) == 0)) {
    iVar8 = *(int *)((int)this + 0x11c) * 0xa4;
    if ((local_a8[1] & 4U) == 0) {
      local_a8[3] = *(int *)(&DAT_100698dc + iVar8);
      local_a8[1] = local_a8[1] | 4;
    }
    if ((local_a8[1] & 2U) == 0) {
      local_a8[2] = *(int *)(&DAT_100698d8 + iVar8);
      local_a8[1] = local_a8[1] | 2;
    }
    if ((local_a8[1] & 1U) == 0) {
      uVar6 = 0x4000;
      if (*(char *)((int)this + 0x14c) != '\0') {
        uVar6 = 0x800;
      }
      local_a8[1] = local_a8[1] | uVar6 | 1;
    }
    if ((local_a8[1] & 0x1000U) == 0) {
      piVar5 = (int *)(&DAT_10069918 + iVar8);
      piVar9 = local_60;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
    }
    bVar10 = (local_a8[1] & 0x1000U) == 0;
  }
  else {
    if ((((local_40 & 0x18) != 0) &&
        (uVar4 = local_40 | 0x18, uVar6 = local_40 & 0x20, local_40 = uVar4, uVar6 == 0)) &&
       ((local_a8[1] & 0x20U) == 0)) {
      local_a8[1] = local_a8[1] | 0x20;
      local_94 = 1;
    }
    bVar10 = false;
  }
  iVar8 = 0;
  do {
    if (*(int *)(param_1 + iVar8 * 4) != (&DAT_10062380)[iVar8]) {
      uVar1 = 0;
      goto LAB_100260e0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  uVar1 = 1;
LAB_100260e0:
  iVar8 = FUN_100288e0(0,0,param_1,local_a8,(undefined4 *)0x0,0,uVar1,(int *)0x1);
  uVar7 = 0;
  if (-1 < iVar8) {
    FUN_10034b5b(param_1,(int *)0x0,local_a8,param_5,param_4);
  }
  if (!bVar10) goto LAB_1002624d;
  if (local_60[3] == 8) {
LAB_1002618e:
    uVar6 = FUN_10031adf(this,0x10);
    if (uVar6 != 0xffffffff) {
      piVar5 = FUN_10024c76(this,local_28,uVar6);
      piVar9 = local_60;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar8 = FUN_100288e0(0,0,param_1,local_a8,(undefined4 *)0x0,0,uVar1,(int *)0x1);
      if (-1 < iVar8) {
        FUN_10034b5b(param_1,(int *)0x0,local_a8,param_5,param_4);
      }
    }
    uVar7 = 0;
    if (local_60[3] == 0x20) goto LAB_1002624d;
  }
  else {
    uVar6 = FUN_10031adf(this,8);
    if (uVar6 != 0xffffffff) {
      piVar5 = FUN_10024c76(this,local_28,uVar6);
      piVar9 = local_60;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar9 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar8 = FUN_100288e0(0,0,param_1,local_a8,(undefined4 *)0x0,0,uVar1,(int *)0x1);
      if (-1 < iVar8) {
        FUN_10034b5b(param_1,(int *)0x0,local_a8,param_5,param_4);
      }
    }
    if (local_60[3] != 0x10) goto LAB_1002618e;
  }
  uVar7 = 0;
  uVar6 = FUN_10031adf(this,0x20);
  if (uVar6 != 0xffffffff) {
    piVar5 = FUN_10024c76(this,local_28,uVar6);
    piVar9 = local_60;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    uVar7 = 0;
    iVar8 = FUN_100288e0(0,0,param_1,local_a8,(undefined4 *)0x0,0,uVar1,(int *)0x1);
    if (-1 < iVar8) {
      FUN_10034b5b(param_1,(int *)0x0,local_a8,param_5,param_4);
    }
  }
LAB_1002624d:
  LeaveCriticalSection(DAT_1006c254);
  return uVar7;
}

