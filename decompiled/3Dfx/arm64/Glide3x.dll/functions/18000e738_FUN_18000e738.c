/*
 * FUN_18000e738 at 18000e738
 * undefined8 __cdecl FUN_18000e738(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000e738-18000f313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000e738(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

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
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  tagWNDCLASSEXA local_2d0;
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
  
  local_2f0 = param_1 + 0xc000;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  pHVar2 = DAT_18006f9c0;
  lpszClass = PTR_s_DGD3D12ROOT_18006f4d0;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(hInstance,lpszClass,&local_2d0);
  if (((BVar5 != 0) && (pWVar9 = local_2d0.lpfnWndProc, local_2d0.lpfnWndProc != (WNDPROC)0x0)) ||
     (pWVar9 = (WNDPROC)(*(code *)PTR_FUN_18006f4d8)(pHVar2,0), pWVar9 != (WNDPROC)0x0)) {
    FUN_1800643e0((uint *)(pWVar9 + 8));
  }
  *(WNDPROC *)(param_1 + 0x3330) = pWVar9;
  if (pWVar9 == (WNDPROC)0x0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x33a8);
  *(undefined8 *)(param_1 + 0x33b0) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x33c0) = 0;
  *(undefined8 *)(param_1 + 0x33b8) = 0;
  *(undefined8 *)(param_1 + 0x33d0) = 0;
  *(undefined8 *)(param_1 + 0x33c8) = 0;
  *(undefined8 *)(param_1 + 0x33e0) = 0;
  *(undefined8 *)(param_1 + 0x33d8) = 0;
  *(undefined8 *)(param_1 + 0x33f0) = 0;
  *(undefined8 *)(param_1 + 0x33e8) = 0;
  *(undefined8 *)(param_1 + 0x3400) = 0;
  *(undefined8 *)(param_1 + 0x33f8) = 0;
  *(undefined8 *)(param_1 + 0x3410) = 0;
  *(undefined8 *)(param_1 + 0x3408) = 0;
  *(undefined8 *)(param_1 + 0x3420) = 0;
  *(undefined8 *)(param_1 + 0x3418) = 0;
  *(undefined8 *)(param_1 + 0x3430) = 0;
  *(undefined8 *)(param_1 + 0x3428) = 0;
  *(undefined8 *)(param_1 + 0x3440) = 0;
  *(undefined8 *)(param_1 + 0x3438) = 0;
  *(undefined8 *)(param_1 + 0x3450) = 0;
  *(undefined8 *)(param_1 + 0x3448) = 0;
  *(undefined8 *)(param_1 + 0x3458) = 0;
  if (*param_2 == 5) {
    iVar8 = 0xb000;
  }
  else {
    iVar8 = 0xb000;
    if (*param_2 == 6) {
      iVar8 = 0xc000;
    }
  }
  uVar10 = FUN_18004b4a0(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),iVar8);
  uVar6 = local_370._4_4_;
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar14 = *(longlong *)(param_1 + 0x3330);
  *(ulonglong *)(param_1 + 0x3340) =
       lVar14 + (ulonglong)*(uint *)(param_1 + 0x3338) * 0x1ac0 + 0x900;
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
  puStack_230 = &DAT_1800669e0;
  uStack_208 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_200 = local_370;
  uStack_218 = 8;
  puStack_210 = &DAT_1800669e0;
  uStack_1e8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_1e0 = local_370;
  uStack_1f8 = 9;
  puStack_1f0 = &DAT_1800669e0;
  uStack_1c8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_1c0 = local_370;
  uStack_1d8 = 10;
  puStack_1d0 = &DAT_1800669e0;
  uStack_1a8 = CONCAT44(uStack_354,5);
  local_370 = (ulonglong)uVar6 << 0x20;
  local_1a0 = local_370;
  uStack_1b8 = 0xc;
  puStack_1b0 = &DAT_1800669e0;
  uStack_188 = CONCAT44(uStack_354,5);
  local_360 = &DAT_180066a08;
  local_370 = (ulonglong)uVar6 << 0x20;
  local_180 = local_370;
  uStack_198 = 1;
  puStack_190 = &DAT_1800669b0;
  uStack_168 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_160 = local_370;
  uStack_178 = 1;
  puStack_170 = &DAT_180066a08;
  uStack_148 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  uStack_158 = 0x14;
  puStack_150 = &DAT_180066a08;
  uStack_128 = CONCAT44(uStack_354,5);
  uStack_138 = 0x15;
  local_140 = local_370;
  puStack_130 = &DAT_180066a08;
  local_370 = CONCAT44(uVar6,3);
  local_120 = local_370;
  uStack_108 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_100 = local_370;
  uStack_118 = 0x16;
  puStack_110 = &DAT_180066a08;
  uStack_e8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_e0 = local_370;
  uStack_f8 = 0x18;
  puStack_f0 = &DAT_180066a08;
  uStack_c8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  local_c0 = local_370;
  uStack_d8 = 0x19;
  puStack_d0 = &DAT_180066a08;
  uStack_a8 = CONCAT44(uStack_354,5);
  local_370 = CONCAT44(uVar6,3);
  uStack_b8 = 0x1a;
  puStack_b0 = &DAT_180066a08;
  uStack_88 = CONCAT44(uStack_354,5);
  local_358 = 5;
  local_330 = CONCAT44(local_330._4_4_,0x11);
  local_328 = &local_280;
  uStack_368 = 0x1d;
  uStack_98 = 0x1c;
  local_a0 = local_370;
  puStack_90 = &DAT_180066a08;
  local_370 = CONCAT44(uVar6,3);
  uStack_68 = CONCAT44(uStack_354,5);
  uStack_310 = 0xd;
  local_320 = 0;
  uStack_78 = 0x1d;
  local_80 = local_370;
  puStack_70 = &DAT_180066a08;
  uStack_318 = 0;
  uStack_314 = 0;
  lVar14 = (**(code **)(*(longlong *)(lVar14 + 0x6b0) + 8))
                     (lVar14 + 0x6b0,(ulonglong)*(uint *)(param_1 + 0x3338),1,&local_330,0);
  *plVar1 = lVar14;
  if (lVar14 == 0) goto LAB_18000f2e0;
  uVar6 = *(uint *)(param_1 + 0xe8);
  local_350 = (undefined8 *)0x0;
  local_348 = (undefined8 *)0x0;
  uVar10 = FUN_180013988(lVar14,uVar6,&local_348,&local_350);
  if ((uVar10 & 1) == 0) goto LAB_18000f2cc;
  iVar8 = uVar6 * 4;
  plVar11 = FUN_18004cc18(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                          (ulonglong)*(uint *)(param_1 + 0x3338),(ulonglong)(iVar8 + 0x10),0,1);
  puVar3 = local_348;
  puVar13 = local_350;
  *(longlong **)(param_1 + 0x3370) = plVar11;
  if (plVar11 == (longlong *)0x0) {
LAB_18000f2bc:
    thunk_FUN_180063700(puVar13);
    thunk_FUN_180063700(puVar3);
  }
  else {
    plVar11 = FUN_18004cc18(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                            (ulonglong)*(uint *)(param_1 + 0x3338),0x40004,0,1);
    *(longlong **)(param_1 + 0x3368) = plVar11;
    if (plVar11 == (longlong *)0x0) {
LAB_18000f2ac:
      (**(code **)(**(longlong **)(param_1 + 0x3370) + 0x10))();
      goto LAB_18000f2bc;
    }
    lVar14 = 0;
    if (*(longlong *)(param_1 + 0x3330) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x3330) + 0x6d0;
    }
    puVar12 = FUN_180048b88(lVar14,*(undefined4 *)(param_1 + 0x3338),0,iVar8 + 4,0);
    *(undefined8 **)(param_1 + 0x3378) = puVar12;
    if (puVar12 == (undefined8 *)0x0) {
LAB_18000f29c:
      (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
      goto LAB_18000f2ac;
    }
    uVar6 = FUN_180050fe0(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                          *(longlong **)(param_1 + 0x3370),
                          (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,iVar8 + 0x10,
                          puVar3,1,'\0');
    if ((uVar6 & 1) == 0) {
LAB_18000f280:
      puVar12 = *(undefined8 **)(param_1 + 0x3378);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_180048a90(puVar12);
        FUN_180063700(puVar12);
      }
      goto LAB_18000f29c;
    }
    uVar6 = FUN_180050fe0(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                          *(longlong **)(param_1 + 0x3368),
                          (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,0x40004,puVar13,1
                          ,'\0');
    if ((uVar6 & 1) == 0) goto LAB_18000f280;
    thunk_FUN_180063700(puVar13);
    thunk_FUN_180063700(puVar3);
    plVar11 = FUN_18004cc18(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                            (ulonglong)*(uint *)(param_1 + 0x3338),
                            (ulonglong)
                            (uint)(*(int *)(*(longlong *)(param_1 + 8) + 0x33) *
                                  *(int *)(*(longlong *)(param_1 + 8) + 0x2f)),0,1);
    *(longlong **)(param_1 + 0x3380) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      plVar11 = *(longlong **)
                 (*(longlong *)(param_1 + 0x3330) + (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 +
                 0x6d0);
      uVar7 = (**(code **)(*plVar11 + 0x78))(plVar11,1);
      local_360 = (undefined *)((ulonglong)local_360 & 0xffffffff00000000);
      local_370 = 1;
      uStack_368 = 0;
      local_348 = (undefined8 *)0x1000000000;
      uStack_340 = 1;
      local_2e8 = 0x1000000001;
      local_2e0 = 1;
      local_2d0.lpfnWndProc = (WNDPROC)0x0;
      local_2d0.cbClsExtra = 0x100;
      local_2d0.cbWndExtra = 0;
      *(undefined4 *)(param_1 + 0x3350) = uVar7;
      local_2d0.hInstance = (HINSTANCE)0x1000100000100;
      local_2d0.hIcon = (HICON)0x10000003c;
      local_2d0.cbSize = 3;
      local_2d0.hCursor = (HCURSOR)0x0;
      local_2d0.hbrBackground._0_4_ = 0;
      plVar11 = *(longlong **)
                 (*(longlong *)(param_1 + 0x3330) + (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 +
                 0x6d0);
      iVar8 = (**(code **)(*plVar11 + 0xd8))
                        (plVar11,&local_370,0,&local_2d0,0x80,0,&DAT_1800669f8,param_1 + 0x3388);
      if (-1 < iVar8) {
        plVar11 = *(longlong **)
                   (*(longlong *)(param_1 + 0x3330) + (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20
                   + 0x6d0);
        iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_348,&DAT_1800654f0,param_1 + 0x3390);
        if (-1 < iVar8) {
          plVar11 = *(longlong **)
                     (*(longlong *)(param_1 + 0x3330) +
                      (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 + 0x6d0);
          iVar8 = (**(code **)(*plVar11 + 0x70))(plVar11,&local_2e8,&DAT_1800654f0,param_1 + 0x3398)
          ;
          if (-1 < iVar8) {
            lVar14 = 0;
            if (*(longlong *)(param_1 + 0x3330) != 0) {
              lVar14 = *(longlong *)(param_1 + 0x3330) + 0x6d0;
            }
            puVar13 = FUN_18004d078(lVar14,*(uint *)(param_1 + 0x3338),0,0x200,1);
            *(undefined8 **)(param_1 + 0x3348) = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              local_330 = 0x40000003d;
              local_328._0_4_ = 0x1688;
              local_320 = 0;
              uStack_31c = 0xffffffff;
              uStack_318 = 0;
              uStack_314 = 0;
              uStack_310 = 0;
              uStack_30c = 0;
              (**(code **)(**(longlong **)(param_1 + 0x3390) + 0x48))
                        (*(longlong **)(param_1 + 0x3390),&local_350);
              plVar11 = *(longlong **)
                         (*(longlong *)(param_1 + 0x3330) +
                          (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 + 0x6d0);
              (**(code **)(*plVar11 + 0x90))
                        (plVar11,*(undefined8 *)(param_1 + 0x3388),&local_330,local_350);
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
                local_330 = CONCAT44((uVar6 & 4 | 2) >> 1,(&DAT_1800669d0)[uVar10 & 3]);
                local_304 = 0;
                local_328._0_4_ = (uVar6 & 8 | 4) >> 2;
                (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x48))
                          (*(longlong **)(param_1 + 0x3398),&local_350);
                local_350 = (undefined8 *)
                            ((longlong)local_350 + (ulonglong)(*(int *)(param_1 + 0x3350) * uVar6));
                plVar11 = *(longlong **)
                           (*(longlong *)(param_1 + 0x3330) +
                            (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 + 0x6d0);
                (**(code **)(*plVar11 + 0xb0))(plVar11,&local_330);
                uVar10 = (ulonglong)(uVar6 + 1);
              } while (uVar6 + 1 < 0x10);
              plVar11 = FUN_18004cc18(*(longlong *)(param_1 + 0x3330) + 0x6d0,
                                      (ulonglong)*(uint *)(param_1 + 0x3338),0xd50,0,1);
              *(longlong **)(param_1 + 0x3360) = plVar11;
              if (plVar11 == (longlong *)0x0) goto LAB_18000f2cc;
              lVar14 = 0;
              if (*(longlong *)(param_1 + 0x3330) != 0) {
                lVar14 = *(longlong *)(param_1 + 0x3330) + 0x6d0;
              }
              puVar13 = FUN_180048b88(lVar14,*(undefined4 *)(param_1 + 0x3338),0,0x670,0);
              *(undefined8 **)(param_1 + 0x3358) = puVar13;
              if (puVar13 != (undefined8 *)0x0) {
                uVar6 = FUN_180050fe0(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1518),
                                      *(longlong **)(param_1 + 0x3360),
                                      (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),0,0xd50
                                      ,(undefined8 *)&DAT_18006e380,1,'\0');
                if ((uVar6 & 1) != 0) {
                  uVar6 = FUN_18004d658(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),2);
                  *(uint *)(param_1 + 0x33a0) = uVar6;
                  if (uVar6 != 0xffffffff) {
                    FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),
                                  (longlong *)&local_350,uVar6,0);
                    local_370 = 0x60000001c;
                    local_360 = (undefined *)0x0;
                    uStack_368 = 0;
                    plVar11 = *(longlong **)
                               (*(longlong *)(param_1 + 0x3330) +
                                (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 + 0x6d0);
                    (**(code **)(*plVar11 + 0xa0))(plVar11,0,&local_370,local_350);
                    FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1938),
                                  (longlong *)&local_348,*(uint *)(param_1 + 0x33a0),0);
                    local_2e8 = 0x600000039;
                    uStack_2d8 = 0;
                    local_2e0 = 0;
                    plVar11 = *(longlong **)
                               (*(longlong *)(param_1 + 0x3330) +
                                (ulonglong)*(uint *)(param_1 + 0x3338) * 0x20 + 0x6d0);
                    (**(code **)(*plVar11 + 0xa0))(plVar11,0,&local_2e8,local_348);
                  }
                  FUN_180013798(param_1,*(undefined8 *)(param_1 + 0x3330),(longlong)param_2,param_4)
                  ;
                  uVar7 = *(undefined4 *)(param_1 + 0xac);
                  *(undefined8 *)(param_1 + 0xd848) = 0;
                  *(undefined4 *)(local_2f0 + 0x1850) = *(undefined4 *)(param_1 + 0xa8);
                  *(undefined4 *)(local_2f0 + 0x1854) = uVar7;
                  FUN_18004e830(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1518) + 8,0);
                  FUN_18004ec28(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                                *(ulonglong *)(param_1 + 0x3360),0,1,0x80);
                  uVar10 = FUN_180015d88((longlong *)(param_1 + 0x3668));
                  if ((uVar10 & 1) != 0) {
                    *(undefined4 *)(param_1 + 0x4514) = 0;
                    *(undefined8 *)(param_1 + 0x4570) = 0;
                    *(undefined8 *)(param_1 + 0x4530) = 0;
                    *(undefined8 *)(param_1 + 0x4528) = 0;
                    *(undefined8 *)(param_1 + 0x4538) = 0;
                    uVar6 = FUN_18004c968(uVar10,DAT_18006f9c0,2,0x18006e270,param_1 + 0x4540);
                    if ((uVar6 & 1) == 0) {
LAB_18000f224:
                      FUN_180025738(param_1 + 0x42a0);
                    }
                    else {
                      bVar4 = true;
                      uVar10 = 0;
                      do {
                        if (1 < (uint)uVar10) break;
                        puVar13 = FUN_180047a18((longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)(param_1 + 0x4520) + 0x3340) +
                                                0x19c0),(&PTR_PTR_18006e280)[uVar10 * 2],
                                                (&DAT_18006e288)[uVar10 * 4]);
                        bVar4 = puVar13 != (undefined8 *)0x0;
                        *(undefined8 **)(param_1 + 0x4550 + uVar10 * 8) = puVar13;
                        uVar10 = (ulonglong)((uint)uVar10 + 1);
                      } while (puVar13 != (undefined8 *)0x0);
                      if (!bVar4) goto LAB_18000f224;
                      lVar15 = *(longlong *)(param_1 + 0x4520);
                      lVar14 = 0;
                      if (*(longlong *)(lVar15 + 0x3330) != 0) {
                        lVar14 = *(longlong *)(lVar15 + 0x3330) + 0x6d0;
                      }
                      puVar13 = FUN_180048b88(lVar14,*(undefined4 *)(lVar15 + 0x3338),
                                              *(longlong *)(lVar15 + 0x3340) + 0x15b0,0x140000,0);
                      *(undefined8 **)(param_1 + 0x4560) = puVar13;
                      if (puVar13 == (undefined8 *)0x0) goto LAB_18000f224;
                      lVar15 = *(longlong *)(param_1 + 0x4520);
                      lVar14 = 0;
                      if (*(longlong *)(lVar15 + 0x3330) != 0) {
                        lVar14 = *(longlong *)(lVar15 + 0x3330) + 0x6d0;
                      }
                      puVar13 = FUN_180048b88(lVar14,*(undefined4 *)(lVar15 + 0x3338),
                                              *(longlong *)(lVar15 + 0x3340) + 0x15b0,0x10000,0);
                      *(undefined8 **)(param_1 + 0x4568) = puVar13;
                      if (puVar13 == (undefined8 *)0x0) {
                        puVar13 = *(undefined8 **)(param_1 + 0x4560);
                        if (puVar13 != (undefined8 *)0x0) {
                          FUN_180048a90(puVar13);
                          FUN_180063700(puVar13);
                        }
                        *(undefined8 *)(param_1 + 0x4560) = 0;
                        goto LAB_18000f224;
                      }
                      *(undefined4 *)(param_1 + 0x4518) = 0xffffffff;
                      *(undefined4 *)(param_1 + 0x4408) = 0;
                      *(undefined2 *)(param_1 + 0x44c4) = 0;
                      *(undefined1 *)(param_1 + 0x44c6) = 0;
                      *(undefined4 *)(*(longlong *)(param_1 + 0x4520) + 0x32c0) =
                           *(undefined4 *)(param_1 + 0x43f8);
                      uVar16 = *(undefined8 *)(*(longlong *)(param_1 + 0x4520) + 0x3340);
                      *(undefined8 *)(param_1 + 0x4580) =
                           *(undefined8 *)(*(longlong *)(param_1 + 0x4520) + 0x3330);
                      *(undefined8 *)(param_1 + 0x4588) = uVar16;
                      *(undefined1 *)(param_1 + 0x457c) = 1;
                      FUN_180025a30(param_1 + 0x42a0,1,1);
                      iVar8 = *(int *)((longlong)param_2 + 0x33);
                      if (iVar8 == 1) {
LAB_18000f1ec:
                        bVar4 = FUN_180025530();
                        if (bVar4) {
                          return 1;
                        }
                      }
                      else if (iVar8 == 2) {
                        bVar4 = FUN_180025530();
                        if (bVar4) {
                          bVar4 = FUN_180025530();
                          if (bVar4) {
                            return 1;
                          }
                          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x7798) + 0x3340);
LAB_18000f1cc:
                          FUN_180038c00(lVar14 + 0x12c0);
                          FUN_18004c928(*(longlong *)(*(longlong *)(param_1 + 0x7798) + 0x3330),
                                        *(longlong **)(param_1 + 0x77a8));
                        }
                      }
                      else {
                        if (iVar8 != 3) goto LAB_18000f1ec;
                        bVar4 = FUN_180025530();
                        if (bVar4) {
                          bVar4 = FUN_180025530();
                          if (bVar4) {
                            bVar4 = FUN_180025530();
                            if (bVar4) {
                              return 1;
                            }
                            FUN_180038c00(*(longlong *)(*(longlong *)(param_1 + 0xa7d8) + 0x3340) +
                                          0x12c0);
                            FUN_18004c928(*(longlong *)(*(longlong *)(param_1 + 0xa7d8) + 0x3330),
                                          *(longlong **)(param_1 + 0xa7e8));
                          }
                          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x7798) + 0x3340);
                          goto LAB_18000f1cc;
                        }
                      }
                      FUN_180025798(param_1 + 0x42a0);
                    }
                    FUN_180015f00((longlong *)(param_1 + 0x3668));
                  }
                  FUN_18000d9e0(param_1);
                  goto LAB_18000f2cc;
                }
                puVar13 = *(undefined8 **)(param_1 + 0x3358);
                if (puVar13 != (undefined8 *)0x0) {
                  FUN_180048a90(puVar13);
                  FUN_180063700(puVar13);
                }
              }
              (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x10))();
              goto LAB_18000f2cc;
            }
            (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
            *(undefined8 *)(param_1 + 0x3398) = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x3390) + 0x10))();
          *(undefined8 *)(param_1 + 0x3390) = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x3388) + 0x10))();
        *(undefined8 *)(param_1 + 0x3388) = 0;
      }
    }
  }
LAB_18000f2cc:
  (**(code **)(*(longlong *)*plVar1 + 0x10))();
  *plVar1 = 0;
LAB_18000f2e0:
  FUN_18004b858(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
  return 0;
}

