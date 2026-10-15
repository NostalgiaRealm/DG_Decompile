/*
 * FUN_100111f6 at 100111f6
 * undefined __fastcall FUN_100111f6(void * param_1)
 * Address ranges: 100111f6-1001140b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100111f6(void *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_18 = **(uint **)((int)param_1 + 8);
  iVar5 = *(int *)(*(int *)((int)param_1 + 4) + 0x2b14);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x4a0));
  uVar4 = 0;
  pvVar7 = (void *)0x0;
  if (*(int *)(iVar5 + 0x4bc) != 0) {
    iVar6 = *(int *)(iVar5 + 0x4b8);
    do {
      puVar1 = *(uint **)(iVar6 + uVar4 * 4);
      if (*puVar1 == local_18) {
        pvVar7 = (void *)puVar1[0x358];
        break;
      }
      iVar6 = *(int *)(iVar5 + 0x4b8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(iVar5 + 0x4bc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x4a0));
  if (pvVar7 == param_1) {
    bVar2 = FUN_100111e4((int)param_1);
    if (bVar2 == 0) {
      iVar5 = *(int *)(*(int *)((int)param_1 + 4) + 4);
      cVar3 = FUN_1002f81d(*(uint *)(iVar5 + 0x37),*(uint *)(iVar5 + 0x3b));
      if (cVar3 != '\0') {
        if (*(int *)(iVar5 + 8) == 0) {
          iVar5 = FUN_1004a829(*(void **)(*(int *)((int)param_1 + 4) + 0x2b14),
                               *(int *)((int)param_1 + 8));
        }
        else {
          iVar5 = *(int *)(iVar5 + 8) + -1;
        }
        FUN_100096ff(*(void **)((int)param_1 + 4),&local_18,iVar5,0);
        FUN_10009746(*(void **)((int)param_1 + 4),&local_10,iVar5,&local_18,0);
        FUN_1001144e(param_1,&local_18);
        iVar5 = *(int *)((int)param_1 + 4);
        if ((((local_18 != *(uint *)(iVar5 + 0xa0)) || (local_14 != *(int *)(iVar5 + 0xa4))) ||
            (local_10 != *(uint *)(iVar5 + 0xa8))) || (local_c != *(int *)(iVar5 + 0xac))) {
          *(uint *)(iVar5 + 0xa0) = local_18;
          *(int *)(*(int *)((int)param_1 + 4) + 0xa4) = local_14;
          *(uint *)(*(int *)((int)param_1 + 4) + 0xa8) = local_10;
          *(int *)(*(int *)((int)param_1 + 4) + 0xac) = local_c;
          FUN_1000f643(*(int **)((int)param_1 + 4));
        }
      }
    }
    iVar5 = *(int *)(*(int *)((int)param_1 + 4) + 4);
    if (bVar2 == 0) {
      uVar4 = *(uint *)(iVar5 + 0xc6) & 1 | 2;
    }
    else {
      uVar4 = (uint)((*(uint *)(iVar5 + 0xc2) & 4) != 0);
    }
    cVar3 = FUN_1004a001(*(void **)(*(int *)((int)param_1 + 4) + 0x2b14),*(int **)((int)param_1 + 8)
                         ,uVar4,*(HMONITOR *)(iVar5 + 8));
    if (cVar3 != '\0') {
      if (bVar2 == 0) {
        iVar5 = *(int *)((int)param_1 + 4);
        FUN_1004a3fd(*(void **)(iVar5 + 0x2b14),*(int *)((int)param_1 + 8),
                     (int *)(((*(char *)(*(int *)(iVar5 + 4) + 0x50) != '\0') - 1 & 0xc00) + 0x1310
                            + iVar5),(undefined4 *)(iVar5 + 0x2b10));
      }
      local_18 = CONCAT31(local_18._1_3_,bVar2) ^ 1;
      FUN_100094d8(*(void **)((int)param_1 + 4),(char)local_18);
      cVar3 = (**(code **)(**(int **)(*(int *)((int)param_1 + 4) + 8) + 4))();
      if (cVar3 != '\0') {
        *(byte *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 0x20) = bVar2;
        (**(code **)**(undefined4 **)(*(int *)((int)param_1 + 4) + 8))();
      }
      *(byte *)((int)param_1 + 0x126) = bVar2 ^ 1;
    }
    FUN_1001082c((int)param_1);
  }
  return;
}

