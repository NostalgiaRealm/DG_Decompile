/*
 * FUN_101261d0 at 101261d0
 * undefined FUN_101261d0(void)
 * Address ranges: 101261d0-101276fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10126aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101261d0(int *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar19;
  byte bVar20;
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
  int *piVar21;
  uint uVar22;
  int *piVar23;
  code *pcVar24;
  uint local_39c;
  int *local_398;
  int *local_394;
  code *local_390;
  int *local_38c;
  int *local_388;
  int *local_384;
  int *local_380;
  int *local_37c;
  int *local_378 [2];
  undefined8 local_370;
  undefined4 uStack_368;
  uint uStack_364;
  int *local_350;
  int *local_34c;
  int *local_348;
  int *local_344;
  int local_340;
  int *local_33c;
  int *local_338;
  int *local_334;
  undefined8 local_330;
  undefined8 local_328;
  int local_320;
  int local_31c;
  undefined8 local_318;
  undefined8 local_310 [2];
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
  
  piVar5 = param_1 + (int)param_2 * 10 + 6;
  local_334 = param_1 + (int)param_2 * 10 + 9;
  iVar13 = *local_334;
  *local_334 = iVar13 + 1;
  pcVar24 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar13 + 1 != 1) {
    return 1;
  }
  piVar2 = param_1 + (int)param_2 * 6;
  local_350 = piVar2 + 0x148;
  local_344 = piVar2;
  local_340 = param_3;
  local_33c = piVar5;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar13 = (*extraout_w11)(*piVar5,extraout_x1 & 0xffffffff,&DAT_101661b8,piVar2 + 0x148);
  if (iVar13 < 0) goto LAB_101276c0;
  piVar9 = param_1 + (int)param_2 * 0x5b0;
  piVar23 = piVar9 + 0x1b0;
  local_388 = piVar9;
  uVar14 = (*pcVar24)(*piVar5,extraout_x1_00,piVar2 + 0x149);
  (*extraout_w11_00)(uVar14,&DAT_1015e5d0);
  local_380 = (int *)0x0;
  *(undefined1 *)((int)piVar2 + 0x535) = 0;
  uVar14 = (*pcVar24)();
  (*extraout_w11_01)(uVar14,&DAT_1015e5c0,&local_380);
  local_384 = (int *)0x0;
  uVar14 = (*pcVar24)();
  iVar13 = (*extraout_w11_02)(uVar14,&DAT_101661c8,&local_384);
  if (-1 < iVar13) {
    uVar14 = (*pcVar24)();
    (*extraout_w11_03)(uVar14,auStack_290);
    uVar14 = (*pcVar24)();
    (*extraout_w11_04)(uVar14,&local_320);
    if ((local_320 != local_174) || (uVar19 = 1, local_31c != local_170)) {
      uVar19 = 0;
    }
    *(undefined1 *)((int)piVar2 + 0x535) = uVar19;
    uVar14 = (*pcVar24)();
    (*extraout_w11_05)(uVar14);
  }
  uVar14 = (*pcVar24)();
  (*extraout_w11_06)(uVar14);
  uVar14 = (*pcVar24)();
  (*extraout_w11_07)(uVar14);
  uStack_2f8 = 0;
  local_300 = 0;
  uVar14 = (*pcVar24)();
  (*extraout_w11_08)(uVar14,1,&local_300,0x10);
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_298 = 0;
  uVar14 = (*pcVar24)();
  (*extraout_w11_09)(uVar14,0,&local_2d0,0x3c);
  local_318 = 0;
  uVar14 = (*pcVar24)();
  (*extraout_w11_10)(uVar14,0x12,&local_318,8);
  uStack_2e8 = 0;
  local_2f0 = 0;
  local_2e0 = 0;
  uVar14 = (*pcVar24)();
  (*extraout_w11_11)(uVar14,0x15,&local_2f0,0x14);
  local_328 = 0;
  uVar14 = (*pcVar24)();
  iVar13 = (*extraout_w11_12)(uVar14,0x2c,&local_328,8);
  if (iVar13 < 0) {
    local_328 = 0;
  }
  local_330 = 0;
  uVar14 = (*pcVar24)();
  iVar15 = (*extraout_w11_13)(uVar14,0x2d,&local_330,8);
  iVar13 = 0;
  if (-1 < iVar15) {
    iVar13 = local_330._4_4_;
  }
  local_330 = CONCAT44(iVar13,(undefined4)local_330);
  if (((int)uStack_2f8 == 0) || (uStack_2f8._4_4_ == 0)) {
    uVar19 = 0;
  }
  else {
    uVar19 = 1;
  }
  *(undefined1 *)(local_350 + 4) = uVar19;
  *(bool *)((int)local_350 + 0x11) = uStack_2c0._4_4_ != 0;
  *(bool *)((int)local_350 + 0x12) = 0 < local_318._4_4_;
  *(bool *)((int)local_350 + 0x13) = 0xbfff < local_340 && (int)local_328 != 0;
  local_350[3] = (int)uStack_2e8;
  *(bool *)(local_350 + 5) = iVar13 != 0;
  piVar5 = piVar9 + 0x620;
  local_348 = (int *)((int)piVar9 + 0x19af);
  local_338 = piVar5;
  if (*(char *)local_348 == '\0') {
    piVar2 = piVar9 + 0x666;
    piVar2[0] = 0x4000;
    piVar2[1] = 0;
    *(undefined1 *)((int)piVar9 + 0x19ad) = 1;
    *(undefined1 *)((int)piVar9 + 0x19ae) = 0;
    piVar9[0x66e] = 0;
    piVar9[0x66c] = 0;
    piVar9[0x66d] = 0;
    *piVar5 = 0;
    piVar21 = piVar9 + 0x630;
    *(undefined1 *)(piVar9 + 0x66b) = 1;
    iVar13 = (*(code *)PTR_FUN_1016c0c4)(s_KernelBase_dll_10166810);
    *piVar21 = iVar13;
    iVar13 = (*(code *)PTR_FUN_1016c0c4)(s___Kernel32_dll_101667fe + 2);
    piVar9[0x631] = iVar13;
    if (*piVar21 != 0) {
      iVar13 = (*(code *)PTR_FUN_1016c0a0)(*piVar21,s_WakeByAddressAll_10166830);
      piVar9[0x632] = iVar13;
      iVar13 = (*(code *)PTR_FUN_1016c0a0)(*piVar21,s_WaitOnAddress_10166820);
      piVar9[0x633] = iVar13;
      if ((piVar9[0x632] != 0) && (iVar13 != 0)) {
        local_390 = pcVar24;
        uVar22 = 0;
        local_398 = param_1;
        local_394 = param_2;
        local_38c = piVar23;
        do {
          iVar13 = FUN_101322b0(*piVar2 + 0x10);
          piVar9[uVar22 * 5 + 0x63c] = iVar13;
          param_2 = local_394;
          piVar23 = local_38c;
          pcVar24 = local_390;
          param_1 = local_398;
          if (iVar13 == 0) {
LAB_101268e8:
            (piVar5 + uVar22 * 5 + 0x1b)[0] = 0;
            (piVar5 + uVar22 * 5 + 0x1b)[1] = 0;
            (piVar5 + uVar22 * 5 + 0x19)[0] = 0;
            (piVar5 + uVar22 * 5 + 0x19)[1] = 0;
            piVar5[uVar22 * 5 + 0x1d] = 0;
            break;
          }
          puVar3 = (undefined8 *)(iVar13 + 0xfU & 0xfffffff0);
          piVar21 = piVar5 + uVar22 * 5 + 0x1b;
          *piVar21 = (int)puVar3;
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
          iVar13 = *piVar21;
          piVar5[(uVar22 + 5) * 5] = iVar13;
          piVar5[uVar22 * 5 + 0x1a] = iVar13;
          iVar13 = (*(code *)PTR_FUN_1016c04c)(0,1,1,0);
          piVar23 = local_38c;
          pcVar24 = local_390;
          param_2 = local_394;
          param_1 = local_398;
          piVar5[uVar22 * 5 + 0x1d] = iVar13;
          if (iVar13 == 0) {
            FUN_101322d0(*piVar21);
            goto LAB_101268e8;
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < 8);
        if (uVar22 == 8) {
          iVar13 = FUN_101322b0(*piVar2 + 0x10);
          piVar9[0x664] = iVar13;
          if (iVar13 == 0) {
LAB_10126904:
            iVar13 = uVar22 * 0x14;
            local_398 = param_1;
            local_394 = param_2;
            local_390 = pcVar24;
            do {
              (*(code *)PTR_FUN_1016c048)(*(undefined4 *)((int)piVar9 + iVar13 + 0x18e0));
              FUN_101322d0(*(undefined4 *)((int)piVar9 + iVar13 + 0x18dc));
              puVar3 = (undefined8 *)((int)piVar9 + iVar13 + 0x18d0);
              uVar22 = uVar22 - 1;
              iVar13 = iVar13 + -0x14;
              puVar3[1] = 0;
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 2) = 0;
            } while (uVar22 != 0);
            uVar22 = 0;
            param_2 = local_394;
            pcVar24 = local_390;
            param_1 = local_398;
            goto LAB_10126964;
          }
          puVar3 = (undefined8 *)(iVar13 + 0xfU & 0xfffffff0);
          piVar9[0x663] = (int)puVar3;
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
          iVar13 = (*(code *)PTR_FUN_1016c050)(0,0,0,0);
          piVar9[0x638] = iVar13;
          if (iVar13 == 0) {
LAB_101268ac:
            FUN_101322d0(piVar9[0x664]);
            piVar9[0x663] = 0;
            piVar9[0x664] = 0;
            piVar9[0x661] = 0;
            piVar9[0x662] = 0;
            piVar9[0x665] = 0;
            goto LAB_10126904;
          }
          iVar13 = (*(code *)PTR_FUN_1016c09c)(0);
          uVar14 = 0x40000;
          if (0x3ffff < *(uint *)(*(int *)(iVar13 + 0x3c) + iVar13 + 0x60)) {
            uVar14 = 0;
          }
          iVar13 = (*(code *)PTR_FUN_1016c064)(0,uVar14,FUN_10130a90,piVar5,0,0);
          piVar9[0x637] = iVar13;
          if (iVar13 == 0) {
            (*(code *)PTR_FUN_1016c048)(piVar9[0x638]);
            goto LAB_101268ac;
          }
        }
        else {
          if (uVar22 != 0) goto LAB_10126904;
LAB_10126964:
          (*(code *)PTR_FUN_1016c07c)(piVar9[0x630]);
          piVar9[0x632] = 0;
          piVar9[0x633] = 0;
          (*(code *)PTR_FUN_1016c07c)(piVar9[0x631]);
          piVar9[0x634] = 0;
          piVar9[0x630] = 0;
          piVar9[0x631] = 0;
        }
        *(bool *)((int)piVar9 + 0x19af) = uVar22 == 8;
      }
    }
    if (piVar9[0x631] != 0) {
      iVar13 = (*(code *)PTR_FUN_1016c0a0)(piVar9[0x631],s_GetSystemCpuSetInformation_10166848);
      puVar1 = (uint *)(piVar9 + 0x635);
      piVar9[0x634] = iVar13;
      puVar1[0] = 0;
      puVar1[1] = 0;
      if (iVar13 != 0) {
        local_34c = (int *)0x0;
        local_37c = (int *)0x0;
        uVar14 = (*(code *)PTR_FUN_1016c080)();
        iVar13 = (*(code *)PTR_FUN_1016c0a4)(uVar14,&local_34c,&local_37c);
        if (iVar13 != 0) {
          uVar14 = (*(code *)PTR_FUN_1016c084)();
          iVar13 = (*(code *)PTR_FUN_1016c0ac)(uVar14,&local_370);
          if ((iVar13 != 0) && (local_37c != (int *)0x0)) {
            local_39c = 0;
            (*(code *)PTR_FUN_1016c080)();
            (*pcVar24)();
            (*extraout_w11_14)(0,0,&local_39c);
            local_39c = local_39c >> 5;
            if (local_39c != 0) {
              iVar13 = FUN_101322b0(local_39c * 0x20);
              if (iVar13 != 0) {
                local_38c = (int *)(local_39c << 5);
                (*(code *)PTR_FUN_1016c080)();
                (*pcVar24)();
                iVar15 = (*extraout_w11_15)(iVar13,local_38c,&local_39c);
                if (iVar15 != 0) {
                  bVar20 = 0;
                  local_39c = local_39c >> 5;
                  uVar22 = 0;
                  if (local_39c != 0) {
                    do {
                      if ((*(short *)(iVar13 + 0xc + uVar22 * 0x20) == local_370._4_2_) &&
                         (bVar7 = *(byte *)(iVar13 + uVar22 * 0x20 + 0x12), bVar20 <= bVar7)) {
                        bVar20 = bVar7;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < local_39c);
                  }
                  uVar22 = 0;
                  if (local_39c != 0) {
                    do {
                      if (*(short *)(iVar13 + 0xc + uVar22 * 0x20) == local_370._4_2_) {
                        iVar15 = iVar13 + uVar22 * 0x20;
                        uVar8 = 1 << (ulonglong)(*(byte *)(iVar15 + 0xe) & 0x1f);
                        uVar4 = uVar8;
                        if (bVar20 <= *(byte *)(iVar15 + 0x12)) {
                          uVar4 = 0;
                        }
                        *puVar1 = uVar4 | *puVar1;
                        piVar9[0x636] = piVar9[0x636] | uVar8;
                      }
                      uVar22 = uVar22 + 1;
                    } while (uVar22 < local_39c);
                  }
                }
              }
              FUN_10132260(iVar13,0x20);
            }
          }
        }
      }
    }
  }
  if ((char)*local_348 != '\0') {
    if (((local_344[0x14b] & 1U) != 0) || (((uint)local_344[0x14b] >> 2 & 1) != 0)) {
      piVar5 = (int *)0x0;
      if (param_1 != (int *)0x0) {
        piVar5 = param_1 + 0x148;
      }
      puVar16 = (undefined4 *)FUN_101321c0(0x10);
      if (puVar16 == (undefined4 *)0x0) {
LAB_10126cc0:
        puVar16 = (undefined4 *)0x0;
      }
      else {
        *puVar16 = piVar5;
        puVar16[1] = param_2;
        *(undefined8 *)(puVar16 + 2) = 0;
        uVar18 = FUN_10112948(*puVar16,puVar16[1],0x101661e8,0,&DAT_10166200,0x400,0);
        if ((uVar18 & 1) == 0) {
          FUN_1012a5b0(puVar16);
          FUN_10132260(puVar16,0x10);
          goto LAB_10126cc0;
        }
        local_310[0] = 0;
        local_378[0] = (int *)0x0;
        uVar14 = (*pcVar24)();
        (*extraout_w11_16)(uVar14,0,local_310,local_378);
      }
      piVar23[0x57b] = (int)puVar16;
    }
    piVar5 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      piVar5 = param_1 + 0x148;
    }
    iVar13 = FUN_1011b760(piVar5,param_2,0,&DAT_101660f8);
    local_398 = piVar23 + 0x4c0;
    *local_398 = iVar13;
    if (iVar13 != 0) {
      local_37c = param_1 + 0x5cb0;
      iVar13 = FUN_101132b8(piVar5,param_2,iVar13,0,*local_37c);
      local_394 = piVar23 + 0x4c1;
      *local_394 = iVar13;
      if (iVar13 != 0) {
        iVar13 = FUN_1011b760(piVar5,param_2,3,&DAT_10166158);
        local_390 = (code *)(piVar23 + 0x4c2);
        *(int *)local_390 = iVar13;
        if (iVar13 != 0) {
          iVar13 = FUN_101132b8(piVar5,param_2,iVar13,3,*local_37c);
          local_384 = piVar23 + 0x4c3;
          *local_384 = iVar13;
          if (iVar13 != 0) {
            if ((DAT_10175c80 & 1) == 0) {
              DAT_10175c80 = DAT_10175c80 | 1;
              lRam10175c08 = (ulonglong)uStack_364 << 0x20;
              _DAT_10175c00 = 0x200000002;
              uRam10175c1c = CONCAT44(uStack_364,&DAT_1016fb28);
              DAT_10175c10 = 0;
              _DAT_10175c14 = 0x100000000;
              DAT_10175c24 = 5;
              lRam10175c30 = (ulonglong)uStack_364 << 0x20;
              local_370 = 0x200000003;
              uStack_368 = 0;
              _DAT_10175c28 = 0x100000003;
              lRam10175c44 = (ulonglong)uStack_364 << 0x20;
              DAT_10175c38 = 5;
              _DAT_10175c3c = 0x200000003;
              DAT_10175c4c = 5;
            }
            (*pcVar24)();
            iVar13 = (*extraout_w11_17)(param_1 + 0x143,param_2,1,&DAT_1016f9f0,0);
            local_380 = local_388 + 0x1b4;
            *local_380 = iVar13;
            if (iVar13 != 0) {
              if ((DAT_10175c84 & 1) == 0) {
                DAT_10175c84 = DAT_10175c84 | 1;
                uRam10175bb8 = CONCAT44(uStack_364,&DAT_1016fa98);
                _DAT_10175bb0 = 0x100000000;
                lRam10175bcc = (ulonglong)uStack_364 << 0x20;
                DAT_10175bc0 = 0;
                _DAT_10175bc4 = 0x100000003;
                lRam10175be0 = (ulonglong)uStack_364 << 0x20;
                DAT_10175bd4 = 0;
                uStack_368 = 0;
                _DAT_10175bd8 = 0x200000003;
                DAT_10175be8 = 0;
                local_370 = 4;
                lRam10175bf4 = (ulonglong)uStack_364 << 0x20;
                _DAT_10175bec = 4;
                DAT_10175bfc = 0;
              }
              (*pcVar24)();
              uVar17 = (*extraout_w11_18)(param_1 + 0x143,param_2,1,&DAT_1016fb10,0);
              piVar2 = local_388;
              local_38c = local_388 + 0x1d0;
              *local_38c = (int)uVar17;
              if ((int)uVar17 == 0) {
LAB_101275c8:
                piVar21 = local_380;
                uVar14 = (*pcVar24)();
                (*extraout_w11_22)(uVar14);
              }
              else {
                piVar9 = param_1 + 0xa6;
                local_388 = local_388 + 0x617;
                uVar18 = FUN_10119520(uVar17,*piVar9,2,&DAT_1016fa24,local_388);
                if ((uVar18 & 1) == 0) {
LAB_10127598:
                  piVar5 = local_38c;
                  uVar14 = (*pcVar24)();
                  (*extraout_w11_21)(uVar14);
                  *piVar5 = 0;
                  goto LAB_101275c8;
                }
                local_34c = piVar2 + 0x5ec;
                uVar18 = FUN_10119520(uVar18,*piVar9,0x2b,&DAT_1016fab0,local_34c);
                if ((uVar18 & 1) == 0) {
LAB_1012758c:
                  FUN_10119648(uVar18,2,local_388);
                  goto LAB_10127598;
                }
                local_348 = piVar2 + 0x5e8;
                uVar18 = FUN_10119520(uVar18,*piVar9,4,&DAT_1016fb08,local_348);
                if ((uVar18 & 1) == 0) {
LAB_10127580:
                  uVar18 = FUN_10119648(uVar18,0x2b,local_34c);
                  goto LAB_1012758c;
                }
                puVar16 = (undefined4 *)FUN_101321c0(8);
                local_378[0] = piVar2 + 0x61a;
                *local_378[0] = (int)puVar16;
                piVar9 = piVar2 + 0x619;
                *piVar9 = (int)puVar16;
                uVar14 = 0;
                if (puVar16 == (undefined4 *)0x0) {
LAB_10127574:
                  uVar18 = FUN_10119648(uVar14,4,local_348);
                  goto LAB_10127580;
                }
                *puVar16 = &PTR_s_POSITION_1016fa08;
                *(undefined4 *)(*piVar9 + 4) = 1;
                iVar13 = FUN_1011bb08(piVar5,param_2,piVar2 + 0x674,0x1040,0);
                piVar21 = piVar2 + 0x1b3;
                *piVar21 = iVar13;
                if (iVar13 == 0) {
LAB_1012755c:
                  uVar14 = FUN_10132260(*piVar9,8);
                  *piVar9 = 0;
                  *local_378[0] = 0;
                  goto LAB_10127574;
                }
                piVar6 = (int *)0x0;
                if (param_1 != (int *)0x0) {
                  piVar6 = param_1 + 0x142;
                }
                iVar13 = FUN_1011bb08(piVar5,param_2,piVar2 + 0x68c,0x200,piVar6);
                local_344 = piVar2 + 0x1b2;
                *local_344 = iVar13;
                if (iVar13 == 0) {
                  if (*piVar21 != 0) {
                    FUN_100557b0(*piVar21,1);
                  }
                  *piVar21 = 0;
                  goto LAB_1012755c;
                }
                iVar13 = FUN_10111b20(piVar5,param_2,0);
                local_378[0] = piVar23 + 0x576;
                *local_378[0] = iVar13;
                if (iVar13 != 0) {
                  iVar13 = FUN_10111b20(piVar5,param_2,2);
                  piVar2 = piVar23 + 0x577;
                  *piVar2 = iVar13;
                  if (iVar13 != 0) {
                    iVar13 = FUN_10111b20(piVar5,param_2,3);
                    piVar9 = piVar23 + 0x578;
                    *piVar9 = iVar13;
                    if (iVar13 != 0) {
                      iVar13 = FUN_10111b20(piVar5,param_2,1);
                      local_388 = piVar23 + 0x579;
                      *local_388 = iVar13;
                      if (iVar13 != 0) {
                        iVar13 = FUN_1011fd58(piVar5,param_2,0,0x100,1);
                        piVar11 = local_33c;
                        piVar6 = local_388;
                        piVar23[0x57a] = iVar13;
                        if (iVar13 != 0) {
                          piVar2 = piVar23 + 0x590;
                          *piVar2 = *local_37c;
                          piVar23[0x591] = (int)piVar5;
                          piVar23[0x592] = (int)param_2;
                          piVar23[0x59a] = *local_37c;
                          piVar23[0x59b] = (int)piVar5;
                          piVar23[0x59c] = (int)param_2;
                          FUN_1011cbf0(piVar23 + 0x4c4,piVar5,param_2,0,0x800,0x200000,0xc00000);
                          FUN_1011cbf0(piVar23 + 0x4dc,piVar5,param_2,0,0x400,0x800000,0x8000000);
                          FUN_1011cbf0(piVar23 + 0x4f4,piVar5,param_2,0,0x400,0x400000,0x4000000);
                          FUN_1011cbf0(piVar23 + 0x50c,piVar5,param_2,0,0x400,0x800000,0x4000000);
                          FUN_1011cbf0(piVar23 + 0x524,piVar5,param_2,1,0x400,0x800000,0x8000000);
                          piVar23[0x54c] = 0x2000000;
                          piVar23[0x54d] = 0;
                          (*(code *)PTR_FUN_1016c0bc)(piVar23 + 0x550);
                          piVar23[0x55e] = -1;
                          piVar23[0x55f] = -1;
                          piVar23[0x562] = 0x4000000;
                          piVar23[0x563] = 0;
                          (*(code *)PTR_FUN_1016c0bc)(piVar23 + 0x566);
                          piVar23[0x574] = -1;
                          piVar23[0x575] = -1;
                          piVar23[0x542] = 0x400;
                          piVar23[0x543] = 0x800000;
                          piVar23[0x544] = 0;
                          (*(code *)PTR_FUN_1016c0bc)(piVar23 + 0x53c);
                          piVar23[0x57f] = (int)piVar2;
                          piVar23[0x583] = (int)piVar2;
                          piVar23[0x587] = (int)piVar2;
                          piVar23[0x58b] = (int)piVar2;
                          piVar23[0x58f] = (int)piVar2;
                          piVar23[0x5a4] = *local_388;
                          piVar23[0x1c] = 1;
                          piVar23[0x1d] = 0;
                          piVar23[0xc] = -1;
                          piVar23[0x10] = 0;
                          piVar23[0x11] = 3;
                          piVar23[0x1e] = 1;
                          piVar23[0x1f] = 0;
                          piVar23[0x22] = 1;
                          piVar23[0x23] = 0;
                          *(undefined1 *)(param_1 + 0x139) = 1;
                          if ((param_1[0xae] == 0) ||
                             (uVar18 = switchD_10123638::caseD_10123670(FUN_101237a0),
                             (uVar18 & 1) == 0)) {
                            piVar11[6] = 0;
                            piVar11[7] = 0;
                          }
                          uVar14 = (*pcVar24)();
                          (*extraout_w11_19)(uVar14,auStack_168);
                          piVar23[1] = local_68;
                          *piVar23 = local_340;
                          cVar12 = '\x01';
                          uVar22 = 0;
                          if (param_1[0x146] == 0) {
                            return 1;
                          }
                          do {
                            if (cVar12 == '\0') goto LAB_10127460;
                            uVar14 = (*pcVar24)();
                            cVar12 = (*extraout_w11_20)(uVar14,param_2);
                            uVar22 = uVar22 + 1;
                          } while (uVar22 < (uint)param_1[0x146]);
                          if (cVar12 != '\0') {
                            return 1;
                          }
LAB_10127460:
                          FUN_10125df8(param_1,param_2);
                          FUN_10126068(param_1,param_2);
                          goto LAB_10127688;
                        }
                        iVar13 = *local_388;
                        if (iVar13 != 0) {
                          FUN_10111860(iVar13);
                          FUN_10132260(iVar13,0x50);
                        }
                        *piVar6 = 0;
                      }
                      iVar13 = *piVar9;
                      if (iVar13 != 0) {
                        FUN_10111860(iVar13);
                        FUN_10132260(iVar13,0x50);
                      }
                      *piVar9 = 0;
                    }
                    iVar13 = *piVar2;
                    if (iVar13 != 0) {
                      FUN_10111860(iVar13);
                      FUN_10132260(iVar13,0x50);
                    }
                    *piVar2 = 0;
                  }
                  piVar5 = local_378[0];
                  iVar13 = *local_378[0];
                  if (iVar13 != 0) {
                    FUN_10111860(iVar13);
                    FUN_10132260(iVar13,0x50);
                  }
                  *piVar5 = 0;
                }
                piVar5 = local_344;
                if (*local_344 != 0) {
                  FUN_100557b0(*local_344,1);
                }
                iVar13 = *piVar21;
                *piVar5 = 0;
                if (iVar13 != 0) {
                  FUN_100557b0(iVar13,1);
                }
              }
              *piVar21 = 0;
            }
            piVar5 = local_384;
            iVar13 = *local_384;
            if (iVar13 != 0) {
              FUN_10112db0(iVar13);
              FUN_10132260(iVar13,0x968);
            }
            *piVar5 = 0;
          }
          pcVar10 = local_390;
          iVar13 = *(int *)local_390;
          if (iVar13 != 0) {
            FUN_1011b6d0(iVar13);
            FUN_10132260(iVar13,0x28);
          }
          *(int *)pcVar10 = 0;
        }
        piVar5 = local_394;
        iVar13 = *local_394;
        if (iVar13 != 0) {
          FUN_10112db0(iVar13);
          FUN_10132260(iVar13,0x968);
        }
        *piVar5 = 0;
      }
      piVar5 = local_398;
      iVar13 = *local_398;
      if (iVar13 != 0) {
        FUN_1011b6d0(iVar13);
        FUN_10132260(iVar13,0x28);
      }
      *piVar5 = 0;
    }
LAB_10127688:
    FUN_10130e60(local_338);
  }
  piVar5 = local_350;
  uVar14 = (*pcVar24)();
  (*extraout_w11_23)(uVar14);
  *piVar5 = 0;
LAB_101276c0:
  *local_334 = *local_334 + -1;
  return 0;
}

