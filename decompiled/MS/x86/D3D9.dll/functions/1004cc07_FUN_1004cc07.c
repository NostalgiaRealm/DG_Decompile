/*
 * FUN_1004cc07 at 1004cc07
 * undefined __fastcall FUN_1004cc07(void * param_1)
 * Address ranges: 1004cc07-1004cda9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004cc07(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint local_44;
  uint local_38 [2];
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint uStack_14;
  undefined4 local_10;
  undefined2 local_c;
  
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    local_44 = 0;
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      if (*(int *)((int)param_1 + 0x1c) == 0) {
        puVar6 = (uint *)0x0;
        goto LAB_1004cc46;
      }
      do {
        puVar6 = (uint *)(local_44 * 0x28 + *(int *)((int)param_1 + 0x18) + 8);
LAB_1004cc46:
        local_38[0] = *puVar6;
        local_2c = puVar6[3];
        local_30 = puVar6[2];
        local_20 = puVar6[4];
        iVar7 = *(int *)(*(int *)((int)param_1 + 4) + 0x1304);
        local_1c = puVar6[5];
        local_28 = *(undefined4 *)(iVar7 + 0x938);
        local_24 = *(undefined4 *)(iVar7 + 0x93c);
        local_18 = puVar6[6];
        uStack_14 = puVar6[7];
        local_10 = 0xffffffff;
        local_c = 0;
        FUN_1004cde7(param_1,local_38);
        uVar5 = local_18;
        if (*(int *)(local_38[0] + 8) == 9) {
          FUN_100bc28a(*(int *)(*(int *)((int)param_1 + 4) + 0x1304),local_20,0,local_18);
          FUN_100bc2b5(*(int *)(*(int *)((int)param_1 + 4) + 0x1304),local_20,0,uVar5,1,local_1c,
                       uVar5 << 3,0);
          puVar6[4] = 0;
        }
        local_44 = local_44 + 1;
      } while (local_44 < *(uint *)((int)param_1 + 0x1c));
    }
    *(undefined1 *)((int)param_1 + 0x81) = 1;
  }
  if (*(int *)((int)param_1 + 0x48) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x60));
    for (iVar7 = *(int *)((int)param_1 + 0x34); iVar7 != -1; iVar7 = *(int *)(iVar1 + 0x28 + iVar7))
    {
      iVar7 = iVar7 * 0x30;
      iVar1 = *(int *)((int)param_1 + 0x28);
      iVar2 = *(int *)(iVar1 + iVar7);
      if (iVar2 == 0) break;
      if ((*(char *)(iVar1 + 0x2c + iVar7) != '\0') && (*(char *)(iVar1 + 0x2d + iVar7) == '\0')) {
        iVar3 = *(int *)(iVar1 + 8 + iVar7);
        iVar4 = *(int *)(iVar1 + 0xc + iVar7);
        FUN_1004c049(iVar2);
        if ((iVar3 == *(int *)(iVar2 + 0x20)) && (iVar4 == *(int *)(iVar2 + 0x24))) {
          LOCK();
          if (*(int *)(iVar2 + 0x34) == 2) {
            *(int *)(iVar2 + 0x34) = 3;
          }
          UNLOCK();
        }
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x60));
    SetEvent(*(HANDLE *)((int)param_1 + 0x7c));
  }
  return;
}

