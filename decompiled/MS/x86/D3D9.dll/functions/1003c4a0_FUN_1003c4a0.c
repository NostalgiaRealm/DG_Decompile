/*
 * FUN_1003c4a0 at 1003c4a0
 * undefined __fastcall FUN_1003c4a0(int * param_1)
 * Address ranges: 1003c4a0-1003ca85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c4a0(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  void *this;
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
  uint uVar15;
  undefined8 uVar16;
  int *piStack_24;
  
  if (param_1[0x3dad] == 0) {
    return;
  }
  FUN_100cef50(param_1[0x3dae] + 0x11c0);
  (**(code **)(*param_1 + 0xec))(0);
  FUN_100bad40((void *)(*(int *)(param_1[0x3dae] + 0x1304) + 4),'\0');
  LOCK();
  if (param_1 == *(int **)(param_1[0x3dad] + 0x49c)) {
    *(int *)(param_1[0x3dad] + 0x49c) = 0;
  }
  UNLOCK();
  uVar15 = param_1[0x3dfc];
  this = *(void **)(param_1[0x3dae] + 0x15dc);
  if (uVar15 != 0xffffffff) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x1c);
    EnterCriticalSection(lpCriticalSection);
    FUN_100b9c10(this,uVar15,1);
    LeaveCriticalSection(lpCriticalSection);
  }
  FUN_1004c885((int)(param_1 + 0x3dda));
  FUN_10044e17((int)param_1);
  param_1[0x3dc4] = 0;
  FUN_1004e452((int)(param_1 + 0x3dc6));
  FUN_1004c7c3((int)(param_1 + 0x3dbb));
  uVar15 = 0;
  do {
    uVar12 = param_1[uVar15 + 0x3e40];
    if (uVar12 != 0xffffffff) {
      uVar9 = FUN_1000887d((void *)(param_1[0x3dae] + 0x1674),uVar12,0);
      if (uVar9 != *(uint *)(param_1[0x3dae] + 0x167c)) {
        iVar4 = *(int *)(param_1[0x3dae] + 0x1678);
        iVar10 = uVar9 * 0x10;
        if (((*(uint *)(iVar4 + iVar10) == uVar12) && (*(int *)(iVar4 + 4 + iVar10) == 0)) &&
           (piVar11 = (int *)(iVar10 + 0xc + iVar4), piVar11 != (int *)0x0)) {
          *(undefined1 *)(*piVar11 + 0x20) = 0;
        }
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x10);
  uVar15 = 0;
  do {
    uVar12 = param_1[uVar15 + 0x3e7d];
    if (uVar12 != 0xffffffff) {
      uVar9 = FUN_1000887d((void *)(param_1[0x3dae] + 0x1674),uVar12,0);
      if (uVar9 != *(uint *)(param_1[0x3dae] + 0x167c)) {
        iVar4 = *(int *)(param_1[0x3dae] + 0x1678);
        iVar10 = uVar9 * 0x10;
        if (((*(uint *)(iVar4 + iVar10) == uVar12) && (*(int *)(iVar4 + 4 + iVar10) == 0)) &&
           (piVar11 = (int *)(iVar10 + 0xc + iVar4), piVar11 != (int *)0x0)) {
          *(undefined1 *)(*piVar11 + 0x20) = 0;
        }
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 5);
  piVar11 = (int *)param_1[0x3db8];
  if (piVar11 != (int *)0x0) {
    FUN_100c10d6(*(void **)(param_1[0x3dad] + 0x172c0),(uint)piVar11,'\x01');
    (**(code **)(*piVar11 + 8))(piVar11);
  }
  param_1[0x3db8] = 0;
  if ((void *)param_1[0x3db9] != (void *)0x0) {
    FUN_1003c2e0((void *)param_1[0x3db9],1);
  }
  param_1[0x3db9] = 0;
  if ((void *)param_1[0x3db7] != (void *)0x0) {
    FUN_1003c2e0((void *)param_1[0x3db7],1);
  }
  uVar15 = param_1[0x3db4];
  param_1[0x3db7] = 0;
  if (uVar15 != 0) {
    iVar4 = *(int *)(param_1[0x3dad] + 0x172c0);
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
    uVar9 = (int)uVar15 >> 0x1f;
    uVar12 = FUN_1000fd3e((void *)(iVar4 + 0xc),uVar15,uVar9);
    if (uVar12 != *(uint *)(iVar4 + 0x14)) {
      iVar10 = *(int *)(iVar4 + 0x10);
      iVar13 = uVar12 * 0x20;
      if (((*(uint *)(iVar10 + iVar13) == uVar15) && (*(uint *)(iVar10 + 4 + iVar13) == uVar9)) &&
         (piVar11 = (int *)(iVar10 + 0x10 + iVar13), piVar11 != (int *)0x0)) {
        uVar16 = (**(code **)(**(int **)(*piVar11 + 0xc) + 0x20))(*(int **)(*piVar11 + 0xc));
        uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
        if ((uVar12 <= (uint)piVar11[3]) &&
           ((uVar12 < (uint)piVar11[3] || ((uint)uVar16 < (uint)piVar11[2])))) {
          if ((piVar11[1] != -1) &&
             (uVar12 = FUN_100bad40((void *)(piVar11[1] + 4),'\0'), (char)uVar12 == '\0')) {
            iVar10 = piVar11[1];
            if (*(int *)(iVar10 + 0x8e0) != 0) {
              *(uint *)(iVar10 + 0x7e0 + *(int *)(iVar10 + 0x918) * 8) = uVar15;
              *(undefined4 *)(iVar10 + 0x7e4 + *(int *)(iVar10 + 0x918) * 8) = 0;
              *(int *)(iVar10 + 0x918) = *(int *)(iVar10 + 0x918) + 1;
            }
            goto LAB_1003c807;
          }
          piVar5 = *(int **)(*piVar11 + 0xc);
          (**(code **)(*piVar5 + 0x24))
                    (piVar5,piVar11[2],piVar11[3],*(undefined4 *)(*piVar11 + 0x10));
          WaitForSingleObject(*(HANDLE *)(*piVar11 + 0x10),0xffffffff);
        }
        uVar14 = FUN_1000fd3e((void *)(iVar4 + 0xc),uVar15,uVar9);
        uVar12 = *(uint *)(iVar4 + 0x14);
        if (((uVar14 != uVar12) &&
            (param_1 = piStack_24, *(uint *)(uVar14 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar15)) &&
           (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar9)) {
          uVar14 = uVar14 + 1;
          if (uVar14 < uVar12) {
            do {
              iVar10 = *(int *)(iVar4 + 0x10);
              iVar13 = uVar14 * 0x20;
              uVar14 = uVar14 + 1;
              puVar1 = (undefined4 *)(iVar10 + iVar13);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar10 + -0x20 + iVar13);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              puVar1 = (undefined4 *)(iVar10 + 0x10 + iVar13);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined4 *)(iVar10 + -0x10 + iVar13);
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
LAB_1003c807:
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
  }
  uVar15 = param_1[0x3db5];
  if (uVar15 == 0) goto LAB_1003c997;
  iVar4 = *(int *)(param_1[0x3dad] + 0x172c0);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
  uVar9 = (int)uVar15 >> 0x1f;
  uVar12 = FUN_1000fd3e((void *)(iVar4 + 0xc),uVar15,uVar9);
  if (uVar12 != *(uint *)(iVar4 + 0x14)) {
    iVar10 = *(int *)(iVar4 + 0x10);
    iVar13 = uVar12 * 0x20;
    if (((*(uint *)(iVar10 + iVar13) == uVar15) && (*(uint *)(iVar10 + 4 + iVar13) == uVar9)) &&
       (piVar11 = (int *)(iVar13 + 0x10 + iVar10), piVar11 != (int *)0x0)) {
      uVar16 = (**(code **)(**(int **)(*piVar11 + 0xc) + 0x20))(*(int **)(*piVar11 + 0xc));
      uVar12 = (uint)((ulonglong)uVar16 >> 0x20);
      if ((uVar12 <= (uint)piVar11[3]) &&
         ((uVar12 < (uint)piVar11[3] || ((uint)uVar16 < (uint)piVar11[2])))) {
        if ((piVar11[1] != -1) &&
           (uVar12 = FUN_100bad40((void *)(piVar11[1] + 4),'\0'), (char)uVar12 == '\0')) {
          iVar10 = piVar11[1];
          if (*(int *)(iVar10 + 0x8e0) != 0) {
            *(uint *)(iVar10 + 0x7e0 + *(int *)(iVar10 + 0x918) * 8) = uVar15;
            *(undefined4 *)(iVar10 + 0x7e4 + *(int *)(iVar10 + 0x918) * 8) = 0;
            *(int *)(iVar10 + 0x918) = *(int *)(iVar10 + 0x918) + 1;
          }
          goto LAB_1003c98d;
        }
        piVar5 = *(int **)(*piVar11 + 0xc);
        (**(code **)(*piVar5 + 0x24))(piVar5,piVar11[2],piVar11[3],*(undefined4 *)(*piVar11 + 0x10))
        ;
        WaitForSingleObject(*(HANDLE *)(*piVar11 + 0x10),0xffffffff);
      }
      uVar14 = FUN_1000fd3e((void *)(iVar4 + 0xc),uVar15,uVar9);
      uVar12 = *(uint *)(iVar4 + 0x14);
      if (((uVar14 != uVar12) &&
          (param_1 = piStack_24, *(uint *)(uVar14 * 0x20 + *(int *)(iVar4 + 0x10)) == uVar15)) &&
         (*(uint *)(uVar14 * 0x20 + 4 + *(int *)(iVar4 + 0x10)) == uVar9)) {
        uVar14 = uVar14 + 1;
        if (uVar14 < uVar12) {
          do {
            iVar10 = *(int *)(iVar4 + 0x10);
            iVar13 = uVar14 * 0x20;
            uVar14 = uVar14 + 1;
            puVar1 = (undefined4 *)(iVar10 + iVar13);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar10 + -0x20 + iVar13);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            puVar1 = (undefined4 *)(iVar10 + 0x10 + iVar13);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(iVar10 + -0x10 + iVar13);
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
LAB_1003c98d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar4 + 0x1c));
LAB_1003c997:
  if ((void *)param_1[0x3db4] != (void *)0x0) {
    FUN_1003c2e0((void *)param_1[0x3db4],1);
  }
  param_1[0x3db4] = 0;
  if ((void *)param_1[0x3db5] != (void *)0x0) {
    FUN_1003c2e0((void *)param_1[0x3db5],1);
  }
  param_1[0x3db5] = 0;
  if ((undefined4 *)param_1[0x3db3] != (undefined4 *)0x0) {
    FUN_1003c3c0((undefined4 *)param_1[0x3db3]);
  }
  param_1[0x3db3] = 0;
  if ((undefined4 *)param_1[0x3db2] != (undefined4 *)0x0) {
    FUN_1003c3c0((undefined4 *)param_1[0x3db2]);
  }
  param_1[0x3db2] = 0;
  thunk_FUN_100cfd6c((LPVOID)param_1[7]);
  param_1[7] = 0;
  thunk_FUN_100cfd6c((LPVOID)param_1[6]);
  piVar11 = (int *)param_1[0x3dad];
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
  param_1[0x3dad] = 0;
  return;
}

