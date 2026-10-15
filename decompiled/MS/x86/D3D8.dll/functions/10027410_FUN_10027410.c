/*
 * FUN_10027410 at 10027410
 * undefined4 __thiscall FUN_10027410(void * this, int * param_1)
 * Address ranges: 10027410-100278e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10027410(void *this,int *param_1)

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
  lpszClass = PTR_s_DGD3D11ROOT_100b8f90;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  BVar8 = GetClassInfoExA(pHVar7,lpszClass,lpwcx);
  pWVar9 = (WNDPROC)0x0;
  if (BVar8 != 0) {
    pWVar9 = local_38.lpfnWndProc;
  }
  if (pWVar9 == (WNDPROC)0x0) {
    pWVar9 = (WNDPROC)(*(code *)PTR_FUN_100b8f94)();
    uVar10 = 0;
    if (pWVar9 == (WNDPROC)0x0) goto LAB_1002783f;
  }
  LOCK();
  *(int *)(pWVar9 + 8) = *(int *)(pWVar9 + 8) + 1;
  UNLOCK();
  *(WNDPROC *)((int)this + 0xd9b0) = pWVar9;
  uVar10 = FUN_100408b0(this,param_1);
  if ((char)uVar10 != '\0') {
    *(int *)((int)this + 0xd9b4) =
         *(int *)((int)this + 0x10) * 0x1510 + 0x510 + *(int *)((int)this + 0xd9b0);
    *(int *)((int)this + 0xd9dc) = *(int *)((int)this + 0xd9b0);
    *(int *)((int)this + 0xd9e0) = *(int *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0xda10) = *(undefined4 *)((int)this + 0xd9b0);
    *(undefined1 *)((int)this + 0xda18) = *(undefined1 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0xda14) = *(undefined4 *)((int)this + 0x10);
    iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0xc))
                       ((int *)**(undefined4 **)((int)this + 0xd9b4));
    if (-1 < iVar11) {
      puVar2 = (undefined4 *)((int)this + 0xd9d0);
      uStack_60 = 2;
      uStack_5c = 0x10000;
      uStack_58 = 0;
      uStack_54 = 0;
      iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0xc))
                         ((int *)**(undefined4 **)((int)this + 0xd9b4));
      if (-1 < iVar11) {
        iVar11 = FUN_10027e50(this,0xbc0);
        *(int *)((int)this + 0xd9c4) = iVar11;
        if (iVar11 != 0) {
          uStack_60 = 0x8010;
          uStack_5c = 0;
          uStack_58 = 4;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0x8010;
          iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0xc))
                             ((int *)**(undefined4 **)((int)this + 0xd9b4),&uStack_60,0,
                              (int)this + 0xd9cc);
          if (-1 < iVar11) {
            uStack_58 = 0x970;
            uStack_54 = 1;
            uStack_50 = 4;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0x970;
            iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0xc))
                               ((int *)**(undefined4 **)((int)this + 0xd9b4),&uStack_58,
                                &stack0xffffff54,(int)this + 0xd9c8);
            if (-1 < iVar11) {
              puVar3 = (undefined4 *)((int)this + 0xd9d8);
              iVar11 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9b4) + 0x5c))
                                 ((int *)**(undefined4 **)((int)this + 0xd9b4),&DAT_100b7e34,puVar3)
              ;
              if (-1 < iVar11) {
                *(undefined4 *)((int)this + 0xda04) = *(undefined4 *)((int)this + 0x10);
                *(undefined4 *)((int)this + 0xda00) = *(undefined4 *)((int)this + 0xd9b0);
                iVar11 = FUN_10027e50(this,0xa0);
                *(int *)((int)this + 0xda30) = iVar11;
                if (iVar11 != 0) {
                  iVar11 = FUN_10027e50(this,0x440);
                  *(int *)((int)this + 0xda40) = iVar11;
                  if (iVar11 != 0) {
                    iVar11 = FUN_10027e50(this,0x80);
                    *(int *)((int)this + 0xda38) = iVar11;
                    if (iVar11 != 0) {
                      iVar11 = FUN_10027e50(this,*(int *)((int)this + 0x7c));
                      *(int *)((int)this + 0xda34) = iVar11;
                      if (iVar11 != 0) {
                        iVar11 = FUN_10027e50(this,1);
                        *(int *)((int)this + 0xda3c) = iVar11;
                        if (iVar11 != 0) {
                          *(undefined4 *)((int)this + 0xda44) =
                               *(undefined4 *)
                                (*(int *)((int)this + 0x10) * 0x1510 + 0x520 +
                                *(int *)((int)this + 0xd9b0));
                          FUN_10040960((int)this);
                          FUN_100ada8e((int *)((int)this + 0xda48),0,0x4c0);
                          *(undefined4 *)((int)this + 0xdb8c) = *(undefined4 *)((int)this + 0xd9d4);
                          iVar11 = *(int *)((int)this + 0xd9b0);
                          *(undefined4 *)((int)this + 0xdbcc) = *puVar2;
                          *(undefined1 *)((int)this + 0xdf04) = 1;
                          EnterCriticalSection((LPCRITICAL_SECTION)(iVar11 + 0x4a0));
                          *(void **)(iVar11 + 0x49c) = this;
                          FUN_1002a490(this,1,1,0);
                          LeaveCriticalSection
                                    ((LPCRITICAL_SECTION)(*(int *)((int)this + 0xd9b0) + 0x4a0));
                          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                        }
                        (**(code **)(**(int **)((int)this + 0xda34) + 8))
                                  (*(int **)((int)this + 0xda34));
                        *(undefined4 *)((int)this + 0xda34) = 0;
                      }
                      (**(code **)(**(int **)((int)this + 0xda38) + 8))
                                (*(int **)((int)this + 0xda38));
                      *(undefined4 *)((int)this + 0xda38) = 0;
                    }
                    (**(code **)(**(int **)((int)this + 0xda40) + 8))(*(int **)((int)this + 0xda40))
                    ;
                    *(undefined4 *)((int)this + 0xda40) = 0;
                  }
                  (**(code **)(**(int **)((int)this + 0xda30) + 8))(*(int **)((int)this + 0xda30));
                  *(undefined4 *)((int)this + 0xda30) = 0;
                }
                (**(code **)(*(int *)*puVar3 + 8))((int *)*puVar3);
                *puVar3 = 0;
              }
              (**(code **)(**(int **)((int)this + 0xd9c8) + 8))(*(int **)((int)this + 0xd9c8));
              *(undefined4 *)((int)this + 0xd9c8) = 0;
            }
            piVar6 = *(int **)((int)this + 0xd9cc);
            (**(code **)(*piVar6 + 8))(piVar6);
            *(undefined4 *)((int)this + 0xd9cc) = 0;
          }
          (**(code **)(**(int **)((int)this + 0xd9c4) + 8))(*(int **)((int)this + 0xd9c4));
          *(undefined4 *)((int)this + 0xd9c4) = 0;
        }
        (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
        *puVar2 = 0;
      }
      piVar6 = *(int **)((int)this + 0xd9d4);
      (**(code **)(*piVar6 + 8))(piVar6);
      *(undefined4 *)((int)this + 0xd9d4) = 0;
    }
    thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
    thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar6 = *(int **)((int)this + 0xd9b0);
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
LAB_1002783f:
  *(undefined4 *)((int)this + 0xd9b0) = 0;
  return uVar10 & 0xffffff00;
}

