/*
 * FUN_1800ebed8 at 1800ebed8
 * undefined FUN_1800ebed8(void)
 * Address ranges: 1800ebed8-1800ec593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800ebed8(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,undefined8 param_5,
             int *param_6,undefined8 *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  unkbyte9 Var16;
  undefined4 uVar17;
  code *pcVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  unkbyte9 *pVar26;
  unkbyte9 *pVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined8 local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong *local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar32 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    local_c0 = param_4;
    lVar23 = (**(code **)(*param_2 + 0x50))(param_2,&local_90);
    iVar3 = *(int *)(lVar23 + 0x20);
    iVar20 = func_0x00018020d208(iVar3);
    iVar21 = func_0x00018020d2b0(iVar3);
    uVar22 = func_0x00018020d308(iVar3);
    uVar31 = 1;
    if (iVar3 - 0x46U < 0xf) {
      uVar31 = 4;
    }
    if (uVar31 == 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(0xf004,0x1800ebf8c);
      (*pcVar18)();
    }
    uVar7 = 0;
    if (uVar31 != 0) {
      uVar7 = (uint)(param_6[4] - param_6[1]) / uVar31;
    }
    *(int *)(param_1 + 0x684) = *(int *)(param_1 + 0x684) + 1;
    FUN_1800e8bb8(param_1,param_2,param_3,0,0x800);
    iVar5 = param_6[3] - *param_6;
    iVar6 = param_6[5] - param_6[2];
    local_90 = param_2;
    if (iVar3 - 0x2cU < 2) {
      uVar22 = iVar5 * 4 + 0xff;
      uVar31 = uVar22 & 0xffffff00;
      uVar2 = iVar5 + 0xffU & 0xffffff00;
      local_b8 = CONCAT44(local_b8._4_4_,iVar5 + 0xffU) & 0xffffffffffffff00;
      iVar21 = iVar6 * (uVar2 + uVar31) * uVar7;
      uVar24 = FUN_1800f0470(param_5,iVar21 + 0x200,&local_b0);
      if ((uVar24 & 1) == 0) {
        return 0;
      }
      FUN_1800e8bb8(param_1,local_a8,0,1,0x400);
      uVar17 = local_c0;
      FUN_1800e8bb8(param_1,param_2,local_c0,0,0x800);
      FUN_1800e8038(param_1);
      local_e8 = 1;
      local_80 = (ulonglong)param_3;
      local_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      local_68 = 0;
      local_e0 = (local_a0 - lStack_98) + 0x1ffU & 0xfffffffffffffe00;
      local_f0 = local_a8;
      uStack_d8._4_4_ = param_6[3] - *param_6;
      uStack_d8._0_4_ = 0x2a;
      local_d0 = CONCAT44(param_6[5] - param_6[2],param_6[4] - param_6[1]);
      local_c8 = (ulonglong)uVar22 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_f0,0,0,0,&local_90,param_6);
      local_80 = CONCAT44(local_80._4_4_,uVar17);
      uVar24 = (ulonglong)(iVar6 * uVar31 * uVar7);
      local_e0 = (uVar24 - lStack_98) + local_a0 + 0x1ff & 0xfffffffffffffe00;
      uStack_d8 = CONCAT44(uStack_d8._4_4_,0x3e);
      local_c8 = CONCAT44(local_c8._4_4_,(undefined4)local_b8);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_f0,0,0,0,&local_90,param_6);
      lVar23 = FUN_1800e9320(param_1);
      iVar3 = *(int *)(param_1 + 0x684) + -1;
      *(int *)(param_1 + 0x684) = iVar3;
      if (iVar3 == 0) {
        cVar19 = FUN_1800e8548(param_1 + 8,0);
      }
      else {
        cVar19 = '\0';
      }
      FUN_1800f0b40(param_5,iVar21 + 0x200,local_a0,lStack_98,
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(undefined8 *)(param_1 + 0xb78));
      if (cVar19 == '\0' || (cVar19 == '\0' || lVar23 == 0)) {
        FUN_1800f2030(*(undefined8 *)(param_1 + 0xb18),local_a8,0);
      }
      else {
        FUN_1800e93d8(param_1,lVar23);
      }
      iVar3 = *param_6;
      pVar26 = (unkbyte9 *)((longlong)local_b0 + uVar24 + 0x1ff & 0xfffffffffffffe00);
      uVar22 = param_6[2];
      iVar21 = param_6[3];
      if (uVar22 < (uint)param_6[5]) {
        do {
          if (uVar7 != 0) {
            uVar4 = (uint)(iVar21 - iVar3) >> 4;
            uVar30 = iVar21 - iVar3 & 0xf;
            uVar1 = uVar4;
            puVar33 = param_7;
            uVar29 = uVar7;
            puVar28 = param_7;
            pVar27 = pVar26;
            puVar25 = local_b0;
            do {
              for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                uVar14 = *(undefined8 *)((longlong)pVar26 + 8);
                Var16 = *pVar26;
                uVar9 = local_b0[3];
                uVar32 = local_b0[2];
                uVar15 = local_b0[5];
                uVar13 = local_b0[4];
                uVar10 = local_b0[7];
                uVar8 = local_b0[6];
                uVar12 = local_b0[1];
                uVar11 = *local_b0;
                puVar33[1] = CONCAT17((char)((unkuint9)Var16 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar12 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar12 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar12 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var16 >>
                                                                                0x10),(int3)uVar12))
                                                       )));
                *puVar33 = CONCAT17((char)((unkuint9)Var16 >> 8),
                                    CONCAT16((char)((ulonglong)uVar11 >> 0x30),
                                             CONCAT15((char)((ulonglong)uVar11 >> 0x28),
                                                      CONCAT14((char)((ulonglong)uVar11 >> 0x20),
                                                               CONCAT13((char)Var16,(int3)uVar11))))
                                   );
                puVar33[3] = CONCAT17((char)((unkuint9)Var16 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar9 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar9 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar9 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var16 >>
                                                                                0x30),(int3)uVar9)))
                                              ));
                puVar33[2] = CONCAT17((char)((unkuint9)Var16 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar32 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar32 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar32 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var16 >>
                                                                                0x20),(int3)uVar32))
                                                       )));
                puVar33[5] = CONCAT17((char)((ulonglong)uVar14 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar15 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar15 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar15 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar14
                                                                                >> 0x10),
                                                                          (int3)uVar15)))));
                puVar33[4] = CONCAT17((char)((ulonglong)uVar14 >> 8),
                                      CONCAT16((char)((ulonglong)uVar13 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar13 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar13 >> 0x20),
                                                                 CONCAT13((char)uVar14,(int3)uVar13)
                                                                ))));
                puVar33[7] = CONCAT17((char)((ulonglong)uVar14 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar10 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar10 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar10 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar14
                                                                                >> 0x30),
                                                                          (int3)uVar10)))));
                puVar33[6] = CONCAT17((char)((ulonglong)uVar14 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar8 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar8 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar8 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar14
                                                                                >> 0x20),(int3)uVar8
                                                                         )))));
                local_b0 = local_b0 + 8;
                pVar26 = pVar26 + 1;
                puVar33 = puVar33 + 8;
              }
              uVar24 = 0;
              if (uVar30 != 0) {
                do {
                  *(uint *)((longlong)puVar33 + uVar24 * 4) =
                       *(uint *)((longlong)local_b0 + uVar24 * 4) & 0xffffff |
                       (uint)*(byte *)((longlong)pVar26 + uVar24) << 0x18;
                  uVar1 = (int)uVar24 + 1;
                  uVar24 = (ulonglong)uVar1;
                } while (uVar1 < uVar30);
              }
              local_b0 = (undefined8 *)((longlong)puVar25 + (ulonglong)uVar31);
              uVar29 = uVar29 - 1;
              pVar26 = (unkbyte9 *)((longlong)pVar27 + (ulonglong)uVar2);
              puVar33 = (undefined8 *)((longlong)puVar28 + (ulonglong)param_8);
              uVar1 = uVar4;
              puVar28 = puVar33;
              pVar27 = pVar26;
              puVar25 = local_b0;
            } while (uVar29 != 0);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < (uint)param_6[5]);
      }
    }
    else {
      if (iVar21 == 0) {
        iVar21 = iVar20;
      }
      if (uVar22 == 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(0xf004,0x1800ec358);
        (*pcVar18)();
      }
      uVar2 = 0;
      if (uVar22 != 0) {
        uVar2 = (uint)(iVar21 * iVar5) / uVar22;
      }
      uVar22 = uVar2 + 0xff & 0xffffff00;
      iVar21 = iVar6 * uVar22 * uVar7;
      uVar24 = FUN_1800f0470(param_5,iVar21,&local_b0);
      if ((uVar24 & 1) == 0) {
        return 0;
      }
      local_b8 = local_a8;
      FUN_1800e8bb8(param_1,local_a8,0,1,0x400);
      FUN_1800e8038(param_1);
      local_f0 = local_a8;
      local_e8 = 1;
      local_e0 = local_a0 - lStack_98;
      local_80 = (ulonglong)param_3;
      local_88 = 0;
      uStack_70 = 0;
      local_78 = 0;
      local_68 = 0;
      uStack_d8 = CONCAT44(param_6[3] - *param_6,iVar3);
      local_d0 = CONCAT44(param_6[5] - param_6[2],param_6[4] - param_6[1]);
      local_c8 = (ulonglong)(uVar2 + 0xff) & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_f0,0,0,0,&local_90,param_6);
      lVar23 = FUN_1800e9320(param_1);
      iVar3 = *(int *)(param_1 + 0x684) + -1;
      *(int *)(param_1 + 0x684) = iVar3;
      if (iVar3 == 0) {
        cVar19 = FUN_1800e8548(param_1 + 8,0);
      }
      else {
        cVar19 = '\0';
      }
      FUN_1800f0b40(param_5,iVar21,local_a0,lStack_98,
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(undefined8 *)(param_1 + 0xb78));
      if (cVar19 == '\0' || (cVar19 == '\0' || lVar23 == 0)) {
        FUN_1800f2030(*(undefined8 *)(param_1 + 0xb18),local_b8,0);
      }
      else {
        FUN_1800e93d8(param_1,lVar23);
      }
      if (param_8 == uVar22 && uVar2 == param_8) {
        uVar30 = param_6[2];
        if (uVar30 < (uint)param_6[5]) {
          puVar33 = local_b0;
          do {
            uVar4 = 0;
            if (uVar31 != 0) {
              uVar4 = ((param_6[4] - param_6[1]) * uVar2) / uVar31;
            }
            thunk_FUN_180001218(param_7,puVar33,uVar4);
            uVar30 = uVar30 + 1;
            puVar33 = (undefined8 *)((longlong)puVar33 + (ulonglong)(uVar22 * uVar7));
          } while (uVar30 < (uint)param_6[5]);
        }
      }
      else {
        uVar31 = param_6[2];
        uVar30 = uVar7;
        puVar33 = local_b0;
        if (uVar31 < (uint)param_6[5]) {
          do {
            for (; uVar30 != 0; uVar30 = uVar30 - 1) {
              thunk_FUN_180001218(param_7,puVar33,uVar2);
              puVar33 = (undefined8 *)((longlong)puVar33 + (ulonglong)uVar22);
            }
            uVar31 = uVar31 + 1;
            uVar30 = uVar7;
          } while (uVar31 < (uint)param_6[5]);
        }
      }
    }
    uVar32 = 1;
  }
  return uVar32;
}

