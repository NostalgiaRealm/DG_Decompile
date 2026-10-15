/*
 * FUN_10063fa0 at 10063fa0
 * undefined FUN_10063fa0(void)
 * Address ranges: 10063fa0-100654b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1006488c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10063fa0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int *piVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar18;
  byte bVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  int *piVar20;
  code *pcVar21;
  uint uVar22;
  uint local_39c;
  int *local_398;
  code *local_394;
  int *local_390;
  int *local_38c;
  int local_388;
  int *local_384;
  int *local_380;
  int *local_37c [3];
  undefined8 local_370;
  undefined4 uStack_368;
  uint uStack_364;
  int *local_350;
  int *local_34c;
  int *local_348;
  int *local_344;
  int *local_340;
  int local_33c;
  undefined4 *local_338;
  int *local_334;
  int *local_330;
  undefined8 local_328;
  undefined8 local_320;
  int local_318;
  int local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined1 auStack_290 [284];
  int local_174;
  int local_170;
  undefined1 auStack_168 [256];
  int local_68;
  
  iVar11 = param_1 + (int)param_2 * 0x28;
  puVar15 = (undefined4 *)(iVar11 + 0x18);
  local_330 = (int *)(iVar11 + 0x24);
  iVar11 = *local_330;
  *local_330 = iVar11 + 1;
  pcVar21 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar11 + 1 != 1) {
    return 1;
  }
  piVar14 = (int *)(param_1 + (int)param_2 * 0x18);
  local_350 = piVar14 + 0x148;
  local_344 = piVar14;
  local_33c = param_3;
  local_338 = puVar15;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar11 = (*extraout_w11)(*puVar15,extraout_x1 & 0xffffffff,&DAT_100a1aa0,piVar14 + 0x148);
  if (iVar11 < 0) goto LAB_1006547c;
  piVar8 = (int *)(param_1 + (int)param_2 * 0x16c0);
  piVar20 = piVar8 + 0x1b0;
  local_38c = piVar8;
  uVar12 = (*pcVar21)(*puVar15,extraout_x1_00,piVar14 + 0x149);
  (*extraout_w11_00)(uVar12,&DAT_1009e860);
  local_380 = (int *)0x0;
  *(undefined1 *)((int)piVar14 + 0x535) = 0;
  uVar12 = (*pcVar21)();
  (*extraout_w11_01)(uVar12,&DAT_1009e850,&local_380);
  local_384 = (int *)0x0;
  uVar12 = (*pcVar21)();
  iVar11 = (*extraout_w11_02)(uVar12,&DAT_100a1ab0,&local_384);
  if (-1 < iVar11) {
    uVar12 = (*pcVar21)();
    (*extraout_w11_03)(uVar12,auStack_290);
    uVar12 = (*pcVar21)();
    (*extraout_w11_04)(uVar12,&local_318);
    if ((local_318 != local_174) || (uVar18 = 1, local_314 != local_170)) {
      uVar18 = 0;
    }
    *(undefined1 *)((int)piVar14 + 0x535) = uVar18;
    uVar12 = (*pcVar21)();
    (*extraout_w11_05)(uVar12);
  }
  uVar12 = (*pcVar21)();
  (*extraout_w11_06)(uVar12);
  uVar12 = (*pcVar21)();
  (*extraout_w11_07)(uVar12);
  uStack_2f8 = 0;
  local_300 = 0;
  uVar12 = (*pcVar21)();
  (*extraout_w11_08)(uVar12,1,&local_300,0x10);
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_298 = 0;
  uVar12 = (*pcVar21)();
  (*extraout_w11_09)(uVar12,0,&local_2d0,0x3c);
  local_310 = 0;
  uVar12 = (*pcVar21)();
  (*extraout_w11_10)(uVar12,0x12,&local_310,8);
  uStack_2e8 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  uVar12 = (*pcVar21)();
  (*extraout_w11_11)(uVar12,0x15,&local_2f0,0x14);
  local_320 = 0;
  uVar12 = (*pcVar21)();
  iVar11 = (*extraout_w11_12)(uVar12,0x2c,&local_320,8);
  if (iVar11 < 0) {
    local_320 = 0;
  }
  local_328 = 0;
  uVar12 = (*pcVar21)();
  iVar13 = (*extraout_w11_13)(uVar12,0x2d,&local_328,8);
  iVar11 = 0;
  if (-1 < iVar13) {
    iVar11 = local_328._4_4_;
  }
  local_328 = CONCAT44(iVar11,(undefined4)local_328);
  if (((int)uStack_2f8 == 0) || (uStack_2f8._4_4_ == 0)) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  *(undefined1 *)(local_350 + 4) = uVar18;
  *(bool *)((int)local_350 + 0x11) = uStack_2c0._4_4_ != 0;
  *(bool *)((int)local_350 + 0x12) = 0 < local_310._4_4_;
  *(bool *)((int)local_350 + 0x13) = 0xbfff < local_33c && (int)local_320 != 0;
  local_350[3] = (int)uStack_2e8;
  *(bool *)(local_350 + 5) = iVar11 != 0;
  piVar14 = piVar8 + 0x620;
  local_348 = (int *)((int)piVar8 + 0x19af);
  local_334 = piVar14;
  if (*(char *)local_348 == '\0') {
    piVar1 = piVar8 + 0x666;
    piVar1[0] = 0x4000;
    piVar1[1] = 0;
    *(undefined1 *)((int)piVar8 + 0x19ad) = 1;
    *(undefined1 *)((int)piVar8 + 0x19ae) = 0;
    piVar8[0x66e] = 0;
    piVar8[0x66c] = 0;
    piVar8[0x66d] = 0;
    *piVar14 = 0;
    piVar2 = piVar8 + 0x630;
    *(undefined1 *)(piVar8 + 0x66b) = 1;
    iVar11 = (*(code *)PTR_FUN_100a8094)(s_KernelBase_dll_100a08f0);
    *piVar2 = iVar11;
    iVar11 = (*(code *)PTR_FUN_100a8094)(s_Kernel32_dll_100a0900);
    piVar8[0x631] = iVar11;
    if (*piVar2 != 0) {
      iVar11 = (*(code *)PTR_FUN_100a8070)(*piVar2,s_WakeByAddressAll_100a0910);
      piVar8[0x632] = iVar11;
      iVar11 = (*(code *)PTR_FUN_100a8070)(*piVar2,s_WaitOnAddress_100a0928);
      piVar8[0x633] = iVar11;
      if ((piVar8[0x632] != 0) && (iVar11 != 0)) {
        local_394 = pcVar21;
        uVar22 = 0;
        local_398 = param_2;
        local_390 = piVar20;
        local_388 = param_1;
        do {
          iVar11 = FUN_10083400(*piVar1 + 0x10);
          piVar8[uVar22 * 5 + 0x63c] = iVar11;
          param_2 = local_398;
          piVar20 = local_390;
          param_1 = local_388;
          pcVar21 = local_394;
          if (iVar11 == 0) {
LAB_100646c8:
            (piVar14 + uVar22 * 5 + 0x1b)[0] = 0;
            (piVar14 + uVar22 * 5 + 0x1b)[1] = 0;
            (piVar14 + uVar22 * 5 + 0x19)[0] = 0;
            (piVar14 + uVar22 * 5 + 0x19)[1] = 0;
            piVar14[uVar22 * 5 + 0x1d] = 0;
            break;
          }
          puVar4 = (undefined8 *)(iVar11 + 0xfU & 0xfffffff0);
          piVar2 = piVar14 + uVar22 * 5 + 0x1b;
          *piVar2 = (int)puVar4;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          iVar11 = *piVar2;
          piVar14[(uVar22 + 5) * 5] = iVar11;
          piVar14[uVar22 * 5 + 0x1a] = iVar11;
          iVar11 = (*(code *)PTR_FUN_100a8010)(0,1,1,0);
          param_1 = local_388;
          piVar20 = local_390;
          pcVar21 = local_394;
          param_2 = local_398;
          piVar14[uVar22 * 5 + 0x1d] = iVar11;
          if (iVar11 == 0) {
            FUN_10083420(*piVar2);
            goto LAB_100646c8;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < 8);
        if (uVar22 == 8) {
          iVar11 = FUN_10083400(*piVar1 + 0x10);
          piVar8[0x664] = iVar11;
          if (iVar11 == 0) {
LAB_100646e4:
            iVar11 = uVar22 * 0x14;
            local_398 = param_2;
            local_394 = pcVar21;
            local_388 = param_1;
            do {
              (*(code *)PTR_FUN_100a800c)(*(undefined4 *)((int)piVar8 + iVar11 + 0x18e0));
              FUN_10083420(*(undefined4 *)((int)piVar8 + iVar11 + 0x18dc));
              puVar4 = (undefined8 *)((int)piVar8 + iVar11 + 0x18d0);
              uVar22 = uVar22 - 1;
              iVar11 = iVar11 + -0x14;
              puVar4[1] = 0;
              *puVar4 = 0;
              *(undefined4 *)(puVar4 + 2) = 0;
            } while (uVar22 != 0);
            uVar22 = 0;
            param_2 = local_398;
            pcVar21 = local_394;
            param_1 = local_388;
            goto LAB_10064744;
          }
          puVar4 = (undefined8 *)(iVar11 + 0xfU & 0xfffffff0);
          piVar8[0x663] = (int)puVar4;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          iVar11 = (*(code *)PTR_FUN_100a8014)(0,0,0,0);
          piVar8[0x638] = iVar11;
          if (iVar11 == 0) {
LAB_10064684:
            FUN_10083420(piVar8[0x664]);
            piVar8[0x663] = 0;
            piVar8[0x664] = 0;
            piVar8[0x661] = 0;
            piVar8[0x662] = 0;
            piVar8[0x665] = 0;
            goto LAB_100646e4;
          }
          iVar11 = (*(code *)PTR_FUN_100a806c)(0);
          uVar12 = 0x40000;
          if (0x3ffff < *(uint *)(*(int *)(iVar11 + 0x3c) + iVar11 + 0x60)) {
            uVar12 = 0;
          }
          iVar11 = (*(code *)PTR_FUN_100a8028)(0,uVar12,FUN_1004b450,piVar14,0,0);
          piVar8[0x637] = iVar11;
          if (iVar11 == 0) {
            (*(code *)PTR_FUN_100a800c)(piVar8[0x638]);
            goto LAB_10064684;
          }
        }
        else {
          if (uVar22 != 0) goto LAB_100646e4;
LAB_10064744:
          (*(code *)PTR_FUN_100a8044)(piVar8[0x630]);
          piVar8[0x632] = 0;
          piVar8[0x633] = 0;
          (*(code *)PTR_FUN_100a8044)(piVar8[0x631]);
          piVar8[0x634] = 0;
          piVar8[0x630] = 0;
          piVar8[0x631] = 0;
        }
        *(bool *)((int)piVar8 + 0x19af) = uVar22 == 8;
      }
    }
    if (piVar8[0x631] != 0) {
      iVar11 = (*(code *)PTR_FUN_100a8070)(piVar8[0x631],s_GetSystemCpuSetInformation_100a0938);
      puVar3 = (uint *)(piVar8 + 0x635);
      piVar8[0x634] = iVar11;
      puVar3[0] = 0;
      puVar3[1] = 0;
      if (iVar11 != 0) {
        local_34c = (int *)0x0;
        local_37c[0] = (int *)0x0;
        uVar12 = (*(code *)PTR_FUN_100a804c)();
        iVar11 = (*(code *)PTR_FUN_100a8074)(uVar12,&local_34c,local_37c);
        if (iVar11 != 0) {
          uVar12 = (*(code *)PTR_FUN_100a8054)();
          iVar11 = (*(code *)PTR_FUN_100a807c)(uVar12,&local_370);
          if ((iVar11 != 0) && (local_37c[0] != (int *)0x0)) {
            local_39c = 0;
            (*(code *)PTR_FUN_100a804c)();
            (*pcVar21)();
            (*extraout_w11_14)(0,0,&local_39c);
            local_39c = local_39c >> 5;
            if (local_39c != 0) {
              iVar11 = FUN_10083400(local_39c * 0x20);
              if (iVar11 != 0) {
                local_390 = (int *)(local_39c << 5);
                (*(code *)PTR_FUN_100a804c)();
                (*pcVar21)();
                iVar13 = (*extraout_w11_15)(iVar11,local_390,&local_39c);
                if (iVar13 != 0) {
                  bVar19 = 0;
                  local_39c = local_39c >> 5;
                  uVar22 = 0;
                  if (local_39c != 0) {
                    do {
                      if ((*(short *)(iVar11 + 0xc + uVar22 * 0x20) == local_370._4_2_) &&
                         (bVar6 = *(byte *)(iVar11 + uVar22 * 0x20 + 0x12), bVar19 <= bVar6)) {
                        bVar19 = bVar6;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < local_39c);
                  }
                  uVar22 = 0;
                  if (local_39c != 0) {
                    do {
                      if (*(short *)(iVar11 + 0xc + uVar22 * 0x20) == local_370._4_2_) {
                        iVar13 = iVar11 + uVar22 * 0x20;
                        uVar7 = 1 << (ulonglong)(*(byte *)(iVar13 + 0xe) & 0x1f);
                        uVar5 = uVar7;
                        if (bVar19 <= *(byte *)(iVar13 + 0x12)) {
                          uVar5 = 0;
                        }
                        *puVar3 = uVar5 | *puVar3;
                        piVar8[0x636] = uVar7 | piVar8[0x636];
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < local_39c);
                  }
                }
              }
              FUN_100833b0(iVar11,0x20);
            }
          }
        }
      }
    }
  }
  if ((char)*local_348 != '\0') {
    if (((local_344[0x14b] & 1U) != 0) || (((uint)local_344[0x14b] >> 2 & 1) != 0)) {
      iVar11 = 0;
      if (param_1 != 0) {
        iVar11 = param_1 + 0x520;
      }
      piVar14 = (int *)FUN_10083310(0x10);
      if (piVar14 == (int *)0x0) {
LAB_10064a9c:
        piVar14 = (int *)0x0;
      }
      else {
        *piVar14 = iVar11;
        piVar14[1] = (int)param_2;
        piVar14[2] = 0;
        piVar14[3] = 0;
        uVar17 = FUN_10066958(*piVar14,piVar14[1],0x100a2928,0,&DAT_100a2940,0x400);
        if ((uVar17 & 1) == 0) {
          FUN_1007df90(piVar14);
          FUN_100833b0(piVar14,0x10);
          goto LAB_10064a9c;
        }
        local_308 = 0;
        local_340 = (int *)0x0;
        uVar12 = (*pcVar21)();
        (*extraout_w11_16)(uVar12,0,&local_308,&local_340);
      }
      piVar20[0x57b] = (int)piVar14;
    }
    iVar11 = 0;
    if (param_1 != 0) {
      iVar11 = param_1 + 0x520;
    }
    iVar13 = FUN_1005f690(iVar11,param_2,0,&DAT_100a19e0);
    local_398 = piVar20 + 0x4c0;
    *local_398 = iVar13;
    if (iVar13 != 0) {
      local_37c[0] = (int *)(param_1 + 0x172c0);
      iVar13 = FUN_100689a8(iVar11,param_2,iVar13,0,*local_37c[0]);
      local_394 = (code *)(piVar20 + 0x4c1);
      *(int *)local_394 = iVar13;
      if (iVar13 != 0) {
        iVar13 = FUN_1005f690(iVar11,param_2,3,&DAT_100a1a40);
        local_384 = piVar20 + 0x4c2;
        *local_384 = iVar13;
        if (iVar13 != 0) {
          iVar13 = FUN_100689a8(iVar11,param_2,iVar13,3,*local_37c[0]);
          local_380 = piVar20 + 0x4c3;
          *local_380 = iVar13;
          if (iVar13 != 0) {
            if ((DAT_100aac40 & 1) == 0) {
              DAT_100aac40 = DAT_100aac40 | 1;
              lRam100aab68 = (ulonglong)uStack_364 << 0x20;
              _DAT_100aab60 = 0x200000002;
              uRam100aab7c = CONCAT44(uStack_364,&DAT_100aa9c8);
              DAT_100aab70 = 0;
              _DAT_100aab74 = 0x100000000;
              DAT_100aab84 = 5;
              lRam100aab90 = (ulonglong)uStack_364 << 0x20;
              local_370 = 0x200000003;
              uStack_368 = 0;
              _DAT_100aab88 = 0x100000003;
              lRam100aaba4 = (ulonglong)uStack_364 << 0x20;
              DAT_100aab98 = 5;
              _DAT_100aab9c = 0x200000003;
              DAT_100aabac = 5;
            }
            (*pcVar21)();
            iVar13 = (*extraout_w11_17)(param_1 + 0x50c,param_2,1,&DAT_100aa890,0);
            local_390 = local_38c + 0x1b4;
            *local_390 = iVar13;
            if (iVar13 != 0) {
              if ((DAT_100aac44 & 1) == 0) {
                DAT_100aac44 = DAT_100aac44 | 1;
                uRam100aab18 = CONCAT44(uStack_364,&DAT_100aa938);
                _DAT_100aab10 = 0x100000000;
                lRam100aab2c = (ulonglong)uStack_364 << 0x20;
                DAT_100aab20 = 0;
                _DAT_100aab24 = 0x100000003;
                lRam100aab40 = (ulonglong)uStack_364 << 0x20;
                DAT_100aab34 = 0;
                uStack_368 = 0;
                _DAT_100aab38 = 0x200000003;
                DAT_100aab48 = 0;
                local_370 = 4;
                lRam100aab54 = (ulonglong)uStack_364 << 0x20;
                _DAT_100aab4c = 4;
                DAT_100aab5c = 0;
              }
              (*pcVar21)();
              uVar16 = (*extraout_w11_18)(param_1 + 0x50c,param_2,1,&DAT_100aa9b0,0);
              piVar8 = local_38c;
              piVar14 = local_38c + 0x1d0;
              *piVar14 = (int)uVar16;
              if ((int)uVar16 != 0) {
                puVar15 = (undefined4 *)(param_1 + 0x298);
                local_34c = local_38c + 0x617;
                local_38c = piVar14;
                uVar17 = FUN_100665f0(uVar16,*puVar15,2,&DAT_100aa8c4,local_34c);
                if ((uVar17 & 1) != 0) {
                  local_348 = piVar8 + 0x5ec;
                  uVar17 = FUN_100665f0(uVar17,*puVar15,0x2b,&DAT_100aa950,local_348);
                  if ((uVar17 & 1) != 0) {
                    uVar17 = FUN_100665f0(uVar17,*puVar15,4,&DAT_100aa9a8,piVar8 + 0x5e8);
                    if ((uVar17 & 1) != 0) {
                      puVar15 = (undefined4 *)FUN_10083310(8);
                      local_344 = piVar8 + 0x61a;
                      *local_344 = (int)puVar15;
                      piVar14 = piVar8 + 0x619;
                      *piVar14 = (int)puVar15;
                      uVar12 = 0;
                      if (puVar15 != (undefined4 *)0x0) {
                        *puVar15 = &PTR_s_POSITION_100aa8a8;
                        *(undefined4 *)(*piVar14 + 4) = 1;
                        iVar13 = FUN_100614e8(iVar11,param_2,piVar8 + 0x674,0x1040,0);
                        local_340 = piVar8 + 0x1b3;
                        *local_340 = iVar13;
                        if (iVar13 != 0) {
                          iVar13 = 0;
                          if (param_1 != 0) {
                            iVar13 = param_1 + 0x508;
                          }
                          iVar13 = FUN_100614e8(iVar11,param_2,piVar8 + 0x68c,0x200,iVar13);
                          piVar1 = local_340;
                          piVar8[0x1b2] = iVar13;
                          if (iVar13 != 0) {
                            iVar13 = FUN_10067640(iVar11,param_2,0);
                            piVar14 = piVar20 + 0x576;
                            *piVar14 = iVar13;
                            if (iVar13 != 0) {
                              iVar13 = FUN_10067640(iVar11,param_2,2);
                              piVar8 = piVar20 + 0x577;
                              *piVar8 = iVar13;
                              if (iVar13 != 0) {
                                iVar13 = FUN_10067640(iVar11,param_2,3);
                                piVar1 = piVar20 + 0x578;
                                *piVar1 = iVar13;
                                if (iVar13 != 0) {
                                  iVar13 = FUN_10067640(iVar11,param_2,1);
                                  local_38c = piVar20 + 0x579;
                                  *local_38c = iVar13;
                                  if (iVar13 != 0) {
                                    iVar13 = FUN_10067010(iVar11,param_2,0,0x100,1);
                                    puVar15 = local_338;
                                    piVar2 = local_38c;
                                    piVar20[0x57a] = iVar13;
                                    if (iVar13 != 0) {
                                      piVar14 = piVar20 + 0x590;
                                      *piVar14 = *local_37c[0];
                                      piVar20[0x591] = iVar11;
                                      piVar20[0x592] = (int)param_2;
                                      piVar20[0x59a] = *local_37c[0];
                                      piVar20[0x59b] = iVar11;
                                      piVar20[0x59c] = (int)param_2;
                                      FUN_1007a770(piVar20 + 0x4c4,iVar11,param_2,0,0x800,0x200000,
                                                   0xc00000);
                                      FUN_1007a770(piVar20 + 0x4dc,iVar11,param_2,0,0x400,0x800000,
                                                   0x8000000);
                                      FUN_1007a770(piVar20 + 0x4f4,iVar11,param_2,0,0x400,0x400000,
                                                   0x4000000);
                                      FUN_1007a770(piVar20 + 0x50c,iVar11,param_2,0,0x400,0x800000,
                                                   0x4000000);
                                      FUN_1007a770(piVar20 + 0x524,iVar11,param_2,1,0x400,0x800000,
                                                   0x8000000);
                                      piVar20[0x54c] = 0x2000000;
                                      piVar20[0x54d] = 0;
                                      (*(code *)PTR_FUN_100a808c)(piVar20 + 0x550);
                                      piVar20[0x55e] = -1;
                                      piVar20[0x55f] = -1;
                                      piVar20[0x562] = 0x4000000;
                                      piVar20[0x563] = 0;
                                      (*(code *)PTR_FUN_100a808c)(piVar20 + 0x566);
                                      piVar20[0x574] = -1;
                                      piVar20[0x575] = -1;
                                      piVar20[0x542] = 0x400;
                                      piVar20[0x543] = 0x800000;
                                      piVar20[0x544] = 0;
                                      (*(code *)PTR_FUN_100a808c)(piVar20 + 0x53c);
                                      piVar20[0x57f] = (int)piVar14;
                                      piVar20[0x583] = (int)piVar14;
                                      piVar20[0x587] = (int)piVar14;
                                      piVar20[0x58b] = (int)piVar14;
                                      piVar20[0x58f] = (int)piVar14;
                                      piVar20[0x5a4] = *local_38c;
                                      piVar20[0x1c] = 1;
                                      piVar20[0x1d] = 0;
                                      piVar20[0xc] = -1;
                                      piVar20[0x10] = 0;
                                      piVar20[0x11] = 3;
                                      piVar20[0x1e] = 1;
                                      piVar20[0x1f] = 0;
                                      piVar20[0x22] = 1;
                                      piVar20[0x23] = 0;
                                      *(undefined1 *)(param_1 + 0x4e4) = 1;
                                      if ((*(int *)(param_1 + 0x2b8) == 0) ||
                                         (uVar17 = FUN_1007f150(FUN_1007f280), (uVar17 & 1) == 0)) {
                                        *(undefined8 *)(puVar15 + 6) = 0;
                                      }
                                      uVar12 = (*pcVar21)();
                                      (*extraout_w11_19)(uVar12,auStack_168);
                                      piVar20[1] = local_68;
                                      *piVar20 = local_33c;
                                      cVar10 = '\x01';
                                      uVar22 = 0;
                                      if (*(uint *)(param_1 + 0x518) == 0) {
                                        return 1;
                                      }
                                      do {
                                        if (cVar10 == '\0') goto LAB_10065230;
                                        uVar12 = (*pcVar21)();
                                        cVar10 = (*extraout_w11_20)(uVar12,param_2);
                                        uVar22 = uVar22 + 1;
                                      } while (uVar22 < *(uint *)(param_1 + 0x518));
                                      if (cVar10 != '\0') {
                                        return 1;
                                      }
LAB_10065230:
                                      FUN_10063bd8(param_1,param_2);
                                      FUN_10063e30(param_1,param_2);
                                      goto LAB_10065444;
                                    }
                                    iVar11 = *local_38c;
                                    if (iVar11 != 0) {
                                      FUN_10067380(iVar11);
                                      FUN_100833b0(iVar11,0x50);
                                    }
                                    *piVar2 = 0;
                                  }
                                  iVar11 = *piVar1;
                                  if (iVar11 != 0) {
                                    FUN_10067380(iVar11);
                                    FUN_100833b0(iVar11,0x50);
                                  }
                                  *piVar1 = 0;
                                }
                                iVar11 = *piVar8;
                                if (iVar11 != 0) {
                                  FUN_10067380(iVar11);
                                  FUN_100833b0(iVar11,0x50);
                                }
                                *piVar8 = 0;
                              }
                              iVar11 = *piVar14;
                              if (iVar11 != 0) {
                                FUN_10067380(iVar11);
                                FUN_100833b0(iVar11,0x50);
                              }
                              *piVar14 = 0;
                            }
                            FUN_100752c0(param_1,param_2);
                            goto LAB_100653b4;
                          }
                          iVar11 = *local_340;
                          if (iVar11 != 0) {
                            FUN_10061340(iVar11);
                            FUN_100833b0(iVar11,0x78);
                          }
                          *piVar1 = 0;
                        }
                        uVar12 = FUN_100833b0(*piVar14,8);
                        *piVar14 = 0;
                        *local_344 = 0;
                      }
                      uVar17 = FUN_10066718(uVar12,4,piVar8 + 0x5e8);
                    }
                    uVar17 = FUN_10066718(uVar17,0x2b,local_348);
                  }
                  FUN_10066718(uVar17,2,local_34c);
                }
                piVar14 = local_38c;
                uVar12 = (*pcVar21)();
                (*extraout_w11_21)(uVar12);
                *piVar14 = 0;
                piVar14 = local_38c;
              }
              local_38c = piVar14;
              piVar14 = local_390;
              uVar12 = (*pcVar21)();
              (*extraout_w11_22)(uVar12);
              *piVar14 = 0;
            }
LAB_100653b4:
            piVar14 = local_380;
            iVar11 = *local_380;
            if (iVar11 != 0) {
              FUN_100684a0(iVar11);
              FUN_100833b0(iVar11,0x968);
            }
            *piVar14 = 0;
          }
          piVar14 = local_384;
          iVar11 = *local_384;
          if (iVar11 != 0) {
            FUN_1005f600(iVar11);
            FUN_100833b0(iVar11,0x28);
          }
          *piVar14 = 0;
        }
        pcVar9 = local_394;
        iVar11 = *(int *)local_394;
        if (iVar11 != 0) {
          FUN_100684a0(iVar11);
          FUN_100833b0(iVar11,0x968);
        }
        *(int *)pcVar9 = 0;
      }
      piVar14 = local_398;
      iVar11 = *local_398;
      if (iVar11 != 0) {
        FUN_1005f600(iVar11);
        FUN_100833b0(iVar11,0x28);
      }
      *piVar14 = 0;
    }
LAB_10065444:
    FUN_1004b820(local_334);
  }
  piVar14 = local_350;
  uVar12 = (*pcVar21)();
  (*extraout_w11_23)(uVar12);
  *piVar14 = 0;
LAB_1006547c:
  *local_330 = *local_330 + -1;
  return 0;
}

