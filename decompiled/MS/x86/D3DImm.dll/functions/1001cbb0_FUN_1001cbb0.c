/*
 * FUN_1001cbb0 at 1001cbb0
 * undefined __fastcall FUN_1001cbb0(int * param_1)
 * Address ranges: 1001cbb0-1001d0ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001cbb0(int *param_1)

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
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  HMODULE hInstance;
  code *pcVar15;
  uint uVar16;
  undefined8 uVar17;
  int *piStack_24;
  
  if (param_1[0x754] == 0) {
    return;
  }
  FUN_1005c2e0(param_1[0x755] + 0x11c0);
  (**(code **)(*param_1 + 0x98))(0);
  FUN_10052215((void *)(*(int *)(param_1[0x755] + 0x1304) + 4),'\0');
  LOCK();
  if (param_1 == *(int **)(param_1[0x754] + 0x49c)) {
    *(int *)(param_1[0x754] + 0x49c) = 0;
  }
  UNLOCK();
  if ((void *)param_1[0x761] != (void *)0x0) {
    FUN_1001c9f0((void *)param_1[0x761],1);
  }
  param_1[0x761] = 0;
  param_1[0x76b] = 0;
  FUN_10028446((int)(param_1 + 0x76d));
  FUN_100280ec((int)(param_1 + 0x762));
  uVar16 = 0;
  do {
    uVar12 = param_1[uVar16 + 0x7b4];
    if (uVar12 != 0xffffffff) {
      uVar9 = FUN_10027520((void *)(param_1[0x755] + 0x1674),uVar12,0);
      if (uVar9 != *(uint *)(param_1[0x755] + 0x167c)) {
        iVar4 = *(int *)(param_1[0x755] + 0x1678);
        iVar10 = uVar9 * 0x10;
        if (((*(uint *)(iVar10 + iVar4) == uVar12) && (*(int *)(iVar10 + 4 + iVar4) == 0)) &&
           (piVar11 = (int *)(iVar10 + 0xc + iVar4), piVar11 != (int *)0x0)) {
          *(undefined1 *)(*piVar11 + 0x20) = 0;
        }
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 8);
  piVar11 = (int *)param_1[0x75f];
  if (piVar11 != (int *)0x0) {
    FUN_10055836(*(void **)(param_1[0x754] + 0x172c0),(uint)piVar11,'\x01');
    (**(code **)(*piVar11 + 8))(piVar11);
  }
  param_1[0x75f] = 0;
  if ((void *)param_1[0x760] != (void *)0x0) {
    FUN_1001c9f0((void *)param_1[0x760],1);
  }
  param_1[0x760] = 0;
  if ((void *)param_1[0x75e] != (void *)0x0) {
    FUN_1001c9f0((void *)param_1[0x75e],1);
  }
  pcVar15 = EnterCriticalSection_exref;
  uVar16 = param_1[0x75b];
  param_1[0x75e] = 0;
  if (uVar16 != 0) {
    iVar4 = *(int *)(param_1[0x754] + 0x172c0);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
    uVar9 = (int)uVar16 >> 0x1f;
    uVar12 = FUN_10056245((void *)(iVar4 + 0xc),uVar16,uVar9);
    if (uVar12 != *(uint *)(iVar4 + 0x14)) {
      iVar10 = *(int *)(iVar4 + 0x10);
      iVar13 = uVar12 * 0x20;
      if (((*(uint *)(iVar13 + iVar10) == uVar16) && (*(uint *)(iVar13 + 4 + iVar10) == uVar9)) &&
         (piVar11 = (int *)(iVar10 + 0x10 + iVar13), piVar11 != (int *)0x0)) {
        uVar17 = (**(code **)(**(int **)(*piVar11 + 0xc) + 0x20))(*(int **)(*piVar11 + 0xc));
        uVar12 = (uint)((ulonglong)uVar17 >> 0x20);
        if ((uVar12 <= (uint)piVar11[3]) &&
           ((uVar12 < (uint)piVar11[3] || ((uint)uVar17 < (uint)piVar11[2])))) {
          if ((piVar11[1] != -1) &&
             (uVar12 = FUN_10052215((void *)(piVar11[1] + 4),'\0'), (char)uVar12 == '\0')) {
            iVar10 = piVar11[1];
            if (*(int *)(iVar10 + 0x8e0) != 0) {
              *(uint *)(iVar10 + 0x7e0 + *(int *)(iVar10 + 0x918) * 8) = uVar16;
              *(undefined4 *)(iVar10 + 0x7e4 + *(int *)(iVar10 + 0x918) * 8) = 0;
              *(int *)(iVar10 + 0x918) = *(int *)(iVar10 + 0x918) + 1;
            }
            goto LAB_1001ce87;
          }
          piVar5 = *(int **)(*piVar11 + 0xc);
          (**(code **)(*piVar5 + 0x24))
                    (piVar5,piVar11[2],piVar11[3],*(undefined4 *)(*piVar11 + 0x10));
          WaitForSingleObject(*(HANDLE *)(*piVar11 + 0x10),0xffffffff);
        }
        uVar14 = FUN_10056245((void *)(iVar4 + 0xc),uVar16,uVar9);
        uVar12 = *(uint *)(iVar4 + 0x14);
        if (((uVar14 != uVar12) &&
            (param_1 = piStack_24, *(uint *)(uVar14 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar16)) &&
           (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar9)) {
          uVar14 = uVar14 + 1;
          if (uVar14 < uVar12) {
            do {
              iVar10 = *(int *)(iVar4 + 0x10);
              iVar13 = uVar14 * 0x20;
              uVar14 = uVar14 + 1;
              puVar1 = (undefined4 *)(iVar13 + iVar10);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar13 + -0x20 + iVar10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              puVar1 = (undefined4 *)(iVar13 + 0x10 + iVar10);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar13 + -0x10 + iVar10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              uVar12 = *(uint *)(iVar4 + 0x14);
            } while (uVar14 < uVar12);
          }
          *(uint *)(iVar4 + 0x14) = uVar12 - 1;
        }
      }
    }
LAB_1001ce87:
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
    pcVar15 = EnterCriticalSection_exref;
  }
  uVar16 = param_1[0x75c];
  if (uVar16 == 0) goto LAB_1001d011;
  iVar4 = *(int *)(param_1[0x754] + 0x172c0);
  (*pcVar15)((LPCRITICAL_SECTION)(iVar4 + 0x1c));
  uVar9 = (int)uVar16 >> 0x1f;
  uVar12 = FUN_10056245((void *)(iVar4 + 0xc),uVar16,uVar9);
  if (uVar12 != *(uint *)(iVar4 + 0x14)) {
    iVar10 = *(int *)(iVar4 + 0x10);
    iVar13 = uVar12 * 0x20;
    if (((*(uint *)(iVar13 + iVar10) == uVar16) && (*(uint *)(iVar13 + 4 + iVar10) == uVar9)) &&
       (piVar11 = (int *)(iVar10 + 0x10 + iVar13), piVar11 != (int *)0x0)) {
      uVar17 = (**(code **)(**(int **)(*piVar11 + 0xc) + 0x20))(*(int **)(*piVar11 + 0xc));
      uVar12 = (uint)((ulonglong)uVar17 >> 0x20);
      if ((uVar12 <= (uint)piVar11[3]) &&
         ((uVar12 < (uint)piVar11[3] || ((uint)uVar17 < (uint)piVar11[2])))) {
        if ((piVar11[1] != -1) &&
           (uVar12 = FUN_10052215((void *)(piVar11[1] + 4),'\0'), (char)uVar12 == '\0')) {
          iVar10 = piVar11[1];
          if (*(int *)(iVar10 + 0x8e0) != 0) {
            *(uint *)(iVar10 + 0x7e0 + *(int *)(iVar10 + 0x918) * 8) = uVar16;
            *(undefined4 *)(iVar10 + 0x7e4 + *(int *)(iVar10 + 0x918) * 8) = 0;
            *(int *)(iVar10 + 0x918) = *(int *)(iVar10 + 0x918) + 1;
          }
          goto LAB_1001d007;
        }
        piVar5 = *(int **)(*piVar11 + 0xc);
        (**(code **)(*piVar5 + 0x24))(piVar5,piVar11[2],piVar11[3],*(undefined4 *)(*piVar11 + 0x10))
        ;
        WaitForSingleObject(*(HANDLE *)(*piVar11 + 0x10),0xffffffff);
      }
      uVar14 = FUN_10056245((void *)(iVar4 + 0xc),uVar16,uVar9);
      uVar12 = *(uint *)(iVar4 + 0x14);
      if (((uVar14 != uVar12) &&
          (param_1 = piStack_24, *(uint *)(uVar14 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar16)) &&
         (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar9)) {
        uVar14 = uVar14 + 1;
        if (uVar14 < uVar12) {
          do {
            iVar10 = *(int *)(iVar4 + 0x10);
            iVar13 = uVar14 * 0x20;
            uVar14 = uVar14 + 1;
            puVar1 = (undefined4 *)(iVar13 + iVar10);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar13 + -0x20 + iVar10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar1 = (undefined4 *)(iVar13 + 0x10 + iVar10);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar13 + -0x10 + iVar10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            uVar12 = *(uint *)(iVar4 + 0x14);
          } while (uVar14 < uVar12);
        }
        *(uint *)(iVar4 + 0x14) = uVar12 - 1;
      }
    }
  }
LAB_1001d007:
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
LAB_1001d011:
  if ((void *)param_1[0x75b] != (void *)0x0) {
    FUN_1001c9f0((void *)param_1[0x75b],1);
  }
  param_1[0x75b] = 0;
  if ((void *)param_1[0x75c] != (void *)0x0) {
    FUN_1001c9f0((void *)param_1[0x75c],1);
  }
  param_1[0x75c] = 0;
  if ((undefined4 *)param_1[0x75a] != (undefined4 *)0x0) {
    FUN_1001cad0((undefined4 *)param_1[0x75a]);
  }
  param_1[0x75a] = 0;
  if ((undefined4 *)param_1[0x759] != (undefined4 *)0x0) {
    FUN_1001cad0((undefined4 *)param_1[0x759]);
  }
  param_1[0x759] = 0;
  thunk_FUN_1005c76c((LPVOID)param_1[7]);
  param_1[7] = 0;
  thunk_FUN_1005c76c((LPVOID)param_1[6]);
  piVar11 = (int *)param_1[0x754];
  param_1[6] = 0;
  if (piVar11 != (int *)0x0) {
    LOCK();
    iVar4 = piVar11[2] + -1;
    piVar11[2] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      if ((short)piVar11[3] != 0) {
        uVar3 = *(ushort *)(piVar11 + 3);
        hInstance = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar3,hInstance);
        if ((HMODULE)piVar11[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar11[4]);
          piVar11[4] = 0;
        }
      }
      (**(code **)(*piVar11 + 0x44))();
    }
  }
  param_1[0x754] = 0;
  return;
}

