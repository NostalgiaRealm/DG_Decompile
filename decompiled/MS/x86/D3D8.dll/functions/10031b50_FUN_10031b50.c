/*
 * FUN_10031b50 at 10031b50
 * undefined __fastcall FUN_10031b50(int * param_1)
 * Address ranges: 10031b50-1003214d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10031b50(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  HMODULE hInstance;
  code *pcVar16;
  undefined8 uVar17;
  
  if (param_1[0x366d] == 0) {
    return;
  }
  FUN_100ac680(param_1[0x366e] + 0x11c0);
  (**(code **)(*param_1 + 0xc0))(0);
  FUN_10098768((void *)(*(int *)(param_1[0x366e] + 0x1304) + 4),'\0');
  LOCK();
  if (param_1 == *(int **)(param_1[0x366d] + 0x49c)) {
    *(int *)(param_1[0x366d] + 0x49c) = 0;
  }
  UNLOCK();
  uVar9 = 0;
  do {
    if (param_1[uVar9 + 0x373e] != 0) {
      *(undefined4 *)(param_1[uVar9 + 0x373e] + 0x10) = 0;
    }
    if (param_1[uVar9 + 0x373f] != 0) {
      *(undefined4 *)(param_1[uVar9 + 0x373f] + 0x10) = 0;
    }
    if (param_1[uVar9 + 0x3740] != 0) {
      *(undefined4 *)(param_1[uVar9 + 0x3740] + 0x10) = 0;
    }
    if (param_1[uVar9 + 0x3741] != 0) {
      *(undefined4 *)(param_1[uVar9 + 0x3741] + 0x10) = 0;
    }
    uVar9 = uVar9 + 4;
  } while (uVar9 < 0x10);
  if (param_1[0x374e] != 0) {
    *(undefined4 *)(param_1[0x374e] + 0x10) = 0;
  }
  if ((void *)param_1[0x3698] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3698],1);
  }
  if ((void *)param_1[0x3696] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3696],1);
  }
  if ((void *)param_1[0x3697] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3697],1);
  }
  if ((void *)param_1[0x367a] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x367a],1);
  }
  if ((void *)param_1[0x3695] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3695],1);
  }
  param_1[0x3698] = 0;
  param_1[0x3696] = 0;
  param_1[0x3697] = 0;
  param_1[0x367a] = 0;
  param_1[0x3695] = 0;
  param_1[0x3684] = 0;
  FUN_1004050a((int)(param_1 + 0x3686));
  FUN_1003fd3f((int)(param_1 + 0x367b));
  uVar9 = 0;
  do {
    uVar13 = param_1[uVar9 + 0x36d2];
    if (uVar13 != 0xffffffff) {
      uVar10 = FUN_10007d2a((void *)(param_1[0x366e] + 0x1674),uVar13,0);
      if (uVar10 != *(uint *)(param_1[0x366e] + 0x167c)) {
        iVar4 = *(int *)(param_1[0x366e] + 0x1678);
        iVar11 = uVar10 * 0x10;
        if (((*(uint *)(iVar4 + iVar11) == uVar13) && (*(int *)(iVar4 + 4 + iVar11) == 0)) &&
           (piVar12 = (int *)(iVar11 + 0xc + iVar4), piVar12 != (int *)0x0)) {
          *(undefined1 *)(*piVar12 + 0x20) = 0;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  piVar12 = (int *)param_1[0x3678];
  if (piVar12 != (int *)0x0) {
    FUN_1009eb0e(*(void **)(param_1[0x366d] + 0x172c0),(uint)piVar12,'\x01');
    (**(code **)(*piVar12 + 8))(piVar12);
  }
  param_1[0x3678] = 0;
  if ((void *)param_1[0x3679] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3679],1);
  }
  param_1[0x3679] = 0;
  if ((void *)param_1[0x3677] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3677],1);
  }
  pcVar16 = EnterCriticalSection_exref;
  uVar9 = param_1[0x3674];
  param_1[0x3677] = 0;
  if (uVar9 != 0) {
    iVar4 = *(int *)(param_1[0x366d] + 0x172c0);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
    uVar10 = (int)uVar9 >> 0x1f;
    uVar13 = FUN_1009f71f((void *)(iVar4 + 0xc),uVar9,uVar10);
    if (uVar13 != *(uint *)(iVar4 + 0x14)) {
      iVar11 = *(int *)(iVar4 + 0x10);
      iVar14 = uVar13 * 0x20;
      if (((*(uint *)(iVar11 + iVar14) == uVar9) && (*(uint *)(iVar11 + 4 + iVar14) == uVar10)) &&
         (piVar12 = (int *)(iVar11 + 0x10 + iVar14), piVar12 != (int *)0x0)) {
        uVar17 = (**(code **)(**(int **)(*piVar12 + 0xc) + 0x20))(*(int **)(*piVar12 + 0xc));
        uVar13 = (uint)((ulonglong)uVar17 >> 0x20);
        if ((uVar13 <= (uint)piVar12[3]) &&
           ((uVar13 < (uint)piVar12[3] || ((uint)uVar17 < (uint)piVar12[2])))) {
          if ((piVar12[1] != -1) &&
             (uVar13 = FUN_10098768((void *)(piVar12[1] + 4),'\0'), (char)uVar13 == '\0')) {
            iVar11 = piVar12[1];
            if (*(int *)(iVar11 + 0x8e0) != 0) {
              *(uint *)(iVar11 + 0x7e0 + *(int *)(iVar11 + 0x918) * 8) = uVar9;
              *(undefined4 *)(iVar11 + 0x7e4 + *(int *)(iVar11 + 0x918) * 8) = 0;
              *(int *)(iVar11 + 0x918) = *(int *)(iVar11 + 0x918) + 1;
            }
            goto LAB_10031ee7;
          }
          piVar5 = *(int **)(*piVar12 + 0xc);
          (**(code **)(*piVar5 + 0x24))
                    (piVar5,piVar12[2],piVar12[3],*(undefined4 *)(*piVar12 + 0x10));
          WaitForSingleObject(*(HANDLE *)(*piVar12 + 0x10),0xffffffff);
        }
        uVar15 = FUN_1009f71f((void *)(iVar4 + 0xc),uVar9,uVar10);
        uVar13 = *(uint *)(iVar4 + 0x14);
        if (((uVar15 != uVar13) && (*(uint *)(uVar15 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar9)) &&
           (*(uint *)(uVar15 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar10)) {
          uVar15 = uVar15 + 1;
          if (uVar15 < uVar13) {
            do {
              iVar11 = *(int *)(iVar4 + 0x10);
              iVar14 = uVar15 * 0x20;
              uVar15 = uVar15 + 1;
              puVar1 = (undefined4 *)(iVar11 + iVar14);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar11 + -0x20 + iVar14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              puVar1 = (undefined4 *)(iVar11 + 0x10 + iVar14);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar11 + -0x10 + iVar14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              uVar13 = *(uint *)(iVar4 + 0x14);
            } while (uVar15 < uVar13);
          }
          *(uint *)(iVar4 + 0x14) = uVar13 - 1;
        }
      }
    }
LAB_10031ee7:
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
    pcVar16 = EnterCriticalSection_exref;
  }
  uVar9 = param_1[0x3675];
  if (uVar9 == 0) goto LAB_10032061;
  iVar4 = *(int *)(param_1[0x366d] + 0x172c0);
  (*pcVar16)((LPCRITICAL_SECTION)(iVar4 + 0x1c));
  uVar10 = (int)uVar9 >> 0x1f;
  uVar13 = FUN_1009f71f((void *)(iVar4 + 0xc),uVar9,uVar10);
  if (uVar13 != *(uint *)(iVar4 + 0x14)) {
    iVar11 = *(int *)(iVar4 + 0x10);
    iVar14 = uVar13 * 0x20;
    if (((*(uint *)(iVar11 + iVar14) == uVar9) && (*(uint *)(iVar11 + 4 + iVar14) == uVar10)) &&
       (piVar12 = (int *)(iVar14 + 0x10 + iVar11), piVar12 != (int *)0x0)) {
      uVar17 = (**(code **)(**(int **)(*piVar12 + 0xc) + 0x20))(*(int **)(*piVar12 + 0xc));
      uVar13 = (uint)((ulonglong)uVar17 >> 0x20);
      if ((uVar13 <= (uint)piVar12[3]) &&
         ((uVar13 < (uint)piVar12[3] || ((uint)uVar17 < (uint)piVar12[2])))) {
        if ((piVar12[1] != -1) &&
           (uVar13 = FUN_10098768((void *)(piVar12[1] + 4),'\0'), (char)uVar13 == '\0')) {
          iVar11 = piVar12[1];
          if (*(int *)(iVar11 + 0x8e0) != 0) {
            *(uint *)(iVar11 + 0x7e0 + *(int *)(iVar11 + 0x918) * 8) = uVar9;
            *(undefined4 *)(iVar11 + 0x7e4 + *(int *)(iVar11 + 0x918) * 8) = 0;
            *(int *)(iVar11 + 0x918) = *(int *)(iVar11 + 0x918) + 1;
          }
          goto LAB_10032058;
        }
        piVar5 = *(int **)(*piVar12 + 0xc);
        (**(code **)(*piVar5 + 0x24))(piVar5,piVar12[2],piVar12[3],*(undefined4 *)(*piVar12 + 0x10))
        ;
        WaitForSingleObject(*(HANDLE *)(*piVar12 + 0x10),0xffffffff);
      }
      uVar15 = FUN_1009f71f((void *)(iVar4 + 0xc),uVar9,uVar10);
      uVar13 = *(uint *)(iVar4 + 0x14);
      if (((uVar15 != uVar13) && (*(uint *)(uVar15 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar9)) &&
         (*(uint *)(uVar15 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar10)) {
        uVar15 = uVar15 + 1;
        if (uVar15 < uVar13) {
          do {
            iVar11 = *(int *)(iVar4 + 0x10);
            iVar14 = uVar15 * 0x20;
            uVar15 = uVar15 + 1;
            puVar1 = (undefined4 *)(iVar11 + iVar14);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar11 + -0x20 + iVar14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar1 = (undefined4 *)(iVar11 + 0x10 + iVar14);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar11 + -0x10 + iVar14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            uVar13 = *(uint *)(iVar4 + 0x14);
          } while (uVar15 < uVar13);
        }
        *(uint *)(iVar4 + 0x14) = uVar13 - 1;
      }
    }
  }
LAB_10032058:
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
LAB_10032061:
  if ((void *)param_1[0x3674] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3674],1);
  }
  param_1[0x3674] = 0;
  if ((void *)param_1[0x3675] != (void *)0x0) {
    FUN_10031990((void *)param_1[0x3675],1);
  }
  param_1[0x3675] = 0;
  if ((undefined4 *)param_1[0x3673] != (undefined4 *)0x0) {
    FUN_10031a70((undefined4 *)param_1[0x3673]);
  }
  param_1[0x3673] = 0;
  if ((undefined4 *)param_1[0x3672] != (undefined4 *)0x0) {
    FUN_10031a70((undefined4 *)param_1[0x3672]);
  }
  param_1[0x3672] = 0;
  thunk_FUN_100ad48c((LPVOID)param_1[7]);
  param_1[7] = 0;
  thunk_FUN_100ad48c((LPVOID)param_1[6]);
  piVar12 = (int *)param_1[0x366d];
  param_1[6] = 0;
  if (piVar12 != (int *)0x0) {
    LOCK();
    iVar4 = piVar12[2] + -1;
    piVar12[2] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      if ((short)piVar12[3] != 0) {
        uVar3 = *(ushort *)(piVar12 + 3);
        hInstance = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar3,hInstance);
        if ((HMODULE)piVar12[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar12[4]);
          piVar12[4] = 0;
        }
      }
      (**(code **)(*piVar12 + 0x44))();
    }
  }
  param_1[0x366d] = 0;
  return;
}

