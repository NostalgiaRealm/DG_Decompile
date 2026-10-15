/*
 * FUN_18020b9c8 at 18020b9c8
 * undefined FUN_18020b9c8(void)
 * Address ranges: 18020b9c8-18020c073;18020c08c-18020c0bf;18020c0d4-18020c10b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18020b9c8(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined8 param_5
             ,int *param_6,undefined8 *param_7,uint param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  unkbyte9 Var15;
  undefined *puVar16;
  code *pcVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  unkbyte9 *pVar25;
  unkbyte9 *pVar26;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar16 = __hybrid_os_arm64x_dispatch_icall;
  uVar30 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    local_c8 = param_7;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    lVar22 = (*extraout_x11)(param_2,&local_98);
    iVar4 = *(int *)(lVar22 + 0x20);
    iVar19 = FUN_18020d208(iVar4);
    iVar20 = FUN_18020d2b0(iVar4);
    uVar21 = FUN_18020d308(iVar4);
    uVar31 = 1;
    if (iVar4 - 0x46U < 0xf) {
      uVar31 = 4;
    }
    if (uVar31 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(0xf004,0x18020ba94);
      (*pcVar17)();
    }
    uVar8 = 0;
    if (uVar31 != 0) {
      uVar8 = (uint)(param_6[4] - param_6[1]) / uVar31;
    }
    *(int *)(param_1 + 0x684) = *(int *)(param_1 + 0x684) + 1;
    FUN_180207cd0(param_1,param_2,param_3,0,0x800);
    iVar6 = param_6[3] - *param_6;
    iVar7 = param_6[5] - param_6[2];
    local_98 = param_2;
    if (iVar4 - 0x2cU < 2) {
      uVar21 = iVar6 * 4 + 0xff;
      uVar31 = uVar21 & 0xffffff00;
      uVar3 = iVar6 + 0xffU & 0xffffff00;
      iVar20 = iVar7 * (uVar3 + uVar31) * uVar8;
      local_d0 = CONCAT44(local_d0._4_4_,iVar20);
      uVar23 = FUN_18020fa48(param_5,iVar20 + 0x200,&local_b8);
      if ((uVar23 & 1) == 0) {
        return 0;
      }
      local_c0 = local_b0;
      FUN_180207cd0(param_1,local_b0,0,1,0x400);
      FUN_180207cd0(param_1,param_2,param_4,0,0x800);
      FUN_180206f40(param_1);
      local_88 = (ulonglong)param_3;
      local_100 = local_b0;
      local_f8 = 1;
      uStack_78 = 0;
      local_80 = 0;
      local_70 = 0;
      local_90 = 0;
      local_f0 = (local_a8 - lStack_a0) + 0x1ffU & 0xfffffffffffffe00;
      local_d8 = (ulonglong)uVar21 & 0xffffffffffffff00;
      iStack_e4 = param_6[3] - *param_6;
      iStack_e8 = 0x2a;
      _local_e0 = CONCAT44(param_6[5] - param_6[2],param_6[4] - param_6[1]);
      uVar30 = (*(code *)puVar16)(0x180225000);
      (*extraout_x11_00)(uVar30,&local_100,0,0,0,&local_98,param_6);
      local_88 = CONCAT44(local_88._4_4_,param_4);
      uVar23 = (ulonglong)(iVar7 * uVar31 * uVar8);
      local_f0 = (uVar23 - lStack_a0) + local_a8 + 0x1ff & 0xfffffffffffffe00;
      _iStack_e8 = CONCAT44(iStack_e4,0x3e);
      local_d8 = CONCAT44(local_d8._4_4_,iVar6 + 0xffU) & 0xffffffffffffff00;
      uVar30 = (*(code *)puVar16)(0x180225000);
      (*extraout_x11_01)(uVar30,&local_100,0,0,0,&local_98,param_6);
      lVar22 = FUN_180208508(param_1);
      iVar20 = *(int *)(param_1 + 0x684) + -1;
      *(int *)(param_1 + 0x684) = iVar20;
      if (iVar20 == 0) {
        cVar18 = FUN_180207560(param_1 + 8,0);
      }
      else {
        cVar18 = '\0';
      }
      FUN_180210140(param_5,(int)local_d0 + 0x200,local_a8,lStack_a0,
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(undefined8 *)(param_1 + 0xb78));
      if (cVar18 == '\0' || (cVar18 == '\0' || lVar22 == 0)) {
        FUN_18020e768(*(undefined8 *)(param_1 + 0xb18),local_c0,0);
      }
      else {
        FUN_1802085e0(param_1,lVar22);
      }
      iVar4 = *param_6;
      pVar25 = (unkbyte9 *)((longlong)local_b8 + uVar23 + 0x1ff & 0xfffffffffffffe00);
      uVar21 = param_6[2];
      iVar20 = param_6[3];
      if (uVar21 < (uint)param_6[5]) {
        do {
          if (uVar8 != 0) {
            uVar5 = (uint)(iVar20 - iVar4) >> 4;
            uVar29 = iVar20 - iVar4 & 0xf;
            uVar2 = uVar5;
            puVar1 = local_c8;
            uVar28 = uVar8;
            puVar27 = local_c8;
            pVar26 = pVar25;
            puVar24 = local_b8;
            do {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                uVar12 = *(undefined8 *)((longlong)pVar25 + 8);
                Var15 = *pVar25;
                uVar33 = local_b8[3];
                uVar32 = local_b8[2];
                uVar9 = local_b8[5];
                uVar30 = local_b8[4];
                uVar13 = local_b8[7];
                uVar10 = local_b8[6];
                uVar14 = local_b8[1];
                uVar11 = *local_b8;
                puVar1[1] = CONCAT17((char)((unkuint9)Var15 >> 0x18),
                                     CONCAT16((char)((ulonglong)uVar14 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar14 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar14 >> 0x20),
                                                                CONCAT13((char)((unkuint9)Var15 >>
                                                                               0x10),(int3)uVar14)))
                                             ));
                *puVar1 = CONCAT17((char)((unkuint9)Var15 >> 8),
                                   CONCAT16((char)((ulonglong)uVar11 >> 0x30),
                                            CONCAT15((char)((ulonglong)uVar11 >> 0x28),
                                                     CONCAT14((char)((ulonglong)uVar11 >> 0x20),
                                                              CONCAT13((char)Var15,(int3)uVar11)))))
                ;
                puVar1[3] = CONCAT17((char)((unkuint9)Var15 >> 0x38),
                                     CONCAT16((char)((ulonglong)uVar33 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar33 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar33 >> 0x20),
                                                                CONCAT13((char)((unkuint9)Var15 >>
                                                                               0x30),(int3)uVar33)))
                                             ));
                puVar1[2] = CONCAT17((char)((unkuint9)Var15 >> 0x28),
                                     CONCAT16((char)((ulonglong)uVar32 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar32 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar32 >> 0x20),
                                                                CONCAT13((char)((unkuint9)Var15 >>
                                                                               0x20),(int3)uVar32)))
                                             ));
                puVar1[5] = CONCAT17((char)((ulonglong)uVar12 >> 0x18),
                                     CONCAT16((char)((ulonglong)uVar9 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar9 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar9 >> 0x20),
                                                                CONCAT13((char)((ulonglong)uVar12 >>
                                                                               0x10),(int3)uVar9))))
                                    );
                puVar1[4] = CONCAT17((char)((ulonglong)uVar12 >> 8),
                                     CONCAT16((char)((ulonglong)uVar30 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar30 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar30 >> 0x20),
                                                                CONCAT13((char)uVar12,(int3)uVar30))
                                                      )));
                puVar1[7] = CONCAT17((char)((ulonglong)uVar12 >> 0x38),
                                     CONCAT16((char)((ulonglong)uVar13 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar13 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar13 >> 0x20),
                                                                CONCAT13((char)((ulonglong)uVar12 >>
                                                                               0x30),(int3)uVar13)))
                                             ));
                puVar1[6] = CONCAT17((char)((ulonglong)uVar12 >> 0x28),
                                     CONCAT16((char)((ulonglong)uVar10 >> 0x30),
                                              CONCAT15((char)((ulonglong)uVar10 >> 0x28),
                                                       CONCAT14((char)((ulonglong)uVar10 >> 0x20),
                                                                CONCAT13((char)((ulonglong)uVar12 >>
                                                                               0x20),(int3)uVar10)))
                                             ));
                local_b8 = local_b8 + 8;
                pVar25 = pVar25 + 1;
                puVar1 = puVar1 + 8;
              }
              uVar23 = 0;
              if (uVar29 != 0) {
                do {
                  *(uint *)((longlong)puVar1 + uVar23 * 4) =
                       *(uint *)((longlong)local_b8 + uVar23 * 4) & 0xffffff |
                       (uint)*(byte *)((longlong)pVar25 + uVar23) << 0x18;
                  uVar2 = (int)uVar23 + 1;
                  uVar23 = (ulonglong)uVar2;
                } while (uVar2 < uVar29);
              }
              local_b8 = (undefined8 *)((longlong)puVar24 + (ulonglong)uVar31);
              uVar28 = uVar28 - 1;
              pVar25 = (unkbyte9 *)((longlong)pVar26 + (ulonglong)uVar3);
              puVar1 = (undefined8 *)((longlong)puVar27 + (ulonglong)param_8);
              uVar2 = uVar5;
              puVar27 = puVar1;
              pVar26 = pVar25;
              puVar24 = local_b8;
            } while (uVar28 != 0);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)param_6[5]);
      }
    }
    else {
      if (iVar20 == 0) {
        iVar20 = iVar19;
      }
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(0xf004,0x18020bea0);
        (*pcVar17)();
      }
      uVar3 = 0;
      if (uVar21 != 0) {
        uVar3 = (uint)(iVar20 * iVar6) / uVar21;
      }
      uVar21 = uVar3 + 0xff & 0xffffff00;
      iVar20 = iVar7 * uVar21 * uVar8;
      uVar23 = FUN_18020fa48(param_5,iVar20,&local_b8);
      if ((uVar23 & 1) == 0) {
        return 0;
      }
      FUN_180207cd0(param_1,local_b0,0,1,0x400);
      FUN_180206f40(param_1);
      local_f8 = 1;
      local_100 = local_b0;
      local_90 = 0;
      local_f0 = local_a8 - lStack_a0;
      local_d0 = local_a8;
      local_88 = (ulonglong)param_3;
      uStack_78 = 0;
      local_80 = 0;
      local_70 = 0;
      local_c0 = lStack_a0;
      _iStack_e8 = CONCAT44(param_6[3] - *param_6,iVar4);
      _local_e0 = CONCAT44(param_6[5] - param_6[2],param_6[4] - param_6[1]);
      local_d8 = (ulonglong)(uVar3 + 0xff) & 0xffffffffffffff00;
      uVar30 = (*(code *)puVar16)(0x180225000);
      (*extraout_x11_02)(uVar30,&local_100,0,0,0,&local_98,param_6);
      lVar22 = FUN_180208508(param_1);
      iVar4 = *(int *)(param_1 + 0x684) + -1;
      *(int *)(param_1 + 0x684) = iVar4;
      if (iVar4 == 0) {
        cVar18 = FUN_180207560(param_1 + 8,0);
      }
      else {
        cVar18 = '\0';
      }
      FUN_180210140(param_5,iVar20,local_d0,local_c0,
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(undefined8 *)(param_1 + 0xb78));
      if (cVar18 == '\0' || (cVar18 == '\0' || lVar22 == 0)) {
        FUN_18020e768(*(undefined8 *)(param_1 + 0xb18),local_b0,0);
      }
      else {
        FUN_1802085e0(param_1,lVar22);
      }
      uVar29 = param_6[2];
      if (param_8 == uVar21 && uVar3 == param_8) {
        if (uVar29 < (uint)param_6[5]) {
          uVar21 = 0;
          if (uVar31 != 0) {
            uVar21 = ((param_6[4] - param_6[1]) * uVar3) / uVar31;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(local_c8,local_b8,uVar21);
        }
      }
      else if (uVar29 < (uint)param_6[5]) {
        do {
          if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(local_c8,local_b8,uVar3);
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < (uint)param_6[5]);
      }
    }
    uVar30 = 1;
  }
  return uVar30;
}

