/*
 * FUN_100307e0 at 100307e0
 * undefined4 __thiscall FUN_100307e0(void * this, int * param_1)
 * Address ranges: 100307e0-1003198b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_100307e0(void *this,int *param_1)

{
  char cVar1;
  ushort uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  HMODULE pHVar8;
  BOOL BVar9;
  WNDPROC pWVar10;
  int *piVar11;
  undefined4 *puVar12;
  HANDLE pvVar13;
  undefined4 uVar14;
  SIZE_T SVar15;
  uint uVar16;
  int *piVar17;
  int unaff_ESI;
  uint uVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  LPCSTR lpszClass;
  tagWNDCLASSEXA *lpwcx;
  undefined4 *puStack_c8;
  uint uStack_c4;
  char cStack_bd;
  int *piStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *local_ac;
  int *piStack_a8;
  uint uStack_a4;
  int *piStack_a0;
  int *local_9c;
  undefined4 *puStack_98;
  int iStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  tagWNDCLASSEXA local_80;
  int aiStack_50 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_14 [16];
  
  uVar14 = DAT_100ba2dc;
  lpwcx = &local_80;
  lpszClass = PTR_s_DGD3D12ROOT_100b8fc8;
  local_9c = this;
  pHVar8 = GetModuleHandleW((LPCWSTR)0x0);
  BVar9 = GetClassInfoExA(pHVar8,lpszClass,lpwcx);
  pWVar10 = (WNDPROC)0x0;
  if (BVar9 != 0) {
    pWVar10 = local_80.lpfnWndProc;
  }
  if ((pWVar10 == (WNDPROC)0x0) &&
     (pWVar10 = (WNDPROC)(*(code *)PTR_FUN_100b8fcc)(uVar14,0), pWVar10 == (WNDPROC)0x0)) {
    *(undefined4 *)((int)this + 0xd9b4) = 0;
    return 0;
  }
  LOCK();
  *(int *)(pWVar10 + 8) = *(int *)(pWVar10 + 8) + 1;
  UNLOCK();
  *(WNDPROC *)((int)this + 0xd9b4) = pWVar10;
  local_ac = (int *)((int)this + 0xd9b4);
  piVar11 = (int *)FUN_100408b0(this,param_1);
  piVar17 = local_ac;
  if ((char)piVar11 == '\0') goto LAB_10030aeb;
  *(int *)((int)this + 0xd9bc) =
       *(int *)((int)this + 0xd9b4) + *(int *)((int)this + 0x10) * 0x18 + 0x520;
  iVar20 = *(int *)((int)this + 0x10) * 0x16c0 + 0x6c0 + *(int *)((int)this + 0xd9b4);
  *(int *)((int)this + 0xd9b8) = iVar20;
  FUN_100ac680(iVar20 + 0x11c0);
  piVar17 = (int *)((int)this + 0xd9b4);
  *(undefined4 *)((int)this + 0xd9ec) = *(undefined4 *)((int)this + 0xd9b4);
  *(undefined4 *)((int)this + 0xd9f0) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xda18) = *(undefined4 *)((int)this + 0xd9b4);
  *(undefined4 *)((int)this + 0xda1c) = *(undefined4 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0xda20) = *(undefined1 *)((int)this + 0xc);
  iVar20 = *(int *)(*(int *)((int)this + 0xd9c4) + 0xd0);
  *(int *)((int)this + 0xd9c0) = iVar20;
  piVar11 = (int *)0x0;
  if (iVar20 == 0) goto LAB_10030aeb;
  piStack_bc = (int *)(*(int *)((int)this + 0xd9b4) + 0x520);
  iStack_b8 = *(int *)((int)this + 0x10);
  if (*(int *)((int)this + 0xd9b4) == 0) {
    piStack_bc = (void *)0x0;
  }
  puVar12 = (undefined4 *)FUN_100ad475(0x30);
  if (puVar12 == (undefined4 *)0x0) {
LAB_10030ab2:
    *(int *)((int)this + 0xd9c8) = 0;
    piVar17 = (int *)((int)this + 0xd9b4);
  }
  else {
    *puVar12 = &PTR_FUN_100b5310;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 4;
    puVar12[8] = 0;
    puVar12[9] = 0x200;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    puVar12[0xb] = pvVar13;
    if (pvVar13 == (HANDLE)0x0) {
LAB_100309dd:
      *puVar12 = &PTR_FUN_100b5310;
      if (puVar12[4] != 0) {
        iStack_b8 = puVar12[6] * 0x20;
        piStack_bc = (int *)(puVar12[3] + iStack_b8);
        piVar11 = *(int **)((int)piStack_bc + 0x14);
        if (piVar11 != (int *)0x0) {
          uVar22 = (**(code **)(*piVar11 + 0x20))(piVar11);
          uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
          if ((uVar18 <= *(uint *)((int)piStack_bc + 0x1c)) &&
             ((uVar18 < *(uint *)((int)piStack_bc + 0x1c) ||
              ((uint)uVar22 < *(uint *)((int)piStack_bc + 0x18))))) {
            iVar20 = puVar12[3];
            piVar11 = *(int **)(iVar20 + 0x14 + iStack_b8);
            (**(code **)(*piVar11 + 0x24))
                      (piVar11,*(undefined4 *)(iVar20 + 0x18 + iStack_b8),
                       *(undefined4 *)(iVar20 + 0x1c + iStack_b8),puVar12[0xb]);
            WaitForSingleObject((HANDLE)puVar12[0xb],0xffffffff);
          }
        }
        if (puVar12[4] != 0) {
          uVar18 = 0;
          do {
            piVar11 = *(int **)(uVar18 * 0x20 + 0xc + puVar12[3]);
            (**(code **)(*piVar11 + 8))(piVar11);
            uVar18 = uVar18 + 1;
            this = local_9c;
          } while (uVar18 < (uint)puVar12[4]);
        }
        thunk_FUN_100ad48c((LPVOID)puVar12[3]);
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        CloseHandle((HANDLE)puVar12[0xb]);
        puVar12[0xb] = 0;
      }
      thunk_FUN_100ad48c((LPVOID)puVar12[3]);
      FUN_100ad48c(puVar12);
      goto LAB_10030ab2;
    }
    puVar12[2] = iStack_b8;
    puVar12[1] = piStack_bc;
    puVar12[7] = 0;
    puVar12[8] = 1;
    piVar11 = *(int **)((int)piStack_bc + iStack_b8 * 0x18);
    uVar14 = (**(code **)(*piVar11 + 0x3c))(piVar11,0);
    puVar12[10] = uVar14;
    uVar14 = FUN_1009fa59((int)puVar12);
    if ((char)uVar14 == '\0') {
      CloseHandle((HANDLE)puVar12[0xb]);
      puVar12[0xb] = 0;
      goto LAB_100309dd;
    }
    piStack_b0 = (int *)((int)this + 0xd9c8);
    *piStack_b0 = (int)puVar12;
    piStack_bc = (int *)(*(int *)((int)this + 0xd9b4) + 0x520);
    iStack_b8 = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0xd9b4) == 0) {
      piStack_bc = (void *)0x0;
    }
    puVar12 = (undefined4 *)FUN_100ad475(0x30);
    if (puVar12 == (undefined4 *)0x0) {
LAB_10030d12:
      local_ac = (int *)((int)this + 0xd9b4);
      *(int *)((int)this + 0xd9cc) = 0;
      piVar11 = (int *)((int)this + 0xd9c8);
    }
    else {
      *puVar12 = &PTR_FUN_100b5310;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 4;
      puVar12[8] = 0;
      puVar12[9] = 0x200;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar12[0xb] = pvVar13;
      if (pvVar13 == (HANDLE)0x0) {
LAB_10030c3a:
        *puVar12 = &PTR_FUN_100b5310;
        if (puVar12[4] != 0) {
          iStack_b8 = puVar12[6] * 0x20;
          piStack_bc = (int *)(puVar12[3] + iStack_b8);
          piVar11 = *(int **)((int)piStack_bc + 0x14);
          if (piVar11 != (int *)0x0) {
            uVar22 = (**(code **)(*piVar11 + 0x20))(piVar11);
            uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
            if ((uVar18 <= *(uint *)((int)piStack_bc + 0x1c)) &&
               ((uVar18 < *(uint *)((int)piStack_bc + 0x1c) ||
                ((uint)uVar22 < *(uint *)((int)piStack_bc + 0x18))))) {
              iVar20 = puVar12[3];
              piVar11 = *(int **)(iVar20 + 0x14 + iStack_b8);
              (**(code **)(*piVar11 + 0x24))
                        (piVar11,*(undefined4 *)(iVar20 + 0x18 + iStack_b8),
                         *(undefined4 *)(iVar20 + 0x1c + iStack_b8),puVar12[0xb]);
              WaitForSingleObject((HANDLE)puVar12[0xb],0xffffffff);
            }
          }
          if (puVar12[4] != 0) {
            uVar18 = 0;
            do {
              piVar11 = *(int **)(uVar18 * 0x20 + 0xc + puVar12[3]);
              (**(code **)(*piVar11 + 8))(piVar11);
              uVar18 = uVar18 + 1;
              this = local_9c;
            } while (uVar18 < (uint)puVar12[4]);
          }
          thunk_FUN_100ad48c((LPVOID)puVar12[3]);
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[5] = 0;
          CloseHandle((HANDLE)puVar12[0xb]);
          puVar12[0xb] = 0;
        }
        thunk_FUN_100ad48c((LPVOID)puVar12[3]);
        FUN_100ad48c(puVar12);
        goto LAB_10030d12;
      }
      puVar12[2] = iStack_b8;
      puVar12[1] = piStack_bc;
      puVar12[7] = 1;
      puVar12[8] = 1;
      piVar11 = *(int **)((int)piStack_bc + iStack_b8 * 0x18);
      uVar14 = (**(code **)(*piVar11 + 0x3c))(piVar11,1);
      puVar12[10] = uVar14;
      uVar14 = FUN_1009fa59((int)puVar12);
      if ((char)uVar14 == '\0') {
        CloseHandle((HANDLE)puVar12[0xb]);
        puVar12[0xb] = 0;
        goto LAB_10030c3a;
      }
      *(undefined4 **)((int)this + 0xd9cc) = puVar12;
      puStack_98 = (undefined4 *)((int)this + 0xd9cc);
      piVar11 = (int *)((int)this + 0xd9b4);
      uStack_a4 = *(int *)((int)this + 0x74) << 0xc;
      *(uint *)((int)this + 0xd9d8) = uStack_a4;
      piStack_a0 = (int *)*piVar11;
      iStack_94 = *(int *)((int)this + 0xd9b8) + 0x1370;
      iStack_b8 = *(int *)((int)this + 0x10);
      piStack_bc = (int *)FUN_100ad475(0x78);
      local_ac = piVar11;
      if (piStack_bc == (undefined4 *)0x0) {
        puStack_98 = (undefined4 *)((int)this + 0xd9cc);
        piStack_bc = (void *)0x0;
        puVar12 = (undefined4 *)((int)this + 0xd9d4);
      }
      else {
        piStack_bc[2] = -(uint)(piStack_a0 != (int *)0x0) & (uint)(piStack_a0 + 0x148);
        piStack_bc[3] = iStack_b8;
        piStack_bc[10] = uStack_a4;
        piStack_bc[0x10] = iStack_94;
        piStack_bc[0x12] = 0;
        piStack_bc[0x13] = 0;
        piStack_bc[0x14] = 0;
        piStack_bc[4] = 0;
        piStack_bc[6] = 0;
        puStack_90 = (undefined4 *)((int)this + 0xd9d4);
        piStack_bc[7] = 0;
        piStack_bc[8] = 0;
        piStack_bc[9] = 0;
        piStack_bc[0xb] = 0;
        piStack_bc[0xc] = 0;
        *(undefined1 *)(piStack_bc + 0xd) = 0;
        piStack_bc[0x11] = -(uint)(piStack_a0 != (int *)0x0) & (uint)(piStack_a0 + 0x142);
        piStack_bc[0x15] = 0;
        piStack_bc[0x16] = 0xffffffff;
        piStack_bc[0x18] = 0;
        piStack_bc[0x19] = 0;
        piStack_bc[0x1a] = 0;
        piStack_bc[0x1b] = 0;
        *(undefined8 *)(piStack_bc + 0x1c) = 0;
        *piStack_bc = (int)&PTR_FUN_100b5264;
        piStack_bc[0xe] = (int)&PTR_LAB_100b52a0;
        *puStack_90 = piStack_bc;
        piStack_a0 = (int *)*piVar11;
        uStack_a4 = *(int *)((int)this + 0xd9b8) + 0x13d0;
        iStack_b8 = *(int *)((int)this + 0x10);
        puVar12 = (undefined4 *)FUN_100ad475(0x78);
        if (puVar12 == (undefined4 *)0x0) {
          puStack_98 = (undefined4 *)((int)this + 0xd9cc);
          puStack_90 = (undefined4 *)((int)this + 0xd9d4);
          piStack_b0 = (int *)((int)this + 0xd9c8);
          piStack_bc = (void *)0x0;
          puVar12 = (undefined4 *)((int)this + 0xd9d0);
          local_ac = piVar11;
        }
        else {
          puVar12[2] = -(uint)(piStack_a0 != (int *)0x0) & (uint)(piStack_a0 + 0x148);
          puVar12[3] = iStack_b8;
          puVar12[0x10] = uStack_a4;
          puVar12[0x12] = 0;
          puVar12[0x13] = 0;
          puVar12[0x14] = 0;
          puVar12[4] = 0;
          puVar12[6] = 0;
          puVar12[7] = 0;
          puStack_8c = (undefined4 *)((int)this + 0xd9d0);
          puVar12[8] = 0;
          puVar12[9] = 0;
          puVar12[10] = 0x4000;
          puVar12[0xb] = 0;
          puVar12[0xc] = 0;
          *(undefined1 *)(puVar12 + 0xd) = 0;
          puVar12[0x11] = -(uint)(piStack_a0 != (int *)0x0) & (uint)(piStack_a0 + 0x142);
          puVar12[0x15] = 0;
          puVar12[0x16] = 0xffffffff;
          puVar12[0x18] = 0;
          puVar12[0x19] = 0;
          puVar12[0x1a] = 0;
          puVar12[0x1b] = 0;
          *(undefined8 *)(puVar12 + 0x1c) = 0;
          *puVar12 = &PTR_FUN_100b5264;
          puVar12[0xe] = &PTR_LAB_100b52a0;
          *puStack_8c = puVar12;
          piStack_bc = (int *)*piVar11;
          iStack_b8 = *(int *)((int)this + 0x10);
          puVar12 = (undefined4 *)FUN_100ad475(0x78);
          if (puVar12 == (undefined4 *)0x0) {
            puStack_98 = (undefined4 *)((int)this + 0xd9cc);
            puStack_8c = (undefined4 *)((int)this + 0xd9d0);
            piStack_b0 = (int *)((int)this + 0xd9c8);
            puStack_90 = (undefined4 *)((int)this + 0xd9d4);
          }
          else {
            puVar12[0x12] = 0;
            puVar12[0x13] = 0;
            puVar12[0x14] = 0;
            puVar12[4] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[2] = -(uint)(piStack_bc != (void *)0x0) & (int)piStack_bc + 0x520U;
            puVar12[3] = iStack_b8;
            puVar12[10] = 0xbc0;
            puVar12[0xb] = 0;
            puVar12[0xc] = 0;
            *(undefined1 *)(puVar12 + 0xd) = 0;
            puVar12[0x10] = 0;
            puVar12[0x11] = 0;
            puVar12[0x15] = 0;
            puVar12[0x16] = 0xffffffff;
            puVar12[0x18] = 0;
            puVar12[0x19] = 0;
            puVar12[0x1a] = 0;
            puVar12[0x1b] = 0;
            *(undefined8 *)(puVar12 + 0x1c) = 0;
            *puVar12 = &PTR_FUN_100b5264;
            puVar12[0xe] = &PTR_LAB_100b52a0;
            *(undefined4 **)((int)this + 0xd9dc) = puVar12;
            piStack_bc = (int *)*piVar11;
            uStack_a4 = *(int *)((int)this + 0xd9b8) + 0x1310;
            iStack_b8 = *(int *)((int)this + 0x10);
            puVar12 = (undefined4 *)FUN_100ad475(0x78);
            if (puVar12 == (undefined4 *)0x0) {
              puStack_8c = (undefined4 *)((int)this + 0xd9d0);
              puStack_90 = (undefined4 *)((int)this + 0xd9d4);
              puStack_98 = (undefined4 *)((int)this + 0xd9cc);
            }
            else {
              puVar12[0x12] = 0;
              puVar12[0x13] = 0;
              puVar12[0x14] = 0;
              puVar12[4] = 0;
              puVar12[6] = 0;
              puVar12[7] = 0;
              puVar12[8] = 0;
              puVar12[9] = 0;
              puVar12[3] = iStack_b8;
              puVar12[0x10] = uStack_a4;
              puVar12[2] = -(uint)(piStack_bc != (void *)0x0) & (int)piStack_bc + 0x520U;
              puVar12[10] = 0x8000;
              puVar12[0xb] = 0;
              puVar12[0xc] = 0;
              *(undefined1 *)(puVar12 + 0xd) = 0;
              puVar12[0x11] = 0;
              puVar12[0x15] = 0;
              puVar12[0x16] = 0xffffffff;
              puVar12[0x18] = 0;
              puVar12[0x19] = 0;
              puVar12[0x1a] = 0;
              puVar12[0x1b] = 0;
              uStack_24 = 0;
              *(undefined8 *)(puVar12 + 0x1c) = 0;
              *puVar12 = &PTR_FUN_100b5264;
              puVar12[0xe] = &PTR_LAB_100b52a0;
              *(undefined4 **)((int)this + 0xd9e4) = puVar12;
              uStack_20 = 0;
              local_80.cbSize = 1;
              local_80.lpfnWndProc = (WNDPROC)0x10000;
              local_80.cbClsExtra = 0;
              local_80.cbWndExtra = 0x960;
              local_80.hInstance = (HINSTANCE)0x0;
              local_80.hIcon = (HICON)0x1;
              iVar20 = *piVar11 + *(int *)((int)this + 0x10) * 0x18;
              local_80.hCursor = (HCURSOR)0x10001;
              cVar1 = *(char *)(iVar20 + 0x530);
              uStack_30 = 1;
              local_80.hbrBackground = (HBRUSH)0x0;
              local_80.lpszMenuName = (LPCSTR)0x1;
              if (cVar1 != '\0') {
                uStack_30 = 4;
              }
              local_80.lpszClassName = (LPCSTR)0x0;
              uStack_2c = 0;
              local_80.hIconSm = (HICON)0x1;
              aiStack_50[0] = 0;
              piStack_a8 = (int *)0x0;
              if (cVar1 != '\0') {
                uStack_2c = 2;
              }
              uStack_28 = (uint)(cVar1 != '\0');
              piVar11 = *(int **)(iVar20 + 0x520);
              (**(code **)(*piVar11 + 0x6c))
                        (piVar11,&uStack_30,0,&local_80,0,0,&DAT_100b2d10,&piStack_a8);
              *(int **)((int)this + 0xd9e0) = piStack_a8;
              if (piStack_a8 != (int *)0x0) {
                piVar11 = *(int **)(*(int *)((int)this + 0xd9b8) + 0x130c);
                piStack_b0 = (int *)(*(int *)((int)this + 0xd9b8) + 0x1430);
                piStack_a0 = piVar11;
                iVar20 = (**(code **)(*piStack_a8 + 0x38))(piStack_a8,&uStack_30,auStack_14);
                if (-1 < iVar20) {
                  if (iStack_3c == 4) {
                    cStack_bd = '\0';
                    aiStack_50[1] = 0;
                    aiStack_50[2] = 0;
                    puStack_c8 = (undefined4 *)0x0;
                    iVar20 = (**(code **)(*piStack_b4 + 0x20))
                                       (piStack_b4,0,aiStack_50 + 1,&puStack_c8);
                    if (-1 < iVar20) {
                      piVar11 = (int *)piVar11[0x239];
                      cStack_bd = '\x01';
                      EnterCriticalSection((LPCRITICAL_SECTION)(piVar11 + 7));
                      uStack_c4 = (int)piStack_b4 >> 0x1f;
                      piStack_b0 = piStack_b4;
                      piStack_a0 = (int *)FUN_1009f7c3(piVar11,(uint)piStack_b4,uStack_c4);
                      puStack_90 = (undefined4 *)((int)piStack_a0 * 0x10);
                      if (((piStack_a0 == (int *)piVar11[2]) ||
                          (*(int **)((int)puStack_90 + *piVar11) != piStack_b0)) ||
                         (*(uint *)((int)puStack_90 + *piVar11 + 4) != uStack_c4)) {
                        if (piVar11[2] == piVar11[1]) {
                          lVar4 = (ulonglong)(uint)(piVar11[1] * 2) * 0x10;
                          SVar15 = (SIZE_T)lVar4;
                          if ((int)((ulonglong)lVar4 >> 0x20) != 0) {
                            SVar15 = 0xffffffff;
                          }
                          iStack_94 = FUN_100ad4a9(SVar15);
                          if (iStack_94 != 0) {
                            uVar18 = 0;
                            if (piVar11[1] != 0) {
                              do {
                                uVar16 = uVar18 + 1;
                                puVar12 = (undefined4 *)(*piVar11 + uVar18 * 0x10);
                                uVar14 = puVar12[1];
                                uVar5 = puVar12[2];
                                uVar6 = puVar12[3];
                                puVar21 = (undefined4 *)(iStack_94 + uVar18 * 0x10);
                                *puVar21 = *puVar12;
                                puVar21[1] = uVar14;
                                puVar21[2] = uVar5;
                                puVar21[3] = uVar6;
                                uVar18 = uVar16;
                                this = piStack_a8;
                              } while (uVar16 < (uint)piVar11[1]);
                            }
                            thunk_FUN_100ad48c((LPVOID)*piVar11);
                            piVar11[1] = piVar11[1] << 1;
                            *piVar11 = iStack_94;
                          }
                        }
                        for (piVar17 = (int *)piVar11[2]; piStack_a0 < piVar17;
                            piVar17 = (int *)((int)piVar17 + -1)) {
                          puVar21 = (undefined4 *)(*piVar11 + -0x10 + (int)piVar17 * 0x10);
                          uVar14 = puVar21[1];
                          uVar5 = puVar21[2];
                          uVar6 = puVar21[3];
                          puVar12 = (undefined4 *)(*piVar11 + (int)piVar17 * 0x10);
                          *puVar12 = *puVar21;
                          puVar12[1] = uVar14;
                          puVar12[2] = uVar5;
                          puVar12[3] = uVar6;
                          this = piStack_a8;
                        }
                        iVar20 = *piVar11;
                        *(int **)((int)puStack_90 + iVar20) = piStack_b0;
                        *(uint *)((int)puStack_90 + iVar20 + 4) = uStack_c4;
                        *(int **)((int)puStack_90 + *piVar11 + 8) = piStack_b4;
                        puVar12 = (undefined4 *)FUN_100ad475(0x14);
                        if (puVar12 == (undefined4 *)0x0) {
                          *(undefined4 *)((int)puStack_90 + *piVar11 + 0xc) = 0;
                          piVar11[2] = piVar11[2] + 1;
                        }
                        else {
                          *puVar12 = 0;
                          puVar12[1] = 0;
                          puVar12[2] = 0;
                          puVar12[3] = 0;
                          puVar12[4] = 0;
                          *(undefined4 **)((int)puStack_90 + *piVar11 + 0xc) = puVar12;
                          piVar11[2] = piVar11[2] + 1;
                        }
                      }
                      iVar20 = *(int *)((int)puStack_90 + *piVar11 + 0xc);
                      if (iVar20 != 0) {
                        cStack_bd = FUN_1009e8b4(iVar20,0);
                      }
                      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar11 + 7));
                      if (cStack_bd != '\0') {
                        puVar12 = &DAT_100b7f98;
                        puVar21 = puStack_c8;
                        for (iVar20 = 600; this = piStack_a8, iVar20 != 0; iVar20 = iVar20 + -1) {
                          *puVar21 = *puVar12;
                          puVar12 = puVar12 + 1;
                          puVar21 = puVar21 + 1;
                        }
                      }
                      aiStack_50[1] = 0;
                      aiStack_50[2] = 0x960;
                      (**(code **)(*piStack_b4 + 0x24))(piStack_b4,0,aiStack_50 + 1);
                      piVar11 = local_ac;
                      if (((local_ac[0x238] != 0) &&
                          (iVar20 = FUN_1009ed73((void *)local_ac[0x239],(uint)piStack_b4,0,1,
                                                 local_ac[0x238],(int)local_ac,0,local_ac[0x24e],
                                                 local_ac[0x24f]),
                          *(int *)(piVar11[0x238] + 0x20) != 3)) && (iVar20 != 0)) {
                        FUN_100981d0(piVar11,piStack_b4,0,iVar20,0);
                      }
                    }
                    if (cStack_bd == '\0') {
                      puStack_8c = (undefined4 *)0x0;
                      iStack_88 = 0;
                      uStack_84 = 0;
                      local_80.cbSize = 0;
                      local_80.style = 0;
                      local_80.lpfnWndProc = (WNDPROC)0x0;
                      local_80.cbClsExtra = 0;
                      local_80.cbWndExtra = 0;
                      local_80.hInstance = (HINSTANCE)0x0;
                      local_80.hIcon = (HICON)0x0;
                      piVar17 = piStack_bc;
                      if (piVar11[0x238] != 0) goto LAB_100314d1;
                      goto LAB_10031516;
                    }
                  }
                  else {
                    puStack_8c = (undefined4 *)0x0;
                    iStack_88 = 0;
                    uStack_84 = 0;
                    local_80.cbSize = 0;
                    local_80.style = 0;
                    local_80.lpfnWndProc = (WNDPROC)0x0;
                    local_80.cbClsExtra = 0;
                    local_80.hInstance = (HINSTANCE)0x0;
                    local_80.hIcon = (HICON)0x0;
                    if (piVar11[0x238] != 0) {
LAB_100314d1:
                      piVar17 = piStack_bc;
                      local_80.hInstance = (HINSTANCE)0x0;
                      local_80.hIcon = (HICON)0x0;
                      local_80.cbWndExtra = 0;
                      local_80.cbClsExtra = 0;
                      local_80.lpfnWndProc = (WNDPROC)0x0;
                      local_80.style = 0;
                      local_80.cbSize = 0;
                      uStack_84 = 0;
                      iStack_88 = 0;
                      puStack_8c = (undefined4 *)0x0;
                      bVar7 = FUN_1009e259(piStack_bc,0x960,(int *)&puStack_8c);
                      if (!bVar7) goto LAB_10031516;
                      puVar12 = &DAT_100b7f98;
                      puVar21 = puStack_8c;
                      for (iVar20 = 600; iVar20 != 0; iVar20 = iVar20 + -1) {
                        *puVar21 = *puVar12;
                        puVar12 = puVar12 + 1;
                        puVar21 = puVar21 + 1;
                      }
                      local_80._20_8_ = local_80._20_8_ & 0xffffffff00000000;
                      local_80.cbClsExtra = 0x960;
                      piVar11 = local_ac;
                    }
                    local_80.cbWndExtra = 0;
                    piVar17 = piStack_bc;
LAB_10031516:
                    this = piStack_a8;
                    if (iStack_88 == 0) goto LAB_10031838;
                    FUN_1009a4ec(piVar11,(uint)piStack_b4,piVar17,(int)&puStack_8c,0);
                    this = piStack_a8;
                  }
                  puStack_c8 = *(undefined4 **)((int)this + 0xd9e0);
                  pvVar3 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x130c);
                  if (((*(int *)((int)pvVar3 + 0x8e0) != 0) && (puStack_c8 != (undefined4 *)0x0)) &&
                     ((iVar20 = FUN_1009ed73(*(void **)((int)pvVar3 + 0x8e4),(uint)puStack_c8,0,1,
                                             *(int *)((int)pvVar3 + 0x8e0),(int)pvVar3,0,
                                             *(int *)((int)pvVar3 + 0x938),
                                             *(int *)((int)pvVar3 + 0x93c)),
                      *(int *)(*(int *)((int)pvVar3 + 0x8e0) + 0x20) != 3 && (iVar20 != 0)))) {
                    FUN_100981d0(pvVar3,puStack_c8,0,iVar20,0);
                  }
                  puStack_c8 = *(undefined4 **)((int)this + 0xd9e0);
                  pvVar3 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
                  if ((((*(int *)((int)pvVar3 + 0x8e0) != 0) && (puStack_c8 != (undefined4 *)0x0))
                      && (iVar20 = FUN_1009ed73(*(void **)((int)pvVar3 + 0x8e4),(uint)puStack_c8,0,1
                                                ,*(int *)((int)pvVar3 + 0x8e0),(int)pvVar3,0xc0,
                                                *(int *)((int)pvVar3 + 0x938),
                                                *(int *)((int)pvVar3 + 0x93c)),
                         *(int *)(*(int *)((int)pvVar3 + 0x8e0) + 0x20) != 3)) &&
                     ((iVar20 != 0xc0 && (iVar20 != 0)))) {
                    FUN_100981d0(pvVar3,puStack_c8,0,iVar20,0xc0);
                  }
                  uVar14 = FUN_10039647((int)this);
                  if ((char)uVar14 != '\0') {
                    FUN_10098768((void *)(*(int *)(*(int *)((int)this + 0xd9b8) + 0x130c) + 4),'\0')
                    ;
                    FUN_10040960((int)this);
                    FUN_100ada8e((int *)((int)this + 0xda70),0,0x400);
                    *(int *)((int)this + 0xda70) = *(int *)((int)this + 0xd9c0);
                    *(int *)((int)this + 0xdaa0) = 2;
                    uVar22 = (**(code **)(**(int **)((int)this + 0xd9e0) + 0x2c))
                                       (*(int **)((int)this + 0xd9e0));
                    *(undefined8 *)((int)this + 0xdae8) = uVar22;
                    puStack_c8 = (undefined4 *)0x0;
                    uStack_a4 = *(uint *)(*(int *)((int)this + 0xd9c4) + 0xc0);
                    puStack_98 = (undefined4 *)(uStack_a4 >> 0x10);
                    piStack_b4 = (int *)(uStack_a4 & 0xffff);
                    do {
                      *(uint *)((int)this + ((int)puStack_c8 + 0x36d2) * 4) = uStack_a4;
                      iVar20 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x15d8);
                      piVar11 = *(int **)(*(int *)(iVar20 + 0x34) + (int)puStack_98 * 8);
                      (**(code **)(*piVar11 + 0x24))(piVar11,&stack0xffffff34);
                      unaff_ESI = unaff_ESI + *(int *)(iVar20 + 0x18) * (int)piStack_b4;
                      *(int *)((int)this + ((int)puStack_c8 + 0x36e2) * 4) = unaff_ESI;
                      puStack_c8 = (undefined4 *)((int)puStack_c8 + 1);
                    } while (puStack_c8 < (undefined4 *)0x8);
                    *(int *)((int)this + 0xdaa8) = 1;
                    *(int *)((int)this + 0xdab0) = 0;
                    *(int *)((int)this + 0xdab4) = 0;
                    *(int *)((int)this + 0xdab8) = 0;
                    *(int *)((int)this + 0xdabc) = 0;
                    *(int *)((int)this + 56000) = 0;
                    *(int *)((int)this + 0xdac4) = 0;
                    *(int *)((int)this + 0xdac8) = 0;
                    *(void **)((int)this + 0xdc98) = *(void **)((int)this + 0xd9d4);
                    *(int *)((int)this + 0xdcd8) = *(int *)((int)this + 0xd9d0);
                    *(int *)((int)this + 0xda14) = *(int *)((int)this + 0xd9b8);
                    *(int *)((int)this + 0xdacc) = 0;
                    *(int *)((int)this + 0xdce0) = 0;
                    piVar11 = FUN_1009d17a(*(void **)((int)this + 0xd9d4),aiStack_50,2,0,0,0);
                    if (aiStack_50[2] != 0) {
                      FUN_1009d17a(*(void **)((int)this + 0xd9d0),&iStack_40,2,0,0,0);
                      if (iStack_38 != 0) {
                        *(int *)((int)this + 0x4c) = aiStack_50[2];
                        *(int *)((int)this + 0x44) = aiStack_50[2];
                        *(int *)((int)this + 0x48) = aiStack_50[2];
                        *(int *)((int)this + 100) = iStack_38;
                        *(int *)((int)this + 0x50) = 0;
                        *(int *)((int)this + 0x5c) = 0;
                        *(int *)((int)this + 0x58) = 0;
                        *(int *)((int)this + 0x54) = 0;
                        *(int *)((int)this + 0x68) = 0;
                        *(int *)((int)this + 0x6c) = 0;
                        return CONCAT31((int3)((uint)aiStack_50[2] >> 8),1);
                      }
                      piVar11 = *(int **)((int)this + 0xd9d4);
                      if (piVar11[0xb] != 0) {
                        piVar11[0xb] = 0;
                      }
                    }
                    return CONCAT31((int3)((uint)piVar11 >> 8),1);
                  }
                }
LAB_10031838:
                (**(code **)(**(int **)((int)this + 0xd9e0) + 8))(*(int **)((int)this + 0xd9e0));
                *(int *)((int)this + 0xd9e0) = 0;
              }
              if (*(void **)((int)this + 0xd9e4) != (void *)0x0) {
                FUN_10031990(*(void **)((int)this + 0xd9e4),1);
              }
            }
            *(int *)((int)this + 0xd9e4) = 0;
            piStack_b0 = (int *)((int)this + 0xd9c8);
            if (*(void **)((int)this + 0xd9dc) != (void *)0x0) {
              FUN_10031990(*(void **)((int)this + 0xd9dc),1);
            }
          }
          *(int *)((int)this + 0xd9dc) = 0;
          puVar12 = puStack_8c;
          if ((void *)*puStack_8c != (void *)0x0) {
            FUN_10031990((void *)*puStack_8c,1);
            puVar12 = puStack_8c;
          }
        }
        *puVar12 = 0;
        puVar12 = puStack_90;
        if ((void *)*puStack_90 != (void *)0x0) {
          FUN_10031990((void *)*puStack_90,1);
          puVar12 = puStack_90;
        }
      }
      *puVar12 = 0;
      if ((undefined4 *)*puStack_98 != (undefined4 *)0x0) {
        FUN_10031a70((undefined4 *)*puStack_98);
      }
      *puStack_98 = 0;
      piVar11 = piStack_b0;
    }
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      FUN_10031a70((undefined4 *)*piVar11);
    }
    *piVar11 = 0;
    piVar17 = local_ac;
  }
  thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x1c));
  *(int *)((int)this + 0x1c) = 0;
  piVar11 = (int *)thunk_FUN_100ad48c(*(LPVOID *)((int)this + 0x18));
  *(int *)((int)this + 0x18) = 0;
LAB_10030aeb:
  piVar19 = (int *)*piVar17;
  if (piVar19 != (int *)0x0) {
    piVar11 = piVar19 + 2;
    LOCK();
    iVar20 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar20 == 1) {
      piStack_bc = piVar19;
      if ((short)piVar19[3] != 0) {
        uVar2 = *(ushort *)(piVar19 + 3);
        pHVar8 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(uint)uVar2,pHVar8);
        piVar19 = piStack_bc;
        if ((HMODULE)piStack_bc[4] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)piStack_bc[4]);
          piVar19[4] = 0;
        }
      }
      piVar11 = (int *)(**(code **)(*piVar19 + 0x44))();
    }
  }
  *piVar17 = 0;
  return (uint)piVar11 & 0xffffff00;
}

