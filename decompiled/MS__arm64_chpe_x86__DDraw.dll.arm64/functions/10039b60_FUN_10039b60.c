/*
 * FUN_10039b60 at 10039b60
 * undefined FUN_10039b60(void)
 * Address ranges: 10039b60-10039f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10039b60(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined4 local_e8;
  uint uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  iVar12 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar12 == 0) {
    FUN_10001c10(0);
  }
  uVar24 = 0x80070057;
  if (((param_3 & 0xfffffffc) != 0) || (param_6 == 0)) goto LAB_10039ef0;
  uVar17 = param_3 & 1;
  if ((param_3 & 1) == 0) {
LAB_10039be8:
    iVar12 = *(int *)(param_1 + 0x11c);
    puVar19 = &DAT_100be35c;
  }
  else {
    auVar26 = FUN_100024d0();
    uVar17 = auVar26._8_4_;
    if ((auVar26._0_8_ & 1) != 0) goto LAB_10039be8;
    iVar12 = *(int *)(param_1 + 0x11c);
    puVar19 = &DAT_100be350;
  }
  local_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  iVar15 = 1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uVar23 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_70 = 0;
  uStack_e4 = uVar17 << 0x12 | 0x100f;
  local_e8 = 0x7c;
  do {
    if (2 < uVar23) break;
    if (((&DAT_100b3cb8)[uVar23] & *(uint *)(DAT_100be0c0 + 0x947)) != 0) {
      cVar7 = (&DAT_100b3cc4)[uVar23];
      iVar13 = FUN_1004cc90(param_1,cVar7);
      if (iVar13 != -1) {
        puVar14 = (undefined8 *)FUN_10038b50(param_1,auStack_68,iVar13);
        uVar22 = 0;
        uVar25 = puVar14[1];
        local_a0 = *puVar14;
        uStack_88 = puVar14[3];
        local_90 = puVar14[2];
        uStack_98 = uVar25;
        if (iVar15 != 0) {
          iVar13 = (int)((ulonglong)uVar25 >> 0x20);
          iVar16 = iVar15;
          do {
            iVar15 = iVar16;
            iVar16 = (int)((ulonglong)uVar25 >> 0x20);
            if (*(uint *)((int)(puVar19 + iVar12 * 0x45) + 4) <= uVar22) break;
            piVar1 = (int *)(*(int *)(puVar19 + iVar12 * 0x45) + uVar22 * 0x18);
            iVar2 = *piVar1;
            local_d8 = CONCAT44(local_d8._4_4_,(uint)(iVar13 * *piVar1) >> 3);
            iVar3 = piVar1[1];
            local_e0 = CONCAT44(iVar2,iVar3);
            if (uVar17 == 0) {
              iVar21 = 0;
              local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
            }
            else {
              iVar21 = piVar1[4];
              local_d0 = CONCAT44(local_d0._4_4_,iVar21);
            }
            uVar20 = 0x1000c37c;
            if (cVar7 != '\b') {
              uVar20 = 0x1000e27c;
            }
            local_80 = CONCAT44(local_80._4_4_,uVar20);
            if ((iVar2 != 0x140) || (bVar10 = true, iVar3 != 200 || cVar7 != '\b')) {
              bVar10 = false;
            }
            if ((iVar2 != 0x140) ||
               (((iVar3 != 200 && (iVar3 != 0xf0)) || (bVar9 = true, cVar7 != '\b')))) {
              bVar9 = false;
            }
            if (param_4 == 0) {
LAB_10039e28:
              if (((*(uint *)(param_1 + 0x104) >> 6 & 1) != 0) && (bVar9)) {
                local_80._0_4_ = uVar20 | 0x200000;
                iVar15 = FUN_10051948(iVar15,param_2,&local_e8,param_6,param_5);
                uVar20 = (uint)local_80 & 0xffdfffff;
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80) & 0xffffffffffdfffff;
                uVar25 = uStack_98;
                iVar13 = uStack_98._4_4_;
              }
              iVar16 = iVar15;
              if (iVar15 != 0) {
                if (((param_3 >> 1 & 1) != 0) && (bVar10)) {
                  local_80 = CONCAT44(local_80._4_4_,uVar20) | 0x40000000;
                  iVar15 = FUN_10051948(iVar15,param_2,&local_e8,param_6,param_5);
                  local_80 = local_80 & 0xffffffffbfffffff;
                  uVar25 = uStack_98;
                  iVar13 = uStack_98._4_4_;
                  iVar16 = iVar15;
                  if (iVar15 == 0) goto LAB_10039ed4;
                }
                iVar16 = iVar15;
                if ((!bVar9) && (!bVar10)) {
                  iVar16 = FUN_10051948(iVar15,param_2,&local_e8,param_6,param_5);
                  uVar25 = uStack_98;
                  iVar13 = uStack_98._4_4_;
                }
              }
            }
            else {
              uVar4 = *(uint *)(param_4 + 4);
              iVar18 = iVar2;
              if ((uVar4 >> 2 & 1) != 0) {
                iVar18 = *(int *)(param_4 + 0xc);
              }
              iVar5 = iVar3;
              if ((uVar4 >> 1 & 1) != 0) {
                iVar5 = *(int *)(param_4 + 8);
              }
              iVar6 = iVar21;
              if ((uVar4 >> 0x12 & 1) != 0) {
                iVar6 = *(int *)(param_4 + 0x18);
              }
              if ((uVar4 >> 0xc & 1) != 0) {
                iVar16 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x50) >> 0x20);
              }
              bVar11 = true;
              if ((uVar4 >> 5 & 1) != 0) {
                bVar11 = *(uint *)(param_4 + 0x14) < 8;
              }
              if (((iVar18 != iVar2) || (iVar5 != iVar3)) ||
                 ((iVar6 != iVar21 || (bVar8 = 1, iVar16 != iVar13)))) {
                bVar8 = 0;
              }
              iVar16 = iVar15;
              if ((bool)(bVar8 & bVar11)) goto LAB_10039e28;
            }
LAB_10039ed4:
            uVar22 = uVar22 + 1;
            iVar15 = 0;
          } while (iVar16 != 0);
        }
      }
    }
    uVar23 = uVar23 + 1;
  } while (iVar15 != 0);
  uVar24 = 0;
LAB_10039ef0:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar24;
}

