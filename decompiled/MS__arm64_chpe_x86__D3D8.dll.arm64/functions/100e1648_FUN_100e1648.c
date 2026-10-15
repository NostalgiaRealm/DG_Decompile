/*
 * FUN_100e1648 at 100e1648
 * undefined FUN_100e1648(void)
 * Address ranges: 100e1648-100e1b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e1648(int param_1,undefined4 param_2,undefined8 param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulonglong extraout_x15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined4 local_b0;
  uint *local_ac;
  int local_a8;
  undefined4 *local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  int *local_90;
  uint *local_88;
  uint *puStack_84;
  int local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  int local_68;
  uint *puStack_64;
  undefined8 local_60;
  int local_58;
  int *local_54;
  uint *local_50;
  
  local_54 = (int *)(param_1 + 0x8e0);
  iVar13 = *local_54;
  if (iVar13 != 0) {
    local_50 = (uint *)(param_1 + 0x8f8);
    *local_50 = 0;
    local_78 = *(undefined8 *)(param_1 + 0x938);
    iVar7 = *(int *)(param_1 + 0x8e4);
    local_58 = iVar7 + 0x1c;
    local_b0 = param_2;
    (*(code *)PTR_FUN_10134070)(local_58);
    uVar10 = 0;
    if (((*(char *)(iVar7 + 0x34) != '\0') ||
        (uVar11 = FUN_100ecf18(iVar7,&local_b0), (uVar11 & 1) != 0)) &&
       (puVar6 = (undefined4 *)FUN_100ecd30(iVar7,&local_b0), puVar6 != (undefined4 *)0x0)) {
      local_a8 = param_1 + 0x8f4;
      *puVar6 = 0;
      local_a4 = puVar6 + 1;
      local_ac = (uint *)0xffffffff;
      iVar7 = FUN_100ecf98(local_a4,&local_ac);
      if (iVar7 == 0) {
        puVar12 = (uint *)0x0;
      }
      else {
        puVar12 = *(uint **)(iVar7 + 0xc);
      }
      puVar4 = puVar6 + 3;
      uVar11 = 0;
      if (*puVar4 != 0) {
        uVar11 = 0;
        local_b0 = 0;
        uVar16 = *puVar4;
        local_ac = puVar12;
        local_a0 = param_1;
        local_9c = iVar13;
        local_98 = param_2;
        local_94 = puVar6;
        local_90 = param_5;
        puVar8 = puVar4;
        do {
          uVar5 = uVar16 - 1;
          if (uVar5 < *puVar4) {
            piVar9 = (int *)(local_94[2] + uVar5 * 0x28 + 0x10);
          }
          else {
            piVar9 = (int *)&DAT_00000008;
          }
          piVar1 = piVar9 + 2;
          if (*piVar1 != -1) {
            puVar8 = (uint *)FUN_100ec2b0(puVar8,piVar9);
            puVar12 = param_4;
            if ((local_90 != (int *)0x0) && (local_90[1] != 0)) {
              uVar15 = 0;
              do {
                iVar13 = (int)uVar15;
                if (*piVar1 == *(int *)(*local_90 + 4 + iVar13 * 8)) {
                  uVar11 = 1L << (uVar15 & 0x3f) | uVar11;
                  puVar12 = *(uint **)(*local_90 + iVar13 * 8);
                  break;
                }
                uVar15 = (ulonglong)(iVar13 + 1U);
              } while (iVar13 + 1U < (uint)local_90[1]);
            }
            if (puVar8 != local_ac || puVar12 != param_4) {
              local_80 = *piVar1;
              local_88 = puVar8;
              puStack_84 = puVar12;
              puVar8 = (uint *)FUN_100ecbd0(local_a8,&local_88);
              if (puVar12 != param_4) {
                *piVar9 = local_9c;
                piVar9[1] = local_a0;
                piVar9[3] = (int)puVar12;
                *(undefined8 *)(piVar9 + 4) = local_78;
                goto LAB_100e18b4;
              }
            }
            uVar14 = *puVar4;
            if (uVar16 < uVar14) {
              do {
                uVar2 = uVar16 + 1;
                puVar3 = (undefined8 *)(local_94[2] + uVar16 * 0x28);
                puVar3[-4] = puVar3[1];
                puVar3[-5] = *puVar3;
                puVar3[-2] = puVar3[3];
                puVar3[-3] = puVar3[2];
                puVar3[-1] = puVar3[4];
                uVar14 = *puVar4;
                uVar16 = uVar2;
              } while (uVar2 < uVar14);
            }
            *puVar4 = uVar14 - 1;
          }
LAB_100e18b4:
          param_1 = local_a0;
          iVar13 = local_9c;
          puVar12 = local_ac;
          uVar16 = uVar5;
          uVar10 = local_b0;
          param_2 = local_98;
          param_5 = local_90;
        } while (uVar5 != 0);
      }
      if (param_5 != (int *)0x0) {
        uVar15 = 0;
        puVar4 = param_4;
        if (param_5[1] != 0) {
          do {
            local_98 = param_2;
            local_ac = puVar4;
            local_b0 = uVar10;
            if ((1L << (uVar15 & 0x3f) & uVar11) == 0) {
              puVar6 = (undefined4 *)(*param_5 + (int)uVar15 * 8);
              puVar4 = (uint *)*puVar6;
              if (puVar4 != puVar12) {
                piVar9 = puVar6 + 1;
                local_68 = *piVar9;
                local_60 = local_78;
                local_70 = iVar13;
                iStack_6c = param_1;
                puStack_64 = puVar4;
                FUN_100ed028(local_a4,piVar9,&local_70);
                local_80 = local_68;
                local_88 = puVar12;
                puStack_84 = puVar4;
                FUN_100ecbd0(local_a8,&local_88);
              }
            }
            uVar16 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar16;
            uVar10 = local_b0;
            puVar4 = local_ac;
            param_2 = local_98;
            param_4 = local_ac;
          } while (uVar16 < (uint)param_5[1]);
        }
      }
      local_a8 = -1;
      piVar9 = (int *)FUN_100ecf98(local_a4,&local_a8);
      if (piVar9 == (int *)0x0) {
        local_68 = -1;
        local_a4 = (undefined4 *)0xffffffff;
        local_60 = local_78;
        local_70 = iVar13;
        iStack_6c = param_1;
        puStack_64 = param_4;
        FUN_100ed028(extraout_x15 & 0xffffffff,&local_a4,&local_70);
      }
      else {
        uVar10 = FUN_100ec2b0(piVar9,piVar9);
        *piVar9 = iVar13;
        piVar9[1] = param_1;
        piVar9[2] = -1;
        piVar9[3] = (int)param_4;
        *(undefined8 *)(piVar9 + 4) = local_78;
      }
    }
    (*(code *)PTR_FUN_101340bc)(local_58);
    puVar12 = local_50;
    if (*(int *)(*local_54 + 0x20) != 3) {
      uVar11 = FUN_100ebf10(uVar10,param_4,0);
      if ((uVar11 & 1) == 0) {
        uVar16 = 0;
        if (extraout_w10 != 0) {
          do {
            puVar4 = (uint *)(*(int *)(param_1 + 0x8f4) + uVar16 * 0xc);
            uVar11 = (ulonglong)*puVar4;
            auVar17 = FUN_100ebf10(uVar11,puVar4[1],0);
            if ((auVar17._0_8_ & 1) != 0) {
              FUN_100e0710(param_1,param_2,*(undefined4 *)(extraout_w10_02 + 8),uVar11 & 0xffffffff,
                           auVar17._8_8_ & 0xffffffff);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *puVar12);
        }
      }
      else {
        uVar16 = 0;
        if (extraout_w10 != 0) {
          do {
            uVar15 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x8f4) + uVar16 * 0xc);
            uVar11 = FUN_100ebf10(uVar15,uVar10,0);
            if ((uVar11 & 1) != 0) {
              FUN_100e0710(param_1,param_2,*(undefined4 *)(extraout_w10_00 + 8),uVar15 & 0xffffffff,
                           uVar10);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *puVar12);
        }
        FUN_100e0710(param_1,param_2,0xffffffff,uVar10,param_4);
        uVar16 = 0;
        if (*puVar12 != 0) {
          do {
            auVar17 = FUN_100ebf10(param_4,*(undefined4 *)
                                            (*(int *)(param_1 + 0x8f4) + uVar16 * 0xc + 4),0);
            if ((auVar17._0_8_ & 1) != 0) {
              FUN_100e0710(param_1,param_2,*(undefined4 *)(extraout_w10_01 + 8),param_4,
                           auVar17._8_8_ & 0xffffffff);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(param_1 + 0x8f8));
        }
      }
    }
  }
  return;
}

