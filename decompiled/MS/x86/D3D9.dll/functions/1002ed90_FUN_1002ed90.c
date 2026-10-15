/*
 * FUN_1002ed90 at 1002ed90
 * undefined4 __thiscall FUN_1002ed90(void * this, int * param_1)
 * Address ranges: 1002ed90-1002f271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002ed90(void *this,int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  HMODULE pHVar7;
  BOOL BVar8;
  WNDPROC pWVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_EAX;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  tagWNDCLASSEXA local_38;
  
  lpwcx = &local_38;
  lpszClass = PTR_s_DGD3D11ROOT_100dd540;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  BVar8 = GetClassInfoExA(pHVar7,lpszClass,lpwcx);
  pWVar9 = (WNDPROC)0x0;
  if (BVar8 != 0) {
    pWVar9 = local_38.lpfnWndProc;
  }
  if (pWVar9 == (WNDPROC)0x0) {
    pWVar9 = (WNDPROC)(*(code *)PTR_FUN_100dd544)();
    uVar10 = 0;
    if (pWVar9 == (WNDPROC)0x0) goto LAB_1002f1c2;
  }
  LOCK();
  *(int *)(pWVar9 + 8) = *(int *)(pWVar9 + 8) + 1;
  UNLOCK();
  *(WNDPROC *)((int)this + 0xf6b0) = pWVar9;
  uVar10 = FUN_1004e7a0(this,param_1);
  if ((char)uVar10 != '\0') {
    *(int *)((int)this + 0xf6b4) =
         *(int *)((int)this + 0x10) * 0x1510 + 0x510 + *(int *)((int)this + 0xf6b0);
    *(int *)((int)this + 0xf6dc) = *(int *)((int)this + 0xf6b0);
    *(int *)((int)this + 0xf6e0) = *(int *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0xf710) = *(undefined4 *)((int)this + 0xf6b0);
    *(undefined1 *)((int)this + 0xf718) = *(undefined1 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0xf714) = *(undefined4 *)((int)this + 0x10);
    iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6b4) + 0xc))
                       ((int *)**(undefined4 **)((int)this + 0xf6b4));
    if (-1 < iVar11) {
      puVar2 = (undefined4 *)((int)this + 0xf6d0);
      uStack_60 = 2;
      uStack_5c = 0x10000;
      uStack_58 = 0;
      uStack_54 = 0;
      iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6b4) + 0xc))
                         ((int *)**(undefined4 **)((int)this + 0xf6b4));
      if (-1 < iVar11) {
        iVar11 = FUN_1002fab0(this,0xc20);
        *(int *)((int)this + 0xf6c4) = iVar11;
        if (iVar11 != 0) {
          uStack_60 = 0x8010;
          uStack_5c = 0;
          uStack_58 = 4;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0x8010;
          iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6b4) + 0xc))
                             ((int *)**(undefined4 **)((int)this + 0xf6b4),&uStack_60,0,
                              (int)this + 0xf6cc);
          if (-1 < iVar11) {
            uStack_58 = 0x970;
            uStack_54 = 1;
            uStack_50 = 4;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0x970;
            iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6b4) + 0xc))
                               ((int *)**(undefined4 **)((int)this + 0xf6b4),&uStack_58,
                                &stack0xffffff54,(int)this + 0xf6c8);
            if (-1 < iVar11) {
              puVar3 = (undefined4 *)((int)this + 0xf6d8);
              iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6b4) + 0x5c))
                                 ((int *)**(undefined4 **)((int)this + 0xf6b4),&DAT_100dc15c,puVar3)
              ;
              if (-1 < iVar11) {
                *(undefined4 *)((int)this + 0xf704) = *(undefined4 *)((int)this + 0x10);
                *(undefined4 *)((int)this + 0xf700) = *(undefined4 *)((int)this + 0xf6b0);
                iVar11 = FUN_1002fab0(this,0x2f0);
                *(int *)((int)this + 0xf730) = iVar11;
                if (iVar11 != 0) {
                  iVar11 = FUN_1002fab0(this,0x4d0);
                  *(int *)((int)this + 0xf744) = iVar11;
                  if (iVar11 != 0) {
                    iVar11 = FUN_1002fab0(this,0xec0);
                    *(int *)((int)this + 0xf738) = iVar11;
                    if (iVar11 != 0) {
                      iVar11 = FUN_1002fab0(this,*(int *)((int)this + 0x7c));
                      *(int *)((int)this + 0xf734) = iVar11;
                      if (iVar11 != 0) {
                        iVar11 = FUN_1002fab0(this,0x100);
                        *(int *)((int)this + 0xf73c) = iVar11;
                        if (iVar11 != 0) {
                          *(undefined4 *)((int)this + 0xf748) =
                               *(undefined4 *)
                                (*(int *)((int)this + 0x10) * 0x1510 + 0x520 +
                                *(int *)((int)this + 0xf6b0));
                          FUN_1004e850((int)this);
                          FUN_100cfed0((int *)((int)this + 0xf74c),0,0xae8);
                          *(undefined4 *)((int)this + 0xf9d8) = *(undefined4 *)((int)this + 0xf6d4);
                          iVar11 = *(int *)((int)this + 0xf6b0);
                          *(undefined4 *)((int)this + 0xfa18) = *puVar2;
                          *(undefined1 *)((int)this + 0x10230) = 1;
                          *(undefined4 *)((int)this + 0x10104) = 1;
                          EnterCriticalSection((LPCRITICAL_SECTION)(iVar11 + 0x4a0));
                          *(void **)(iVar11 + 0x49c) = this;
                          FUN_10032cf0(this,1,1,0);
                          LeaveCriticalSection
                                    ((LPCRITICAL_SECTION)(*(int *)((int)this + 0xf6b0) + 0x4a0));
                          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                        }
                        (**(code **)(**(int **)((int)this + 0xf734) + 8))
                                  (*(int **)((int)this + 0xf734));
                        *(undefined4 *)((int)this + 0xf734) = 0;
                      }
                      (**(code **)(**(int **)((int)this + 0xf738) + 8))
                                (*(int **)((int)this + 0xf738));
                      *(undefined4 *)((int)this + 0xf738) = 0;
                    }
                    (**(code **)(**(int **)((int)this + 0xf744) + 8))(*(int **)((int)this + 0xf744))
                    ;
                    *(undefined4 *)((int)this + 0xf744) = 0;
                  }
                  (**(code **)(**(int **)((int)this + 0xf730) + 8))(*(int **)((int)this + 0xf730));
                  *(undefined4 *)((int)this + 0xf730) = 0;
                }
                (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3);
                *puVar3 = 0;
              }
              (**(code **)(**(int **)((int)this + 0xf6c8) + 8))(*(int **)((int)this + 0xf6c8));
              *(undefined4 *)((int)this + 0xf6c8) = 0;
            }
            piVar6 = *(int **)((int)this + 0xf6cc);
            (**(code **)(*piVar6 + 8))(piVar6);
            *(undefined4 *)((int)this + 0xf6cc) = 0;
          }
          (**(code **)(**(int **)((int)this + 0xf6c4) + 8))(*(int **)((int)this + 0xf6c4));
          *(undefined4 *)((int)this + 0xf6c4) = 0;
        }
        (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
        *puVar2 = 0;
      }
      piVar6 = *(int **)((int)this + 0xf6d4);
      (**(code **)(*piVar6 + 8))(piVar6);
      *(undefined4 *)((int)this + 0xf6d4) = 0;
    }
    thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
    thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar6 = *(int **)((int)this + 0xf6b0);
  uVar10 = 0;
  if (piVar6 != (int *)0x0) {
    puVar1 = (uint *)(piVar6 + 2);
    LOCK();
    uVar4 = *puVar1;
    uVar10 = *puVar1;
    *puVar1 = uVar4 - 1;
    UNLOCK();
    if (uVar4 - 1 == 0) {
      if ((short)piVar6[3] != 0) {
        uVar5 = *(ushort *)(piVar6 + 3);
        pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar5,pHVar7);
        if ((HMODULE)piVar6[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar6[4]);
          piVar6[4] = 0;
        }
      }
      uVar10 = (**(code **)(*piVar6 + 0x44))();
    }
  }
LAB_1002f1c2:
  *(undefined4 *)((int)this + 0xf6b0) = 0;
  return uVar10 & 0xffffff00;
}

