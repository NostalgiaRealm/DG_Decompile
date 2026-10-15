/*
 * FUN_180041c90 at 180041c90
 * undefined8 __fastcall FUN_180041c90(longlong param_1, int * param_2)
 * Address ranges: 180041c90-1800428a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180041c90(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined *lpszClass;
  uint uVar4;
  char cVar5;
  bool bVar6;
  BOOL BVar7;
  uint uVar8;
  HMODULE pHVar9;
  WNDPROC pWVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined8 *local_res18;
  longlong *local_res20;
  int local_b8 [2];
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_88;
  WNDPROC pWStack_80;
  undefined8 local_78;
  HINSTANCE pHStack_70;
  HICON local_68;
  HCURSOR pHStack_60;
  
  uVar14 = DAT_1801123b0;
  lpszClass = PTR_s_DGD3D12ROOT_180110758;
  pHVar9 = GetModuleHandleW((LPCWSTR)0x0);
  BVar7 = GetClassInfoExA(pHVar9,lpszClass,(LPWNDCLASSEXA)&local_88);
  if (((BVar7 == 0) || (pWVar10 = pWStack_80, pWStack_80 == (WNDPROC)0x0)) &&
     (pWVar10 = (WNDPROC)(*(code *)PTR_FUN_180110760)(uVar14,0), pWVar10 == (WNDPROC)0x0))
  goto LAB_18004288e;
  LOCK();
  *(int *)(pWVar10 + 8) = *(int *)(pWVar10 + 8) + 1;
  UNLOCK();
  *(WNDPROC *)(param_1 + 0xf6d8) = pWVar10;
  uVar11 = FUN_180059660(param_1,param_2);
  lVar15 = 0;
  if ((char)uVar11 != '\0') {
    lVar19 = *(longlong *)(param_1 + 0xf6d8);
    lVar21 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x1ac0;
    *(longlong *)(param_1 + 0xf6e0) = lVar19 + 0x900 + lVar21;
    *(ulonglong *)(param_1 + 0xf6e8) = lVar19 + 0x6d0 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x20;
    FUN_1800fb1f0(lVar19 + 0x1bc0 + lVar21);
    uVar23 = *(uint *)(param_1 + 0x18);
    lVar19 = *(longlong *)(param_1 + 0xf6d8);
    *(undefined1 *)(param_1 + 0xf79c) = *(undefined1 *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0xf748) = lVar19;
    *(uint *)(param_1 + 0xf750) = uVar23;
    *(longlong *)(param_1 + 0xf790) = lVar19;
    *(uint *)(param_1 + 0xf798) = uVar23;
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xf6f8) + 0x1a0);
    *(longlong *)(param_1 + 0xf6f0) = lVar21;
    if (lVar21 != 0) {
      lVar21 = lVar19 + 0x6d0;
      if (lVar19 == 0) {
        lVar21 = lVar15;
      }
      puVar12 = FUN_1800eb524(lVar21,uVar23,0,0x200,1);
      *(undefined8 **)(param_1 + 0xf700) = puVar12;
      if (puVar12 != (undefined8 *)0x0) {
        lVar19 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
        if (*(longlong *)(param_1 + 0xf6d8) == 0) {
          lVar19 = lVar15;
        }
        puVar12 = FUN_1800eb524(lVar19,*(uint *)(param_1 + 0x18),1,0x200,1);
        *(undefined8 **)(param_1 + 0xf708) = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          lVar19 = *(longlong *)(param_1 + 0xf6d8);
          iVar25 = *(int *)(param_1 + 0x9c) << 0xc;
          *(int *)(param_1 + 0xf720) = iVar25;
          lVar21 = lVar19 + 0x6a8;
          if (lVar19 == 0) {
            lVar21 = lVar15;
          }
          lVar18 = lVar19 + 0x6d0;
          if (lVar19 == 0) {
            lVar18 = lVar15;
          }
          puVar12 = FUN_1800e8040(lVar18,*(undefined4 *)(param_1 + 0x18),
                                  *(longlong *)(param_1 + 0xf6e0) + 0x15b0,iVar25,lVar21);
          *(undefined8 **)(param_1 + 0xf718) = puVar12;
          if (puVar12 != (undefined8 *)0x0) {
            lVar19 = *(longlong *)(param_1 + 0xf6d8);
            lVar21 = lVar19 + 0x6a8;
            if (lVar19 == 0) {
              lVar21 = lVar15;
            }
            lVar18 = lVar19 + 0x6d0;
            if (lVar19 == 0) {
              lVar18 = lVar15;
            }
            puVar12 = FUN_1800e8040(lVar18,*(undefined4 *)(param_1 + 0x18),
                                    *(longlong *)(param_1 + 0xf6e0) + 0x1640,0x4000,lVar21);
            *(undefined8 **)(param_1 + 0xf710) = puVar12;
            if (puVar12 != (undefined8 *)0x0) {
              lVar19 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
              if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                lVar19 = lVar15;
              }
              puVar12 = FUN_1800e8040(lVar19,*(undefined4 *)(param_1 + 0x18),0,0xc20,0);
              *(undefined8 **)(param_1 + 0xf728) = puVar12;
              if (puVar12 != (undefined8 *)0x0) {
                lVar19 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                  lVar19 = lVar15;
                }
                puVar12 = FUN_1800e8040(lVar19,*(undefined4 *)(param_1 + 0x18),
                                        *(longlong *)(param_1 + 0xf6e0) + 0x1520,0x8000,0);
                *(undefined8 **)(param_1 + 0xf738) = puVar12;
                if (puVar12 != (undefined8 *)0x0) {
                  plVar13 = FUN_1800e202c(*(longlong *)(param_1 + 0xf6d8) + 0x6d0,
                                          (ulonglong)*(uint *)(param_1 + 0x18),0x960,0,'\0');
                  *(longlong **)(param_1 + 0xf730) = plVar13;
                  if (plVar13 != (longlong *)0x0) {
                    lVar15 = *(longlong *)(param_1 + 0xf6e0);
                    lVar19 = *(longlong *)(lVar15 + 0x1518);
                    iVar25 = (**(code **)(*plVar13 + 0x70))(plVar13,local_b8);
                    if (-1 < iVar25) {
                      plVar22 = (longlong *)(lVar15 + 0x16d0);
                      local_res20 = plVar22;
                      if (local_b8[0] == 4) {
                        local_a0 = 0;
                        local_98 = 0;
                        local_res18 = (undefined8 *)0x0;
                        iVar25 = (**(code **)(*plVar13 + 0x40))(plVar13,0,&local_a0,&local_res18);
                        if (iVar25 < 0) {
LAB_180042236:
                          local_88 = (undefined8 *)0x0;
                          pWStack_80 = (WNDPROC)0x0;
                          local_78._0_4_ = 0;
                          local_78._4_4_ = 0;
                          pHStack_70 = (HINSTANCE)0x0;
                          local_68 = (HICON)0x0;
                          pHStack_60 = (HCURSOR)0x0;
                          if ((*(longlong *)(lVar19 + 0xb10) != 0) &&
                             (bVar6 = FUN_1800e9568(plVar22,0x960,(longlong *)&local_88), bVar6)) {
                            FUN_1800fbec0(local_88,(undefined8 *)&DAT_18010f430,0x960);
                            local_68 = (HICON)0x960;
                            pHStack_60 = (HCURSOR)((ulonglong)pHStack_60 & 0xffffffff00000000);
                          }
                          goto LAB_1800422e0;
                        }
                        plVar22 = *(longlong **)(lVar19 + 0xb18);
                        EnterCriticalSection((LPCRITICAL_SECTION)(plVar22 + 5));
                        uVar23 = *(uint *)((longlong)plVar22 + 0xc);
                        uVar8 = 0;
                        if (uVar23 != 0) {
                          uVar17 = 0;
                          uVar20 = uVar23;
                          do {
                            uVar8 = uVar20 + uVar17 >> 1;
                            plVar2 = *(longlong **)(*plVar22 + (ulonglong)uVar8 * 0x18);
                            uVar4 = uVar8;
                            if (plVar2 <= plVar13) {
                              if (plVar13 <= plVar2) break;
                              uVar17 = uVar8 + 1;
                              uVar4 = uVar20;
                              uVar8 = uVar17;
                            }
                            uVar20 = uVar4;
                          } while (uVar20 != uVar17);
                        }
                        if ((uVar8 == uVar23) ||
                           (puVar16 = (undefined4 *)((ulonglong)uVar8 * 3),
                           *(longlong **)(*plVar22 + (ulonglong)uVar8 * 0x18) != plVar13)) {
                          uVar11 = (ulonglong)uVar8;
                          if (uVar23 == *(uint *)(plVar22 + 1)) {
                            auVar3 = ZEXT816(0x18) * ZEXT416(*(uint *)(plVar22 + 1) * 2);
                            uVar14 = auVar3._0_8_;
                            if (auVar3._8_8_ != 0) {
                              uVar14 = 0xffffffffffffffff;
                            }
                            lVar15 = thunk_FUN_1800fbccc(uVar14);
                            if (lVar15 != 0) {
                              uVar24 = 0;
                              if ((int)plVar22[1] != 0) {
                                do {
                                  lVar21 = *plVar22;
                                  uVar23 = (int)uVar24 + 1;
                                  puVar12 = (undefined8 *)(lVar21 + uVar24 * 0x18);
                                  uVar14 = puVar12[1];
                                  puVar1 = (undefined8 *)(lVar15 + uVar24 * 0x18);
                                  *puVar1 = *puVar12;
                                  puVar1[1] = uVar14;
                                  *(undefined8 *)(lVar15 + 0x10 + uVar24 * 0x18) =
                                       *(undefined8 *)(lVar21 + 0x10 + uVar24 * 0x18);
                                  uVar24 = (ulonglong)uVar23;
                                } while (uVar23 < *(uint *)(plVar22 + 1));
                              }
                              FUN_1800fbcf0((LPVOID)*plVar22);
                              *(int *)(plVar22 + 1) = (int)plVar22[1] << 1;
                              *plVar22 = lVar15;
                            }
                          }
                          uVar23 = *(uint *)((longlong)plVar22 + 0xc);
                          uVar24 = (ulonglong)uVar23;
                          while (uVar8 < uVar23) {
                            lVar15 = *plVar22;
                            uVar23 = (int)uVar24 - 1;
                            uVar26 = (ulonglong)uVar23;
                            puVar12 = (undefined8 *)(lVar15 + uVar26 * 0x18);
                            uVar14 = puVar12[1];
                            puVar1 = (undefined8 *)(lVar15 + uVar24 * 0x18);
                            *puVar1 = *puVar12;
                            puVar1[1] = uVar14;
                            *(undefined8 *)(lVar15 + 0x10 + uVar24 * 0x18) =
                                 *(undefined8 *)(lVar15 + 0x10 + uVar26 * 0x18);
                            uVar24 = uVar26;
                          }
                          *(longlong **)(*plVar22 + uVar11 * 0x18) = plVar13;
                          *(longlong **)(*plVar22 + 8 + uVar11 * 0x18) = plVar13;
                          puVar16 = (undefined4 *)FUN_1800fbccc(0x20);
                          if (puVar16 == (undefined4 *)0x0) {
                            puVar16 = (undefined4 *)0x0;
                          }
                          else {
                            *puVar16 = 0;
                            *(undefined8 *)(puVar16 + 2) = 0;
                            *(undefined8 *)(puVar16 + 4) = 0;
                            *(undefined8 *)(puVar16 + 6) = 0;
                          }
                          *(undefined4 **)(*plVar22 + 0x10 + uVar11 * 0x18) = puVar16;
                          *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
                        }
                        cVar5 = '\x01';
                        lVar15 = *(longlong *)(*plVar22 + 0x10 + (ulonglong)uVar8 * 0x18);
                        if (lVar15 != 0) {
                          cVar5 = FUN_1800e9df8((longlong)puVar16,lVar15,0);
                        }
                        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar22 + 5));
                        if (cVar5 != '\0') {
                          FUN_1800fbec0(local_res18,(undefined8 *)&DAT_18010f430,0x960);
                        }
                        local_98 = 0x960;
                        local_a0 = 0;
                        (**(code **)(*plVar13 + 0x48))(plVar13,0);
                        if (((*(longlong *)(lVar19 + 0xb10) != 0) &&
                            (iVar25 = FUN_1800ea5c8(*(longlong **)(lVar19 + 0xb18),
                                                    (ulonglong)plVar13,0,1,
                                                    *(longlong *)(lVar19 + 0xb10),lVar19,0,
                                                    *(longlong *)(lVar19 + 0xb78)),
                            *(int *)(*(longlong *)(lVar19 + 0xb10) + 0x30) != 3)) && (iVar25 != 0))
                        {
                          FUN_1800e23ec(lVar19,plVar13,0,iVar25,0);
                        }
                        plVar22 = local_res20;
                        if (cVar5 == '\0') goto LAB_180042236;
                      }
                      else {
                        local_88 = (undefined8 *)0x0;
                        pWStack_80 = (WNDPROC)0x0;
                        local_78._0_4_ = 0;
                        local_78._4_4_ = 0;
                        pHStack_70 = (HINSTANCE)0x0;
                        local_68 = (HICON)0x0;
                        pHStack_60 = (HCURSOR)0x0;
                        if ((*(longlong *)(lVar19 + 0xb10) != 0) &&
                           (bVar6 = FUN_1800e9568(plVar22,0x960,(longlong *)&local_88), bVar6)) {
                          FUN_1800fbec0(local_88,(undefined8 *)&DAT_18010f430,0x960);
                          local_68 = (HICON)0x960;
                          pHStack_60 = (HCURSOR)((ulonglong)pHStack_60 & 0xffffffff00000000);
                        }
LAB_1800422e0:
                        if (pWStack_80 == (WNDPROC)0x0) goto LAB_180042761;
                        FUN_1800e4d0c(lVar19,(ulonglong)plVar13,(longlong)plVar22,
                                      (longlong)&local_88,0);
                      }
                      lVar19 = 0;
                      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1518);
                      if (((*(longlong *)(lVar15 + 0xb10) != 0) &&
                          (uVar11 = *(ulonglong *)(param_1 + 0xf730), uVar11 != 0)) &&
                         ((iVar25 = FUN_1800ea5c8(*(longlong **)(lVar15 + 0xb18),uVar11,0,1,
                                                  *(longlong *)(lVar15 + 0xb10),lVar15,0,
                                                  *(longlong *)(lVar15 + 0xb78)),
                          *(int *)(*(longlong *)(lVar15 + 0xb10) + 0x30) != 3 && (iVar25 != 0)))) {
                        FUN_1800e23ec(lVar15,uVar11,0,iVar25,0);
                      }
                      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
                      if ((((*(longlong *)(lVar15 + 0xb10) != 0) &&
                           (uVar11 = *(ulonglong *)(param_1 + 0xf730), uVar11 != 0)) &&
                          (iVar25 = FUN_1800ea5c8(*(longlong **)(lVar15 + 0xb18),uVar11,0,1,
                                                  *(longlong *)(lVar15 + 0xb10),lVar15,0xc0,
                                                  *(longlong *)(lVar15 + 0xb78)),
                          *(int *)(*(longlong *)(lVar15 + 0xb10) + 0x30) != 3)) &&
                         ((iVar25 != 0xc0 && (iVar25 != 0)))) {
                        FUN_1800e23ec(lVar15,uVar11,0,iVar25,0xc0);
                      }
                      lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                      if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                        lVar15 = lVar19;
                      }
                      puVar12 = FUN_1800e8040(lVar15,*(undefined4 *)(param_1 + 0x18),0,0x2f0,0);
                      *(undefined8 **)(param_1 + 0xf7e8) = puVar12;
                      if (puVar12 != (undefined8 *)0x0) {
                        lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                        if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                          lVar15 = lVar19;
                        }
                        puVar12 = FUN_1800e8040(lVar15,*(undefined4 *)(param_1 + 0x18),0,0x4d0,0);
                        *(undefined8 **)(param_1 + 0xf740) = puVar12;
                        if (puVar12 != (undefined8 *)0x0) {
                          lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                          if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                            lVar15 = lVar19;
                          }
                          puVar12 = FUN_1800e8040(lVar15,*(undefined4 *)(param_1 + 0x18),0,0xec0,0);
                          *(undefined8 **)(param_1 + 0xf7f8) = puVar12;
                          if (puVar12 != (undefined8 *)0x0) {
                            lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                            if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                              lVar15 = lVar19;
                            }
                            puVar12 = FUN_1800e8040(lVar15,*(undefined4 *)(param_1 + 0x18),0,
                                                    *(int *)(param_1 + 0xa4) + 0xffU & 0xffffff00,0)
                            ;
                            *(undefined8 **)(param_1 + 0xf7f0) = puVar12;
                            if (puVar12 != (undefined8 *)0x0) {
                              lVar15 = *(longlong *)(param_1 + 0xf6d8) + 0x6d0;
                              if (*(longlong *)(param_1 + 0xf6d8) == 0) {
                                lVar15 = lVar19;
                              }
                              puVar12 = FUN_1800e8040(lVar15,*(undefined4 *)(param_1 + 0x18),0,0x100
                                                      ,0);
                              *(undefined8 **)(param_1 + 0xf800) = puVar12;
                              if (puVar12 != (undefined8 *)0x0) {
                                uVar11 = FUN_1800567f0((LPVOID)(param_1 + 0xf808),
                                                       *(longlong *)(param_1 + 0xf6d8),
                                                       *(uint *)(param_1 + 0x18));
                                if ((char)uVar11 != '\0') {
                                  uVar23 = FUN_1800e1704(*(longlong *)
                                                          (*(longlong *)(param_1 + 0xf6e0) + 0x1938)
                                                         ,1);
                                  *(uint *)(param_1 + 0xf8c8) = uVar23;
                                  if (uVar23 != 0xffffffff) {
                                    local_b8[0] = 0x1c;
                                    local_b8[1] = 5;
                                    local_b0 = 0;
                                    uStack_a8 = 1;
                                    (**(code **)(**(longlong **)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0xf6e0) + 0x1938) +
                                                     0x50) + (ulonglong)(uVar23 >> 0x10) * 0x10) +
                                                0x48))();
                                    plVar13 = *(longlong **)
                                               ((ulonglong)*(uint *)(param_1 + 0x18) * 0x20 + 0x6d0
                                               + *(longlong *)(param_1 + 0xf6d8));
                                    (**(code **)(*plVar13 + 0xa0))(plVar13,0,local_b8);
                                    FUN_1800e2ae8(*(longlong *)
                                                   (*(longlong *)(param_1 + 0xf6e0) + 0x1518) + 8,
                                                  '\0');
                                    FUN_180043530(param_1);
                                    *(undefined8 *)(param_1 + 0xf788) =
                                         *(undefined8 *)(param_1 + 0xf6e0);
                                    plVar13 = FUN_1800e8198(*(longlong *)(param_1 + 0xf718),
                                                            (longlong *)local_b8,2,0,0);
                                    lVar15 = local_b0;
                                    if (local_b0 != 0) {
                                      FUN_1800e8198(*(longlong *)(param_1 + 0xf710),
                                                    (longlong *)local_b8,2,0,0);
                                      if (local_b0 != 0) {
                                        uVar11 = *(ulonglong *)(param_1 + 0x68);
                                        if (uVar11 != *(ulonglong *)(param_1 + 0x60)) {
                                          uVar23 = (int)uVar11 - *(int *)(param_1 + 0x58);
                                          uVar11 = (ulonglong)uVar23;
                                          *(uint *)(param_1 + 0x78) = uVar23;
                                        }
                                        *(longlong *)(param_1 + 0x68) = lVar15;
                                        *(longlong *)(param_1 + 0x58) = lVar15;
                                        *(longlong *)(param_1 + 0x88) = local_b0;
                                        *(undefined8 *)(param_1 + 0x70) = 0;
                                        *(undefined8 *)(param_1 + 0x78) = 0;
                                        *(longlong *)(param_1 + 0x60) = lVar15;
                                        *(undefined8 *)(param_1 + 0x90) = 0;
                                        return CONCAT71((int7)(uVar11 >> 8),1);
                                      }
                                      plVar13 = *(longlong **)(param_1 + 0xf718);
                                      if (*(int *)((longlong)plVar13 + 0x34) != 0) {
                                        *(undefined4 *)((longlong)plVar13 + 0x34) = 0;
                                      }
                                    }
                                    return CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
                                  }
                                  FUN_180056a00(param_1 + 0xf808);
                                }
                                FUN_18004c8e4(param_1);
                                goto LAB_180042761;
                              }
                              if (*(undefined8 **)(param_1 + 0xf7f0) != (undefined8 *)0x0) {
                                FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7f0),1);
                              }
                            }
                            if (*(undefined8 **)(param_1 + 0xf7f8) != (undefined8 *)0x0) {
                              FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7f8),1);
                            }
                          }
                          if (*(undefined8 **)(param_1 + 0xf740) != (undefined8 *)0x0) {
                            FUN_1800428b0(*(undefined8 **)(param_1 + 0xf740),1);
                          }
                        }
                        if (*(undefined8 **)(param_1 + 0xf7e8) != (undefined8 *)0x0) {
                          FUN_1800428b0(*(undefined8 **)(param_1 + 0xf7e8),1);
                        }
                      }
                    }
LAB_180042761:
                    (**(code **)(**(longlong **)(param_1 + 0xf730) + 0x10))();
                    *(undefined8 *)(param_1 + 0xf730) = 0;
                  }
                  if (*(undefined8 **)(param_1 + 0xf738) != (undefined8 *)0x0) {
                    FUN_1800428b0(*(undefined8 **)(param_1 + 0xf738),1);
                  }
                  *(undefined8 *)(param_1 + 0xf738) = 0;
                }
                if (*(undefined8 **)(param_1 + 0xf728) != (undefined8 *)0x0) {
                  FUN_1800428b0(*(undefined8 **)(param_1 + 0xf728),1);
                }
                *(undefined8 *)(param_1 + 0xf728) = 0;
              }
              if (*(undefined8 **)(param_1 + 0xf710) != (undefined8 *)0x0) {
                FUN_1800428b0(*(undefined8 **)(param_1 + 0xf710),1);
              }
              *(undefined8 *)(param_1 + 0xf710) = 0;
            }
            if (*(undefined8 **)(param_1 + 0xf718) != (undefined8 *)0x0) {
              FUN_1800428b0(*(undefined8 **)(param_1 + 0xf718),1);
            }
            *(undefined8 *)(param_1 + 0xf718) = 0;
          }
          if (*(undefined8 **)(param_1 + 0xf708) != (undefined8 *)0x0) {
            FUN_1800429f0(*(undefined8 **)(param_1 + 0xf708));
          }
          *(undefined8 *)(param_1 + 0xf708) = 0;
        }
        if (*(undefined8 **)(param_1 + 0xf700) != (undefined8 *)0x0) {
          FUN_1800429f0(*(undefined8 **)(param_1 + 0xf700));
        }
        *(undefined8 *)(param_1 + 0xf700) = 0;
      }
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  plVar13 = *(longlong **)(param_1 + 0xf6d8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar13 + 1;
    lVar15 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      if (*(short *)((longlong)plVar13 + 0xc) != 0) {
        pHVar9 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar13 + 0xc),pHVar9);
        if ((HMODULE)plVar13[2] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)plVar13[2]);
          plVar13[2] = 0;
        }
      }
      (**(code **)(*plVar13 + 0x88))(plVar13);
    }
  }
LAB_18004288e:
  *(undefined8 *)(param_1 + 0xf6d8) = 0;
  return 0;
}

