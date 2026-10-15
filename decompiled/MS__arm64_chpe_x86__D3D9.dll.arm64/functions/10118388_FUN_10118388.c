/*
 * FUN_10118388 at 10118388
 * undefined FUN_10118388(void)
 * Address ranges: 10118388-10118bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10118388(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,undefined8 *param_7,uint param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  unkbyte9 Var23;
  code *pcVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  unkbyte9 *pVar33;
  undefined8 *puVar34;
  unkbyte9 *pVar35;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  uint uVar39;
  undefined4 local_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  int *local_c0;
  longlong local_b8;
  longlong local_b0;
  int *local_a8;
  uint *local_a4;
  uint local_a0;
  undefined8 *local_98;
  undefined4 local_94;
  longlong local_90;
  longlong lStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pcVar24 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x8e0);
  if (*piVar1 == 0) {
    return 0;
  }
  local_a0 = param_3;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar26 = (*extraout_w11)(param_2,&local_80);
  iVar10 = *(int *)(iVar26 + 0x20);
  iVar27 = FUN_10112838(iVar10);
  iVar26 = FUN_101128f0(iVar10);
  if (iVar10 - 0x44U < 2) {
    uVar29 = 2;
  }
  else {
    if (iVar10 - 0x46U < 0xf) {
      uVar39 = 4;
      uVar29 = 4;
      goto LAB_10118464;
    }
    uVar29 = 1;
  }
  uVar39 = 1;
LAB_10118464:
  piVar2 = param_6 + 4;
  piVar3 = param_6 + 1;
  local_b8 = CONCAT44(local_b8._4_4_,piVar3);
  local_c0 = piVar2;
  local_a8 = piVar3;
  if (uVar39 == 0) {
                    /* WARNING: Does not return */
    uVar25 = SoftwareBreakpoint(0xf004,0x101184a4);
    (*(code *)uVar25)();
  }
  uVar14 = 0;
  if (uVar39 != 0) {
    uVar14 = (uint)(*piVar2 - *piVar3) / uVar39;
  }
  *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) + 1;
  FUN_10113dd8(param_1,param_2,local_a0,0,0x800);
  piVar4 = param_6 + 3;
  puVar5 = (uint *)(param_6 + 5);
  puVar6 = (uint *)(param_6 + 2);
  iVar12 = *piVar4 - *param_6;
  local_b0 = CONCAT44(local_b0._4_4_,puVar5);
  iVar13 = *puVar5 - *puVar6;
  local_a4 = puVar6;
  local_80 = param_2;
  if (iVar10 - 0x2cU < 2) {
    uVar29 = iVar12 * 4 + 0xff;
    uVar39 = uVar29 & 0xffffff00;
    uVar8 = iVar12 + 0xffU & 0xffffff00;
    uVar30 = iVar13 * uVar39 * uVar14;
    iVar26 = uVar30 + iVar13 * uVar8 * uVar14 + 0x200;
    uVar31 = FUN_1011d468(param_5,iVar26,&local_98);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
    FUN_10113dd8(param_1,local_94,0,1,0x400);
    FUN_10113dd8(param_1,param_2,param_4,0,0x800);
    FUN_10113068(param_1);
    uStack_7c = 0;
    local_78 = (ulonglong)local_a0;
    local_e8 = local_94;
    uStack_e4 = 1;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    local_e0 = (local_90 - lStack_88) + 0x1ffU & 0xfffffffffffffe00;
    iStack_d4 = *piVar4 - *param_6;
    iStack_d8 = 0x2a;
    _local_d0 = CONCAT44(*(int *)local_b0 - *puVar6,*local_c0 - *(int *)local_b8);
    local_c8 = (ulonglong)uVar29 & 0xffffffffffffff00;
    uVar28 = (*pcVar24)();
    (*extraout_w11_00)(uVar28,&local_e8,0,0,0,&local_80,param_6);
    local_e0 = ((ulonglong)uVar30 - lStack_88) + local_90 + 0x1ff & 0xfffffffffffffe00;
    _iStack_d8 = CONCAT44(iStack_d4,0x3e);
    local_78 = CONCAT44(local_78._4_4_,param_4);
    local_c8 = CONCAT44(local_c8._4_4_,iVar12 + 0xffU) & 0xffffffffffffff00;
    uVar28 = (*pcVar24)();
    (*extraout_w11_01)(uVar28,&local_e8,0,0,0,&local_80,param_6);
    uVar31 = FUN_10114608(param_1);
    uVar29 = FUN_10113d40(param_1 + 4,1);
    FUN_1011dc68(param_5,iVar26,local_90,lStack_88,*(undefined4 *)(*piVar1 + 0xc),
                 *(undefined8 *)(param_1 + 0x938));
    if (((uVar29 & 1) == 0) || (uVar31 == 0)) {
      FUN_1011f160(*(undefined4 *)(param_1 + 0x8e4),local_94,0);
    }
    else {
      while (uVar32 = FUN_10114528(param_1), uVar32 < uVar31) {
        DataMemoryBarrier(2,2);
        Yield();
      }
    }
    iVar26 = *piVar4;
    pVar35 = (unkbyte9 *)((int)local_98 + uVar30 + 0x1ff & 0xfffffe00);
    iVar10 = *param_6;
    uVar29 = *puVar6;
    if (uVar29 < *puVar5) {
      do {
        uVar30 = 0;
        if (uVar14 != 0) {
          uVar11 = (uint)(iVar26 - iVar10) >> 4;
          uVar9 = iVar26 - iVar10 & 0xf;
          puVar38 = param_7;
          do {
            uVar36 = 0;
            pVar33 = pVar35;
            puVar34 = local_98;
            puVar37 = puVar38;
            if (uVar11 != 0) {
              do {
                uVar22 = *(undefined8 *)((int)pVar33 + 8);
                Var23 = *pVar33;
                uVar36 = uVar36 + 1;
                pVar33 = pVar33 + 1;
                uVar17 = puVar34[3];
                uVar25 = puVar34[2];
                uVar18 = puVar34[5];
                uVar15 = puVar34[4];
                uVar19 = puVar34[7];
                uVar16 = puVar34[6];
                uVar21 = puVar34[1];
                uVar20 = *puVar34;
                puVar34 = puVar34 + 8;
                puVar37[1] = CONCAT17((char)((unkuint9)Var23 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar21 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar21 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar21 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x10),(int3)uVar21))
                                                       )));
                *puVar37 = CONCAT17((char)((unkuint9)Var23 >> 8),
                                    CONCAT16((char)((ulonglong)uVar20 >> 0x30),
                                             CONCAT15((char)((ulonglong)uVar20 >> 0x28),
                                                      CONCAT14((char)((ulonglong)uVar20 >> 0x20),
                                                               CONCAT13((char)Var23,(int3)uVar20))))
                                   );
                puVar37[3] = CONCAT17((char)((unkuint9)Var23 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar17 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar17 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar17 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x30),(int3)uVar17))
                                                       )));
                puVar37[2] = CONCAT17((char)((unkuint9)Var23 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar25 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar25 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar25 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x20),(int3)uVar25))
                                                       )));
                puVar37[5] = CONCAT17((char)((ulonglong)uVar22 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar18 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar18 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar18 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x10),
                                                                          (int3)uVar18)))));
                puVar37[4] = CONCAT17((char)((ulonglong)uVar22 >> 8),
                                      CONCAT16((char)((ulonglong)uVar15 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar15 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar15 >> 0x20),
                                                                 CONCAT13((char)uVar22,(int3)uVar15)
                                                                ))));
                puVar37[7] = CONCAT17((char)((ulonglong)uVar22 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar19 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar19 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar19 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x30),
                                                                          (int3)uVar19)))));
                puVar37[6] = CONCAT17((char)((ulonglong)uVar22 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar16 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar16 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar16 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x20),
                                                                          (int3)uVar16)))));
                puVar37 = puVar37 + 8;
              } while (uVar36 < uVar11);
            }
            uVar36 = 0;
            if (uVar9 != 0) {
              do {
                iVar27 = uVar36 * 4;
                pbVar7 = (byte *)(uVar36 + (int)pVar33);
                iVar12 = uVar36 * 4;
                uVar36 = uVar36 + 1;
                *(uint *)((int)puVar37 + iVar12) =
                     *(uint *)((int)puVar34 + iVar27) & 0xffffff | (uint)*pbVar7 << 0x18;
              } while (uVar36 < uVar9);
            }
            uVar30 = uVar30 + 1;
            local_98 = (undefined8 *)((int)local_98 + uVar39);
            pVar35 = (unkbyte9 *)((int)pVar35 + uVar8);
            puVar38 = (undefined8 *)((int)puVar38 + param_8);
          } while (uVar30 < uVar14);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < *puVar5);
    }
  }
  else {
    if (iVar26 == 0) {
      iVar26 = iVar27;
    }
    if (uVar29 == 0) {
                    /* WARNING: Does not return */
      uVar25 = SoftwareBreakpoint(0xf004,0x10118950);
      (*(code *)uVar25)();
    }
    uVar8 = 0;
    if (uVar29 != 0) {
      uVar8 = (uint)(iVar26 * iVar12) / uVar29;
    }
    uVar29 = uVar8 + 0xff & 0xffffff00;
    iVar26 = iVar13 * uVar29 * uVar14;
    uVar31 = FUN_1011d468(param_5,iVar26,&local_98);
    if ((uVar31 & 1) == 0) {
      return 0;
    }
    FUN_10113dd8(param_1,local_94,0,1,0x400);
    FUN_10113068(param_1);
    local_e8 = local_94;
    uStack_e4 = 1;
    uStack_7c = 0;
    local_e0 = local_90 - lStack_88;
    local_b8 = local_90;
    local_b0 = lStack_88;
    local_c8 = (ulonglong)(uVar8 + 0xff) & 0xffffffffffffff00;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    _iStack_d8 = CONCAT44(*piVar4 - *param_6,iVar10);
    local_78 = (ulonglong)local_a0;
    _local_d0 = CONCAT44(*puVar5 - *local_a4,*piVar2 - *local_a8);
    uVar28 = (*pcVar24)();
    (*extraout_w11_02)(uVar28,&local_e8,0,0,0,&local_80,param_6);
    uVar31 = FUN_10114608(param_1);
    uVar30 = FUN_10113d40(param_1 + 4,1);
    FUN_1011dc68(param_5,iVar26,local_b8,local_b0,*(undefined4 *)(*piVar1 + 0xc),
                 *(undefined8 *)(param_1 + 0x938));
    if (((uVar30 & 1) == 0) || (uVar31 == 0)) {
      FUN_1011f160(*(undefined4 *)(param_1 + 0x8e4),local_94,0);
    }
    else {
      while (uVar32 = FUN_10114528(param_1), uVar32 < uVar31) {
        DataMemoryBarrier(2,2);
        Yield();
      }
    }
    if (param_8 == uVar29 && uVar8 == param_8) {
      uVar30 = *puVar6;
      puVar38 = local_98;
      if (uVar30 < *puVar5) {
        do {
          uVar9 = 0;
          if (uVar39 != 0) {
            uVar9 = ((*piVar2 - *piVar3) * uVar8) / uVar39;
          }
          FUN_101325a0(param_7,puVar38,uVar9);
          uVar30 = uVar30 + 1;
          puVar38 = (undefined8 *)((int)puVar38 + uVar14 * uVar29);
        } while (uVar30 < *puVar5);
      }
    }
    else {
      uVar39 = *puVar6;
      if (uVar39 < *puVar5) {
        do {
          uVar30 = 0;
          puVar38 = local_98;
          if (uVar14 != 0) {
            do {
              FUN_101325a0(param_7,puVar38,uVar8);
              uVar30 = uVar30 + 1;
              puVar38 = (undefined8 *)((int)puVar38 + uVar29);
              local_98 = puVar38;
            } while (uVar30 < uVar14);
          }
          uVar39 = uVar39 + 1;
        } while (uVar39 < *puVar5);
      }
    }
  }
  return 1;
}

