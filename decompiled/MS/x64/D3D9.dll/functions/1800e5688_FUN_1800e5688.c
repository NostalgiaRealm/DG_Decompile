/*
 * FUN_1800e5688 at 1800e5688
 * undefined1 __fastcall FUN_1800e5688(longlong param_1, longlong * param_2, uint param_3, uint param_4, longlong * param_5, int * param_6, uint * param_7, uint param_8)
 * Address ranges: 1800e5688-1800e5d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800e5688(longlong param_1,longlong *param_2,uint param_3,uint param_4,longlong *param_5,
             int *param_6,uint *param_7,uint param_8)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [13];
  undefined1 auVar15 [15];
  undefined1 auVar16 [16];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [15];
  unkuint9 Var31;
  undefined1 auVar32 [11];
  undefined1 auVar33 [15];
  undefined1 auVar34 [13];
  undefined1 auVar35 [14];
  undefined1 auVar36 [15];
  uint6 uVar37;
  bool bVar38;
  longlong lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint *puVar45;
  uint *puVar46;
  undefined1 (*pauVar47) [16];
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 (*pauVar53) [16];
  char cVar54;
  undefined1 uVar55;
  ulonglong uVar56;
  uint uVar57;
  uint *puVar58;
  undefined1 auVar59 [16];
  uint uVar60;
  uint uStack0000000000000048;
  undefined8 in_stack_fffffffffffffed8;
  uint *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  ulonglong uStack_a8;
  longlong *local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  uVar52 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar55 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    lVar39 = (**(code **)(*param_2 + 0x50))(param_2);
    iVar3 = *(int *)(lVar39 + 0x20);
    uVar40 = FUN_1800e1d60(iVar3);
    uVar41 = FUN_1800e1ee0(iVar3);
    uStack0000000000000048 = (uint)uVar41;
    uVar42 = FUN_1800e1f7c(iVar3);
    iVar48 = param_6[4];
    iVar4 = param_6[1];
    *(int *)(param_1 + 0x684) = *(int *)(param_1 + 0x684) + 1;
    uVar56 = (ulonglong)(uint)(iVar48 - iVar4) / (uVar42 & 0xffffffff);
    uVar51 = (uint)uVar56;
    local_d4 = uVar51;
    FUN_1800e2d18(param_1,(ulonglong)param_2,(ulonglong)param_3,0,0x800);
    local_90 = param_2;
    if ((iVar3 == 0x2c) || (iVar3 == 0x2d)) {
      iVar3 = param_6[5];
      iVar48 = param_6[2];
      uVar49 = (param_6[3] - *param_6) * 4 + 0xff;
      uStack0000000000000048 = (param_6[3] - *param_6) + 0xffU & 0xffffff00;
      uVar57 = uVar49 & 0xffffff00;
      uVar50 = (uStack0000000000000048 + uVar57) * (iVar3 - iVar48) * uVar51 + 0x200;
      local_d8 = uVar57;
      bVar38 = FUN_1800e9568(param_5,uVar50,(longlong *)&local_f8);
      if (!bVar38) {
        return 0;
      }
      FUN_1800e2d18(param_1,local_f0,0,1,0x400);
      FUN_1800e2d18(param_1,(ulonglong)param_2,(ulonglong)param_4,0,0x800);
      FUN_1800e24c4(param_1);
      lVar39 = local_e8;
      local_80 = (ulonglong)param_3;
      local_68 = 0;
      local_d0 = local_f0;
      local_88 = 0;
      local_c0 = (local_e8 - local_e0) + 0x1ff & 0xfffffffffffffe00;
      local_c8 = 1;
      iStack_ac = param_6[5] - param_6[2];
      local_78 = ZEXT816(0);
      iStack_b4 = (int)*(undefined8 *)(param_6 + 3) - (int)*(undefined8 *)param_6;
      iStack_b0 = (int)((ulonglong)*(undefined8 *)(param_6 + 3) >> 0x20) -
                  (int)((ulonglong)*(undefined8 *)param_6 >> 0x20);
      iStack_b8 = 0x2a;
      uStack_a8 = (ulonglong)uVar49 & 0xffffffffffffff00;
      uVar42 = (ulonglong)uVar52 << 0x20;
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_d0,0,0,uVar42,&local_90,param_6);
      uVar52 = uStack0000000000000048;
      local_80 = CONCAT44(local_80._4_4_,param_4);
      iStack_b8 = 0x3e;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uStack0000000000000048);
      uVar51 = (iVar3 - iVar48) * uVar57 * uVar51;
      local_c0 = lVar39 + 0x1ff + (uVar51 - local_e0) & 0xfffffffffffffe00;
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_d0,0,0,uVar42 & 0xffffffff00000000,&local_90
                 ,param_6);
      uVar42 = FUN_1800e3108(param_1);
      piVar2 = (int *)(param_1 + 0x684);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        uVar40 = FUN_1800e2ae8(param_1 + 8,'\0');
        cVar54 = (char)uVar40;
      }
      else {
        cVar54 = '\0';
      }
      FUN_1800e97b4((longlong)param_5,uVar50,local_e8,local_e0,
                    *(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(ulonglong *)(param_1 + 0xb78));
      if ((cVar54 == '\0') || (uVar42 == 0)) {
        FUN_1800eab50(*(longlong **)(param_1 + 0xb18),local_f0,0);
      }
      else {
        do {
          uVar43 = FUN_1800e3070(param_1);
        } while (uVar43 < uVar42);
      }
      iVar3 = param_6[3];
      pauVar53 = (undefined1 (*) [16])
                 ((longlong)local_f8 + (ulonglong)uVar51 + 0x1ff & 0xfffffffffffffe00);
      iVar48 = *param_6;
      for (uVar51 = param_6[2]; uVar51 < (uint)param_6[5]; uVar51 = uVar51 + 1) {
        if ((int)uVar56 != 0) {
          uVar49 = iVar3 - iVar48 & 0xf;
          puVar58 = param_7;
          do {
            puVar45 = local_f8;
            pauVar47 = pauVar53;
            puVar46 = puVar58;
            for (uVar50 = (uint)(iVar3 - iVar48) >> 4; uVar50 != 0; uVar50 = uVar50 - 1) {
              auVar59 = *pauVar47;
              pauVar47 = pauVar47 + 1;
              puVar1 = puVar45 + 4;
              uVar19 = puVar45[5];
              uVar20 = puVar45[6];
              uVar21 = puVar45[7];
              auVar5[0xd] = 0;
              auVar5._0_13_ = auVar59._0_13_;
              auVar5[0xe] = auVar59[7];
              auVar7[0xc] = auVar59[6];
              auVar7._0_12_ = auVar59._0_12_;
              auVar7._13_2_ = auVar5._13_2_;
              auVar8[0xb] = 0;
              auVar8._0_11_ = auVar59._0_11_;
              auVar8._12_3_ = auVar7._12_3_;
              uVar57 = auVar8._11_4_;
              auVar9[10] = auVar59[5];
              auVar9._0_10_ = auVar59._0_10_;
              auVar9._11_4_ = uVar57;
              auVar13[9] = 0;
              auVar13._0_9_ = auVar59._0_9_;
              auVar13._10_5_ = auVar9._10_5_;
              auVar15[8] = auVar59[4];
              auVar15._0_8_ = auVar59._0_8_;
              auVar15._9_6_ = auVar13._9_6_;
              auVar30._7_8_ = 0;
              auVar30._0_7_ = auVar15._8_7_;
              Var31 = CONCAT81(SUB158(auVar30 << 0x40,7),auVar59[3]);
              auVar36._9_6_ = 0;
              auVar36._0_9_ = Var31;
              auVar32._1_10_ = SUB1510(auVar36 << 0x30,5);
              auVar32[0] = auVar59[2];
              auVar33._11_4_ = 0;
              auVar33._0_11_ = auVar32;
              auVar17[2] = auVar59[1];
              auVar17._0_2_ = auVar59._0_2_;
              auVar17._3_12_ = SUB1512(auVar33 << 0x20,3);
              auVar18._2_13_ = auVar17._2_13_;
              auVar18._0_2_ = auVar59._0_2_ & 0xff;
              uVar60 = CONCAT13(0,CONCAT12(auVar59[9],(ushort)auVar59[8]));
              auVar10[0xc] = auVar59[0xb];
              auVar10._0_12_ = ZEXT112(auVar59[0xc]) << 0x40;
              auVar11._10_3_ = auVar10._10_3_;
              auVar11._0_10_ = (unkuint10)auVar59[10] << 0x40;
              auVar34._5_8_ = 0;
              auVar34._0_5_ = auVar11._8_5_;
              auVar14[4] = auVar59[9];
              auVar14._0_4_ = uVar60;
              auVar14[5] = 0;
              auVar14._6_7_ = SUB137(auVar34 << 0x40,6);
              auVar6._10_2_ = 0;
              auVar6._0_10_ = auVar18._0_10_;
              auVar6._12_2_ = (short)Var31;
              uVar37 = CONCAT42(auVar6._10_4_,auVar32._0_2_);
              auVar35._6_8_ = 0;
              auVar35._0_6_ = uVar37;
              auVar12._4_2_ = auVar17._2_2_;
              auVar12._0_4_ = auVar18._0_4_;
              auVar12._6_8_ = SUB148(auVar35 << 0x40,6);
              uVar22 = puVar45[8];
              uVar23 = puVar45[9];
              uVar24 = puVar45[10];
              uVar25 = puVar45[0xb];
              auVar16._1_4_ = (uint)auVar59[0xd] << 0x18;
              auVar16[0] = auVar59[0xc];
              auVar16._5_4_ = (uint)auVar59[0xe] << 0x18;
              auVar16._9_4_ = (uint)auVar59[0xf] << 0x18;
              auVar16._13_3_ = 0;
              auVar59._0_8_ = *(ulonglong *)(puVar45 + 0xc) & 0xffffff00ffffff;
              auVar59._8_4_ = puVar45[0xe] & 0xffffff;
              auVar59._12_4_ = puVar45[0xf] & 0xffffff;
              uVar26 = *puVar45;
              uVar27 = puVar45[1];
              uVar28 = puVar45[2];
              uVar29 = puVar45[3];
              puVar45 = puVar45 + 0x10;
              puVar46[4] = (uint)auVar15._8_2_ << 0x18 | *puVar1 & 0xffffff;
              puVar46[5] = (uint)auVar9._10_2_ << 0x18 | uVar19 & 0xffffff;
              puVar46[6] = (uVar57 >> 8) << 0x18 | uVar20 & 0xffffff;
              puVar46[7] = uVar57 & 0xff000000 | uVar21 & 0xffffff;
              *puVar46 = auVar18._0_4_ << 0x18 | uVar26 & 0xffffff;
              puVar46[1] = auVar12._4_4_ << 0x18 | uVar27 & 0xffffff;
              puVar46[2] = (int)uVar37 << 0x18 | uVar28 & 0xffffff;
              puVar46[3] = (auVar6._10_4_ >> 0x10) << 0x18 | uVar29 & 0xffffff;
              puVar46[8] = uVar60 << 0x18 | uVar22 & 0xffffff;
              puVar46[9] = auVar14._4_4_ << 0x18 | uVar23 & 0xffffff;
              puVar46[10] = auVar11._8_4_ << 0x18 | uVar24 & 0xffffff;
              puVar46[0xb] = (uint)(uint3)(auVar10._10_3_ >> 0x10) << 0x18 | uVar25 & 0xffffff;
              *(undefined1 (*) [16])(puVar46 + 0xc) = auVar16 << 0x18 | auVar59;
              puVar46 = puVar46 + 0x10;
            }
            uVar42 = 0;
            if (uVar49 != 0) {
              do {
                puVar46[uVar42] =
                     (uint)(byte)(*pauVar47)[uVar42] << 0x18 | puVar45[uVar42] & 0xffffff;
                uVar50 = (int)uVar42 + 1;
                uVar42 = (ulonglong)uVar50;
              } while (uVar50 < uVar49);
            }
            local_f8 = (uint *)((longlong)local_f8 + (ulonglong)local_d8);
            puVar58 = (uint *)((longlong)puVar58 + (ulonglong)param_8);
            pauVar53 = (undefined1 (*) [16])(*pauVar53 + uVar52);
            uVar50 = (int)uVar56 - 1;
            uVar56 = (ulonglong)uVar50;
          } while (uVar50 != 0);
          uVar56 = (ulonglong)local_d4;
          uVar52 = uStack0000000000000048;
        }
      }
    }
    else {
      uVar43 = FUN_1800e1f30(iVar3);
      iVar48 = (int)uVar40;
      if (uStack0000000000000048 != 0) {
        iVar48 = uStack0000000000000048;
      }
      uStack0000000000000048 =
           (uint)((ulonglong)(uint)(iVar48 * (param_6[3] - *param_6)) / (uVar43 & 0xffffffff));
      uVar49 = uStack0000000000000048 + 0xff;
      uVar50 = uVar49 & 0xffffff00;
      uVar57 = (param_6[5] - param_6[2]) * uVar50 * uVar51;
      bVar38 = FUN_1800e9568(param_5,uVar57,(longlong *)&local_f8);
      local_d0 = local_f0;
      if (!bVar38) {
        return 0;
      }
      FUN_1800e2d18(param_1,local_f0,0,1,0x400);
      FUN_1800e24c4(param_1);
      local_c0 = local_e8 - local_e0;
      iStack_ac = param_6[5] - param_6[2];
      iStack_b4 = (int)*(undefined8 *)(param_6 + 3) - (int)*(undefined8 *)param_6;
      iStack_b0 = (int)((ulonglong)*(undefined8 *)(param_6 + 3) >> 0x20) -
                  (int)((ulonglong)*(undefined8 *)param_6 >> 0x20);
      local_78 = ZEXT416(0);
      local_80 = (ulonglong)param_3;
      local_68 = 0;
      local_c8 = 1;
      uStack_a8 = (ulonglong)uVar49 & 0xffffffffffffff00;
      local_88 = 0;
      iStack_b8 = iVar3;
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
                (*(longlong **)(param_1 + 0x688),&local_d0,0,0,(ulonglong)uVar52 << 0x20,&local_90,
                 param_6);
      uVar43 = FUN_1800e3108(param_1);
      piVar2 = (int *)(param_1 + 0x684);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        uVar40 = FUN_1800e2ae8(param_1 + 8,'\0');
        cVar54 = (char)uVar40;
      }
      else {
        cVar54 = '\0';
      }
      FUN_1800e97b4((longlong)param_5,uVar57,local_e8,local_e0,
                    *(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(ulonglong *)(param_1 + 0xb78));
      if ((cVar54 == '\0') || (uVar43 == 0)) {
        FUN_1800eab50(*(longlong **)(param_1 + 0xb18),local_f0,0);
      }
      else {
        do {
          uVar44 = FUN_1800e3070(param_1);
        } while (uVar44 < uVar43);
      }
      uVar52 = uStack0000000000000048;
      if ((param_8 == uVar50) && (uStack0000000000000048 == param_8)) {
        uVar49 = param_6[2];
        if (uVar49 < (uint)param_6[5]) {
          puVar58 = local_f8;
          do {
            FUN_1800fbec0((undefined8 *)param_7,(undefined8 *)puVar58,
                          (ulonglong)((param_6[4] - param_6[1]) * uVar52) / (uVar42 & 0xffffffff));
            puVar58 = (uint *)((longlong)puVar58 + (ulonglong)(uVar50 * uVar51));
            uVar49 = uVar49 + 1;
          } while (uVar49 < (uint)param_6[5]);
        }
      }
      else {
        puVar58 = local_f8;
        uVar49 = uStack0000000000000048;
        for (uVar52 = param_6[2]; uVar52 < (uint)param_6[5]; uVar52 = uVar52 + 1) {
          if (uVar51 != 0) {
            uVar43 = (ulonglong)uVar49;
            uVar42 = uVar56;
            do {
              FUN_1800fbec0((undefined8 *)param_7,(undefined8 *)puVar58,uVar43);
              puVar58 = (uint *)((longlong)puVar58 + (ulonglong)uVar50);
              uVar57 = (int)uVar42 - 1;
              uVar42 = (ulonglong)uVar57;
              uVar49 = uStack0000000000000048;
            } while (uVar57 != 0);
          }
        }
      }
    }
    uVar55 = 1;
  }
  return uVar55;
}

