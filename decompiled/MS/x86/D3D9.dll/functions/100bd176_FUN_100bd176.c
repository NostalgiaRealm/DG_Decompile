/*
 * FUN_100bd176 at 100bd176
 * undefined1 __thiscall FUN_100bd176(void * this, int * param_1, uint param_2, uint param_3, void * param_4, int * param_5, undefined1[16] * param_6, uint param_7)
 * Address ranges: 100bd176-100bd7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100bd176(void *this,int *param_1,uint param_2,uint param_3,void *param_4,int *param_5,
            undefined1 (*param_6) [16],uint param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [13];
  ulonglong *puVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  void *pvVar21;
  undefined1 uVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  uint *puVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  undefined1 local_c8 [16];
  int *local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [8];
  uint local_88;
  undefined4 local_84;
  uint local_80 [3];
  undefined8 local_74;
  int local_6c;
  uint local_68;
  uint local_60;
  uint local_54;
  ulonglong *local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  void *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  ulonglong *local_20;
  undefined1 (*local_1c) [16];
  ulonglong *local_18;
  char local_11;
  
  uVar22 = 0;
  local_11 = 0;
  if (*(int *)((int)this + 0x8e0) != 0) {
    local_30 = this;
    iVar24 = (**(code **)(*param_1 + 0x28))(param_1,local_c8);
    local_1c = *(undefined1 (**) [16])(iVar24 + 0x20);
    local_28 = FUN_100ba24a(local_1c);
    local_18 = (ulonglong *)FUN_100ba2f3(extraout_EDX);
    local_54 = FUN_100ba375(extraout_EDX_00);
    local_2c = (uint)(param_5[4] - param_5[1]) / local_54;
    *(int *)((int)this + 0x634) = *(int *)((int)this + 0x634) + 1;
    FUN_100baf7e(this,(uint)param_1,param_2,0,0x800);
    if ((local_1c == (undefined1 (*) [16])0x2c) || (local_1c == (undefined1 (*) [16])0x2d)) {
      local_24 = (param_5[3] - *param_5) + 0xffU & 0xffffff00;
      local_60 = (param_5[3] - *param_5) * 4 + 0xffU & 0xffffff00;
      local_1c = (undefined1 (*) [16])((param_5[5] - param_5[2]) * local_60 * local_2c);
      local_28 = (param_5[5] - param_5[2]) * local_24 * local_2c + 0x200 + (int)local_1c;
      bVar23 = FUN_100c0821(param_4,local_28,(int *)&local_50);
      if (!bVar23) {
        return local_11;
      }
      FUN_100baf7e(this,local_4c,0,1,0x400);
      FUN_100baf7e(this,(uint)param_1,param_3,0,0x800);
      FUN_100ba856((int)this);
      local_b8 = param_1;
      local_b0 = param_2;
      local_b4 = 0;
      local_ac = 0;
      puVar30 = local_a8;
      for (iVar24 = 6; iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar30 = 0;
        puVar30 = puVar30 + 1;
      }
      local_88 = local_4c;
      local_84 = 1;
      puVar31 = local_80;
      for (iVar24 = 8; iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar31 = 0;
        puVar31 = puVar31 + 1;
      }
      local_80[1] = ((local_44 - local_3c) - (uint)(local_48 < local_40)) +
                    (uint)(0xfffffe00 < local_48 - local_40);
      local_80[2] = 0x2a;
      local_80[0] = (local_48 - local_40) + 0x1ff & 0xfffffe00;
      local_6c = param_5[5] - param_5[2];
      local_74 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_5 + 3) >> 0x20) -
                          (int)((ulonglong)*(undefined8 *)param_5 >> 0x20),
                          (int)*(undefined8 *)(param_5 + 3) - (int)*(undefined8 *)param_5);
      local_68 = local_60;
      (**(code **)(**(int **)((int)local_30 + 0x638) + 0x40))
                (*(int **)((int)local_30 + 0x638),&local_88,0,0,0,&local_b8,param_5);
      pvVar21 = local_30;
      uVar25 = ((int)local_1c - local_40) + local_48;
      local_b0 = param_3;
      local_80[1] = (-(uint)(local_1c < local_40) - local_3c) + local_44 +
                    (uint)CARRY4((int)local_1c - local_40,local_48) + (uint)(0xfffffe00 < uVar25);
      local_80[0] = uVar25 + 0x1ff & 0xfffffe00;
      local_68 = local_24;
      local_80[2] = 0x3e;
      (**(code **)(**(int **)((int)local_30 + 0x638) + 0x40))
                (*(int **)((int)local_30 + 0x638),&local_88,0,0,0,&local_b8,param_5);
      uVar36 = FUN_100bb258((int)pvVar21);
      local_34 = (uint)((ulonglong)uVar36 >> 0x20);
      local_18 = (ulonglong *)uVar36;
      uVar25 = FUN_100baeff((void *)((int)pvVar21 + 4),'\x01');
      local_11 = (char)uVar25;
      FUN_100c09c4(param_4,local_28,local_48,local_44,local_40,local_3c,
                   *(int **)(*(int *)((int)pvVar21 + 0x8e0) + 0xc),*(uint *)((int)pvVar21 + 0x938),
                   *(undefined4 *)((int)pvVar21 + 0x93c));
      if ((local_11 == '\0') || ((local_34 == 0 && (local_18 == (ulonglong *)0x0)))) {
        FUN_100c17e3(*(void **)((int)pvVar21 + 0x8e4),local_4c,0);
      }
      else {
        FUN_100bb282(pvVar21,(uint)local_18,local_34);
      }
      iVar24 = param_5[3];
      iVar3 = *param_5;
      local_20 = local_50;
      uVar25 = param_5[2];
      local_1c = (undefined1 (*) [16])((int)local_50 + (int)local_1c + 0x1ffU & 0xfffffe00);
      if (uVar25 < (uint)param_5[5]) {
        do {
          if (local_2c != 0) {
            uVar28 = (uint)(iVar24 - iVar3) >> 4;
            uVar32 = iVar24 - iVar3 & 0xf;
            local_54 = local_2c;
            uVar29 = uVar28;
            pauVar27 = param_6;
            puVar15 = local_20;
            pauVar16 = local_1c;
            pauVar26 = param_6;
            do {
              for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                auVar2 = *pauVar16;
                uVar17 = puVar15[2];
                uVar10 = *(uint *)((int)puVar15 + 0x14);
                uVar18 = puVar15[3];
                uVar11 = *(uint *)((int)puVar15 + 0x1c);
                uVar19 = puVar15[4];
                uVar12 = *(uint *)((int)puVar15 + 0x24);
                uVar20 = puVar15[5];
                uVar13 = *(uint *)((int)puVar15 + 0x2c);
                uVar33 = (ulonglong)CONCAT14(auVar2[5],(uint)CONCAT12(auVar2[5],(ushort)auVar2[4]))
                         & 0xffffffff0000ffff;
                auVar35._0_8_ = puVar15[6] & 0xffffff00ffffff;
                auVar35._8_4_ = (uint)puVar15[7] & 0xffffff;
                auVar35._12_4_ = *(uint *)((int)puVar15 + 0x3c) & 0xffffff;
                uVar4 = CONCAT13(0,CONCAT12(auVar2[9],(ushort)auVar2[8]));
                auVar6._10_2_ = 0;
                auVar6._0_10_ = (unkuint10)CONCAT12(auVar2[0xd],(ushort)auVar2[0xc]) << 0x40;
                auVar6[0xc] = auVar2[0xb];
                auVar7._10_3_ = auVar6._10_3_;
                auVar7._0_10_ = (unkuint10)auVar2[10] << 0x40;
                auVar14._5_8_ = 0;
                auVar14._0_5_ = auVar7._8_5_;
                auVar8[4] = auVar2[9];
                auVar8._0_4_ = uVar4;
                auVar8[5] = 0;
                auVar8._6_7_ = SUB137(auVar14 << 0x40,6);
                auVar5[7] = auVar2[0xd];
                auVar5._0_7_ = (uint7)auVar2[0xc] << 0x18;
                auVar5._8_3_ = 0;
                auVar5[0xb] = auVar2[0xe];
                auVar5._12_3_ = 0;
                auVar5[0xf] = auVar2[0xf];
                auVar34._0_8_ = *puVar15 & 0xffffff00ffffff;
                auVar34._8_4_ = (uint)puVar15[1] & 0xffffff;
                auVar34._12_4_ = *(uint *)((int)puVar15 + 0xc) & 0xffffff;
                auVar9._1_3_ = 0;
                auVar9[0] = auVar2[0];
                auVar9[4] = auVar2[1];
                auVar9._5_3_ = 0;
                auVar9[8] = auVar2[2];
                auVar9._9_3_ = 0;
                auVar9[0xc] = auVar2[3];
                auVar9._13_3_ = 0;
                *pauVar27 = auVar34 | auVar9 << 0x18;
                *(uint *)pauVar27[1] = (uint)uVar17 & 0xffffff | (int)uVar33 << 0x18;
                *(uint *)(pauVar27[1] + 4) = uVar10 & 0xffffff | (int)(uVar33 >> 0x20) << 0x18;
                *(uint *)(pauVar27[1] + 8) = (uint)uVar18 & 0xffffff | (uint)auVar2[6] << 0x18;
                *(uint *)(pauVar27[1] + 0xc) = uVar11 & 0xffffff | (uint)auVar2[7] << 0x18;
                *(uint *)pauVar27[2] = (uint)uVar19 & 0xffffff | uVar4 << 0x18;
                *(uint *)(pauVar27[2] + 4) = uVar12 & 0xffffff | auVar8._4_4_ << 0x18;
                *(uint *)(pauVar27[2] + 8) = (uint)uVar20 & 0xffffff | auVar7._8_4_ << 0x18;
                *(uint *)(pauVar27[2] + 0xc) =
                     uVar13 & 0xffffff | (uint)(uint3)(auVar6._10_3_ >> 0x10) << 0x18;
                pauVar27[3] = auVar35 | auVar5;
                pauVar27 = pauVar27 + 4;
                puVar15 = puVar15 + 8;
                pauVar16 = pauVar16 + 1;
              }
              uVar29 = 0;
              if (uVar32 != 0) {
                do {
                  *(uint *)(*pauVar27 + uVar29 * 4) =
                       (uint)(byte)(*pauVar16)[uVar29] << 0x18 |
                       *(uint *)((int)puVar15 + uVar29 * 4) & 0xffffff;
                  uVar29 = uVar29 + 1;
                } while (uVar29 < uVar32);
              }
              local_20 = (ulonglong *)((int)local_20 + local_60);
              local_1c = (undefined1 (*) [16])(*local_1c + local_24);
              pauVar27 = (undefined1 (*) [16])(*pauVar26 + param_7);
              local_54 = local_54 - 1;
              uVar29 = uVar28;
              puVar15 = local_20;
              pauVar16 = local_1c;
              pauVar26 = pauVar27;
            } while (local_54 != 0);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < (uint)param_5[5]);
      }
    }
    else {
      uVar25 = FUN_100ba338(local_1c);
      if (local_18 != (ulonglong *)0x0) {
        local_28 = (uint)local_18;
      }
      local_20 = (ulonglong *)(((param_5[3] - *param_5) * local_28) / uVar25);
      local_24 = (int)local_20 + 0xffU & 0xffffff00;
      local_28 = (param_5[5] - param_5[2]) * local_24 * local_2c;
      bVar23 = FUN_100c0821(param_4,local_28,(int *)&local_50);
      if (!bVar23) {
        return local_11;
      }
      FUN_100baf7e(this,local_4c,0,1,0x400);
      FUN_100ba856((int)this);
      local_88 = local_4c;
      local_84 = 1;
      puVar31 = local_80;
      for (iVar24 = 8; iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar31 = 0;
        puVar31 = puVar31 + 1;
      }
      local_80[0] = local_48 - local_40;
      local_80[1] = (local_44 - local_3c) - (uint)(local_48 < local_40);
      uVar36 = *(undefined8 *)param_5;
      uVar1 = *(undefined8 *)(param_5 + 3);
      local_80[2] = (uint)local_1c;
      local_6c = param_5[5] - param_5[2];
      local_68 = local_24;
      local_b8 = param_1;
      local_b0 = param_2;
      local_b4 = 0;
      local_ac = 0;
      puVar30 = local_a8;
      for (iVar24 = 6; pvVar21 = local_30, iVar24 != 0; iVar24 = iVar24 + -1) {
        *puVar30 = 0;
        puVar30 = puVar30 + 1;
      }
      local_74 = CONCAT44((int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar36 >> 0x20),
                          (int)uVar1 - (int)uVar36);
      (**(code **)(**(int **)((int)local_30 + 0x638) + 0x40))
                (*(int **)((int)local_30 + 0x638),&local_88,0,0,0,&local_b8,param_5);
      uVar36 = FUN_100bb258((int)pvVar21);
      local_34 = (uint)((ulonglong)uVar36 >> 0x20);
      local_18 = (ulonglong *)uVar36;
      uVar25 = FUN_100baeff((void *)((int)pvVar21 + 4),'\x01');
      local_11 = (char)uVar25;
      FUN_100c09c4(param_4,local_28,local_48,local_44,local_40,local_3c,
                   *(int **)(*(int *)((int)pvVar21 + 0x8e0) + 0xc),*(uint *)((int)pvVar21 + 0x938),
                   *(undefined4 *)((int)pvVar21 + 0x93c));
      if ((local_11 == '\0') || ((local_34 == 0 && (local_18 == (ulonglong *)0x0)))) {
        FUN_100c17e3(*(void **)((int)pvVar21 + 0x8e4),local_4c,0);
      }
      else {
        FUN_100bb282(pvVar21,(uint)local_18,local_34);
      }
      uVar25 = local_24;
      if ((param_7 == local_24) && (local_20 == (ulonglong *)param_7)) {
        local_1c = (undefined1 (*) [16])param_5[2];
        if (local_1c < (uint)param_5[5]) {
          iVar24 = local_24 * local_2c;
          do {
            local_18 = local_50;
            FUN_100cff00((undefined4 *)param_6,(undefined4 *)local_50,
                         (uint)((param_5[4] - param_5[1]) * (int)local_20) / local_54);
            local_50 = (ulonglong *)((int)local_18 + iVar24);
            local_1c = (undefined1 (*) [16])((int)local_1c + 1);
          } while (local_1c < (uint)param_5[5]);
        }
      }
      else {
        local_24 = param_5[2];
        local_18 = (ulonglong *)local_2c;
        uVar29 = local_2c;
        puVar15 = local_50;
        local_1c = (undefined1 (*) [16])local_50;
        if (local_24 < (uint)param_5[5]) {
          do {
            for (; local_18 != (ulonglong *)0x0; local_18 = (ulonglong *)((int)local_18 - 1)) {
              FUN_100cff00((undefined4 *)param_6,(undefined4 *)puVar15,(uint)local_20);
              uVar29 = local_2c;
              puVar15 = (ulonglong *)((int)puVar15 + uVar25);
            }
            local_24 = local_24 + 1;
            local_18 = (ulonglong *)uVar29;
            local_1c = (undefined1 (*) [16])puVar15;
          } while (local_24 < (uint)param_5[5]);
        }
      }
    }
    uVar22 = 1;
  }
  return uVar22;
}

