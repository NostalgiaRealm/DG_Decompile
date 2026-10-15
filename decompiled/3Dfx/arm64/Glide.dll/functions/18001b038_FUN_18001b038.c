/*
 * FUN_18001b038 at 18001b038
 * undefined8 __cdecl FUN_18001b038(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001b038-18001bbff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001b038(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *lpszClass;
  HMODULE pHVar2;
  undefined8 *puVar3;
  bool bVar4;
  BOOL BVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  HMODULE hInstance;
  WNDPROC pWVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined4 local_358;
  uint uStack_354;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 uStack_340;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  tagWNDCLASSEXA local_2d8;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  longlong lStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  longlong lStack_248;
  longlong local_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  pHVar2 = DAT_18006c860;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  lpszClass = PTR_s_DGD3D12ROOT_18006c378;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(hInstance,lpszClass,&local_2d8);
  if (((BVar5 != 0) && (pWVar9 = local_2d8.lpfnWndProc, local_2d8.lpfnWndProc != (WNDPROC)0x0)) ||
     (pWVar9 = (WNDPROC)(*(code *)PTR_FUN_18006c380)(pHVar2,0), pWVar9 != (WNDPROC)0x0)) {
    FUN_180061700((uint *)(pWVar9 + 8));
  }
  *(WNDPROC *)(param_1 + 0x31b0) = pWVar9;
  if (pWVar9 == (WNDPROC)0x0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3228);
  *(undefined8 *)(param_1 + 0x3230) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x3240) = 0;
  *(undefined8 *)(param_1 + 0x3238) = 0;
  *(undefined8 *)(param_1 + 0x3250) = 0;
  *(undefined8 *)(param_1 + 0x3248) = 0;
  *(undefined8 *)(param_1 + 0x3260) = 0;
  *(undefined8 *)(param_1 + 0x3258) = 0;
  *(undefined8 *)(param_1 + 0x3270) = 0;
  *(undefined8 *)(param_1 + 0x3268) = 0;
  *(undefined8 *)(param_1 + 0x3280) = 0;
  *(undefined8 *)(param_1 + 0x3278) = 0;
  *(undefined8 *)(param_1 + 0x3290) = 0;
  *(undefined8 *)(param_1 + 0x3288) = 0;
  *(undefined8 *)(param_1 + 0x32a0) = 0;
  *(undefined8 *)(param_1 + 0x3298) = 0;
  *(undefined8 *)(param_1 + 0x32b0) = 0;
  *(undefined8 *)(param_1 + 0x32a8) = 0;
  *(undefined8 *)(param_1 + 0x32c0) = 0;
  *(undefined8 *)(param_1 + 0x32b8) = 0;
  *(undefined8 *)(param_1 + 0x32d0) = 0;
  *(undefined8 *)(param_1 + 13000) = 0;
  *(undefined8 *)(param_1 + 0x32d8) = 0;
  if (*param_2 == 5) {
    iVar8 = 0xb000;
  }
  else {
    iVar8 = 0xb000;
    if (*param_2 == 6) {
      iVar8 = 0xc000;
    }
  }
  uVar10 = FUN_180048760(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),iVar8);
  uVar6 = local_370._4_4_;
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar14 = *(longlong *)(param_1 + 0x31b0);
  *(ulonglong *)(param_1 + 0x31c0) =
       lVar14 + (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x1ac0 + 0x900;
  local_370 = CONCAT44(local_370._4_4_,2);
  local_280 = local_370;
  lStack_268 = (ulonglong)uStack_354 << 0x20;
  local_370 = CONCAT44(local_370._4_4_,2);
  local_260 = local_370;
  uStack_278 = 0;
  uStack_270 = local_360;
  lStack_248 = (ulonglong)uStack_354 << 0x20;
  local_370 = (ulonglong)local_370._4_4_ << 0x20;
  local_240 = local_370;
  uStack_258 = 1;
  uStack_250 = local_360;
  uStack_228 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_220 = local_370;
  uStack_238 = 1;
  puStack_230 = &DAT_180064c40;
  uStack_208 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_200 = local_370;
  uStack_218 = 8;
  puStack_210 = &DAT_180064c40;
  uStack_1e8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_1e0 = local_370;
  uStack_1f8 = 9;
  puStack_1f0 = &DAT_180064c40;
  uStack_1c8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_1c0 = local_370;
  uStack_1d8 = 10;
  puStack_1d0 = &DAT_180064c40;
  uStack_1a8 = CONCAT44(uStack_354,5);
  local_370 = (ulonglong)uVar6 << 0x20;
  local_1a0 = local_370;
  uStack_1b8 = 0xc;
  puStack_1b0 = &DAT_180064c40;
  uStack_188 = CONCAT44(uStack_354,5);
  local_360 = &DAT_180064c68;
  local_370 = (ulonglong)uVar6 << 0x20;
  local_180 = local_370;
  uStack_198 = 1;
  puStack_190 = &DAT_180064c10;
  uStack_168 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_160 = local_370;
  uStack_178 = 1;
  puStack_170 = &DAT_180064c68;
  uStack_148 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  uStack_158 = 0x14;
  puStack_150 = &DAT_180064c68;
  uStack_128 = CONCAT44(uStack_354,5);
  uStack_138 = 0x15;
  local_140 = local_370;
  puStack_130 = &DAT_180064c68;
  local_370 = CONCAT44(uVar6,3);
  local_120 = local_370;
  uStack_108 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_100 = local_370;
  uStack_118 = 0x16;
  puStack_110 = &DAT_180064c68;
  uStack_e8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_e0 = local_370;
  uStack_f8 = 0x18;
  puStack_f0 = &DAT_180064c68;
  uStack_c8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_c0 = local_370;
  uStack_d8 = 0x19;
  puStack_d0 = &DAT_180064c68;
  uStack_a8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  uStack_b8 = 0x1a;
  puStack_b0 = &DAT_180064c68;
  uStack_88 = CONCAT44(uStack_354,5);
  local_358 = 5;
  local_330 = CONCAT44(local_330._4_4_,0x11);
  local_328 = &local_280;
  uStack_368 = 0x1d;
  uStack_98 = 0x1c;
  local_a0 = local_370;
  puStack_90 = &DAT_180064c68;
  local_370 = CONCAT44(uVar6,3);
  uStack_68 = CONCAT44(uStack_354,5);
  uStack_310 = 0xd;
  local_320 = 0;
  uStack_78 = 0x1d;
  local_80 = local_370;
  puStack_70 = &DAT_180064c68;
  uStack_318 = 0;
  uStack_314 = 0;
  lVar14 = (**(code **)(*(longlong *)(lVar14 + 0x6b0) + 8))
                     (lVar14 + 0x6b0,(ulonglong)*(uint *)(param_1 + 0x31b8),1,&local_330,0);
  *plVar1 = lVar14;
  if (lVar14 == 0) goto LAB_18001bbcc;
  uVar6 = *(uint *)(param_1 + 0xe8);
  local_350 = (undefined8 *)0x0;
  local_348 = (undefined8 *)0x0;
  uVar10 = FUN_1800252f0(lVar14,uVar6,&local_348,&local_350);
  if ((uVar10 & 1) == 0) goto LAB_18001bbb8;
  iVar8 = uVar6 * 4;
  plVar11 = FUN_180049ed8(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                          (ulonglong)*(uint *)(param_1 + 0x31b8),(ulonglong)(iVar8 + 0x10),0,1);
  puVar3 = local_348;
  puVar13 = local_350;
  *(longlong **)(param_1 + 0x31f0) = plVar11;
  if (plVar11 == (longlong *)0x0) {
LAB_18001bba8:
    thunk_FUN_180060a18(puVar13);
    thunk_FUN_180060a18(puVar3);
  }
  else {
    plVar11 = FUN_180049ed8(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                            (ulonglong)*(uint *)(param_1 + 0x31b8),0x40004,0,1);
    *(longlong **)(param_1 + 0x31e8) = plVar11;
    if (plVar11 == (longlong *)0x0) {
LAB_18001bb98:
      (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x10))();
      goto LAB_18001bba8;
    }
    lVar14 = 0;
    if (*(longlong *)(param_1 + 0x31b0) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x31b0) + 0x6d0;
    }
    puVar12 = FUN_180045e48(lVar14,*(undefined4 *)(param_1 + 0x31b8),0,iVar8 + 4,0);
    *(undefined8 **)(param_1 + 0x31f8) = puVar12;
    if (puVar12 == (undefined8 *)0x0) {
LAB_18001bb88:
      (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x10))();
      goto LAB_18001bb98;
    }
    uVar6 = FUN_18004e2a0(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                          *(longlong **)(param_1 + 0x31f0),
                          (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,iVar8 + 0x10,
                          puVar3,1,'\0');
    if ((uVar6 & 1) == 0) {
LAB_18001bb6c:
      puVar12 = *(undefined8 **)(param_1 + 0x31f8);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_180045d50(puVar12);
        FUN_180060a18(puVar12);
      }
      goto LAB_18001bb88;
    }
    uVar6 = FUN_18004e2a0(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                          *(longlong **)(param_1 + 0x31e8),
                          (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,0x40004,puVar13,1
                          ,'\0');
    if ((uVar6 & 1) == 0) goto LAB_18001bb6c;
    thunk_FUN_180060a18(puVar13);
    thunk_FUN_180060a18(puVar3);
    plVar11 = FUN_180049ed8(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                            (ulonglong)*(uint *)(param_1 + 0x31b8),
                            (ulonglong)
                            (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x33) *
                                  *(int *)(*(longlong *)(param_1 + 8) + 0x2f)),0,1);
    *(longlong **)(param_1 + 0x3200) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      plVar11 = *(longlong **)
                 (*(longlong *)(param_1 + 0x31b0) + (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 +
                 0x6d0);
      uVar7 = (**(code **)(*plVar11 + 0x78))(plVar11,1);
      local_360 = (undefined *)((ulonglong)local_360 & 0xffffffff00000000);
      local_370 = 1;
      uStack_368 = 0;
      local_348 = (undefined8 *)0x1000000000;
      uStack_340 = 1;
      local_2f0 = 0x1000000001;
      local_2e8 = 1;
      local_2d8.lpfnWndProc = (WNDPROC)0x0;
      local_2d8.cbClsExtra = 0x100;
      local_2d8.cbWndExtra = 0;
      *(undefined4 *)(param_1 + 0x31d0) = uVar7;
      local_2d8.hInstance = (HINSTANCE)0x1000100000100;
      local_2d8.hIcon = (HICON)0x10000003c;
      local_2d8.cbSize = 3;
      local_2d8.hCursor = (HCURSOR)0x0;
      local_2d8.hbrBackground._0_4_ = 0;
      plVar11 = *(longlong **)
                 (*(longlong *)(param_1 + 0x31b0) + (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 +
                 0x6d0);
      iVar8 = (**(code **)(*plVar11 + 0xd8))
                        (plVar11,&local_370,0,&local_2d8,0x80,0,&DAT_180064c58,param_1 + 0x3208);
      if (-1 < iVar8) {
        plVar11 = *(longlong **)
                   (*(longlong *)(param_1 + 0x31b0) + (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20
                   + 0x6d0);
        iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_348,&DAT_1800624f0,param_1 + 0x3210);
        if (-1 < iVar8) {
          plVar11 = *(longlong **)
                     (*(longlong *)(param_1 + 0x31b0) +
                      (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0);
          iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_2f0,&DAT_1800624f0,param_1 + 0x3218)
          ;
          if (-1 < iVar8) {
            lVar14 = 0;
            if (*(longlong *)(param_1 + 0x31b0) != 0) {
              lVar14 = *(longlong *)(param_1 + 0x31b0) + 0x6d0;
            }
            puVar13 = FUN_18004a338(lVar14,*(uint *)(param_1 + 0x31b8),0,0x200,1);
            *(undefined8 **)(param_1 + 0x31c8) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              local_330 = 0x40000003d;
              local_328._0_4_ = 0x1688;
              local_320 = 0;
              uStack_31c = 0xffffffff;
              uStack_318 = 0;
              uStack_314 = 0;
              uStack_310 = 0;
              uStack_30c = 0;
              (**(code **)(**(longlong **)(param_1 + 0x3210) + 0x48))
                        (*(longlong **)(param_1 + 0x3210),&local_350);
              plVar11 = *(longlong **)
                         (*(longlong *)(param_1 + 0x31b0) +
                          (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0);
              (**(code **)(*plVar11 + 0x90))
                        (plVar11,*(undefined8 *)(param_1 + 0x3208),&local_330,local_350);
              uVar10 = 0;
              do {
                local_300 = 0x7f7fffff;
                uVar6 = (uint)uVar10;
                local_328._4_4_ = 3;
                local_320 = 0;
                uStack_31c = 1;
                uStack_318 = 8;
                uStack_314 = 0;
                uStack_310 = 0;
                uStack_30c = 0;
                uStack_308 = 0;
                local_330 = CONCAT44((uVar6 & 4 | 2) >> 1,(&DAT_180064c30)[uVar10 & 3]);
                local_304 = 0;
                local_328._0_4_ = (uVar6 & 8 | 4) >> 2;
                (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x48))
                          (*(longlong **)(param_1 + 0x3218),&local_350);
                local_350 = (undefined8 *)
                            ((longlong)local_350 + (ulonglong)(*(int *)(param_1 + 0x31d0) * uVar6));
                plVar11 = *(longlong **)
                           (*(longlong *)(param_1 + 0x31b0) +
                            (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0);
                (**(code **)(*plVar11 + 0xb0))(plVar11,&local_330);
                uVar10 = (ulonglong)(uVar6 + 1);
              } while (uVar6 + 1 < 0x10);
              plVar11 = FUN_180049ed8(*(longlong *)(param_1 + 0x31b0) + 0x6d0,
                                      (ulonglong)*(uint *)(param_1 + 0x31b8),0xd50,0,1);
              *(longlong **)(param_1 + 0x31e0) = plVar11;
              if (plVar11 == (longlong *)0x0) goto LAB_18001bbb8;
              lVar14 = 0;
              if (*(longlong *)(param_1 + 0x31b0) != 0) {
                lVar14 = *(longlong *)(param_1 + 0x31b0) + 0x6d0;
              }
              puVar13 = FUN_180045e48(lVar14,*(undefined4 *)(param_1 + 0x31b8),0,0x590,0);
              *(undefined8 **)(param_1 + 0x31d8) = puVar13;
              if (puVar13 != (undefined8 *)0x0) {
                uVar6 = FUN_18004e2a0(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518),
                                      *(longlong **)(param_1 + 0x31e0),
                                      (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),0,0xd50
                                      ,(undefined8 *)&DAT_18006b4d0,1,'\0');
                if ((uVar6 & 1) != 0) {
                  uVar6 = FUN_18004a918(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),2);
                  *(uint *)(param_1 + 0x3220) = uVar6;
                  if (uVar6 != 0xffffffff) {
                    FUN_18004b248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),
                                  (longlong *)&local_350,uVar6,0);
                    local_370 = 0x60000001c;
                    local_360 = (undefined *)0x0;
                    uStack_368 = 0;
                    plVar11 = *(longlong **)
                               (*(longlong *)(param_1 + 0x31b0) +
                                (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0);
                    (**(code **)(*plVar11 + 0xa0))(plVar11,0,&local_370,local_350);
                    FUN_18004b248(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1938),
                                  (longlong *)&local_348,*(uint *)(param_1 + 0x3220),0);
                    local_2f0 = 0x600000039;
                    uStack_2e0 = 0;
                    local_2e8 = 0;
                    plVar11 = *(longlong **)
                               (*(longlong *)(param_1 + 0x31b0) +
                                (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x20 + 0x6d0);
                    (**(code **)(*plVar11 + 0xa0))(plVar11,0,&local_2f0,local_348);
                  }
                  FUN_1800250f8(param_1,*(undefined8 *)(param_1 + 0x31b0),(longlong)param_2,param_4)
                  ;
                  *(undefined8 *)(param_1 + 0xcd28) = 0;
                  *(undefined4 *)(param_1 + 0xcd30) = *(undefined4 *)(param_1 + 0xa8);
                  *(undefined4 *)(param_1 + 0xcd34) = *(undefined4 *)(param_1 + 0xac);
                  FUN_18004baf0(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518) + 8,0);
                  FUN_18004bee8(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                                *(ulonglong *)(param_1 + 0x31e0),0,1,0x80);
                  uVar10 = FUN_1800228f8((longlong *)(param_1 + 0x34e8));
                  if ((uVar10 & 1) != 0) {
                    *(undefined4 *)(param_1 + 0x3bb4) = 0;
                    *(undefined8 *)(param_1 + 0x3c00) = 0;
                    *(undefined8 *)(param_1 + 0x3bd0) = 0;
                    *(undefined8 *)(param_1 + 0x3bc8) = 0;
                    *(undefined8 *)(param_1 + 0x3bd8) = 0;
                    uVar6 = FUN_180049c28(uVar10,DAT_18006c860,1,0x18006b1b4,param_1 + 0x3be0);
                    if ((uVar6 & 1) == 0) {
LAB_18001baf4:
                      uVar16 = FUN_1800456d8((longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x3bc0) + 0x31c0) + 0x19d8),
                                             *(longlong *)(param_1 + 0x3be0));
                      FUN_180049d80(uVar16,1,param_1 + 0x3be0);
                    }
                    else {
                      bVar4 = true;
                      lVar14 = 0;
                      do {
                        if ((int)lVar14 != 0) break;
                        puVar13 = FUN_180044cd8((longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)(param_1 + 0x3bc0) + 0x31c0) +
                                                0x19c0),(&PTR_PTR_18006b400)[lVar14 * 2],
                                                (&DAT_18006b408)[lVar14 * 4]);
                        bVar4 = puVar13 != (undefined8 *)0x0;
                        *(undefined8 **)(param_1 + 0x3be8 + lVar14 * 8) = puVar13;
                        lVar14 = 1;
                      } while (puVar13 != (undefined8 *)0x0);
                      if (!bVar4) goto LAB_18001baf4;
                      lVar15 = *(longlong *)(param_1 + 0x3bc0);
                      lVar14 = 0;
                      if (*(longlong *)(lVar15 + 0x31b0) != 0) {
                        lVar14 = *(longlong *)(lVar15 + 0x31b0) + 0x6d0;
                      }
                      puVar13 = FUN_180045e48(lVar14,*(undefined4 *)(lVar15 + 0x31b8),
                                              *(longlong *)(lVar15 + 0x31c0) + 0x15b0,0xf0000,0);
                      *(undefined8 **)(param_1 + 0x3bf0) = puVar13;
                      if (puVar13 == (undefined8 *)0x0) goto LAB_18001baf4;
                      lVar15 = *(longlong *)(param_1 + 0x3bc0);
                      lVar14 = 0;
                      if (*(longlong *)(lVar15 + 0x31b0) != 0) {
                        lVar14 = *(longlong *)(lVar15 + 0x31b0) + 0x6d0;
                      }
                      puVar13 = FUN_180045e48(lVar14,*(undefined4 *)(lVar15 + 0x31b8),
                                              *(longlong *)(lVar15 + 0x31c0) + 0x15b0,0x10000,0);
                      *(undefined8 **)(param_1 + 0x3bf8) = puVar13;
                      if (puVar13 == (undefined8 *)0x0) {
                        puVar13 = *(undefined8 **)(param_1 + 0x3bf0);
                        if (puVar13 != (undefined8 *)0x0) {
                          FUN_180045d50(puVar13);
                          FUN_180060a18(puVar13);
                        }
                        *(undefined8 *)(param_1 + 0x3bf0) = 0;
                        goto LAB_18001baf4;
                      }
                      uVar16 = *(undefined8 *)(*(longlong *)(param_1 + 0x3bc0) + 0x31c0);
                      *(undefined8 *)(param_1 + 0x3c10) =
                           *(undefined8 *)(*(longlong *)(param_1 + 0x3bc0) + 0x31b0);
                      *(undefined8 *)(param_1 + 0x3c18) = uVar16;
                      *(undefined1 *)(param_1 + 0x3c0c) = 1;
                      FUN_1800320c8(param_1 + 0x3b60,1,1);
                      iVar8 = *(int *)((longlong)param_2 + 0x33);
                      if (iVar8 == 1) {
LAB_18001babc:
                        bVar4 = FUN_180031c20();
                        if (bVar4) {
                          return 1;
                        }
                      }
                      else if (iVar8 == 2) {
                        bVar4 = FUN_180031c20();
                        if (bVar4) {
                          bVar4 = FUN_180031c20();
                          if (bVar4) {
                            return 1;
                          }
                          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x6c78) + 0x31c0);
LAB_18001ba9c:
                          FUN_180043f90(lVar14 + 0x12c0);
                          FUN_180049be8(*(longlong *)(*(longlong *)(param_1 + 0x6c78) + 0x31b0),
                                        *(longlong **)(param_1 + 0x6c88));
                        }
                      }
                      else {
                        if (iVar8 != 3) goto LAB_18001babc;
                        bVar4 = FUN_180031c20();
                        if (bVar4) {
                          bVar4 = FUN_180031c20();
                          if (bVar4) {
                            bVar4 = FUN_180031c20();
                            if (bVar4) {
                              return 1;
                            }
                            FUN_180043f90(*(longlong *)(*(longlong *)(param_1 + 0x9cb8) + 0x31c0) +
                                          0x12c0);
                            FUN_180049be8(*(longlong *)(*(longlong *)(param_1 + 0x9cb8) + 0x31b0),
                                          *(longlong **)(param_1 + 0x9cc8));
                          }
                          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x6c78) + 0x31c0);
                          goto LAB_18001ba9c;
                        }
                      }
                      FUN_180031e28(param_1 + 0x3b60);
                    }
                    FUN_180022a70((longlong *)(param_1 + 0x34e8));
                  }
                  FUN_18001a2b8(param_1);
                  goto LAB_18001bbb8;
                }
                puVar13 = *(undefined8 **)(param_1 + 0x31d8);
                if (puVar13 != (undefined8 *)0x0) {
                  FUN_180045d50(puVar13);
                  FUN_180060a18(puVar13);
                }
              }
              (**(code **)(**(longlong **)(param_1 + 0x31e0) + 0x10))();
              goto LAB_18001bbb8;
            }
            (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
            *(undefined8 *)(param_1 + 0x3218) = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x3210) + 0x10))();
          *(undefined8 *)(param_1 + 0x3210) = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x3208) + 0x10))();
        *(undefined8 *)(param_1 + 0x3208) = 0;
      }
    }
  }
LAB_18001bbb8:
  (**(code **)(*(longlong *)*plVar1 + 0x10))();
  *plVar1 = 0;
LAB_18001bbcc:
  FUN_180048b18(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
  return 0;
}

