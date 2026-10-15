/*
 * FUN_1003ccc0 at 1003ccc0
 * undefined FUN_1003ccc0(void)
 * Address ranges: 1003ccc0-1003d33f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003ccc0(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                char param_7)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int extraout_w10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar15;
  undefined8 uVar14;
  undefined8 uVar16;
  char local_100 [4];
  int local_fc;
  undefined4 *local_f8;
  int *local_f4;
  int *local_f0;
  undefined4 local_ec;
  uint local_e8;
  int local_e4;
  code *local_e0;
  int local_dc;
  int local_d8;
  int iStack_d4;
  undefined1 auStack_d0 [8];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  uint local_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  FUN_10037888(local_100);
  FUN_100a9d50(auStack_d0);
  uVar4 = *(uint *)(param_1 + 0x104) >> 6 & 1;
  local_fc = CONCAT31(local_fc._1_3_,(char)uVar4);
  if (param_7 == '\0') {
    param_6 = uVar4 ^ 1;
  }
  if ((param_6 == 1) || (iVar5 = -0x7ff8ffa9, param_6 == 0)) {
    iVar5 = -0x7789fdb2;
    if (param_4 == 8) {
      uVar10 = 8;
    }
    else if (param_4 == 0x10) {
      uVar10 = 0x10;
    }
    else {
      if (param_4 != 0x20) goto LAB_1003d310;
      uVar10 = 0x20;
    }
    local_ec = FUN_1004cc90(param_1,uVar10);
    if ((param_2 == 0x140 && param_6 != 1) && ((param_3 == 200 || param_3 == 0xf0) && param_4 == 8))
    {
      local_100[0] = '\x01';
      if ((char)local_fc == '\0') goto LAB_1003d310;
    }
    else {
      local_100[0] = '\0';
    }
    if (((*(uint *)(param_1 + 0x104) >> 4 & 1) != 0) ||
       (iVar5 = -0x7fffbffb, *(int *)(param_1 + 0xfc) != 0)) {
      iVar5 = -0x7789fdb2;
      uVar4 = FUN_100024d0();
      if ((param_5 == 0) || ((uVar4 & 1) != 0)) {
        puVar7 = &DAT_100be35c;
      }
      else {
        puVar7 = &DAT_100be350;
      }
      uVar15 = *(uint *)((int)(puVar7 + extraout_w10 * 0x45) + 4);
      if (uVar15 != 0) {
        uVar12 = 0;
        do {
          piVar13 = (int *)(*(int *)(puVar7 + extraout_w10 * 0x45) + uVar12 * 0x18);
          if (((*piVar13 == param_2) && (piVar13[1] == param_3)) &&
             ((param_5 == 0 ||
              ((((uVar4 & 1) != 0 || (param_5 == piVar13[4])) || (param_5 == piVar13[4] + 1)))))) {
            local_d8 = piVar13[2];
            iStack_d4 = piVar13[3];
            local_f4 = piVar13 + 4;
            local_a0 = *local_f4;
            if ((*(char *)(DAT_100be0c0 + 0x7e5) == '\0') &&
               (*(char *)(DAT_100be0c0 + 0x784) != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            local_f8 = (undefined4 *)(param_1 + 0xfc);
            local_f0 = (int *)(param_1 + 0x11c);
            local_b0 = param_2;
            iStack_ac = param_3;
            local_a8 = local_d8;
            iStack_a4 = iStack_d4;
            iStack_9c = param_4;
            iVar5 = (*(code *)PTR_FUN_100ba254)(*local_f8);
            if (iVar5 == 0) {
              (*(code *)PTR_FUN_100ba2d8)(*local_f8,1);
            }
            local_fc = *local_f0;
            FUN_10003d40(&local_b0,local_fc);
            uStack_b8 = uStack_58;
            local_c0 = local_60;
            uStack_78 = uStack_58;
            local_80 = local_60;
            local_c8 = local_50;
            if ((param_5 == 0) && (uVar8 = FUN_100024d0(), (uVar8 & 1) == 0)) {
              uVar4 = *(uint *)(&DAT_100be2bc + local_fc * 0x45);
              uVar15 = *(uint *)((int)&DAT_100be2bc + local_fc * 0x228 + 4);
              uStack_78 = CONCAT44(uVar15,uVar4);
              uStack_b8 = uStack_78;
              local_c0 = local_80;
            }
            else {
              uVar15 = (uint)((ulonglong)uStack_b8 >> 0x20);
              uVar4 = (uint)uStack_b8;
            }
            local_dc = *local_f4;
            local_e4 = param_1 + 0x118;
            local_e0 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
            uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar6,*local_f8,local_c8 & 0xffffffff,local_c8 >> 0x20);
            local_fc = param_1 + 0x10;
            FUN_10006550(local_fc);
            if (uVar15 == 0) {
              local_88 = 0;
            }
            else {
              local_88 = 0;
              if (uVar15 != 0) {
                local_88 = uVar4 / uVar15;
              }
            }
            local_f4 = (int *)((ulonglong)local_c0 >> 0x20);
            local_e8 = (uint)local_c0;
            local_98 = (uint)local_c0;
            uStack_94 = (uint)local_f4;
            local_90 = uVar4;
            uStack_8c = uVar15;
            iStack_84 = param_4;
            uVar6 = (*local_e0)();
            cVar3 = (*extraout_w11_00)(uVar6,*local_f8,&local_98);
            piVar13 = local_f0;
            if (cVar3 == '\0') {
              iVar5 = -0x7fffbffb;
            }
            else {
              *(int *)(&DAT_100bbc6c + *local_f0 * 0xa4) = param_2;
              *(int *)(&DAT_100bbc68 + *local_f0 * 0xa4) = param_3;
              puVar7 = (undefined8 *)FUN_10038b50(param_1,&local_60,local_ec);
              uVar16 = *puVar7;
              uVar14 = puVar7[3];
              uVar10 = puVar7[2];
              iVar5 = *piVar13 * 0xa4;
              *(undefined8 *)(&DAT_100bbcb0 + iVar5) = puVar7[1];
              *(undefined8 *)(&DAT_100bbca8 + iVar5) = uVar16;
              *(undefined8 *)(&DAT_100bbcc0 + iVar5) = uVar14;
              *(undefined8 *)(&DAT_100bbcb8 + iVar5) = uVar10;
              *(int *)(&DAT_100bbc78 + *piVar13 * 0xa4) = local_dc;
              *(uint *)(&DAT_100bbc64 + *piVar13 * 0xa4) =
                   *(uint *)(&DAT_100bbc64 + *piVar13 * 0xa4) | 0x40000;
              if (local_100[0] != '\0') {
                *(uint *)(&DAT_100bbcc8 + *piVar13 * 0xa4) =
                     *(uint *)(&DAT_100bbcc8 + *piVar13 * 0xa4) | 0x200000;
              }
              iVar5 = *local_f0;
              (&DAT_100be2d4)[iVar5 * 0x45] = CONCAT44(iStack_d4,local_d8);
              (&DAT_100be2cc)[iVar5 * 0x45] = CONCAT44(param_3,param_2);
              (&DAT_100be2dc)[iVar5 * 0x45] = CONCAT44(iStack_9c,local_a0);
              (&DAT_100be2e4)[iVar5 * 0x8a] = local_ec;
              iVar11 = iVar5 * 0x228;
              *(undefined8 *)(&DAT_100be2f0 + iVar11) = uStack_b8;
              *(undefined8 *)(&DAT_100be2e8 + iVar11) = local_c0;
              *(ulonglong *)(&DAT_100be2f8 + iVar11) = local_c8;
              (&DAT_100be33a)[iVar5 * 0x228] = 1;
              iVar5 = *(int *)(DAT_100be0c0 + 0x780);
              if ((iVar5 == 6 || iVar5 < 3) || 8 < iVar5) {
                (*(code *)PTR_FUN_100ba2bc)(&DAT_100be300 + *local_f0 * 0x228);
              }
              else {
                uVar15 = *(uint *)(DAT_100be0c0 + 0x81a);
                uVar4 = *(uint *)(DAT_100be0c0 + 0x81e);
                uVar12 = *(uint *)(DAT_100be0c0 + 0x816);
                uVar9 = *(uint *)(DAT_100be0c0 + 0x812);
                piVar13 = (int *)uVar4;
                if (uVar15 == 0xffffffff) {
                  uVar1 = uVar4 >> 0x10;
                  uVar15 = 0;
                  piVar13 = (int *)0;
                  if ((uVar1 != 0) && (uVar4 = uVar4 & 0xffff, uVar4 != 0)) {
                    piVar13 = (int *)0x0;
                    if (uVar1 != 0) {
                      piVar13 = (int *)((uVar4 * local_e8) / uVar1);
                    }
                    uVar15 = local_e8;
                    if (local_f4 <= piVar13) {
                      if (uVar4 == 0) {
                    /* WARNING: Does not return */
                        uVar10 = SoftwareBreakpoint(0xf004,0x1003d21c);
                        (*(code *)uVar10)();
                      }
                      uVar15 = 0;
                      piVar13 = local_f4;
                      if (uVar4 != 0) {
                        uVar15 = (uVar1 * (int)local_f4) / uVar4;
                      }
                    }
                  }
                }
                if (uVar9 == 0xffffffff && uVar12 == 0xffffffff) {
                  uVar9 = local_e8 - uVar15 >> 1;
                  uVar12 = (uint)((int)local_f4 - (int)piVar13) >> 1;
                }
                iVar5 = uVar15 + uVar9;
                if ((iVar5 <= (int)uVar9) || (iVar11 = (int)piVar13 + uVar12, iVar11 <= (int)uVar12)
                   ) {
                  iVar11 = 0;
                  uVar12 = 0;
                  iVar5 = 0;
                  uVar9 = 0;
                }
                (*(code *)PTR_FUN_100ba2b8)
                          (&DAT_100be300 + *local_f0 * 0x228,uVar9,uVar12,iVar5,iVar11);
              }
              FUN_10006638(local_fc);
              if ((*(char *)(DAT_100be0c0 + 0x95a) != '\0') && (!bVar2)) {
                (*(code *)PTR_FUN_100ba278)(*local_f8,0x400,0x44454745,0);
              }
              iVar5 = 0;
            }
            FUN_100065c8(local_fc);
            if (-1 < iVar5) {
              FUN_1003c130(param_1);
            }
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar15);
      }
    }
  }
LAB_1003d310:
  FUN_100a9ca0(auStack_d0);
  FUN_10037900(local_100);
  return iVar5;
}

