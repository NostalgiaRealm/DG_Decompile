/*
 * FUN_1001b870 at 1001b870
 * undefined4 __fastcall FUN_1001b870(int param_1)
 * Address ranges: 1001b870-1001c9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001b870(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int *piVar4;
  int *this;
  void *pvVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  HMODULE pHVar10;
  BOOL BVar11;
  WNDPROC pWVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  HANDLE pvVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  SIZE_T SVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  int unaff_EDI;
  undefined8 uVar29;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  undefined4 uStack_b8;
  undefined4 *puStack_8c;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  int local_7c;
  int iStack_78;
  undefined4 *puStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  tagWNDCLASSEXA local_60;
  int iStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [32];
  
  uVar17 = DAT_1006bbd4;
  lpwcx = &local_60;
  lpszClass = PTR_s_DGD3D12ROOT_10061c88;
  local_7c = param_1;
  pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
  BVar11 = GetClassInfoExA(pHVar10,lpszClass,lpwcx);
  pWVar12 = (WNDPROC)0x0;
  if (BVar11 != 0) {
    pWVar12 = local_60.lpfnWndProc;
  }
  if ((pWVar12 == (WNDPROC)0x0) &&
     (pWVar12 = (WNDPROC)(*(code *)PTR_FUN_10061c8c)(uVar17,0), pWVar12 == (WNDPROC)0x0)) {
    *(undefined4 *)(param_1 + 0x1d50) = 0;
    return 0;
  }
  LOCK();
  *(int *)(pWVar12 + 8) = *(int *)(pWVar12 + 8) + 1;
  UNLOCK();
  piVar1 = (int *)(param_1 + 0x1d50);
  *piVar1 = (int)pWVar12;
  iVar13 = FUN_1005c789(0x20000);
  *(int *)(param_1 + 0x18) = iVar13;
  piVar23 = (int *)0x0;
  if (iVar13 == 0) goto LAB_1001c98c;
  iVar14 = FUN_1005c789(0x2000);
  *(int *)(param_1 + 0x1c) = iVar14;
  iVar13 = param_1;
  if (iVar14 != 0) {
    puVar15 = (undefined4 *)(param_1 + 0x20);
    for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(int *)(param_1 + 0x1d58) =
         *(int *)(param_1 + 0x1d50) + *(int *)(param_1 + 0x10) * 0x18 + 0x520;
    iVar14 = *(int *)(param_1 + 0x10) * 0x16c0 + 0x6c0 + *(int *)(param_1 + 0x1d50);
    *(int *)(param_1 + 0x1d54) = iVar14;
    FUN_1005c2e0(iVar14 + 0x11c0);
    piVar20 = (int *)(param_1 + 0x1d50);
    *(int *)(param_1 + 0x1d88) = *piVar20;
    *(undefined4 *)(param_1 + 0x1d8c) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x1db4) = *piVar20;
    *(undefined4 *)(param_1 + 0x1db8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x1dbc) = *(undefined1 *)(param_1 + 0xc);
    iVar14 = *(int *)(*(int *)(param_1 + 0x1d60) + 0xd8);
    *(int *)(param_1 + 0x1d5c) = iVar14;
    piVar23 = (int *)0x0;
    if (iVar14 == 0) goto LAB_1001c98c;
    iVar14 = *piVar20 + 0x520;
    iVar24 = *(int *)(param_1 + 0x10);
    if (*piVar20 == 0) {
      iVar14 = 0;
    }
    puVar15 = (undefined4 *)FUN_1005c755(0x30);
    if (puVar15 == (undefined4 *)0x0) {
LAB_1001c95e:
      *(undefined4 *)(iVar13 + 0x1d64) = 0;
    }
    else {
      *puVar15 = &PTR_FUN_1005fe94;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[7] = 4;
      puVar15[8] = 0;
      puVar15[9] = 0x200;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      pvVar16 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar15[0xb] = pvVar16;
      if (pvVar16 == (HANDLE)0x0) {
LAB_1001c87b:
        *puVar15 = &PTR_FUN_1005fe94;
        if (puVar15[4] != 0) {
          iVar24 = puVar15[6] * 0x20;
          iVar14 = puVar15[3] + iVar24;
          piVar23 = *(int **)(iVar14 + 0x14);
          if (piVar23 != (int *)0x0) {
            uVar29 = (**(code **)(*piVar23 + 0x20))(piVar23);
            uVar25 = (uint)((ulonglong)uVar29 >> 0x20);
            if ((uVar25 <= *(uint *)(iVar14 + 0x1c)) &&
               ((uVar25 < *(uint *)(iVar14 + 0x1c) || ((uint)uVar29 < *(uint *)(iVar14 + 0x18))))) {
              iVar14 = puVar15[3];
              piVar23 = *(int **)(iVar14 + 0x14 + iVar24);
              (**(code **)(*piVar23 + 0x24))
                        (piVar23,*(undefined4 *)(iVar14 + 0x18 + iVar24),
                         *(undefined4 *)(iVar14 + 0x1c + iVar24),puVar15[0xb]);
              WaitForSingleObject((HANDLE)puVar15[0xb],0xffffffff);
            }
          }
          if (puVar15[4] != 0) {
            uVar25 = 0;
            do {
              piVar23 = *(int **)(uVar25 * 0x20 + 0xc + puVar15[3]);
              (**(code **)(*piVar23 + 8))(piVar23);
              uVar25 = uVar25 + 1;
              iVar13 = local_7c;
            } while (uVar25 < (uint)puVar15[4]);
          }
          thunk_FUN_1005c76c((LPVOID)puVar15[3]);
          puVar15[3] = 0;
          puVar15[4] = 0;
          puVar15[5] = 0;
          CloseHandle((HANDLE)puVar15[0xb]);
          puVar15[0xb] = 0;
        }
        thunk_FUN_1005c76c((LPVOID)puVar15[3]);
        FUN_1005c76c(puVar15);
        goto LAB_1001c95e;
      }
      puVar15[2] = iVar24;
      puVar15[1] = iVar14;
      puVar15[7] = 0;
      puVar15[8] = 1;
      piVar23 = *(int **)(iVar14 + iVar24 * 0x18);
      uVar17 = (**(code **)(*piVar23 + 0x3c))(piVar23,0);
      puVar15[10] = uVar17;
      uVar17 = FUN_10054cc6((int)puVar15);
      if ((char)uVar17 == '\0') {
        CloseHandle((HANDLE)puVar15[0xb]);
        puVar15[0xb] = 0;
        goto LAB_1001c87b;
      }
      *(undefined4 **)(param_1 + 0x1d64) = puVar15;
      iVar14 = *piVar1 + 0x520;
      iVar24 = *(int *)(param_1 + 0x10);
      if (*piVar1 == 0) {
        iVar14 = 0;
      }
      puVar15 = (undefined4 *)FUN_1005c755(0x30);
      if (puVar15 == (undefined4 *)0x0) {
LAB_1001c83c:
        puVar15 = (undefined4 *)(iVar13 + 0x1d64);
        *(undefined4 *)(iVar13 + 0x1d68) = 0;
      }
      else {
        *puVar15 = &PTR_FUN_1005fe94;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 0;
        puVar15[7] = 4;
        puVar15[8] = 0;
        puVar15[9] = 0x200;
        puVar15[10] = 0;
        puVar15[0xb] = 0;
        pvVar16 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        puVar15[0xb] = pvVar16;
        if (pvVar16 == (HANDLE)0x0) {
LAB_1001c75f:
          *puVar15 = &PTR_FUN_1005fe94;
          if (puVar15[4] != 0) {
            iVar24 = puVar15[6] * 0x20;
            iVar14 = puVar15[3] + iVar24;
            piVar23 = *(int **)(iVar14 + 0x14);
            if (piVar23 != (int *)0x0) {
              uVar29 = (**(code **)(*piVar23 + 0x20))(piVar23);
              uVar25 = (uint)((ulonglong)uVar29 >> 0x20);
              if ((uVar25 <= *(uint *)(iVar14 + 0x1c)) &&
                 ((uVar25 < *(uint *)(iVar14 + 0x1c) || ((uint)uVar29 < *(uint *)(iVar14 + 0x18)))))
              {
                iVar14 = puVar15[3];
                piVar23 = *(int **)(iVar14 + 0x14 + iVar24);
                (**(code **)(*piVar23 + 0x24))
                          (piVar23,*(undefined4 *)(iVar14 + 0x18 + iVar24),
                           *(undefined4 *)(iVar14 + 0x1c + iVar24),puVar15[0xb]);
                WaitForSingleObject((HANDLE)puVar15[0xb],0xffffffff);
              }
            }
            if (puVar15[4] != 0) {
              uVar25 = 0;
              do {
                piVar23 = *(int **)(uVar25 * 0x20 + 0xc + puVar15[3]);
                (**(code **)(*piVar23 + 8))(piVar23);
                uVar25 = uVar25 + 1;
                iVar13 = local_7c;
              } while (uVar25 < (uint)puVar15[4]);
            }
            thunk_FUN_1005c76c((LPVOID)puVar15[3]);
            puVar15[3] = 0;
            puVar15[4] = 0;
            puVar15[5] = 0;
            CloseHandle((HANDLE)puVar15[0xb]);
            puVar15[0xb] = 0;
          }
          thunk_FUN_1005c76c((LPVOID)puVar15[3]);
          FUN_1005c76c(puVar15);
          goto LAB_1001c83c;
        }
        puVar15[2] = iVar24;
        puVar15[1] = iVar14;
        puVar15[7] = 1;
        puVar15[8] = 1;
        piVar23 = *(int **)(iVar14 + iVar24 * 0x18);
        uVar17 = (**(code **)(*piVar23 + 0x3c))(piVar23,1);
        puVar15[10] = uVar17;
        uVar17 = FUN_10054cc6((int)puVar15);
        if ((char)uVar17 == '\0') {
          CloseHandle((HANDLE)puVar15[0xb]);
          puVar15[0xb] = 0;
          goto LAB_1001c75f;
        }
        *(undefined4 **)(param_1 + 0x1d68) = puVar15;
        iVar18 = *(int *)(param_1 + 0x74) << 0xc;
        *(int *)(param_1 + 0x1d74) = iVar18;
        iVar14 = *piVar1;
        iVar24 = *(int *)(param_1 + 0x1d54);
        iVar19 = iVar24 + 0x1370;
        uVar17 = *(undefined4 *)(param_1 + 0x10);
        puVar15 = (undefined4 *)FUN_1005c755(0x78);
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = (undefined4 *)(param_1 + 0x1d64);
          puStack_84 = (undefined4 *)(param_1 + 0x1d70);
        }
        else {
          puVar15[0x12] = 0;
          puVar15[0x13] = 0;
          puVar15[0x14] = 0;
          puVar15[4] = 0;
          puVar15[3] = uVar17;
          puVar15[10] = iVar18;
          puVar15[0x10] = iVar19;
          puVar15[2] = -(uint)(iVar14 != 0) & iVar14 + 0x520U;
          puVar15[6] = 0;
          puVar15[7] = 0;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puStack_84 = (undefined4 *)(param_1 + 0x1d70);
          puVar15[0xb] = 0;
          puVar15[0xc] = 0;
          *(undefined1 *)(puVar15 + 0xd) = 0;
          puVar15[0x11] = -(uint)(iVar14 != 0) & iVar14 + 0x508U;
          puVar15[0x15] = 0;
          puVar15[0x16] = 0xffffffff;
          puVar15[0x18] = 0;
          puVar15[0x19] = 0;
          puVar15[0x1a] = 0;
          puVar15[0x1b] = 0;
          *(undefined8 *)(puVar15 + 0x1c) = 0;
          *puVar15 = &PTR_FUN_1005fe9c;
          puVar15[0xe] = &PTR_LAB_1005fed8;
          *puStack_84 = puVar15;
          piVar23 = (int *)*piVar1;
          iVar14 = *(int *)(param_1 + 0x1d54);
          uVar17 = *(undefined4 *)(param_1 + 0x10);
          puVar15 = (undefined4 *)FUN_1005c755(0x78);
          if (puVar15 == (undefined4 *)0x0) {
            puStack_84 = (undefined4 *)(param_1 + 0x1d70);
            puVar28 = (undefined4 *)(param_1 + 0x1d6c);
          }
          else {
            puVar15[0x12] = 0;
            puVar15[0x13] = 0;
            puVar15[0x14] = 0;
            puVar15[4] = 0;
            puVar15[3] = uVar17;
            puVar15[0x10] = iVar14 + 0x13d0;
            puVar15[2] = -(uint)(piVar23 != (int *)0x0) & (uint)(piVar23 + 0x148);
            puVar15[6] = 0;
            puVar15[7] = 0;
            puVar15[8] = 0;
            puVar15[9] = 0;
            puVar15[10] = 0x4000;
            puVar15[0xb] = 0;
            puStack_80 = (undefined4 *)(param_1 + 0x1d6c);
            puVar15[0xc] = 0;
            *(undefined1 *)(puVar15 + 0xd) = 0;
            puVar15[0x11] = -(uint)(piVar23 != (int *)0x0) & (uint)(piVar23 + 0x142);
            puVar15[0x15] = 0;
            puVar15[0x16] = 0xffffffff;
            puVar15[0x18] = 0;
            puVar15[0x19] = 0;
            puVar15[0x1a] = 0;
            puVar15[0x1b] = 0;
            *(undefined8 *)(puVar15 + 0x1c) = 0;
            *puVar15 = &PTR_FUN_1005fe9c;
            puVar15[0xe] = &PTR_LAB_1005fed8;
            *puStack_80 = puVar15;
            iVar14 = *piVar1;
            uVar17 = *(undefined4 *)(param_1 + 0x10);
            puVar15 = (undefined4 *)FUN_1005c755(0x78);
            if (puVar15 == (undefined4 *)0x0) {
              puStack_84 = (undefined4 *)(param_1 + 0x1d70);
              puStack_80 = (undefined4 *)(param_1 + 0x1d6c);
            }
            else {
              puVar15[0x12] = 0;
              puVar15[0x13] = 0;
              puVar15[0x14] = 0;
              puVar15[4] = 0;
              puVar15[6] = 0;
              puVar15[2] = -(uint)(iVar14 != 0) & iVar14 + 0x520U;
              puVar15[3] = uVar17;
              puVar15[7] = 0;
              puVar15[8] = 0;
              puVar15[9] = 0;
              puVar15[10] = 0xe90;
              puVar15[0xb] = 0;
              puVar15[0xc] = 0;
              *(undefined1 *)(puVar15 + 0xd) = 0;
              puVar15[0x10] = 0;
              puVar15[0x11] = 0;
              puVar15[0x15] = 0;
              puVar15[0x16] = 0xffffffff;
              puVar15[0x18] = 0;
              puVar15[0x19] = 0;
              puVar15[0x1a] = 0;
              puVar15[0x1b] = 0;
              *(undefined8 *)(puVar15 + 0x1c) = 0;
              *puVar15 = &PTR_FUN_1005fe9c;
              puVar15[0xe] = &PTR_LAB_1005fed8;
              *(undefined4 **)(param_1 + 0x1d78) = puVar15;
              iVar14 = *piVar1;
              piVar20 = (int *)(*(int *)(param_1 + 0x1d54) + 0x1310);
              uVar17 = *(undefined4 *)(param_1 + 0x10);
              puVar15 = (undefined4 *)FUN_1005c755(0x78);
              if (puVar15 == (undefined4 *)0x0) {
                puStack_80 = (undefined4 *)(param_1 + 0x1d6c);
                puStack_84 = (undefined4 *)(param_1 + 0x1d70);
              }
              else {
                puVar15[0x12] = 0;
                puVar15[0x13] = 0;
                puVar15[0x14] = 0;
                puVar15[4] = 0;
                puVar15[6] = 0;
                puVar15[3] = uVar17;
                puVar15[0x10] = piVar20;
                puVar15[2] = -(uint)(iVar14 != 0) & iVar14 + 0x520U;
                puVar15[7] = 0;
                puVar15[8] = 0;
                puVar15[9] = 0;
                puVar15[10] = 0x400;
                puVar15[0xb] = 0;
                puVar15[0xc] = 0;
                *(undefined1 *)(puVar15 + 0xd) = 0;
                puVar15[0x11] = 0;
                puVar15[0x15] = 0;
                puVar15[0x16] = 0xffffffff;
                puVar15[0x18] = 0;
                puVar15[0x19] = 0;
                puVar15[0x1a] = 0;
                puVar15[0x1b] = 0;
                *(undefined8 *)(puVar15 + 0x1c) = 0;
                *puVar15 = &PTR_FUN_1005fe9c;
                puVar15[0xe] = &PTR_LAB_1005fed8;
                *(undefined4 **)(param_1 + 0x1d80) = puVar15;
                piVar21 = (int *)FUN_10051e26((void *)(*piVar1 + 0x520),*(int *)(param_1 + 0x10),
                                              0x960);
                *(int **)(param_1 + 0x1d7c) = piVar21;
                if (piVar21 != (int *)0x0) {
                  piVar4 = *(int **)(*(int *)(param_1 + 0x1d54) + 0x130c);
                  iVar14 = (**(code **)(*piVar21 + 0x38))(piVar21,auStack_24,auStack_28);
                  if (-1 < iVar14) {
                    piVar21 = piVar4;
                    if (iStack_30 == 4) {
                      uStack_b8._3_1_ = '\0';
                      local_7c = 0;
                      iStack_78 = 0;
                      iVar13 = (**(code **)(*piVar4 + 0x20))(piVar4,0,&local_7c,&stack0xffffff44);
                      if (-1 < iVar13) {
                        this = (int *)piVar4[0x239];
                        uStack_b8._3_1_ = '\x01';
                        EnterCriticalSection((LPCRITICAL_SECTION)(this + 7));
                        uVar25 = (int)piVar4 >> 0x1f;
                        puStack_80 = (undefined4 *)FUN_100562e9(this,(uint)piVar4,uVar25);
                        iVar13 = (int)puStack_80 * 0x10;
                        if (((puStack_80 == (undefined4 *)this[2]) ||
                            (piVar21 = piVar20, *(int **)(iVar13 + *this) != piVar4)) ||
                           (*(uint *)(iVar13 + 4 + *this) != uVar25)) {
                          if ((undefined4 *)this[2] == (undefined4 *)this[1]) {
                            lVar6 = (ulonglong)(uint)(this[1] * 2) * 0x10;
                            SVar22 = (SIZE_T)lVar6;
                            if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
                              SVar22 = 0xffffffff;
                            }
                            puStack_84 = (undefined4 *)FUN_1005c789(SVar22);
                            if (puStack_84 != (undefined4 *)0x0) {
                              uVar26 = 0;
                              if (this[1] != 0) {
                                do {
                                  uVar27 = uVar26 + 1;
                                  puVar15 = (undefined4 *)(*this + uVar26 * 0x10);
                                  uVar17 = puVar15[1];
                                  uVar7 = puVar15[2];
                                  uVar8 = puVar15[3];
                                  puVar28 = puStack_84 + uVar26 * 4;
                                  *puVar28 = *puVar15;
                                  puVar28[1] = uVar17;
                                  puVar28[2] = uVar7;
                                  puVar28[3] = uVar8;
                                  uVar26 = uVar27;
                                  piVar21 = piVar20;
                                } while (uVar27 < (uint)this[1]);
                              }
                              thunk_FUN_1005c76c((LPVOID)*this);
                              this[1] = this[1] << 1;
                              *this = (int)puStack_84;
                            }
                          }
                          for (puVar15 = (undefined4 *)this[2]; puStack_80 < puVar15;
                              puVar15 = (undefined4 *)((int)puVar15 + -1)) {
                            puVar2 = (undefined4 *)(*this + -0x10 + (int)puVar15 * 0x10);
                            uVar17 = puVar2[1];
                            uVar7 = puVar2[2];
                            uVar8 = puVar2[3];
                            puVar28 = (undefined4 *)(*this + (int)puVar15 * 0x10);
                            *puVar28 = *puVar2;
                            puVar28[1] = uVar17;
                            puVar28[2] = uVar7;
                            puVar28[3] = uVar8;
                            piVar21 = piVar20;
                          }
                          iVar14 = *this;
                          *(int **)(iVar13 + iVar14) = piVar4;
                          *(uint *)(iVar13 + 4 + iVar14) = uVar25;
                          *(int **)(iVar13 + 8 + *this) = piVar4;
                          puVar15 = (undefined4 *)FUN_1005c755(0x14);
                          if (puVar15 == (undefined4 *)0x0) {
                            *(undefined4 *)(iVar13 + 0xc + *this) = 0;
                            this[2] = this[2] + 1;
                          }
                          else {
                            *puVar15 = 0;
                            puVar15[1] = 0;
                            puVar15[2] = 0;
                            puVar15[3] = 0;
                            puVar15[4] = 0;
                            *(undefined4 **)(iVar13 + 0xc + *this) = puVar15;
                            this[2] = this[2] + 1;
                          }
                        }
                        iVar13 = *(int *)(iVar13 + 0xc + *this);
                        if (iVar13 != 0) {
                          uStack_b8._3_1_ = FUN_100556fb(iVar13,0);
                        }
                        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 7));
                        if (uStack_b8._3_1_ != '\0') {
                          puVar15 = &DAT_10061288;
                          puVar28 = (undefined4 *)0x0;
                          for (iVar13 = 600; piVar21 = piVar20, iVar13 != 0; iVar13 = iVar13 + -1) {
                            *puVar28 = *puVar15;
                            puVar15 = puVar15 + 1;
                            puVar28 = puVar28 + 1;
                          }
                        }
                        local_7c = 0;
                        iStack_78 = 0x960;
                        (**(code **)(*piVar4 + 0x24))(piVar4,0,&local_7c);
                        if (((piVar21[0x238] != 0) &&
                            (iVar13 = FUN_10055a43((void *)piVar21[0x239],(uint)piVar4,0,1,
                                                   piVar21[0x238],(int)piVar21,0,piVar21[0x24e],
                                                   piVar21[0x24f]),
                            *(int *)(piVar21[0x238] + 0x20) != 3)) && (iVar13 != 0)) {
                          FUN_10051f2d(piVar21,piVar4,0,iVar13,0);
                        }
                      }
                      if (uStack_b8._3_1_ != '\0') goto LAB_1001c264;
                      puStack_6c = (undefined4 *)0x0;
                      iStack_68 = 0;
                      uStack_64 = 0;
                      local_60.cbSize = 0;
                      local_60.style = 0;
                      local_60.lpfnWndProc = (WNDPROC)0x0;
                      local_60.cbClsExtra = 0;
                      local_60.cbWndExtra = 0;
                      local_60.hInstance = (HINSTANCE)0x0;
                      local_60.hIcon = (HICON)0x0;
                      if (piVar21[0x238] != 0) goto LAB_1001c1f4;
                    }
                    else {
                      puStack_6c = (undefined4 *)0x0;
                      iStack_68 = 0;
                      uStack_64 = 0;
                      local_60.cbSize = 0;
                      local_60.style = 0;
                      local_60.lpfnWndProc = (WNDPROC)0x0;
                      local_60.cbClsExtra = 0;
                      local_60.hInstance = (HINSTANCE)0x0;
                      local_60.hIcon = (HICON)0x0;
                      if (piVar4[0x238] != 0) {
LAB_1001c1f4:
                        local_60.hInstance = (HINSTANCE)0x0;
                        local_60.hIcon = (HICON)0x0;
                        local_60.cbWndExtra = 0;
                        local_60.cbClsExtra = 0;
                        local_60.lpfnWndProc = (WNDPROC)0x0;
                        local_60.style = 0;
                        local_60.cbSize = 0;
                        uStack_64 = 0;
                        iStack_68 = 0;
                        puStack_6c = (undefined4 *)0x0;
                        bVar9 = FUN_10058e43(piVar1,0x960,(int *)&puStack_6c);
                        if (!bVar9) goto LAB_1001c23c;
                        puVar15 = &DAT_10061288;
                        puVar28 = puStack_6c;
                        for (iVar13 = 600; iVar13 != 0; iVar13 = iVar13 + -1) {
                          *puVar28 = *puVar15;
                          puVar15 = puVar15 + 1;
                          puVar28 = puVar28 + 1;
                        }
                        local_60._20_8_ = local_60._20_8_ & 0xffffffff00000000;
                        local_60.cbClsExtra = 0x960;
                        piVar21 = piVar20;
                      }
                      local_60.cbWndExtra = 0;
                    }
LAB_1001c23c:
                    iVar13 = iVar19;
                    if (iStack_68 != 0) {
                      FUN_10052a45(piVar21,(uint)piVar4,piVar1,(int)&puStack_6c,0);
LAB_1001c264:
                      uVar25 = *(uint *)(iVar24 + 0x30ec);
                      pvVar5 = *(void **)(*(int *)(iVar24 + 0x30c4) + 0x130c);
                      if (((*(int *)((int)pvVar5 + 0x8e0) != 0) && (uVar25 != 0)) &&
                         ((iVar13 = FUN_10055a43(*(void **)((int)pvVar5 + 0x8e4),uVar25,0,1,
                                                 *(int *)((int)pvVar5 + 0x8e0),(int)pvVar5,0,
                                                 *(int *)((int)pvVar5 + 0x938),
                                                 *(int *)((int)pvVar5 + 0x93c)),
                          *(int *)(*(int *)((int)pvVar5 + 0x8e0) + 0x20) != 3 && (iVar13 != 0)))) {
                        FUN_10051f2d(pvVar5,uVar25,0,iVar13,0);
                      }
                      uVar25 = *(uint *)(iVar24 + 0x30ec);
                      pvVar5 = *(void **)(*(int *)(iVar24 + 0x30c4) + 0x1304);
                      if ((((*(int *)((int)pvVar5 + 0x8e0) != 0) && (uVar25 != 0)) &&
                          (iVar13 = FUN_10055a43(*(void **)((int)pvVar5 + 0x8e4),uVar25,0,1,
                                                 *(int *)((int)pvVar5 + 0x8e0),(int)pvVar5,0xc0,
                                                 *(int *)((int)pvVar5 + 0x938),
                                                 *(int *)((int)pvVar5 + 0x93c)),
                          *(int *)(*(int *)((int)pvVar5 + 0x8e0) + 0x20) != 3)) &&
                         ((iVar13 != 0xc0 && (iVar13 != 0)))) {
                        FUN_10051f2d(pvVar5,uVar25,0,iVar13,0xc0);
                      }
                      iVar13 = *piVar23;
                      uVar17 = *(undefined4 *)(iVar24 + 0x1380);
                      puVar15 = (undefined4 *)FUN_1005c755(0x78);
                      if (puVar15 == (undefined4 *)0x0) {
                        puVar15 = (undefined4 *)0x0;
                      }
                      else {
                        puVar15[0x12] = 0;
                        puVar15[0x13] = 0;
                        puVar15[0x14] = 0;
                        puVar15[4] = 0;
                        puVar15[6] = 0;
                        puVar15[2] = -(uint)(iVar13 != 0) & iVar13 + 0x520U;
                        puVar15[3] = uVar17;
                        puVar15[7] = 0;
                        puVar15[8] = 0;
                        puVar15[9] = 0;
                        puVar15[10] = 0x440;
                        puVar15[0xb] = 0;
                        puVar15[0xc] = 0;
                        *(undefined1 *)(puVar15 + 0xd) = 0;
                        puVar15[0x10] = 0;
                        puVar15[0x11] = 0;
                        puVar15[0x15] = 0;
                        puVar15[0x16] = 0xffffffff;
                        puVar15[0x18] = 0;
                        puVar15[0x19] = 0;
                        puVar15[0x1a] = 0;
                        puVar15[0x1b] = 0;
                        *(undefined8 *)(puVar15 + 0x1c) = 0;
                        *puVar15 = &PTR_FUN_1005fe9c;
                        puVar15[0xe] = &PTR_LAB_1005fed8;
                      }
                      *(undefined4 **)(iVar24 + 0x30f4) = puVar15;
                      FUN_10052215((void *)(*(int *)(*(int *)(iVar24 + 0x30c4) + 0x130c) + 4),'\0');
                      FUN_10028730(iVar19);
                      FUN_1005c9cc((int *)(iVar24 + 0x3168),0,1000);
                      *(int *)(iVar24 + 0x3168) = *(int *)(iVar24 + 0x30cc);
                      *(undefined4 *)(iVar24 + 0x3198) = 2;
                      uVar29 = (**(code **)(**(int **)(iVar24 + 0x30ec) + 0x2c))
                                         (*(int **)(iVar24 + 0x30ec));
                      *(undefined8 *)(iVar24 + 0x31e0) = uVar29;
                      uStack_b8 = 0;
                      uVar25 = *(uint *)(*(int *)(iVar24 + 0x30d0) + 200);
                      do {
                        *(uint *)(iVar24 + 0x3240 + uStack_b8 * 4) = uVar25;
                        iVar13 = *(int *)(*(int *)(iVar24 + 0x30c4) + 0x15d8);
                        piVar23 = *(int **)(*(int *)(iVar13 + 0x34) + (uVar25 >> 0x10) * 8);
                        (**(code **)(*piVar23 + 0x24))(piVar23,&stack0xffffff40);
                        unaff_EDI = unaff_EDI + *(int *)(iVar13 + 0x18) * (uVar25 & 0xffff);
                        *(int *)(iVar24 + 0x3280 + uStack_b8 * 4) = unaff_EDI;
                        uStack_b8 = uStack_b8 + 1;
                      } while (uStack_b8 < 8);
                      *(undefined4 *)(iVar24 + 0x31a0) = 1;
                      *(undefined4 *)(iVar24 + 0x31a8) = 0;
                      *(undefined4 *)(iVar24 + 0x31ac) = 0;
                      *(undefined4 *)(iVar24 + 0x31b0) = 0;
                      *(undefined4 *)(iVar24 + 0x31b4) = 0;
                      *(undefined4 *)(iVar24 + 0x31b8) = 0;
                      *(undefined4 *)(iVar24 + 0x31bc) = 0;
                      *(undefined4 *)(iVar24 + 0x31c0) = 0;
                      *(void **)(iVar24 + 0x3394) = *(void **)(iVar24 + 0x30e0);
                      *(undefined4 *)(iVar24 + 0x33d4) = *(undefined4 *)(iVar24 + 0x30dc);
                      *(undefined4 *)(iVar24 + 0x3120) = *(undefined4 *)(iVar24 + 0x30c4);
                      *(undefined4 *)(iVar24 + 0x31c4) = 0;
                      *(undefined4 *)(iVar24 + 0x33dc) = 0;
                      piVar23 = FUN_10055159(*(void **)(iVar24 + 0x30e0),(int *)&puStack_80,2,0,0,0)
                      ;
                      iVar13 = iStack_78;
                      if (iStack_78 != 0) {
                        FUN_10055159(*(void **)(iVar24 + 0x30dc),(int *)&puStack_80,2,0,0,0);
                        if (iStack_78 != 0) {
                          *(int *)(iVar24 + 0x13d4) = iStack_78;
                          *(int *)(iVar24 + 0x13bc) = iVar13;
                          *(int *)(iVar24 + 0x13b4) = iVar13;
                          *(undefined4 *)(iVar24 + 0x13c0) = 0;
                          *(undefined4 *)(iVar24 + 0x13cc) = 0;
                          *(undefined4 *)(iVar24 + 0x13c8) = 0;
                          *(int *)(iVar24 + 0x13b8) = iVar13;
                          *(undefined4 *)(iVar24 + 0x13c4) = 0;
                          *(undefined4 *)(iVar24 + 0x13d8) = 0;
                          *(undefined4 *)(iVar24 + 0x13dc) = 0;
                          return CONCAT31((int3)((uint)iStack_78 >> 8),1);
                        }
                        piVar23 = *(int **)(iVar24 + 0x30e0);
                        if (piVar23[0xb] != 0) {
                          piVar23[0xb] = 0;
                        }
                      }
                      return CONCAT31((int3)((uint)piVar23 >> 8),1);
                    }
                  }
                  (**(code **)(**(int **)(iVar13 + 0x1d7c) + 8))(*(int **)(iVar13 + 0x1d7c));
                  *(undefined4 *)(iVar13 + 0x1d7c) = 0;
                }
                if (*(void **)(iVar13 + 0x1d80) != (void *)0x0) {
                  FUN_1001c9f0(*(void **)(iVar13 + 0x1d80),1);
                }
              }
              *(undefined4 *)(iVar13 + 0x1d80) = 0;
              if (*(void **)(iVar13 + 0x1d78) != (void *)0x0) {
                FUN_1001c9f0(*(void **)(iVar13 + 0x1d78),1);
              }
            }
            *(undefined4 *)(iVar13 + 0x1d78) = 0;
            puVar28 = puStack_80;
            if ((void *)*puStack_80 != (void *)0x0) {
              FUN_1001c9f0((void *)*puStack_80,1);
              puVar28 = puStack_80;
            }
          }
          puVar15 = (undefined4 *)(iVar13 + 0x1d64);
          *puVar28 = 0;
          if ((void *)*puStack_84 != (void *)0x0) {
            FUN_1001c9f0((void *)*puStack_84,1);
          }
        }
        puStack_8c = (undefined4 *)(param_1 + 0x1d68);
        *puStack_84 = 0;
        if ((undefined4 *)*puStack_8c != (undefined4 *)0x0) {
          FUN_1001cad0((undefined4 *)*puStack_8c);
        }
        *puStack_8c = 0;
      }
      if ((undefined4 *)*puVar15 != (undefined4 *)0x0) {
        FUN_1001cad0((undefined4 *)*puVar15);
      }
      *puVar15 = 0;
    }
    thunk_FUN_1005c76c(*(LPVOID *)(iVar13 + 0x1c));
    *(undefined4 *)(iVar13 + 0x1c) = 0;
  }
  piVar23 = (int *)thunk_FUN_1005c76c(*(LPVOID *)(iVar13 + 0x18));
  *(undefined4 *)(iVar13 + 0x18) = 0;
LAB_1001c98c:
  piVar1 = *(int **)(param_1 + 0x1d50);
  if (piVar1 != (int *)0x0) {
    piVar23 = piVar1 + 2;
    LOCK();
    iVar13 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      if ((short)piVar1[3] != 0) {
        uVar3 = *(ushort *)(piVar1 + 3);
        pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar3,pHVar10);
        if ((HMODULE)piVar1[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar1[4]);
          piVar1[4] = 0;
        }
      }
      piVar23 = (int *)(**(code **)(*piVar1 + 0x44))();
    }
  }
  *(int *)(param_1 + 0x1d50) = 0;
  return (uint)piVar23 & 0xffffff00;
}

