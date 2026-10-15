/*
 * FUN_10081c48 at 10081c48
 * undefined FUN_10081c48(void)
 * Address ranges: 10081c48-10082493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10081c48(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
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
  char cVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  unkbyte9 *pVar33;
  undefined8 *puVar34;
  unkbyte9 *pVar35;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar36;
  code *extraout_w11_02;
  uint uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  uint uVar40;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  longlong local_a8;
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
  iVar27 = (*extraout_w11)(param_2,&local_80);
  iVar10 = *(int *)(iVar27 + 0x20);
  iVar28 = FUN_100728b8(iVar10);
  iVar27 = FUN_10072970(iVar10);
  if (iVar10 - 0x44U < 2) {
    uVar36 = 2;
  }
  else {
    if (iVar10 - 0x46U < 0xf) {
      uVar40 = 4;
      uVar36 = 4;
      goto LAB_10081d20;
    }
    uVar36 = 1;
  }
  uVar40 = 1;
LAB_10081d20:
  piVar2 = param_6 + 4;
  piVar3 = param_6 + 1;
  if (uVar40 == 0) {
                    /* WARNING: Does not return */
    uVar25 = SoftwareBreakpoint(0xf004,0x10081d50);
    (*(code *)uVar25)();
  }
  uVar14 = 0;
  if (uVar40 != 0) {
    uVar14 = (uint)(*piVar2 - *piVar3) / uVar40;
  }
  local_a8 = CONCAT44(local_a8._4_4_,uVar14);
  *(int *)(param_1 + 0x634) = *(int *)(param_1 + 0x634) + 1;
  FUN_1007d820(param_1,param_2,local_a0,0,0x800);
  piVar4 = param_6 + 3;
  puVar5 = (uint *)(param_6 + 5);
  puVar6 = (uint *)(param_6 + 2);
  iVar12 = *piVar4 - *param_6;
  iVar13 = *puVar5 - *puVar6;
  local_80 = param_2;
  if (iVar10 - 0x2cU < 2) {
    uVar36 = iVar12 * 4 + 0xff;
    uVar40 = uVar36 & 0xffffff00;
    uVar8 = iVar12 + 0xffU & 0xffffff00;
    uVar32 = iVar13 * uVar40 * (int)local_a8;
    iVar27 = uVar32 + iVar13 * uVar8 * (int)local_a8 + 0x200;
    uVar30 = FUN_100891f8(param_5,iVar27,&local_98);
    if ((uVar30 & 1) == 0) {
      return 0;
    }
    FUN_1007d820(param_1,local_94,0,1,0x400);
    FUN_1007d820(param_1,param_2,param_4,0,0x800);
    FUN_1007c768(param_1);
    uStack_7c = 0;
    local_d0 = local_94;
    uStack_cc = 1;
    uStack_68 = 0;
    local_70 = 0;
    local_78 = (ulonglong)local_a0;
    local_60 = 0;
    local_c8 = (local_90 - lStack_88) + 0x1ffU & 0xfffffffffffffe00;
    iStack_bc = *piVar4 - *param_6;
    iStack_c0 = 0x2a;
    _local_b8 = CONCAT44(*puVar5 - *puVar6,*piVar2 - *piVar3);
    uStack_b0 = (ulonglong)uVar36 & 0xffffffffffffff00;
    uVar29 = (*pcVar24)();
    (*extraout_w11_00)(uVar29,&local_d0,0,0,0,&local_80,param_6);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar12 + 0xffU) & 0xffffffffffffff00;
    local_c8 = ((ulonglong)uVar32 - lStack_88) + local_90 + 0x1ff & 0xfffffffffffffe00;
    _iStack_c0 = CONCAT44(iStack_bc,0x3e);
    local_78 = CONCAT44(local_78._4_4_,param_4);
    uVar29 = (*pcVar24)();
    (*extraout_w11_01)(uVar29,&local_d0,0,0,0,&local_80,param_6);
    lVar31 = FUN_1007dd50(param_1);
    cVar26 = FUN_1007d440(param_1 + 4,1);
    FUN_100899f8(param_5,iVar27,local_90,lStack_88,*(undefined4 *)(*piVar1 + 0xc),
                 *(undefined8 *)(param_1 + 0x938));
    if (cVar26 == '\0' || (cVar26 == '\0' || lVar31 == 0)) {
      FUN_10078ac0(*(undefined4 *)(param_1 + 0x8e4),local_94,0);
    }
    else {
      FUN_1007de50(param_1,lVar31);
    }
    iVar27 = *piVar4;
    pVar35 = (unkbyte9 *)((int)local_98 + uVar32 + 0x1ff & 0xfffffe00);
    iVar10 = *param_6;
    uVar36 = *puVar6;
    if (uVar36 < *puVar5) {
      do {
        uVar32 = 0;
        if (uVar14 != 0) {
          uVar11 = (uint)(iVar27 - iVar10) >> 4;
          uVar9 = iVar27 - iVar10 & 0xf;
          puVar39 = param_7;
          do {
            uVar37 = 0;
            pVar33 = pVar35;
            puVar34 = local_98;
            puVar38 = puVar39;
            if (uVar11 != 0) {
              do {
                uVar22 = *(undefined8 *)((int)pVar33 + 8);
                Var23 = *pVar33;
                uVar37 = uVar37 + 1;
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
                puVar38[1] = CONCAT17((char)((unkuint9)Var23 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar21 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar21 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar21 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x10),(int3)uVar21))
                                                       )));
                *puVar38 = CONCAT17((char)((unkuint9)Var23 >> 8),
                                    CONCAT16((char)((ulonglong)uVar20 >> 0x30),
                                             CONCAT15((char)((ulonglong)uVar20 >> 0x28),
                                                      CONCAT14((char)((ulonglong)uVar20 >> 0x20),
                                                               CONCAT13((char)Var23,(int3)uVar20))))
                                   );
                puVar38[3] = CONCAT17((char)((unkuint9)Var23 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar17 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar17 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar17 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x30),(int3)uVar17))
                                                       )));
                puVar38[2] = CONCAT17((char)((unkuint9)Var23 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar25 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar25 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar25 >> 0x20),
                                                                 CONCAT13((char)((unkuint9)Var23 >>
                                                                                0x20),(int3)uVar25))
                                                       )));
                puVar38[5] = CONCAT17((char)((ulonglong)uVar22 >> 0x18),
                                      CONCAT16((char)((ulonglong)uVar18 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar18 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar18 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x10),
                                                                          (int3)uVar18)))));
                puVar38[4] = CONCAT17((char)((ulonglong)uVar22 >> 8),
                                      CONCAT16((char)((ulonglong)uVar15 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar15 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar15 >> 0x20),
                                                                 CONCAT13((char)uVar22,(int3)uVar15)
                                                                ))));
                puVar38[7] = CONCAT17((char)((ulonglong)uVar22 >> 0x38),
                                      CONCAT16((char)((ulonglong)uVar19 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar19 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar19 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x30),
                                                                          (int3)uVar19)))));
                puVar38[6] = CONCAT17((char)((ulonglong)uVar22 >> 0x28),
                                      CONCAT16((char)((ulonglong)uVar16 >> 0x30),
                                               CONCAT15((char)((ulonglong)uVar16 >> 0x28),
                                                        CONCAT14((char)((ulonglong)uVar16 >> 0x20),
                                                                 CONCAT13((char)((ulonglong)uVar22
                                                                                >> 0x20),
                                                                          (int3)uVar16)))));
                puVar38 = puVar38 + 8;
              } while (uVar37 < uVar11);
            }
            uVar37 = 0;
            if (uVar9 != 0) {
              do {
                iVar28 = uVar37 * 4;
                pbVar7 = (byte *)(uVar37 + (int)pVar33);
                iVar12 = uVar37 * 4;
                uVar37 = uVar37 + 1;
                *(uint *)((int)puVar38 + iVar12) =
                     *(uint *)((int)puVar34 + iVar28) & 0xffffff | (uint)*pbVar7 << 0x18;
              } while (uVar37 < uVar9);
            }
            uVar32 = uVar32 + 1;
            local_98 = (undefined8 *)((int)local_98 + uVar40);
            pVar35 = (unkbyte9 *)((int)pVar35 + uVar8);
            puVar39 = (undefined8 *)((int)puVar39 + param_8);
          } while (uVar32 < uVar14);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < *puVar5);
    }
  }
  else {
    if (iVar27 == 0) {
      iVar27 = iVar28;
    }
    if (uVar36 == 0) {
                    /* WARNING: Does not return */
      uVar25 = SoftwareBreakpoint(0xf004,0x100821f8);
      (*(code *)uVar25)();
    }
    uVar8 = 0;
    if (uVar36 != 0) {
      uVar8 = (uint)(iVar27 * iVar12) / uVar36;
    }
    uVar36 = uVar8 + 0xff & 0xffffff00;
    iVar27 = iVar13 * uVar36 * (int)local_a8;
    uVar30 = FUN_100891f8(param_5,iVar27,&local_98);
    if ((uVar30 & 1) == 0) {
      return 0;
    }
    FUN_1007d820(param_1,local_94,0,1,0x400);
    FUN_1007c768(param_1);
    local_d0 = local_94;
    uStack_cc = 1;
    local_c8 = local_90 - lStack_88;
    local_a8 = local_90;
    local_78 = (ulonglong)local_a0;
    uStack_b0 = (ulonglong)(uVar8 + 0xff) & 0xffffffffffffff00;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    _iStack_c0 = CONCAT44(*piVar4 - *param_6,iVar10);
    uStack_7c = 0;
    _local_b8 = CONCAT44(*puVar5 - *puVar6,*piVar2 - *piVar3);
    uVar29 = (*pcVar24)();
    (*extraout_w11_02)(uVar29,&local_d0,0,0,0,&local_80,param_6);
    lVar31 = FUN_1007dd50(param_1);
    cVar26 = FUN_1007d440(param_1 + 4,1);
    FUN_100899f8(param_5,iVar27,local_a8,lStack_88,*(undefined4 *)(*piVar1 + 0xc),
                 *(undefined8 *)(param_1 + 0x938));
    if (cVar26 == '\0' || (cVar26 == '\0' || lVar31 == 0)) {
      FUN_10078ac0(*(undefined4 *)(param_1 + 0x8e4),local_94,0);
    }
    else {
      FUN_1007de50(param_1,lVar31);
    }
    if (param_8 == uVar36 && uVar8 == param_8) {
      uVar32 = *puVar6;
      puVar39 = local_98;
      if (uVar32 < *puVar5) {
        do {
          uVar9 = 0;
          if (uVar40 != 0) {
            uVar9 = ((*piVar2 - *piVar3) * uVar8) / uVar40;
          }
          FUN_100917a0(param_7,puVar39,uVar9);
          uVar32 = uVar32 + 1;
          puVar39 = (undefined8 *)((int)puVar39 + uVar36 * uVar14);
        } while (uVar32 < *puVar5);
      }
    }
    else {
      uVar40 = *puVar6;
      if (uVar40 < *puVar5) {
        do {
          uVar32 = 0;
          puVar39 = local_98;
          if (uVar14 != 0) {
            do {
              FUN_100917a0(param_7,puVar39,uVar8);
              uVar32 = uVar32 + 1;
              puVar39 = (undefined8 *)((int)puVar39 + uVar36);
              local_98 = puVar39;
            } while (uVar32 < uVar14);
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 < *puVar5);
      }
    }
  }
  return 1;
}

