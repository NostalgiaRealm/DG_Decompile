/*
 * FUN_1002f280 at 1002f280
 * undefined __fastcall FUN_1002f280(int param_1)
 * Address ranges: 1002f280-1002fa84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002f280(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  SIZE_T SVar10;
  HMODULE hInstance;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
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
  int *local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar14 = *(int *)(param_1 + 0xf6b0);
  if (iVar14 != 0) {
    local_8 = param_1;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar14 + 0x4a0));
    *(int *)(iVar14 + 0x49c) = param_1;
    piVar11 = *(int **)(*(int *)(param_1 + 0xf6b4) + 4);
    (**(code **)(*piVar11 + 0x3c))(piVar11,*(undefined4 *)(param_1 + 0xf6d4),0);
    piVar11 = *(int **)(*(int *)(param_1 + 0xf6b4) + 4);
    (**(code **)(*piVar11 + 0x3c))(piVar11,*(undefined4 *)(param_1 + 0xf6d0),0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0xf6b0) + 0x4a0));
    piVar11 = (int *)(*(int *)(param_1 + 0xf6b0) + 0x49c);
    LOCK();
    if (param_1 == *piVar11) {
      *piVar11 = 0;
    }
    UNLOCK();
    (**(code **)(**(int **)(param_1 + 0xf730) + 8))(*(int **)(param_1 + 0xf730));
    *(undefined4 *)(param_1 + 0xf730) = 0;
    (**(code **)(**(int **)(param_1 + 0xf744) + 8))(*(int **)(param_1 + 0xf744));
    *(undefined4 *)(param_1 + 0xf744) = 0;
    (**(code **)(**(int **)(param_1 + 0xf734) + 8))(*(int **)(param_1 + 0xf734));
    *(undefined4 *)(param_1 + 0xf734) = 0;
    (**(code **)(**(int **)(param_1 + 0xf738) + 8))(*(int **)(param_1 + 0xf738));
    *(undefined4 *)(param_1 + 0xf738) = 0;
    (**(code **)(**(int **)(param_1 + 0xf73c) + 8))(*(int **)(param_1 + 0xf73c));
    uVar17 = 0;
    *(undefined4 *)(param_1 + 0xf73c) = 0;
    if (*(int *)(param_1 + 0xf6fc) != 0) {
      do {
        piVar11 = *(int **)(*(int *)(param_1 + 0xf6f4) + 0x14 + uVar17 * 0x18);
        (**(code **)(*piVar11 + 8))(piVar11);
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(param_1 + 0xf6fc));
    }
    *(undefined4 *)(param_1 + 0xf6fc) = 0;
    FUN_100388fc(param_1 + 0xf710);
    FUN_100377b9(param_1 + 0xf6dc);
    local_20 = (int *)0x0;
    do {
      local_28 = *(LPCRITICAL_SECTION *)(param_1 + 0xf8fc + (int)local_20 * 4);
      iVar14 = *(int *)(param_1 + 0xf6b4);
      if (local_28 != (LPCRITICAL_SECTION)0x0) {
        local_c = iVar14;
        (**(code **)(*(int *)local_28 + 0x1c))(local_28,&local_5c);
        piVar11 = (int *)0x0;
        local_10 = (int *)0x0;
        local_24 = *(int **)(iVar14 + 0x3a4);
        uVar17 = (((((iStack_44 + -1) * 0x10 | iStack_48 - 1U) << 3 | uStack_50) << 3 | uStack_54)
                  << 3 | uStack_58) << 8 | local_5c;
        if (local_24 != (int *)0x0) {
          local_14 = *(int *)(iVar14 + 0x39c);
          piVar16 = local_24;
          do {
            local_10 = (int *)((uint)((int)piVar11 + (int)piVar16) >> 1);
            uVar9 = *(uint *)(local_14 + (int)local_10 * 0x40);
            piVar15 = local_10;
            iVar14 = local_c;
            if ((*(int *)(local_14 + 4 + (int)local_10 * 0x40) == 0) && (uVar9 <= uVar17)) {
              if (uVar17 <= uVar9) break;
              piVar11 = (int *)((int)local_10 + 1);
              local_10 = piVar16;
              piVar15 = piVar11;
            }
            bVar19 = local_10 != piVar11;
            piVar16 = local_10;
            local_10 = piVar15;
          } while (bVar19);
        }
        piVar16 = local_10;
        piVar11 = (int *)(iVar14 + 0x39c);
        uVar9 = (int)local_10 * 0x40;
        local_1c = uVar9;
        local_18 = uVar17;
        if (((local_10 == local_24) || (*(uint *)(uVar9 + *piVar11) != uVar17)) ||
           (*(int *)(uVar9 + 4 + *piVar11) != 0)) {
          if (local_24 == *(int **)(local_c + 0x3a0)) {
            lVar5 = (ulonglong)(uint)((int)*(int **)(local_c + 0x3a0) * 2) * 0x40;
            SVar10 = (SIZE_T)lVar5;
            if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
              SVar10 = 0xffffffff;
            }
            local_14 = FUN_100cfd89(SVar10);
            if (local_14 != 0) {
              uVar9 = 0;
              if (*(int *)(local_c + 0x3a0) != 0) {
                do {
                  iVar14 = uVar9 * 0x40;
                  uVar9 = uVar9 + 1;
                  puVar12 = (undefined4 *)(*piVar11 + iVar14);
                  uVar6 = puVar12[1];
                  uVar7 = puVar12[2];
                  uVar8 = puVar12[3];
                  puVar2 = (undefined4 *)(iVar14 + local_14);
                  *puVar2 = *puVar12;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[5];
                  uVar7 = puVar12[6];
                  uVar8 = puVar12[7];
                  puVar2 = (undefined4 *)(iVar14 + 0x10 + local_14);
                  *puVar2 = puVar12[4];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[9];
                  uVar7 = puVar12[10];
                  uVar8 = puVar12[0xb];
                  puVar2 = (undefined4 *)(iVar14 + 0x20 + local_14);
                  *puVar2 = puVar12[8];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[0xd];
                  uVar7 = puVar12[0xe];
                  uVar8 = puVar12[0xf];
                  puVar2 = (undefined4 *)(iVar14 + 0x30 + local_14);
                  *puVar2 = puVar12[0xc];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  piVar16 = local_10;
                  uVar17 = local_18;
                } while (uVar9 < *(uint *)(local_c + 0x3a0));
              }
              thunk_FUN_100cfd6c((LPVOID)*piVar11);
              *piVar11 = local_14;
              *(int *)(local_c + 0x3a0) = *(int *)(local_c + 0x3a0) << 1;
            }
          }
          uVar9 = local_1c;
          for (piVar15 = *(int **)(local_c + 0x3a4); piVar16 < piVar15;
              piVar15 = (int *)((int)piVar15 + -1)) {
            iVar14 = *piVar11;
            iVar18 = (int)piVar15 * 0x40;
            puVar12 = (undefined4 *)(iVar18 + -0x40 + iVar14);
            uVar6 = puVar12[1];
            uVar7 = puVar12[2];
            uVar8 = puVar12[3];
            puVar2 = (undefined4 *)(iVar18 + iVar14);
            *puVar2 = *puVar12;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar2 = (undefined4 *)(iVar18 + -0x30 + iVar14);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar18 + 0x10 + iVar14);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar2 = (undefined4 *)(iVar18 + -0x20 + iVar14);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar18 + 0x20 + iVar14);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar2 = (undefined4 *)(iVar18 + -0x10 + iVar14);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar18 + 0x30 + iVar14);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
          }
          iVar14 = *piVar11;
          *(uint *)(local_1c + iVar14) = uVar17;
          *(undefined4 *)(local_1c + 4 + iVar14) = 0;
          iVar14 = *piVar11 + local_1c;
          *(uint *)(iVar14 + 8) = local_5c;
          *(uint *)(iVar14 + 0xc) = uStack_58;
          *(uint *)(iVar14 + 0x10) = uStack_54;
          *(uint *)(iVar14 + 0x14) = uStack_50;
          *(undefined4 *)(iVar14 + 0x18) = local_4c;
          *(int *)(iVar14 + 0x1c) = iStack_48;
          *(int *)(iVar14 + 0x20) = iStack_44;
          *(undefined4 *)(iVar14 + 0x24) = uStack_40;
          *(undefined4 *)(iVar14 + 0x28) = local_3c;
          *(undefined4 *)(iVar14 + 0x2c) = uStack_38;
          *(undefined4 *)(iVar14 + 0x30) = uStack_34;
          *(undefined4 *)(iVar14 + 0x34) = uStack_30;
          *(undefined4 *)(iVar14 + 0x38) = local_2c;
          piVar16 = (int *)FUN_100cfd55(0x2d0);
          if (piVar16 != (int *)0x0) {
            FUN_100cfed0(piVar16,0,0x2d0);
          }
          *(int **)(*piVar11 + 0x3c + uVar9) = piVar16;
          *(int *)(local_c + 0x3a4) = *(int *)(local_c + 0x3a4) + 1;
        }
        iVar14 = *(int *)(*piVar11 + 0x3c + uVar9);
        param_1 = local_8;
        if (iVar14 != 0) {
          uVar17 = 0;
          do {
            if ((LPCRITICAL_SECTION)*(int **)(iVar14 + 0x1c + uVar17 * 0x24) == local_28) {
              *(undefined1 *)(iVar14 + uVar17 * 0x24 + 0x20) = 0;
              break;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < 0x14);
        }
      }
      local_20 = (int *)((int)local_20 + 1);
    } while (local_20 < 0x10);
    local_14 = 0;
    do {
      local_24 = *(int **)(param_1 + 0xf9b0 + local_14 * 4);
      iVar14 = *(int *)(param_1 + 0xf6b4);
      local_c = iVar14;
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 0x1c))(local_24,&local_5c);
        piVar11 = (int *)0x0;
        local_10 = (int *)0x0;
        local_28 = *(LPCRITICAL_SECTION *)(iVar14 + 0x3a4);
        uVar17 = (((((iStack_44 + -1) * 0x10 | iStack_48 - 1U) << 3 | uStack_50) << 3 | uStack_54)
                  << 3 | uStack_58) << 8 | local_5c;
        if (local_28 != (LPCRITICAL_SECTION)0x0) {
          local_20 = *(int **)(iVar14 + 0x39c);
          piVar16 = (int *)local_28;
          do {
            local_10 = (int *)((uint)((int)piVar11 + (int)piVar16) >> 1);
            uVar9 = *(uint *)((int)local_20 + (int)local_10 * 0x40);
            piVar15 = local_10;
            iVar14 = local_c;
            if ((*(int *)((int)local_20 + 4U + (int)local_10 * 0x40) == 0) && (uVar9 <= uVar17)) {
              if (uVar17 <= uVar9) break;
              piVar11 = (int *)((int)local_10 + 1);
              local_10 = piVar16;
              piVar15 = piVar11;
            }
            bVar19 = local_10 != piVar11;
            piVar16 = local_10;
            local_10 = piVar15;
          } while (bVar19);
        }
        piVar11 = local_10;
        puVar1 = (uint *)(iVar14 + 0x39c);
        uVar9 = (int)local_10 * 0x40;
        local_1c = uVar17;
        local_18 = uVar9;
        if ((((LPCRITICAL_SECTION)local_10 == local_28) || (*(uint *)(uVar9 + *puVar1) != uVar17))
           || (*(int *)(uVar9 + 4 + *puVar1) != 0)) {
          if (local_28 == (LPCRITICAL_SECTION)*(int **)(local_c + 0x3a0)) {
            lVar5 = (ulonglong)(uint)((int)*(int **)(local_c + 0x3a0) * 2) * 0x40;
            SVar10 = (SIZE_T)lVar5;
            if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
              SVar10 = 0xffffffff;
            }
            local_20 = (int *)FUN_100cfd89(SVar10);
            if (local_20 != (int *)0x0) {
              uVar9 = 0;
              if (*(int *)(local_c + 0x3a0) != 0) {
                do {
                  iVar14 = uVar9 * 0x40;
                  uVar9 = uVar9 + 1;
                  puVar12 = (undefined4 *)(*puVar1 + iVar14);
                  uVar6 = puVar12[1];
                  uVar7 = puVar12[2];
                  uVar8 = puVar12[3];
                  puVar2 = (undefined4 *)(iVar14 + (int)local_20);
                  *puVar2 = *puVar12;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[5];
                  uVar7 = puVar12[6];
                  uVar8 = puVar12[7];
                  puVar2 = (undefined4 *)(iVar14 + 0x10 + (int)local_20);
                  *puVar2 = puVar12[4];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[9];
                  uVar7 = puVar12[10];
                  uVar8 = puVar12[0xb];
                  puVar2 = (undefined4 *)(iVar14 + 0x20 + (int)local_20);
                  *puVar2 = puVar12[8];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  uVar6 = puVar12[0xd];
                  uVar7 = puVar12[0xe];
                  uVar8 = puVar12[0xf];
                  puVar2 = (undefined4 *)(iVar14 + 0x30 + (int)local_20);
                  *puVar2 = puVar12[0xc];
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  piVar11 = local_10;
                  uVar17 = local_1c;
                } while (uVar9 < *(uint *)(local_c + 0x3a0));
              }
              thunk_FUN_100cfd6c((LPVOID)*puVar1);
              *puVar1 = (uint)local_20;
              *(int *)(local_c + 0x3a0) = *(int *)(local_c + 0x3a0) << 1;
            }
          }
          uVar9 = local_18;
          for (piVar16 = *(int **)(local_c + 0x3a4); piVar11 < piVar16;
              piVar16 = (int *)((int)piVar16 + -1)) {
            uVar4 = *puVar1;
            iVar14 = (int)piVar16 * 0x40;
            puVar12 = (undefined4 *)(iVar14 + -0x40 + uVar4);
            uVar6 = puVar12[1];
            uVar7 = puVar12[2];
            uVar8 = puVar12[3];
            puVar2 = (undefined4 *)(iVar14 + uVar4);
            *puVar2 = *puVar12;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar2 = (undefined4 *)(iVar14 + -0x30 + uVar4);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar14 + 0x10 + uVar4);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar2 = (undefined4 *)(iVar14 + -0x20 + uVar4);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar14 + 0x20 + uVar4);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
            puVar2 = (undefined4 *)(iVar14 + -0x10 + uVar4);
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar12 = (undefined4 *)(iVar14 + 0x30 + uVar4);
            *puVar12 = *puVar2;
            puVar12[1] = uVar6;
            puVar12[2] = uVar7;
            puVar12[3] = uVar8;
          }
          uVar4 = *puVar1;
          *(uint *)(local_18 + uVar4) = uVar17;
          *(undefined4 *)(local_18 + 4 + uVar4) = 0;
          iVar14 = *puVar1 + local_18;
          *(uint *)(iVar14 + 8) = local_5c;
          *(uint *)(iVar14 + 0xc) = uStack_58;
          *(uint *)(iVar14 + 0x10) = uStack_54;
          *(uint *)(iVar14 + 0x14) = uStack_50;
          *(undefined4 *)(iVar14 + 0x18) = local_4c;
          *(int *)(iVar14 + 0x1c) = iStack_48;
          *(int *)(iVar14 + 0x20) = iStack_44;
          *(undefined4 *)(iVar14 + 0x24) = uStack_40;
          *(undefined4 *)(iVar14 + 0x28) = local_3c;
          *(undefined4 *)(iVar14 + 0x2c) = uStack_38;
          *(undefined4 *)(iVar14 + 0x30) = uStack_34;
          *(undefined4 *)(iVar14 + 0x34) = uStack_30;
          *(undefined4 *)(iVar14 + 0x38) = local_2c;
          piVar11 = (int *)FUN_100cfd55(0x2d0);
          if (piVar11 != (int *)0x0) {
            FUN_100cfed0(piVar11,0,0x2d0);
          }
          *(int **)(*puVar1 + 0x3c + uVar9) = piVar11;
          *(int *)(local_c + 0x3a4) = *(int *)(local_c + 0x3a4) + 1;
        }
        iVar14 = *(int *)(*puVar1 + 0x3c + uVar9);
        param_1 = local_8;
        if (iVar14 != 0) {
          uVar17 = 0;
          do {
            if (*(int **)(iVar14 + 0x1c + uVar17 * 0x24) == local_24) {
              *(undefined1 *)(iVar14 + uVar17 * 0x24 + 0x20) = 0;
              break;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < 0x14);
        }
      }
      iVar14 = local_8;
      local_14 = local_14 + 1;
    } while (local_14 < 5);
    piVar11 = *(int **)(param_1 + 0xf6d8);
    iVar18 = *(int *)(local_8 + 0x10) * 0x1510 + *(int *)(local_8 + 0xf6b0);
    local_28 = (LPCRITICAL_SECTION)(*(int *)(local_8 + 0xf6b0) + 0x4a0);
    EnterCriticalSection(local_28);
    uVar17 = 0;
    do {
      if (piVar11 == *(int **)(iVar18 + 0x554 + uVar17 * 4)) {
        *(undefined4 *)(iVar18 + 0x554 + uVar17 * 4) = 0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    uVar17 = 0;
    do {
      if (piVar11 == *(int **)(iVar18 + 0x594 + uVar17 * 4)) {
        *(undefined4 *)(iVar18 + 0x594 + uVar17 * 4) = 0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    (**(code **)(*piVar11 + 8))(piVar11);
    LeaveCriticalSection(local_28);
    *(undefined4 *)(iVar14 + 0xf6d8) = 0;
    (**(code **)(**(int **)(iVar14 + 0xf6c8) + 8))(*(int **)(iVar14 + 0xf6c8));
    *(undefined4 *)(iVar14 + 0xf6c8) = 0;
    (**(code **)(**(int **)(iVar14 + 0xf6c4) + 8))(*(int **)(iVar14 + 0xf6c4));
    *(undefined4 *)(iVar14 + 0xf6c4) = 0;
    (**(code **)(**(int **)(iVar14 + 0xf6cc) + 8))(*(int **)(iVar14 + 0xf6cc));
    iVar18 = *(int *)(iVar14 + 0xf6b0);
    local_28 = *(LPCRITICAL_SECTION *)(iVar14 + 0xf6d0);
    iVar13 = *(int *)(iVar14 + 0x10);
    *(undefined4 *)(iVar14 + 0xf6cc) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar18 + 0x4a0));
    iVar13 = iVar13 * 0x1510;
    if (local_28 == (LPCRITICAL_SECTION)*(int **)(iVar13 + 0x7c4 + iVar18)) {
      *(undefined4 *)(iVar13 + 0x7c4 + iVar18) = 0;
    }
    (**(code **)(*(int *)local_28 + 8))(local_28);
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar18 + 0x4a0));
    *(undefined4 *)(iVar14 + 0xf6d0) = 0;
    piVar11 = *(int **)(iVar14 + 0xf6d4);
    iVar14 = *(int *)(local_8 + 0x10);
    iVar18 = *(int *)(local_8 + 0xf6b0);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar18 + 0x4a0));
    iVar14 = iVar14 * 0x1510 + iVar18;
    uVar17 = 0;
    do {
      if (piVar11 == *(int **)(iVar14 + 0x704 + uVar17 * 4)) {
        *(undefined4 *)(iVar14 + 0x704 + uVar17 * 4) = 0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 0x10);
    (**(code **)(*piVar11 + 8))(piVar11);
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar18 + 0x4a0));
    iVar14 = local_8;
    *(undefined4 *)(local_8 + 0xf6d4) = 0;
    thunk_FUN_100cfd6c(*(LPVOID *)(local_8 + 0x1c));
    *(undefined4 *)(iVar14 + 0x1c) = 0;
    thunk_FUN_100cfd6c(*(LPVOID *)(iVar14 + 0x18));
    piVar11 = *(int **)(iVar14 + 0xf6b0);
    *(undefined4 *)(iVar14 + 0x18) = 0;
    if (piVar11 != (int *)0x0) {
      piVar16 = piVar11 + 2;
      LOCK();
      iVar18 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        local_20 = piVar11;
        if ((short)piVar11[3] != 0) {
          uVar3 = *(ushort *)(piVar11 + 3);
          hInstance = GetModuleHandleW((LPCWSTR)0x0);
          UnregisterClassW((LPCWSTR)(uint)uVar3,hInstance);
          if ((HMODULE)piVar11[4] != (HMODULE)0x0) {
            FreeLibrary((HMODULE)piVar11[4]);
            piVar11[4] = 0;
          }
        }
        (**(code **)(*local_20 + 0x44))();
      }
    }
    *(undefined4 *)(iVar14 + 0xf6b0) = 0;
  }
  return;
}

