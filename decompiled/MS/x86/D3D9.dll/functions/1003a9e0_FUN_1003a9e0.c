/*
 * FUN_1003a9e0 at 1003a9e0
 * undefined4 __thiscall FUN_1003a9e0(void * this, int * param_1)
 * Address ranges: 1003a9e0-1003c2d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003a9e0(void *this,int *param_1)

{
  LPVOID lpParameter;
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  HMODULE pHVar10;
  BOOL BVar11;
  WNDPROC pWVar12;
  uint uVar13;
  undefined4 *puVar14;
  HANDLE pvVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  SIZE_T SVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint unaff_ESI;
  void *pvVar25;
  int unaff_EDI;
  int iVar26;
  void *pvVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  undefined4 *puStack_c8;
  undefined4 uStack_c0;
  void *pvStack_b4;
  int *local_ac;
  void *pvStack_a8;
  int *piStack_a4;
  undefined4 *puStack_a0;
  void *local_9c;
  int *piStack_98;
  uint uStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong uStack_6c;
  undefined1 auStack_64 [8];
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  tagWNDCLASSEXA local_50;
  undefined4 uStack_20;
  
  piVar21 = uStack_c0;
  lpwcx = &local_50;
  lpszClass = PTR_s_DGD3D12ROOT_100dd578;
  local_9c = this;
  pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
  BVar11 = GetClassInfoExA(pHVar10,lpszClass,lpwcx);
  pWVar12 = (WNDPROC)0x0;
  if (BVar11 != 0) {
    pWVar12 = local_50.lpfnWndProc;
  }
  if ((pWVar12 == (WNDPROC)0x0) &&
     (pWVar12 = (WNDPROC)(*(code *)PTR_FUN_100dd57c)(), pWVar12 == (WNDPROC)0x0)) {
    *(undefined4 *)((int)this + 0xf6b4) = 0;
    return 0;
  }
  LOCK();
  *(int *)(pWVar12 + 8) = *(int *)(pWVar12 + 8) + 1;
  UNLOCK();
  local_ac = (int *)((int)this + 0xf6b4);
  *local_ac = (int)pWVar12;
  uVar13 = FUN_1004e7a0(this,param_1);
  if ((char)uVar13 == '\0') goto LAB_1003acef;
  *(int *)((int)this + 0xf6bc) = *local_ac + *(int *)((int)this + 0x10) * 0x18 + 0x520;
  iVar26 = *(int *)((int)this + 0x10) * 0x16c0 + 0x6c0 + *local_ac;
  *(int *)((int)this + 0xf6b8) = iVar26;
  FUN_100cef50(iVar26 + 0x11c0);
  *(undefined4 *)((int)this + 0xf6ec) = *(undefined4 *)((int)this + 0xf6b4);
  *(undefined4 *)((int)this + 0xf6f0) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xf718) = *(undefined4 *)((int)this + 0xf6b4);
  *(undefined4 *)((int)this + 0xf71c) = *(undefined4 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0xf720) = *(undefined1 *)((int)this + 0xc);
  iVar26 = *(int *)(*(int *)((int)this + 0xf6c4) + 0xd0);
  *(int *)((int)this + 0xf6c0) = iVar26;
  uVar13 = 0;
  if (iVar26 != 0) {
    piStack_a4 = (int *)(*(int *)((int)this + 0xf6b4) + 0x520);
    iVar26 = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0xf6b4) == 0) {
      piStack_a4 = (int *)0x0;
    }
    puVar14 = (undefined4 *)FUN_100cfd55(0x30);
    pvVar25 = this;
    if (puVar14 == (undefined4 *)0x0) {
LAB_1003acb2:
      *(undefined4 *)((int)pvVar25 + 0xf6c8) = 0;
      this = pvVar25;
    }
    else {
      *puVar14 = &PTR_FUN_100d8d48;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[7] = 4;
      puVar14[8] = 0;
      puVar14[9] = 0x200;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar14[0xb] = pvVar15;
      if (pvVar15 == (HANDLE)0x0) {
LAB_1003abdf:
        *puVar14 = &PTR_FUN_100d8d48;
        if (puVar14[4] != 0) {
          iVar26 = puVar14[6];
          piStack_a4 = (int *)(puVar14[3] + iVar26 * 0x20);
          if ((int *)piStack_a4[5] != (int *)0x0) {
            uVar29 = (**(code **)(*(int *)piStack_a4[5] + 0x20))();
            uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
            if ((uVar13 <= (uint)piStack_a4[7]) &&
               ((uVar13 < (uint)piStack_a4[7] || ((uint)uVar29 < (uint)piStack_a4[6])))) {
              (**(code **)(**(int **)(puVar14[3] + 0x14 + iVar26 * 0x20) + 0x24))();
              WaitForSingleObject((HANDLE)puVar14[0xb],0xffffffff);
            }
          }
          if (puVar14[4] != 0) {
            uVar13 = 0;
            do {
              (**(code **)(**(int **)(uVar13 * 0x20 + 0xc + puVar14[3]) + 8))();
              uVar13 = uVar13 + 1;
              this = local_9c;
            } while (uVar13 < (uint)puVar14[4]);
          }
          thunk_FUN_100cfd6c((LPVOID)puVar14[3]);
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[5] = 0;
          CloseHandle((HANDLE)puVar14[0xb]);
          puVar14[0xb] = 0;
        }
        thunk_FUN_100cfd6c((LPVOID)puVar14[3]);
        FUN_100cfd6c(puVar14);
        pvVar25 = this;
        goto LAB_1003acb2;
      }
      puVar14[2] = iVar26;
      puVar14[1] = piStack_a4;
      puVar14[7] = 0;
      puVar14[8] = 1;
      uVar16 = (**(code **)(*(int *)piStack_a4[iVar26 * 6] + 0x3c))();
      puVar14[10] = uVar16;
      uVar16 = FUN_100c1ea4((int)puVar14);
      if ((char)uVar16 == '\0') {
        CloseHandle((HANDLE)puVar14[0xb]);
        puVar14[0xb] = 0;
        goto LAB_1003abdf;
      }
      puStack_a0 = (undefined4 *)((int)this + 0xf6c8);
      *puStack_a0 = puVar14;
      piStack_a4 = (int *)(*(int *)((int)this + 0xf6b4) + 0x520);
      iVar26 = *(int *)((int)this + 0x10);
      if (*(int *)((int)this + 0xf6b4) == 0) {
        piStack_a4 = (int *)0x0;
      }
      puVar14 = (undefined4 *)FUN_100cfd55(0x30);
      if (puVar14 == (undefined4 *)0x0) {
LAB_1003af13:
        *(undefined4 *)((int)pvVar25 + 0xf6cc) = 0;
        puVar14 = (undefined4 *)((int)pvVar25 + 0xf6c8);
        this = pvVar25;
      }
      else {
        *puVar14 = &PTR_FUN_100d8d48;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 4;
        puVar14[8] = 0;
        puVar14[9] = 0x200;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        puVar14[0xb] = pvVar15;
        if (pvVar15 == (HANDLE)0x0) {
LAB_1003ae40:
          *puVar14 = &PTR_FUN_100d8d48;
          if (puVar14[4] != 0) {
            iVar26 = puVar14[6];
            piStack_a4 = (int *)(puVar14[3] + iVar26 * 0x20);
            if ((int *)piStack_a4[5] != (int *)0x0) {
              uVar29 = (**(code **)(*(int *)piStack_a4[5] + 0x20))();
              uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
              if ((uVar13 <= (uint)piStack_a4[7]) &&
                 ((uVar13 < (uint)piStack_a4[7] || ((uint)uVar29 < (uint)piStack_a4[6])))) {
                (**(code **)(**(int **)(puVar14[3] + 0x14 + iVar26 * 0x20) + 0x24))();
                WaitForSingleObject((HANDLE)puVar14[0xb],0xffffffff);
              }
            }
            if (puVar14[4] != 0) {
              uVar13 = 0;
              do {
                (**(code **)(**(int **)(uVar13 * 0x20 + 0xc + puVar14[3]) + 8))();
                uVar13 = uVar13 + 1;
                this = local_9c;
              } while (uVar13 < (uint)puVar14[4]);
            }
            thunk_FUN_100cfd6c((LPVOID)puVar14[3]);
            puVar14[3] = 0;
            puVar14[4] = 0;
            puVar14[5] = 0;
            CloseHandle((HANDLE)puVar14[0xb]);
            puVar14[0xb] = 0;
          }
          thunk_FUN_100cfd6c((LPVOID)puVar14[3]);
          FUN_100cfd6c(puVar14);
          pvVar25 = this;
          goto LAB_1003af13;
        }
        puVar14[2] = iVar26;
        puVar14[1] = piStack_a4;
        puVar14[7] = 1;
        puVar14[8] = 1;
        uVar16 = (**(code **)(*(int *)piStack_a4[iVar26 * 6] + 0x3c))();
        puVar14[10] = uVar16;
        uVar16 = FUN_100c1ea4((int)puVar14);
        if ((char)uVar16 == '\0') {
          CloseHandle((HANDLE)puVar14[0xb]);
          puVar14[0xb] = 0;
          goto LAB_1003ae40;
        }
        *(undefined4 **)((int)this + 0xf6cc) = puVar14;
        puStack_90 = (undefined4 *)((int)this + 0xf6cc);
        iVar17 = *(int *)((int)this + 0x74) << 0xc;
        *(int *)((int)this + 0xf6d8) = iVar17;
        pvStack_a8 = *(void **)((int)this + 0xf6b4);
        iVar26 = *(int *)((int)this + 0xf6b8);
        piStack_a4 = *(int **)((int)this + 0x10);
        puVar14 = (undefined4 *)FUN_100cfd55(0x78);
        if (puVar14 == (undefined4 *)0x0) {
          puStack_90 = (undefined4 *)((int)this + 0xf6cc);
          piVar21 = (int *)((int)this + 0xf6d4);
        }
        else {
          puVar14[0x12] = 0;
          puVar14[0x13] = 0;
          puVar14[0x14] = 0;
          puVar14[4] = 0;
          puVar14[3] = piStack_a4;
          puVar14[10] = iVar17;
          puVar14[0x10] = iVar26 + 0x1370;
          puVar14[2] = -(uint)(pvStack_a8 != (void *)0x0) & (int)pvStack_a8 + 0x520U;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[9] = 0;
          piStack_a4 = (int *)((int)this + 0xf6d4);
          puVar14[0xb] = 0;
          puVar14[0xc] = 0;
          *(undefined1 *)(puVar14 + 0xd) = 0;
          puVar14[0x11] = -(uint)(pvStack_a8 != (void *)0x0) & (int)pvStack_a8 + 0x508U;
          puVar14[0x15] = 0;
          puVar14[0x16] = 0xffffffff;
          puVar14[0x18] = 0;
          puVar14[0x19] = 0;
          puVar14[0x1a] = 0;
          puVar14[0x1b] = 0;
          *(undefined8 *)(puVar14 + 0x1c) = 0;
          *puVar14 = &PTR_FUN_100d8c9c;
          puVar14[0xe] = &PTR_LAB_100d8cd8;
          *piStack_a4 = (int)puVar14;
          puVar14 = (undefined4 *)((int)this + 0xf6b4);
          pvStack_a8 = (void *)*puVar14;
          iVar26 = *(int *)((int)this + 0xf6b8);
          uVar16 = *(undefined4 *)((int)this + 0x10);
          puVar18 = (undefined4 *)FUN_100cfd55(0x78);
          if (puVar18 == (undefined4 *)0x0) {
            puStack_90 = (undefined4 *)((int)this + 0xf6cc);
            piVar21 = (int *)((int)this + 0xf6d4);
            puStack_a0 = (undefined4 *)((int)this + 0xf6c8);
            puVar14 = (undefined4 *)((int)this + 0xf6d0);
          }
          else {
            puVar18[0x12] = 0;
            puVar18[0x13] = 0;
            puVar18[0x14] = 0;
            puVar18[4] = 0;
            puVar18[3] = uVar16;
            puVar18[0x10] = iVar26 + 0x13d0;
            puVar18[2] = -(uint)(pvStack_a8 != (void *)0x0) & (int)pvStack_a8 + 0x520U;
            puVar18[6] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar18[9] = 0;
            puVar18[10] = 0x4000;
            puVar18[0xb] = 0;
            puStack_84 = (undefined4 *)((int)this + 0xf6d0);
            puVar18[0xc] = 0;
            *(undefined1 *)(puVar18 + 0xd) = 0;
            puVar18[0x11] = -(uint)(pvStack_a8 != (void *)0x0) & (int)pvStack_a8 + 0x508U;
            puVar18[0x15] = 0;
            puVar18[0x16] = 0xffffffff;
            puVar18[0x18] = 0;
            puVar18[0x19] = 0;
            puVar18[0x1a] = 0;
            puVar18[0x1b] = 0;
            *(undefined8 *)(puVar18 + 0x1c) = 0;
            *puVar18 = &PTR_FUN_100d8c9c;
            puVar18[0xe] = &PTR_LAB_100d8cd8;
            *puStack_84 = puVar18;
            iVar26 = *(int *)((int)this + 0xf6b4);
            uVar16 = *(undefined4 *)((int)this + 0x10);
            puVar18 = (undefined4 *)FUN_100cfd55(0x78);
            if (puVar18 == (undefined4 *)0x0) {
              puStack_90 = (undefined4 *)((int)this + 0xf6cc);
              puStack_84 = (undefined4 *)((int)this + 0xf6d0);
              puStack_a0 = (undefined4 *)((int)this + 0xf6c8);
              piVar21 = (int *)((int)this + 0xf6d4);
            }
            else {
              puVar18[0x12] = 0;
              puVar18[0x13] = 0;
              puVar18[0x14] = 0;
              puVar18[4] = 0;
              puVar18[6] = 0;
              puVar18[7] = 0;
              puVar18[8] = 0;
              puVar18[9] = 0;
              puVar18[2] = -(uint)(iVar26 != 0) & iVar26 + 0x520U;
              puVar18[3] = uVar16;
              puVar18[10] = 0xc20;
              puVar18[0xb] = 0;
              puVar18[0xc] = 0;
              *(undefined1 *)(puVar18 + 0xd) = 0;
              puVar18[0x10] = 0;
              puVar18[0x11] = 0;
              puVar18[0x15] = 0;
              puVar18[0x16] = 0xffffffff;
              puVar18[0x18] = 0;
              puVar18[0x19] = 0;
              puVar18[0x1a] = 0;
              puVar18[0x1b] = 0;
              *(undefined8 *)(puVar18 + 0x1c) = 0;
              *puVar18 = &PTR_FUN_100d8c9c;
              puVar18[0xe] = &PTR_LAB_100d8cd8;
              *(undefined4 **)((int)this + 0xf6dc) = puVar18;
              iVar26 = *(int *)((int)this + 0xf6b4);
              iVar17 = *(int *)((int)this + 0xf6b8);
              uVar16 = *(undefined4 *)((int)this + 0x10);
              puVar18 = (undefined4 *)FUN_100cfd55(0x78);
              if (puVar18 == (undefined4 *)0x0) {
                puStack_84 = (undefined4 *)((int)this + 0xf6d0);
                piStack_a4 = (int *)((int)this + 0xf6d4);
                puStack_90 = (undefined4 *)((int)this + 0xf6cc);
              }
              else {
                puVar18[0x12] = 0;
                puVar18[0x13] = 0;
                puVar18[0x14] = 0;
                puVar18[4] = 0;
                puVar18[6] = 0;
                puVar18[7] = 0;
                puVar18[8] = 0;
                puVar18[9] = 0;
                puVar18[3] = uVar16;
                puVar18[0x10] = iVar17 + 0x1310;
                puVar18[2] = -(uint)(iVar26 != 0) & iVar26 + 0x520U;
                puVar18[10] = 0x8000;
                puVar18[0xb] = 0;
                puVar18[0xc] = 0;
                *(undefined1 *)(puVar18 + 0xd) = 0;
                puVar18[0x11] = 0;
                puVar18[0x15] = 0;
                puVar18[0x16] = 0xffffffff;
                puVar18[0x18] = 0;
                puVar18[0x19] = 0;
                puVar18[0x1a] = 0;
                puVar18[0x1b] = 0;
                uStack_74 = 0;
                *(undefined8 *)(puVar18 + 0x1c) = 0;
                *puVar18 = &PTR_FUN_100d8c9c;
                puVar18[0xe] = &PTR_LAB_100d8cd8;
                *(undefined4 **)((int)this + 0xf6e4) = puVar18;
                uStack_70 = 0;
                local_50.cbSize = 1;
                local_50.lpfnWndProc = (WNDPROC)0x10000;
                local_50.cbClsExtra = 0;
                local_50.cbWndExtra = 0x960;
                local_50.hInstance = (HINSTANCE)0x0;
                local_50.hIcon = (HICON)0x1;
                iVar26 = *(int *)((int)this + 0xf6b4) + *(int *)((int)this + 0x10) * 0x18;
                local_50.hCursor = (HCURSOR)0x10001;
                cVar8 = *(char *)(iVar26 + 0x530);
                uStack_80 = 1;
                local_50.hbrBackground = (HBRUSH)0x0;
                local_50.lpszMenuName = (LPCSTR)0x1;
                if (cVar8 != '\0') {
                  uStack_80 = 4;
                }
                local_50.lpszClassName = (LPCSTR)0x0;
                uStack_7c = 0;
                local_50.hIconSm = (HICON)0x1;
                uStack_20 = 0;
                piStack_98 = (int *)0x0;
                if (cVar8 != '\0') {
                  uStack_7c = 2;
                }
                uStack_78 = (uint)(cVar8 != '\0');
                piVar4 = *(int **)(iVar26 + 0x520);
                (**(code **)(*piVar4 + 0x6c))(piVar4,&uStack_80,0);
                *(int **)((int)this + 0xf6e0) = piStack_98;
                if (piStack_98 != (int *)0x0) {
                  pvVar27 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x130c);
                  puStack_a0 = (undefined4 *)(*(int *)((int)this + 0xf6b8) + 0x1430);
                  pvStack_a8 = pvVar27;
                  iVar26 = (**(code **)(*piStack_98 + 0x38))();
                  if (-1 < iVar26) {
                    if (iStack_5c == 4) {
                      uStack_c0 = (int *)((uint)uStack_c0 & 0xffffff);
                      puStack_8c = (undefined4 *)0x0;
                      iStack_88 = 0;
                      puStack_c8 = (undefined4 *)0x0;
                      iVar26 = (**(code **)(*piStack_a4 + 0x20))(piStack_a4,0);
                      if (-1 < iVar26) {
                        piVar4 = *(int **)((int)pvVar27 + 0x8e4);
                        uStack_c0._0_3_ = SUB43(piVar21,0);
                        uStack_c0 = (int *)CONCAT13(1,(undefined3)uStack_c0);
                        EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 7));
                        piVar21 = piStack_a4;
                        uVar13 = (int)piStack_a4 >> 0x1f;
                        uStack_94 = FUN_100c1d38(piVar4,(uint)piStack_a4,uVar13);
                        puStack_a0 = (undefined4 *)(uStack_94 * 0x10);
                        if (((uStack_94 == piVar4[2]) ||
                            (*(int **)((int)puStack_a0 + *piVar4) != piVar21)) ||
                           (*(uint *)((int)puStack_a0 + *piVar4 + 4) != uVar13)) {
                          if (piVar4[2] == piVar4[1]) {
                            lVar5 = (ulonglong)(uint)(piVar4[1] * 2) * 0x10;
                            SVar19 = (SIZE_T)lVar5;
                            if ((int)((ulonglong)lVar5 >> 0x20) != 0) {
                              SVar19 = 0xffffffff;
                            }
                            piStack_98 = (int *)FUN_100cfd89(SVar19);
                            if (piStack_98 != (int *)0x0) {
                              uVar22 = 0;
                              if (piVar4[1] != 0) {
                                do {
                                  uVar23 = uVar22 + 1;
                                  piVar1 = (int *)(*piVar4 + uVar22 * 0x10);
                                  iVar26 = piVar1[1];
                                  iVar17 = piVar1[2];
                                  iVar20 = piVar1[3];
                                  piVar2 = piStack_98 + uVar22 * 4;
                                  *piVar2 = *piVar1;
                                  piVar2[1] = iVar26;
                                  piVar2[2] = iVar17;
                                  piVar2[3] = iVar20;
                                  uVar22 = uVar23;
                                  pvVar25 = pvStack_a8;
                                } while (uVar23 < (uint)piVar4[1]);
                              }
                              thunk_FUN_100cfd6c((LPVOID)*piVar4);
                              piVar4[1] = piVar4[1] << 1;
                              *piVar4 = (int)piStack_98;
                            }
                          }
                          for (uVar22 = piVar4[2]; uStack_94 < uVar22; uVar22 = uVar22 - 1) {
                            puVar28 = (undefined4 *)(*piVar4 + -0x10 + uVar22 * 0x10);
                            uVar16 = puVar28[1];
                            uVar6 = puVar28[2];
                            uVar7 = puVar28[3];
                            puVar18 = (undefined4 *)(*piVar4 + uVar22 * 0x10);
                            *puVar18 = *puVar28;
                            puVar18[1] = uVar16;
                            puVar18[2] = uVar6;
                            puVar18[3] = uVar7;
                            pvVar25 = pvStack_a8;
                          }
                          iVar26 = *piVar4;
                          *(int **)((int)puStack_a0 + iVar26) = piVar21;
                          *(uint *)((int)puStack_a0 + iVar26 + 4) = uVar13;
                          *(int **)((int)puStack_a0 + *piVar4 + 8) = piStack_a4;
                          puVar18 = (undefined4 *)FUN_100cfd55(0x14);
                          if (puVar18 == (undefined4 *)0x0) {
                            *(undefined4 *)((int)puStack_a0 + *piVar4 + 0xc) = 0;
                            piVar4[2] = piVar4[2] + 1;
                          }
                          else {
                            *puVar18 = 0;
                            puVar18[1] = 0;
                            puVar18[2] = 0;
                            puVar18[3] = 0;
                            puVar18[4] = 0;
                            *(undefined4 **)((int)puStack_a0 + *piVar4 + 0xc) = puVar18;
                            piVar4[2] = piVar4[2] + 1;
                          }
                        }
                        iVar26 = *(int *)((int)puStack_a0 + *piVar4 + 0xc);
                        if (iVar26 != 0) {
                          cVar8 = FUN_100c0e7c(iVar26,0);
                          uStack_c0 = (int *)CONCAT13(cVar8,(undefined3)uStack_c0);
                        }
                        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 7));
                        if (uStack_c0._3_1_ != '\0') {
                          puVar18 = &DAT_100dc2c0;
                          for (iVar26 = 600; pvVar25 = pvStack_a8, iVar26 != 0; iVar26 = iVar26 + -1
                              ) {
                            *puStack_c8 = *puVar18;
                            puVar18 = puVar18 + 1;
                            puStack_c8 = puStack_c8 + 1;
                          }
                        }
                        puStack_8c = (undefined4 *)0x0;
                        iStack_88 = 0x960;
                        (**(code **)(*piStack_a4 + 0x24))(piStack_a4);
                        pvVar27 = pvStack_b4;
                        if (((*(int *)((int)pvStack_b4 + 0x8e0) != 0) &&
                            (iVar26 = FUN_100c133b(*(void **)((int)pvStack_b4 + 0x8e4),
                                                   (uint)piStack_a4,0,1,
                                                   *(int *)((int)pvStack_b4 + 0x8e0),(int)pvStack_b4
                                                   ,0,*(int *)((int)pvStack_b4 + 0x938),
                                                   *(int *)((int)pvStack_b4 + 0x93c)),
                            *(int *)(*(int *)((int)pvStack_b4 + 0x8e0) + 0x20) != 3)) &&
                           (iVar26 != 0)) {
                          FUN_100ba7a8(pvStack_b4,piStack_a4,0,iVar26,0);
                        }
                      }
                      if (uStack_c0._3_1_ == '\0') {
                        puStack_8c = (undefined4 *)0x0;
                        iStack_88 = 0;
                        puStack_84 = (undefined4 *)0x0;
                        uStack_80 = 0;
                        uStack_7c = 0;
                        uStack_78 = 0;
                        uStack_74 = 0;
                        uStack_70 = 0;
                        uStack_6c = 0;
                        if (*(int *)((int)pvVar27 + 0x8e0) != 0) goto LAB_1003b6d8;
                        goto LAB_1003b71d;
                      }
                    }
                    else {
                      puStack_8c = (undefined4 *)0x0;
                      iStack_88 = 0;
                      puStack_84 = (undefined4 *)0x0;
                      uStack_80 = 0;
                      uStack_7c = 0;
                      uStack_78 = 0;
                      uStack_74 = 0;
                      uStack_6c = 0;
                      if (*(int *)((int)pvVar27 + 0x8e0) != 0) {
LAB_1003b6d8:
                        uStack_6c = 0;
                        uStack_70 = 0;
                        uStack_74 = 0;
                        uStack_78 = 0;
                        uStack_7c = 0;
                        uStack_80 = 0;
                        puStack_84 = (undefined4 *)0x0;
                        iStack_88 = 0;
                        puStack_8c = (undefined4 *)0x0;
                        bVar9 = FUN_100c0821(puVar14,0x960,(int *)&puStack_8c);
                        if (!bVar9) goto LAB_1003b71d;
                        puVar18 = &DAT_100dc2c0;
                        puVar28 = puStack_8c;
                        for (iVar26 = 600; iVar26 != 0; iVar26 = iVar26 + -1) {
                          *puVar28 = *puVar18;
                          puVar18 = puVar18 + 1;
                          puVar28 = puVar28 + 1;
                        }
                        uStack_6c = uStack_6c & 0xffffffff00000000;
                        uStack_74 = 0x960;
                        pvVar27 = pvStack_b4;
                      }
                      uStack_70 = 0;
LAB_1003b71d:
                      pvVar25 = pvStack_a8;
                      if (iStack_88 == 0) goto LAB_1003ba01;
                      FUN_100bcac4(pvVar27,(uint)piStack_a4,puVar14,(int)&puStack_8c,0);
                      pvVar25 = pvStack_a8;
                    }
                    uVar13 = *(uint *)((int)pvVar25 + 0xf6e0);
                    pvVar27 = *(void **)(*(int *)((int)pvVar25 + 0xf6b8) + 0x130c);
                    if (((*(int *)((int)pvVar27 + 0x8e0) != 0) && (uVar13 != 0)) &&
                       ((iVar26 = FUN_100c133b(*(void **)((int)pvVar27 + 0x8e4),uVar13,0,1,
                                               *(int *)((int)pvVar27 + 0x8e0),(int)pvVar27,0,
                                               *(int *)((int)pvVar27 + 0x938),
                                               *(int *)((int)pvVar27 + 0x93c)),
                        *(int *)(*(int *)((int)pvVar27 + 0x8e0) + 0x20) != 3 && (iVar26 != 0)))) {
                      FUN_100ba7a8(pvVar27,uVar13,0,iVar26,0);
                    }
                    uVar13 = *(uint *)((int)pvVar25 + 0xf6e0);
                    pvVar27 = *(void **)(*(int *)((int)pvVar25 + 0xf6b8) + 0x1304);
                    if ((((*(int *)((int)pvVar27 + 0x8e0) != 0) && (uVar13 != 0)) &&
                        (iVar26 = FUN_100c133b(*(void **)((int)pvVar27 + 0x8e4),uVar13,0,1,
                                               *(int *)((int)pvVar27 + 0x8e0),(int)pvVar27,0xc0,
                                               *(int *)((int)pvVar27 + 0x938),
                                               *(int *)((int)pvVar27 + 0x93c)),
                        *(int *)(*(int *)((int)pvVar27 + 0x8e0) + 0x20) != 3)) &&
                       ((iVar26 != 0xc0 && (iVar26 != 0)))) {
                      FUN_100ba7a8(pvVar27,uVar13,0,iVar26,0xc0);
                    }
                    uVar16 = FUN_10044cc7((int)pvVar25);
                    if ((char)uVar16 != '\0') {
                      puStack_a0 = *(undefined4 **)((int)pvVar25 + 0x10);
                      iVar17 = *(int *)((int)pvVar25 + 0xf6b4);
                      *(int *)((int)pvVar25 + 0xf76c) = (int)puStack_a0 * 0x16c0 + 0x6c0 + iVar17;
                      iVar26 = iVar17 + 0x520;
                      iVar20 = iVar26;
                      if (iVar17 == 0) {
                        iVar20 = 0;
                      }
                      piVar21 = (int *)FUN_100cfd55(0x24);
                      if (piVar21 == (int *)0x0) {
LAB_1003b9f0:
                        *(undefined4 *)((int)pvVar25 + 0xf774) = 0;
                      }
                      else {
                        *piVar21 = 0;
                        piVar21[1] = 0;
                        piVar21[2] = 0;
                        piVar21[3] = 0;
                        piVar21[4] = 0;
                        piVar21[5] = 0;
                        piVar21[6] = 0;
                        piVar21[7] = 0x400;
                        piVar21[8] = 0;
                        pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                        piVar21[8] = (int)pvVar15;
                        if (pvVar15 == (HANDLE)0x0) {
LAB_1003b904:
                          if (piVar21[3] != 0) {
                            iVar17 = piVar21[5] * 0x20;
                            iVar26 = piVar21[2] + iVar17;
                            if (*(int **)(iVar26 + 0x10) != (int *)0x0) {
                              uVar29 = (**(code **)(**(int **)(iVar26 + 0x10) + 0x20))();
                              uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
                              if ((uVar13 <= *(uint *)(iVar26 + 0x1c)) &&
                                 ((uVar13 < *(uint *)(iVar26 + 0x1c) ||
                                  ((uint)uVar29 < *(uint *)(iVar26 + 0x18))))) {
                                piVar4 = *(int **)(piVar21[2] + 0x10 + iVar17);
                                (**(code **)(*piVar4 + 0x24))
                                          (piVar4,*(undefined4 *)(piVar21[2] + 0x18 + iVar17));
                                WaitForSingleObject((HANDLE)piVar21[8],0xffffffff);
                              }
                            }
                            puStack_c8 = (undefined4 *)0x0;
                            if (piVar21[3] != 0) {
                              do {
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + 4 + piVar21[2]) + 8
                                            ))();
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + piVar21[2]) + 8))()
                                ;
                                puStack_c8 = (undefined4 *)((int)puStack_c8 + 1);
                                pvVar25 = pvStack_a8;
                              } while (puStack_c8 < (uint)piVar21[3]);
                            }
LAB_1003b9aa:
                            thunk_FUN_100cfd6c((LPVOID)piVar21[2]);
                            piVar21[2] = 0;
                            piVar21[3] = 0;
                            piVar21[4] = 0;
                            CloseHandle((HANDLE)piVar21[8]);
                            piVar21[8] = 0;
                          }
LAB_1003b9da:
                          thunk_FUN_100cfd6c((LPVOID)piVar21[2]);
                          FUN_100cfd6c(piVar21);
                          goto LAB_1003b9f0;
                        }
                        *piVar21 = iVar20;
                        piVar21[1] = (int)puStack_a0;
                        piVar21[6] = 0;
                        uVar13 = FUN_100c26c9(piVar21);
                        if ((char)uVar13 == '\0') {
                          CloseHandle((HANDLE)piVar21[8]);
                          piVar21[8] = 0;
                          goto LAB_1003b904;
                        }
                        if (iVar17 == 0) {
                          iVar26 = 0;
                        }
                        *(int **)((int)pvVar25 + 0xf774) = piVar21;
                        piVar21 = (int *)FUN_100cfd55(0x24);
                        if (piVar21 == (int *)0x0) {
LAB_1003bbda:
                          piVar21 = *(int **)((int)pvVar25 + 0xf774);
                          *(undefined4 *)((int)pvVar25 + 0xf778) = 0;
                          if (piVar21 == (int *)0x0) goto LAB_1003b9f0;
                          if (piVar21[3] != 0) {
                            iVar17 = piVar21[5] * 0x20;
                            iVar26 = piVar21[2] + iVar17;
                            if (*(int **)(iVar26 + 0x10) != (int *)0x0) {
                              uVar29 = (**(code **)(**(int **)(iVar26 + 0x10) + 0x20))();
                              uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
                              if ((uVar13 <= *(uint *)(iVar26 + 0x1c)) &&
                                 ((uVar13 < *(uint *)(iVar26 + 0x1c) ||
                                  ((uint)uVar29 < *(uint *)(iVar26 + 0x18))))) {
                                piVar4 = *(int **)(piVar21[2] + 0x10 + iVar17);
                                (**(code **)(*piVar4 + 0x24))
                                          (piVar4,*(undefined4 *)(piVar21[2] + 0x18 + iVar17));
                                WaitForSingleObject((HANDLE)piVar21[8],0xffffffff);
                              }
                            }
                            puStack_c8 = (undefined4 *)0x0;
                            if (piVar21[3] != 0) {
                              do {
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + 4 + piVar21[2]) + 8
                                            ))();
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + piVar21[2]) + 8))()
                                ;
                                puStack_c8 = (undefined4 *)((int)puStack_c8 + 1);
                                pvVar25 = pvStack_a8;
                              } while (puStack_c8 < (uint)piVar21[3]);
                            }
                            goto LAB_1003b9aa;
                          }
                          goto LAB_1003b9da;
                        }
                        *piVar21 = 0;
                        piVar21[1] = 0;
                        piVar21[2] = 0;
                        piVar21[3] = 0;
                        piVar21[4] = 0;
                        piVar21[5] = 0;
                        piVar21[6] = 0;
                        piVar21[7] = 0x400;
                        piVar21[8] = 0;
                        pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                        piVar21[8] = (int)pvVar15;
                        if (pvVar15 == (HANDLE)0x0) {
LAB_1003baec:
                          if (piVar21[3] != 0) {
                            iVar17 = piVar21[5] * 0x20;
                            iVar26 = piVar21[2] + iVar17;
                            if (*(int **)(iVar26 + 0x10) != (int *)0x0) {
                              uVar29 = (**(code **)(**(int **)(iVar26 + 0x10) + 0x20))();
                              uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
                              if ((uVar13 <= *(uint *)(iVar26 + 0x1c)) &&
                                 ((uVar13 < *(uint *)(iVar26 + 0x1c) ||
                                  ((uint)uVar29 < *(uint *)(iVar26 + 0x18))))) {
                                piVar4 = *(int **)(piVar21[2] + 0x10 + iVar17);
                                (**(code **)(*piVar4 + 0x24))
                                          (piVar4,*(undefined4 *)(piVar21[2] + 0x18 + iVar17));
                                WaitForSingleObject((HANDLE)piVar21[8],0xffffffff);
                              }
                            }
                            puStack_c8 = (undefined4 *)0x0;
                            if (piVar21[3] != 0) {
                              do {
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + 4 + piVar21[2]) + 8
                                            ))();
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + piVar21[2]) + 8))()
                                ;
                                puStack_c8 = (undefined4 *)((int)puStack_c8 + 1);
                                pvVar25 = pvStack_a8;
                              } while (puStack_c8 < (uint)piVar21[3]);
                            }
LAB_1003bb94:
                            thunk_FUN_100cfd6c((LPVOID)piVar21[2]);
                            piVar21[2] = 0;
                            piVar21[3] = 0;
                            piVar21[4] = 0;
                            CloseHandle((HANDLE)piVar21[8]);
                            piVar21[8] = 0;
                          }
LAB_1003bbc4:
                          thunk_FUN_100cfd6c((LPVOID)piVar21[2]);
                          FUN_100cfd6c(piVar21);
                          goto LAB_1003bbda;
                        }
                        *piVar21 = iVar26;
                        piVar21[1] = (int)puStack_a0;
                        piVar21[6] = 1;
                        uVar13 = FUN_100c26c9(piVar21);
                        if ((char)uVar13 == '\0') {
                          CloseHandle((HANDLE)piVar21[8]);
                          piVar21[8] = 0;
                          goto LAB_1003baec;
                        }
                        *(int **)((int)pvVar25 + 0xf778) = piVar21;
                        pvVar15 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
                        *(HANDLE *)((int)pvVar25 + 0xf7e4) = pvVar15;
                        lpParameter = (LPVOID)((int)pvVar25 + 0xf768);
                        if (pvVar15 == (HANDLE)0x0) {
LAB_1003c0f7:
                          piVar21 = *(int **)((int)pvVar25 + 0xf778);
                          if (piVar21 == (int *)0x0) goto LAB_1003bbda;
                          if (piVar21[3] != 0) {
                            iVar17 = piVar21[5] * 0x20;
                            iVar26 = piVar21[2] + iVar17;
                            if (*(int **)(iVar26 + 0x10) != (int *)0x0) {
                              uVar29 = (**(code **)(**(int **)(iVar26 + 0x10) + 0x20))();
                              uVar13 = (uint)((ulonglong)uVar29 >> 0x20);
                              if ((uVar13 <= *(uint *)(iVar26 + 0x1c)) &&
                                 ((uVar13 < *(uint *)(iVar26 + 0x1c) ||
                                  ((uint)uVar29 < *(uint *)(iVar26 + 0x18))))) {
                                piVar4 = *(int **)(piVar21[2] + 0x10 + iVar17);
                                (**(code **)(*piVar4 + 0x24))
                                          (piVar4,*(undefined4 *)(piVar21[2] + 0x18 + iVar17));
                                WaitForSingleObject((HANDLE)piVar21[8],0xffffffff);
                              }
                            }
                            puStack_c8 = (undefined4 *)0x0;
                            if (piVar21[3] != 0) {
                              do {
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + 4 + piVar21[2]) + 8
                                            ))();
                                (**(code **)(**(int **)((int)puStack_c8 * 0x20 + piVar21[2]) + 8))()
                                ;
                                puStack_c8 = (undefined4 *)((int)puStack_c8 + 1);
                                pvVar25 = pvStack_a8;
                              } while (puStack_c8 < (uint)piVar21[3]);
                            }
                            goto LAB_1003bb94;
                          }
                          goto LAB_1003bbc4;
                        }
                        pvVar15 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1004c95f,lpParameter
                                               ,0,(LPDWORD)0x0);
                        *(HANDLE *)((int)pvVar25 + 0xf7e0) = pvVar15;
                        if (pvVar15 == (HANDLE)0x0) {
                          CloseHandle(*(HANDLE *)((int)pvVar25 + 0xf7e4));
                          goto LAB_1003c0f7;
                        }
                        InitializeCriticalSection((LPCRITICAL_SECTION)((int)pvVar25 + 0xf7c8));
                        iVar26 = *(int *)(*(int *)((int)pvVar25 + 0xf76c) + 0x1304);
                        iVar20 = *(int *)(iVar26 + 0x95c);
                        piVar21 = (int *)(iVar26 + 0x954);
                        if (*(int *)(iVar26 + 0x958) == iVar20) {
                          if (iVar20 == 0) {
                            uVar13 = 0x10;
                          }
                          else {
                            uVar13 = iVar20 * 2;
                          }
                          SVar19 = (SIZE_T)((ulonglong)uVar13 * 4);
                          if ((int)((ulonglong)uVar13 * 4 >> 0x20) != 0) {
                            SVar19 = 0xffffffff;
                          }
                          puVar14 = (undefined4 *)FUN_100cfd89(SVar19);
                          if (puVar14 != (undefined4 *)0x0) {
                            FUN_100cff00(puVar14,(undefined4 *)*piVar21,
                                         *(int *)(iVar26 + 0x95c) << 2);
                            thunk_FUN_100cfd6c((LPVOID)*piVar21);
                            *piVar21 = (int)puVar14;
                            *(uint *)(iVar26 + 0x95c) = uVar13;
                            goto LAB_1003bd7c;
                          }
                        }
                        else {
LAB_1003bd7c:
                          *(LPVOID *)(*piVar21 + *(int *)(iVar26 + 0x958) * 4) = lpParameter;
                          *(int *)(iVar26 + 0x958) = *(int *)(iVar26 + 0x958) + 1;
                        }
                        if ((*(byte *)(iVar17 + 0x52c + (int)puStack_a0 * 0x18) & 1) == 0) {
                          *(int *)((int)pvVar25 + 0xf770) = 0;
                        }
                        else {
                          FUN_100bb2c6(*(int *)(*(int *)((int)pvVar25 + 0xf76c) + 0x1304),
                                       (byte *)&DAT_100d14f0,(int *)((int)pvVar25 + 0xf770));
                        }
                        uVar13 = FUN_100b9ed6(*(void **)(*(int *)((int)pvVar25 + 0xf6b8) + 0x15dc),1
                                             );
                        *(uint *)((int)pvVar25 + 0xf7f0) = uVar13;
                        if (uVar13 != 0xffffffff) {
                          iStack_5c = 0x1c;
                          uStack_58 = 5;
                          uStack_54 = 0;
                          local_50.cbSize = 0;
                          local_50.style = 1;
                          local_50.lpfnWndProc = (WNDPROC)0x0;
                          iVar26 = *(int *)(*(int *)((int)pvVar25 + 0xf6b8) + 0x15dc);
                          piVar21 = *(int **)(*(int *)(iVar26 + 0x34) + (uVar13 >> 0x10) * 8);
                          (**(code **)(*piVar21 + 0x24))();
                          piVar4 = *(int **)(*uStack_c0 + 0x520 +
                                            *(int *)((int)pvVar25 + 0x10) * 0x18);
                          (**(code **)(*piVar4 + 0x50))
                                    (piVar4,0,auStack_64,
                                     unaff_EDI + (unaff_ESI & 0xffff) * *(int *)(iVar26 + 0x18));
                          FUN_100bad40((void *)(*(int *)(*(int *)((int)pvVar25 + 0xf6b8) + 0x130c) +
                                               4),'\0');
                          FUN_1004e850((int)pvVar25);
                          FUN_100cfed0((int *)((int)pvVar25 + 0xf808),0,0x5a8);
                          *(int *)((int)pvVar25 + 0xf808) = *(int *)((int)pvVar25 + 0xf6c0);
                          *(undefined4 *)((int)pvVar25 + 0xf838) = 2;
                          uVar29 = (**(code **)(**(int **)((int)pvVar25 + 0xf6e0) + 0x2c))
                                             (*(int **)((int)pvVar25 + 0xf6e0));
                          *(undefined8 *)((int)pvVar25 + 0xf880) = uVar29;
                          uVar22 = 0;
                          uVar13 = *(uint *)(*(int *)((int)pvVar25 + 0xf6c4) + 0xc0);
                          uVar23 = uVar13 >> 0x10;
                          uVar24 = uVar13 & 0xffff;
                          do {
                            *(uint *)((int)pvVar25 + uVar22 * 4 + 0xf900) = uVar13;
                            iVar26 = *(int *)(*(int *)((int)pvVar25 + 0xf6b8) + 0x15d8);
                            piVar4 = *(int **)(*(int *)(iVar26 + 0x34) + uVar23 * 8);
                            (**(code **)(*piVar4 + 0x24))(piVar4,&stack0xffffff1c);
                            piVar21 = (int *)((int)piVar21 + *(int *)(iVar26 + 0x18) * uVar24);
                            *(int **)((int)pvVar25 + uVar22 * 4 + 0xf960) = piVar21;
                            uVar22 = uVar22 + 1;
                          } while (uVar22 < 0x10);
                          uVar22 = 0;
                          do {
                            *(uint *)((int)pvVar25 + uVar22 * 4 + 0xf9f4) = uVar13;
                            iVar26 = *(int *)(*(int *)((int)pvVar25 + 0xf6b8) + 0x15d8);
                            piVar4 = *(int **)(*(int *)(iVar26 + 0x34) + uVar23 * 8);
                            (**(code **)(*piVar4 + 0x24))(piVar4,&stack0xffffff1c);
                            piVar21 = (int *)((int)piVar21 + *(int *)(iVar26 + 0x18) * uVar24);
                            *(int **)((int)pvVar25 + uVar22 * 4 + 0xfa08) = piVar21;
                            uVar22 = uVar22 + 1;
                          } while (uVar22 < 5);
                          *(undefined4 *)((int)pvVar25 + 0xf840) = 1;
                          *(undefined4 *)((int)pvVar25 + 0xf848) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf84c) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf850) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf854) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf858) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf85c) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xf860) = 0;
                          *(void **)((int)pvVar25 + 0xfbd0) = *(void **)((int)pvVar25 + 0xf6d4);
                          *(undefined4 *)((int)pvVar25 + 0xfc10) =
                               *(undefined4 *)((int)pvVar25 + 0xf6d0);
                          *(undefined4 *)((int)pvVar25 + 0xf714) =
                               *(undefined4 *)((int)pvVar25 + 0xf6b8);
                          *(undefined4 *)((int)pvVar25 + 0xf864) = 0;
                          *(undefined4 *)((int)pvVar25 + 0xfc18) = 0;
                          piVar21 = FUN_100bf752(*(void **)((int)pvVar25 + 0xf6d4),
                                                 (int *)&pvStack_a8,2,0,0,0);
                          puVar14 = puStack_a0;
                          if (puStack_a0 != (undefined4 *)0x0) {
                            FUN_100bf752(*(void **)((int)pvVar25 + 0xf6d0),(int *)&pvStack_a8,2,0,0,
                                         0);
                            if (puStack_a0 != (undefined4 *)0x0) {
                              *(undefined4 **)((int)pvVar25 + 100) = puStack_a0;
                              *(undefined4 **)((int)pvVar25 + 0x4c) = puVar14;
                              *(undefined4 **)((int)pvVar25 + 0x44) = puVar14;
                              *(undefined4 *)((int)pvVar25 + 0x50) = 0;
                              *(undefined4 *)((int)pvVar25 + 0x5c) = 0;
                              *(undefined4 *)((int)pvVar25 + 0x58) = 0;
                              *(undefined4 **)((int)pvVar25 + 0x48) = puVar14;
                              *(undefined4 *)((int)pvVar25 + 0x54) = 0;
                              *(undefined4 *)((int)pvVar25 + 0x68) = 0;
                              *(undefined4 *)((int)pvVar25 + 0x6c) = 0;
                              return CONCAT31((int3)((uint)puStack_a0 >> 8),1);
                            }
                            piVar21 = *(int **)((int)pvVar25 + 0xf6d4);
                            if (piVar21[0xb] != 0) {
                              piVar21[0xb] = 0;
                            }
                          }
                          return CONCAT31((int3)((uint)piVar21 >> 8),1);
                        }
                        FUN_1004c885((int)lpParameter);
                      }
                      FUN_10044e17((int)pvVar25);
                    }
                  }
LAB_1003ba01:
                  (**(code **)(**(int **)((int)pvVar25 + 0xf6e0) + 8))();
                  *(undefined4 *)((int)pvVar25 + 0xf6e0) = 0;
                }
                if (*(void **)((int)pvVar25 + 0xf6e4) != (void *)0x0) {
                  FUN_1003c2e0(*(void **)((int)pvVar25 + 0xf6e4),1);
                }
              }
              puStack_a0 = (undefined4 *)((int)pvVar25 + 0xf6c8);
              *(undefined4 *)((int)pvVar25 + 0xf6e4) = 0;
              piVar21 = piStack_a4;
              if (*(void **)((int)pvVar25 + 0xf6dc) != (void *)0x0) {
                FUN_1003c2e0(*(void **)((int)pvVar25 + 0xf6dc),1);
                piVar21 = piStack_a4;
              }
            }
            *(undefined4 *)((int)pvVar25 + 0xf6dc) = 0;
            puVar14 = puStack_84;
            if ((void *)*puStack_84 != (void *)0x0) {
              FUN_1003c2e0((void *)*puStack_84,1);
              puVar14 = puStack_84;
            }
          }
          *puVar14 = 0;
          if ((void *)*piVar21 != (void *)0x0) {
            FUN_1003c2e0((void *)*piVar21,1);
          }
        }
        puVar14 = puStack_90;
        *piVar21 = 0;
        if ((undefined4 *)*puStack_90 != (undefined4 *)0x0) {
          FUN_1003c3c0((undefined4 *)*puStack_90);
        }
        *puVar14 = 0;
        puVar14 = puStack_a0;
      }
      if ((undefined4 *)*puVar14 != (undefined4 *)0x0) {
        FUN_1003c3c0((undefined4 *)*puVar14);
      }
      *puVar14 = 0;
    }
    thunk_FUN_100cfd6c(*(LPVOID *)((int)pvVar25 + 0x1c));
    *(undefined4 *)((int)pvVar25 + 0x1c) = 0;
    uVar13 = thunk_FUN_100cfd6c(*(LPVOID *)((int)pvVar25 + 0x18));
    *(undefined4 *)((int)pvVar25 + 0x18) = 0;
  }
  local_ac = (int *)((int)this + 0xf6b4);
LAB_1003acef:
  piVar21 = (int *)*local_ac;
  if (piVar21 != (int *)0x0) {
    piVar4 = piVar21 + 2;
    LOCK();
    iVar26 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar26 == 1) {
      piStack_a4 = piVar21;
      if ((short)piVar21[3] != 0) {
        uVar3 = *(ushort *)(piVar21 + 3);
        pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar3,pHVar10);
        if ((HMODULE)piVar21[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piVar21[4]);
          piVar21[4] = 0;
        }
      }
      uVar13 = (**(code **)(*piStack_a4 + 0x44))();
    }
  }
  *local_ac = 0;
  return uVar13 & 0xffffff00;
}

