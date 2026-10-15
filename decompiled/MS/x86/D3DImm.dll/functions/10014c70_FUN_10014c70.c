/*
 * FUN_10014c70 at 10014c70
 * undefined __fastcall FUN_10014c70(int param_1)
 * Address ranges: 10014c70-100151b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014c70(int param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  SIZE_T SVar9;
  int *piVar10;
  HMODULE hInstance;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  LPCRITICAL_SECTION local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x1d50);
  if (iVar8 != 0) {
    local_c = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x4a0));
    *(int *)(iVar8 + 0x49c) = param_1;
    piVar11 = *(int **)(*(int *)(param_1 + 0x1d54) + 4);
    (**(code **)(*piVar11 + 0x3c))(piVar11,*(undefined4 *)(param_1 + 0x1d74),0);
    piVar11 = *(int **)(*(int *)(param_1 + 0x1d54) + 4);
    (**(code **)(*piVar11 + 0x3c))(piVar11,*(undefined4 *)(param_1 + 0x1d70),0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x1d50) + 0x4a0));
    piVar11 = (int *)(*(int *)(param_1 + 0x1d50) + 0x49c);
    LOCK();
    if (param_1 == *piVar11) {
      *piVar11 = 0;
    }
    UNLOCK();
    (**(code **)(**(int **)(param_1 + 0x1dcc) + 8))(*(int **)(param_1 + 0x1dcc));
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x1dcc) = 0;
    if (*(int *)(param_1 + 0x1d9c) != 0) {
      do {
        piVar11 = *(int **)(*(int *)(param_1 + 0x1d94) + 0x14 + uVar15 * 0x18);
        (**(code **)(*piVar11 + 8))(piVar11);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0x1d9c));
    }
    *(undefined4 *)(param_1 + 0x1d9c) = 0;
    FUN_1001a6f5(param_1 + 0x1db0);
    FUN_1001a043(param_1 + 0x1d7c);
    local_20 = (int *)0x0;
    do {
      local_28 = *(LPCRITICAL_SECTION *)(param_1 + 0x1ec4 + (int)local_20 * 4);
      iVar8 = *(int *)(param_1 + 0x1d54);
      local_8 = iVar8;
      if (local_28 != (LPCRITICAL_SECTION)0x0) {
        (**(code **)(*(int *)local_28 + 0x1c))(local_28,&local_5c);
        uVar15 = 0;
        local_10 = 0;
        local_24 = *(uint *)(iVar8 + 0x3a4);
        uVar18 = (((((iStack_44 + -1) * 0x10 | iStack_48 - 1U) << 3 | uStack_50) << 3 | uStack_54)
                  << 3 | uStack_58) << 8 | local_5c;
        if (local_24 != 0) {
          local_14 = *(int *)(iVar8 + 0x39c);
          uVar14 = local_24;
          do {
            local_10 = uVar15 + uVar14 >> 1;
            uVar3 = *(uint *)(local_14 + local_10 * 0x40);
            uVar16 = local_10;
            iVar8 = local_8;
            if ((*(int *)(local_14 + 4 + local_10 * 0x40) == 0) && (uVar3 <= uVar18)) {
              if (uVar18 <= uVar3) break;
              uVar15 = local_10 + 1;
              local_10 = uVar14;
              uVar16 = uVar15;
            }
            bVar19 = local_10 != uVar15;
            uVar14 = local_10;
            local_10 = uVar16;
          } while (bVar19);
        }
        uVar15 = local_10;
        piVar11 = (int *)(iVar8 + 0x39c);
        iVar8 = local_10 * 0x40;
        local_1c = iVar8;
        local_18 = uVar18;
        if (((local_10 == local_24) || (*(uint *)(iVar8 + *piVar11) != uVar18)) ||
           (*(int *)(iVar8 + 4 + *piVar11) != 0)) {
          if (local_24 == *(uint *)(local_8 + 0x3a0)) {
            lVar4 = (ulonglong)(*(uint *)(local_8 + 0x3a0) * 2) * 0x40;
            SVar9 = (SIZE_T)lVar4;
            if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
              SVar9 = 0xffffffff;
            }
            local_14 = FUN_1005c789(SVar9);
            if (local_14 != 0) {
              uVar14 = 0;
              if (*(int *)(local_8 + 0x3a0) != 0) {
                do {
                  iVar8 = uVar14 * 0x40;
                  uVar14 = uVar14 + 1;
                  puVar12 = (undefined4 *)(*piVar11 + iVar8);
                  uVar5 = puVar12[1];
                  uVar6 = puVar12[2];
                  uVar7 = puVar12[3];
                  puVar1 = (undefined4 *)(iVar8 + local_14);
                  *puVar1 = *puVar12;
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  uVar5 = puVar12[5];
                  uVar6 = puVar12[6];
                  uVar7 = puVar12[7];
                  puVar1 = (undefined4 *)(iVar8 + 0x10 + local_14);
                  *puVar1 = puVar12[4];
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  uVar5 = puVar12[9];
                  uVar6 = puVar12[10];
                  uVar7 = puVar12[0xb];
                  puVar1 = (undefined4 *)(iVar8 + 0x20 + local_14);
                  *puVar1 = puVar12[8];
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  uVar5 = puVar12[0xd];
                  uVar6 = puVar12[0xe];
                  uVar7 = puVar12[0xf];
                  puVar1 = (undefined4 *)(iVar8 + 0x30 + local_14);
                  *puVar1 = puVar12[0xc];
                  puVar1[1] = uVar5;
                  puVar1[2] = uVar6;
                  puVar1[3] = uVar7;
                  uVar15 = local_10;
                  uVar18 = local_18;
                } while (uVar14 < *(uint *)(local_8 + 0x3a0));
              }
              thunk_FUN_1005c76c((LPVOID)*piVar11);
              *piVar11 = local_14;
              *(int *)(local_8 + 0x3a0) = *(int *)(local_8 + 0x3a0) << 1;
            }
          }
          iVar8 = local_1c;
          for (uVar14 = *(uint *)(local_8 + 0x3a4); uVar15 < uVar14; uVar14 = uVar14 - 1) {
            iVar17 = *piVar11;
            iVar13 = uVar14 * 0x40;
            puVar12 = (undefined4 *)(iVar13 + -0x40 + iVar17);
            uVar5 = puVar12[1];
            uVar6 = puVar12[2];
            uVar7 = puVar12[3];
            puVar1 = (undefined4 *)(iVar13 + iVar17);
            *puVar1 = *puVar12;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            puVar1 = (undefined4 *)(iVar13 + -0x30 + iVar17);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar12 = (undefined4 *)(iVar13 + 0x10 + iVar17);
            *puVar12 = *puVar1;
            puVar12[1] = uVar5;
            puVar12[2] = uVar6;
            puVar12[3] = uVar7;
            puVar1 = (undefined4 *)(iVar13 + -0x20 + iVar17);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar12 = (undefined4 *)(iVar13 + 0x20 + iVar17);
            *puVar12 = *puVar1;
            puVar12[1] = uVar5;
            puVar12[2] = uVar6;
            puVar12[3] = uVar7;
            puVar1 = (undefined4 *)(iVar13 + -0x10 + iVar17);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar12 = (undefined4 *)(iVar13 + 0x30 + iVar17);
            *puVar12 = *puVar1;
            puVar12[1] = uVar5;
            puVar12[2] = uVar6;
            puVar12[3] = uVar7;
          }
          iVar17 = *piVar11;
          *(uint *)(local_1c + iVar17) = uVar18;
          *(undefined4 *)(local_1c + 4 + iVar17) = 0;
          iVar17 = *piVar11 + local_1c;
          *(uint *)(iVar17 + 8) = local_5c;
          *(uint *)(iVar17 + 0xc) = uStack_58;
          *(uint *)(iVar17 + 0x10) = uStack_54;
          *(uint *)(iVar17 + 0x14) = uStack_50;
          *(undefined4 *)(iVar17 + 0x18) = local_4c;
          *(int *)(iVar17 + 0x1c) = iStack_48;
          *(int *)(iVar17 + 0x20) = iStack_44;
          *(undefined4 *)(iVar17 + 0x24) = uStack_40;
          *(undefined4 *)(iVar17 + 0x28) = local_3c;
          *(undefined4 *)(iVar17 + 0x2c) = uStack_38;
          *(undefined4 *)(iVar17 + 0x30) = uStack_34;
          *(undefined4 *)(iVar17 + 0x34) = uStack_30;
          *(undefined4 *)(iVar17 + 0x38) = local_2c;
          piVar10 = (int *)FUN_1005c755(0x2d0);
          if (piVar10 != (int *)0x0) {
            FUN_1005c9cc(piVar10,0,0x2d0);
          }
          *(int **)(*piVar11 + 0x3c + iVar8) = piVar10;
          *(int *)(local_8 + 0x3a4) = *(int *)(local_8 + 0x3a4) + 1;
        }
        iVar8 = *(int *)(*piVar11 + 0x3c + iVar8);
        param_1 = local_c;
        if (iVar8 != 0) {
          uVar15 = 0;
          do {
            if ((LPCRITICAL_SECTION)*(int **)(iVar8 + 0x1c + uVar15 * 0x24) == local_28) {
              *(undefined1 *)(iVar8 + uVar15 * 0x24 + 0x20) = 0;
              break;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < 0x14);
        }
      }
      iVar8 = local_c;
      local_20 = (int *)((int)local_20 + 1);
    } while (local_20 < 8);
    piVar11 = *(int **)(param_1 + 0x1d78);
    iVar17 = *(int *)(local_c + 0x10) * 0x1510 + *(int *)(local_c + 0x1d50);
    local_28 = (LPCRITICAL_SECTION)(*(int *)(local_c + 0x1d50) + 0x4a0);
    EnterCriticalSection(local_28);
    uVar15 = 0;
    do {
      if (piVar11 == *(int **)(iVar17 + 0x554 + uVar15 * 4)) {
        *(undefined4 *)(iVar17 + 0x554 + uVar15 * 4) = 0;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    uVar15 = 0;
    do {
      if (piVar11 == *(int **)(iVar17 + 0x594 + uVar15 * 4)) {
        *(undefined4 *)(iVar17 + 0x594 + uVar15 * 4) = 0;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    (**(code **)(*piVar11 + 8))(piVar11);
    LeaveCriticalSection(local_28);
    *(undefined4 *)(iVar8 + 0x1d78) = 0;
    (**(code **)(**(int **)(iVar8 + 0x1d68) + 8))(*(int **)(iVar8 + 0x1d68));
    *(undefined4 *)(iVar8 + 0x1d68) = 0;
    (**(code **)(**(int **)(iVar8 + 0x1d64) + 8))(*(int **)(iVar8 + 0x1d64));
    *(undefined4 *)(iVar8 + 0x1d64) = 0;
    (**(code **)(**(int **)(iVar8 + 0x1d6c) + 8))(*(int **)(iVar8 + 0x1d6c));
    iVar17 = *(int *)(iVar8 + 0x1d50);
    local_28 = *(LPCRITICAL_SECTION *)(iVar8 + 0x1d70);
    iVar13 = *(int *)(iVar8 + 0x10);
    *(undefined4 *)(iVar8 + 0x1d6c) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x4a0));
    iVar13 = iVar13 * 0x1510;
    if (local_28 == (LPCRITICAL_SECTION)*(int **)(iVar13 + 0x7c4 + iVar17)) {
      *(undefined4 *)(iVar13 + 0x7c4 + iVar17) = 0;
    }
    (**(code **)(*(int *)local_28 + 8))(local_28);
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x4a0));
    *(undefined4 *)(iVar8 + 0x1d70) = 0;
    piVar11 = *(int **)(iVar8 + 0x1d74);
    iVar8 = *(int *)(local_c + 0x10);
    iVar17 = *(int *)(local_c + 0x1d50);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x4a0));
    iVar8 = iVar8 * 0x1510 + iVar17;
    uVar15 = 0;
    do {
      if (piVar11 == *(int **)(iVar8 + 0x704 + uVar15 * 4)) {
        *(undefined4 *)(iVar8 + 0x704 + uVar15 * 4) = 0;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    (**(code **)(*piVar11 + 8))(piVar11);
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar17 + 0x4a0));
    iVar8 = local_c;
    *(undefined4 *)(local_c + 0x1d74) = 0;
    thunk_FUN_1005c76c(*(LPVOID *)(local_c + 0x1c));
    *(undefined4 *)(iVar8 + 0x1c) = 0;
    thunk_FUN_1005c76c(*(LPVOID *)(iVar8 + 0x18));
    piVar11 = *(int **)(iVar8 + 0x1d50);
    *(undefined4 *)(iVar8 + 0x18) = 0;
    if (piVar11 != (int *)0x0) {
      piVar10 = piVar11 + 2;
      LOCK();
      iVar17 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        local_20 = piVar11;
        if ((short)piVar11[3] != 0) {
          uVar2 = *(ushort *)(piVar11 + 3);
          hInstance = GetModuleHandleW((LPCWSTR)0x0);
          UnregisterClassW((LPCWSTR)(uint)uVar2,hInstance);
          if ((HMODULE)piVar11[4] != (HMODULE)0x0) {
            FreeLibrary((HMODULE)piVar11[4]);
            piVar11[4] = 0;
          }
        }
        (**(code **)(*local_20 + 0x44))();
      }
    }
    *(undefined4 *)(iVar8 + 0x1d50) = 0;
  }
  return;
}

