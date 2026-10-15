/*
 * FUN_10014750 at 10014750
 * undefined4 __fastcall FUN_10014750(void * param_1)
 * Address ranges: 10014750-10014c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014750(void *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  HMODULE pHVar5;
  BOOL BVar6;
  WNDPROC pWVar7;
  int iVar8;
  undefined4 extraout_EAX;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  int *piStack_100;
  undefined4 *puStack_fc;
  int **ppiStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  undefined4 *puStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  undefined1 *puStack_dc;
  undefined4 uStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  tagWNDCLASSEXA local_38;
  
  lpwcx = &local_38;
  piStack_d0 = (int *)0x1001477d;
  lpszClass = PTR_s_DGD3D11ROOT_10061c50;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  piStack_d0 = (int *)0x10014784;
  BVar6 = GetClassInfoExA(pHVar5,lpszClass,lpwcx);
  pWVar7 = (WNDPROC)0x0;
  if (BVar6 != 0) {
    pWVar7 = local_38.lpfnWndProc;
  }
  if (pWVar7 == (WNDPROC)0x0) {
    pWVar7 = (WNDPROC)(*(code *)PTR_FUN_10061c54)();
    uVar9 = 0;
    if (pWVar7 == (WNDPROC)0x0) goto LAB_10014c57;
  }
  LOCK();
  *(int *)(pWVar7 + 8) = *(int *)(pWVar7 + 8) + 1;
  UNLOCK();
  *(WNDPROC *)((int)param_1 + 0x1d50) = pWVar7;
  iVar8 = FUN_1005c789(0x20000);
  *(int *)((int)param_1 + 0x18) = iVar8;
  if (iVar8 != 0) {
    iVar8 = FUN_1005c789(0x2000);
    *(int *)((int)param_1 + 0x1c) = iVar8;
    if (iVar8 != 0) {
      puVar11 = (undefined4 *)((int)param_1 + 0x20);
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      uStack_88 = 0;
      uStack_84 = 0;
      *(int *)((int)param_1 + 0x1d54) =
           *(int *)((int)param_1 + 0x10) * 0x1510 + 0x510 + *(int *)((int)param_1 + 0x1d50);
      *(int *)((int)param_1 + 0x1d7c) = *(int *)((int)param_1 + 0x1d50);
      *(int *)((int)param_1 + 0x1d80) = *(int *)((int)param_1 + 0x10);
      *(undefined4 *)((int)param_1 + 0x1db0) = *(undefined4 *)((int)param_1 + 0x1d50);
      *(undefined1 *)((int)param_1 + 0x1db8) = *(undefined1 *)((int)param_1 + 0xc);
      *(undefined4 *)((int)param_1 + 0x1db4) = *(undefined4 *)((int)param_1 + 0x10);
      piStack_d0 = (int *)**(undefined4 **)((int)param_1 + 0x1d54);
      piStack_d4 = (int *)0x10014883;
      iVar8 = (**(code **)(*piStack_d0 + 0xc))();
      if (-1 < iVar8) {
        puVar11 = (undefined4 *)((int)param_1 + 0x1d70);
        uStack_80 = 0x4000;
        uStack_7c = 2;
        uStack_78 = 2;
        uStack_74 = 0x10000;
        uStack_70 = 0;
        uStack_6c = 0;
        piStack_d0 = (int *)**(undefined4 **)((int)param_1 + 0x1d54);
        piStack_d4 = (int *)0x100148d7;
        iVar8 = (**(code **)(*piStack_d0 + 0xc))();
        if (-1 < iVar8) {
          piStack_d4 = (int *)&stack0xffffff3c;
          piStack_e0 = (int *)**(undefined4 **)((int)param_1 + 0x1d54);
          uStack_d8 = 0;
          puStack_dc = &stack0xffffff40;
          piStack_e4 = (int *)0x10014931;
          iVar8 = (**(code **)(*piStack_e0 + 0xc))();
          piVar10 = (int *)(undefined1 *)0x0;
          if (-1 < iVar8) {
            piVar10 = piStack_d4;
          }
          *(int **)((int)param_1 + 0x1d64) = piVar10;
          if (piVar10 != (int *)0x0) {
            piStack_e4 = (int *)((int)param_1 + 0x1d6c);
            uStack_88 = 0x410;
            puStack_ec = &uStack_88;
            uStack_84 = 0;
            uStack_80 = 4;
            uStack_7c = 0;
            uStack_78 = 0;
            uStack_74 = 0x410;
            piStack_f0 = (int *)**(undefined4 **)((int)param_1 + 0x1d54);
            uStack_e8 = 0;
            piStack_f4 = (int *)0x10014994;
            iVar8 = (**(code **)(*piStack_f0 + 0xc))();
            if (-1 < iVar8) {
              piStack_f4 = (int *)((int)param_1 + 0x1d68);
              ppiStack_f8 = &piStack_e0;
              uStack_80 = 0x970;
              uStack_7c = 1;
              puStack_fc = &uStack_80;
              uStack_78 = 4;
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_6c = 0x970;
              piStack_e0 = &DAT_10061288;
              puStack_dc = (undefined1 *)0x0;
              uStack_d8 = 0;
              piStack_100 = (int *)**(undefined4 **)((int)param_1 + 0x1d54);
              iVar8 = (**(code **)(*piStack_100 + 0xc))();
              if (-1 < iVar8) {
                puVar2 = (undefined4 *)((int)param_1 + 0x1d78);
                iVar8 = (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x1d54) + 0x5c))
                                  ((int *)**(undefined4 **)((int)param_1 + 0x1d54),&DAT_10061124,
                                   puVar2);
                if (-1 < iVar8) {
                  *(undefined4 *)((int)param_1 + 0x1da0) = *(undefined4 *)((int)param_1 + 0x1d50);
                  *(undefined4 *)((int)param_1 + 0x1da4) = *(undefined4 *)((int)param_1 + 0x10);
                  ppiVar12 = &piStack_100;
                  uStack_84 = 0x440;
                  uStack_80 = 2;
                  uStack_7c = 4;
                  uStack_78 = 0x10000;
                  uStack_74 = 0;
                  uStack_70 = 0x440;
                  piStack_100 = (int *)0x0;
                  iVar8 = (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x1d54) + 0xc))
                                    ((int *)**(undefined4 **)((int)param_1 + 0x1d54),&uStack_84,0);
                  if (iVar8 < 0) {
                    *(undefined4 *)((int)param_1 + 0x1dcc) = 0;
                  }
                  else {
                    *(int ***)((int)param_1 + 0x1dcc) = ppiVar12;
                    if (ppiVar12 != (int **)0x0) {
                      *(undefined4 *)((int)param_1 + 0x1dd0) =
                           *(undefined4 *)
                            (*(int *)((int)param_1 + 0x10) * 0x1510 + 0x520 +
                            *(int *)((int)param_1 + 0x1d50));
                      FUN_10028730((int)param_1);
                      FUN_1005c9cc((int *)((int)param_1 + 0x1dd4),0,0x4a0);
                      *(undefined4 *)((int)param_1 + 0x1ef8) =
                           *(undefined4 *)((int)param_1 + 0x1d74);
                      iVar8 = *(int *)((int)param_1 + 0x1d50);
                      *(undefined4 *)((int)param_1 + 0x1f38) = *puVar11;
                      *(undefined1 *)((int)param_1 + 0x2270) = 1;
                      EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x4a0));
                      *(void **)(iVar8 + 0x49c) = param_1;
                      FUN_100176c0(param_1,1,1,0);
                      LeaveCriticalSection
                                ((LPCRITICAL_SECTION)(*(int *)((int)param_1 + 0x1d50) + 0x4a0));
                      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                    }
                  }
                  (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
                  *puVar2 = 0;
                }
                (**(code **)(**(int **)((int)param_1 + 0x1d68) + 8))
                          (*(int **)((int)param_1 + 0x1d68));
                *(undefined4 *)((int)param_1 + 0x1d68) = 0;
              }
              piVar10 = *(int **)((int)param_1 + 0x1d6c);
              (**(code **)(*piVar10 + 8))(piVar10);
              *(undefined4 *)((int)param_1 + 0x1d6c) = 0;
            }
            piStack_f4 = *(int **)((int)param_1 + 0x1d64);
            ppiStack_f8 = (int **)0x10014bb2;
            (**(code **)(*piStack_f4 + 8))();
            *(undefined4 *)((int)param_1 + 0x1d64) = 0;
          }
          piStack_e4 = (int *)*puVar11;
          uStack_e8 = 0x10014bca;
          (**(code **)(*piStack_e4 + 8))();
          *puVar11 = 0;
        }
        piStack_d4 = *(int **)((int)param_1 + 0x1d74);
        uStack_d8 = 0x10014bd8;
        (**(code **)(*piStack_d4 + 8))();
        *(undefined4 *)((int)param_1 + 0x1d74) = 0;
      }
      thunk_FUN_1005c76c(*(LPVOID *)((int)param_1 + 0x1c));
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
    }
    thunk_FUN_1005c76c(*(LPVOID *)((int)param_1 + 0x18));
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  piVar10 = *(int **)((int)param_1 + 0x1d50);
  uVar9 = 0;
  if (piVar10 != (int *)0x0) {
    puVar1 = (uint *)(piVar10 + 2);
    LOCK();
    uVar3 = *puVar1;
    uVar9 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      if ((short)piVar10[3] != 0) {
        uVar4 = *(ushort *)(piVar10 + 3);
        pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar4,pHVar5);
        if ((HMODULE)piVar10[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar10[4]);
          piVar10[4] = 0;
        }
      }
      uVar9 = (**(code **)(*piVar10 + 0x44))();
    }
  }
LAB_10014c57:
  *(undefined4 *)((int)param_1 + 0x1d50) = 0;
  return uVar9 & 0xffffff00;
}

