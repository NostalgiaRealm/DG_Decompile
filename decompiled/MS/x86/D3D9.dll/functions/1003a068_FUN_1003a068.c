/*
 * FUN_1003a068 at 1003a068
 * bool __thiscall FUN_1003a068(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 1003a068-1003a3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003a068(void *this,int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_7c;
  int local_70;
  uint local_64;
  uint local_60;
  undefined4 *local_5c;
  int local_58 [10];
  int local_30 [11];
  
  iVar6 = *(int *)((int)this + 0x18);
  if (((iVar6 == 2) || (iVar6 == 3)) || (*(char *)((int)this + 0x20) != '\0')) {
    local_64 = 0;
    iVar6 = (**(code **)(*(int *)this + 8))(1,0,&local_64);
    if (iVar6 == 0) {
      if (*(char *)((int)this + 0x20) != '\0') {
        param_3 = *(uint *)((int)this + 0x14);
      }
      iVar6 = 0;
      if (*(char *)((int)this + 0x20) == '\0') {
        iVar6 = param_2;
      }
      FUN_100cff00((undefined4 *)(local_70 + iVar6),(undefined4 *)(param_1 + iVar6),param_3);
      (**(code **)(*(int *)this + 0xc))();
      return true;
    }
    return iVar6 == 0;
  }
  if (iVar6 != 0) {
    return false;
  }
  puVar10 = (undefined4 *)(param_1 + param_2);
  iVar4 = *(int *)((int)this + 8) + *(int *)((int)this + 0x10) * 0x16c0;
  local_64 = param_3;
  iVar6 = *(int *)(*(int *)((int)this + 0x24) + *(int *)((int)this + 0x34) * 8);
  local_5c = puVar10;
  bVar3 = FUN_100399fa(iVar4 + 0x6c0,param_3,puVar10,local_58);
  if (!bVar3) {
    local_7c = 0;
    do {
      while( true ) {
        if (param_3 == 0) {
          return true;
        }
        local_60 = param_3;
        if (0x1000000 < param_3) {
          local_60 = 0x1000000;
        }
        bVar3 = FUN_100399fa(iVar4 + 0x6c0,local_60,(undefined4 *)(local_7c + (int)puVar10),local_58
                            );
        if (bVar3) break;
        FUN_100a4e23(
                    "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                    );
        DebugBreak();
      }
      piVar8 = local_58;
      piVar9 = local_30;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      piVar8 = (int *)(iVar4 + 0x1880);
      uVar1 = *(undefined4 *)(iVar6 + 0x40);
      uVar2 = *(undefined4 *)(iVar4 + 0x19c4);
      FUN_100ce620(piVar8);
      if (*(char *)(iVar4 + 0x19ac) == '\0') {
LAB_1003a2f6:
        puVar10 = *(undefined4 **)(iVar4 + 0x1990);
        *puVar10 = uVar2;
        puVar10[1] = iVar4 + 0x1af0;
        puVar10[2] = uVar1;
        puVar10[3] = local_7c + param_2;
        piVar8 = local_30;
        piVar9 = puVar10 + 4;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        FUN_1003a3de(puVar10);
LAB_1003a32c:
        *(undefined4 *)(iVar4 + 0x1880) = 0;
      }
      else {
        puVar10 = (undefined4 *)FUN_100ce540(piVar8,0x38);
        if (puVar10 == (undefined4 *)0x0) {
          FUN_1003971e(piVar8);
          goto LAB_1003a2f6;
        }
        LOCK();
        *(int *)(iVar4 + 0x19a8) = *(int *)(iVar4 + 0x19a8) + 1;
        UNLOCK();
        puVar10[1] = 0x38;
        puVar10[2] = uVar2;
        puVar10[3] = iVar4 + 0x1af0;
        puVar10[4] = uVar1;
        puVar10[5] = local_7c + param_2;
        piVar8 = local_30;
        piVar9 = puVar10 + 6;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        puVar7 = (undefined4 *)((int)puVar10 + 0x43U & 0xfffffffc);
        *puVar7 = 0;
        *puVar10 = FUN_1003a3de;
        *(undefined4 **)(iVar4 + 0x18e8 + *(int *)(iVar4 + 0x19a4) * 0x14) = puVar7;
        if (*(char *)(iVar4 + 0x19ad) == '\0') goto LAB_1003a32c;
        *(undefined4 *)(iVar4 + 0x1880) = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x18e0));
      }
      local_7c = local_7c + local_60;
      param_3 = local_64 - local_60;
      puVar10 = local_5c;
      local_64 = param_3;
    } while( true );
  }
  piVar8 = local_58;
  piVar9 = local_30;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  uVar1 = *(undefined4 *)(iVar6 + 0x40);
  uVar2 = *(undefined4 *)(iVar4 + 0x19c4);
  piVar8 = (int *)(iVar4 + 0x1880);
  FUN_100ce620(piVar8);
  if (*(char *)(iVar4 + 0x19ac) != '\0') {
    puVar10 = (undefined4 *)FUN_100ce540(piVar8,0x38);
    if (puVar10 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x19a8) = *(int *)(iVar4 + 0x19a8) + 1;
      UNLOCK();
      puVar10[1] = 0x38;
      puVar10[2] = uVar2;
      puVar10[3] = iVar4 + 0x1af0;
      puVar10[4] = uVar1;
      puVar10[5] = param_2;
      piVar9 = local_30;
      piVar11 = puVar10 + 6;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar11 = piVar11 + 1;
      }
      puVar7 = (undefined4 *)((int)puVar10 + 0x43U & 0xfffffffc);
      *puVar7 = 0;
      *puVar10 = FUN_1003a3de;
      piVar8[*(int *)(iVar4 + 0x19a4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar4 + 0x19ad) != '\0') {
        *piVar8 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x18e0));
        return true;
      }
      goto LAB_1003a1d3;
    }
    FUN_1003971e(piVar8);
  }
  puVar10 = *(undefined4 **)(iVar4 + 0x1990);
  *puVar10 = uVar2;
  puVar10[1] = iVar4 + 0x1af0;
  puVar10[2] = uVar1;
  puVar10[3] = param_2;
  piVar9 = local_30;
  piVar11 = puVar10 + 4;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar11 = piVar11 + 1;
  }
  FUN_1003a3de(puVar10);
LAB_1003a1d3:
  *piVar8 = 0;
  return true;
}

