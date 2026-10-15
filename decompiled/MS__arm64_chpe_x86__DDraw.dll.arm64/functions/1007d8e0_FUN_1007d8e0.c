/*
 * FUN_1007d8e0 at 1007d8e0
 * undefined FUN_1007d8e0(void)
 * Address ranges: 1007d8e0-1007dceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007d8e0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulonglong extraout_x15;
  ulonglong extraout_x15_00;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  int *local_74;
  uint *local_70;
  int local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  
  local_74 = (int *)(param_1 + 0x8e0);
  iVar5 = *local_74;
  if (iVar5 != 0) {
    local_70 = (uint *)(param_1 + 0x8f8);
    *local_70 = 0;
    uVar17 = *(undefined8 *)(param_1 + 0x938);
    iVar13 = *(int *)(param_1 + 0x8e4);
    iVar16 = iVar13 + 0x1c;
    local_90 = param_2;
    (*(code *)PTR_FUN_100ba0a0)(iVar16);
    uVar10 = 0;
    if (((*(char *)(iVar13 + 0x34) != '\0') ||
        (uVar11 = FUN_10079050(iVar13,&local_90), (uVar11 & 1) != 0)) &&
       (puVar7 = (undefined4 *)FUN_10078e68(iVar13,&local_90), puVar7 != (undefined4 *)0x0)) {
      *puVar7 = 0;
      local_90 = -1;
      iVar13 = param_1 + 0x8f4;
      iVar8 = FUN_100790d0(puVar7 + 1,&local_90);
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar8 + 0xc);
      }
      puVar1 = puVar7 + 3;
      uVar15 = *puVar1;
      uVar12 = (ulonglong)uVar15;
      uVar11 = extraout_x15;
      if (uVar15 != 0) {
        local_8c = (uint)extraout_x15;
        local_78 = 0;
        uVar11 = uVar12;
        local_90 = param_4;
        local_88 = iVar8;
        local_84 = iVar13;
        local_80 = param_2;
        iStack_7c = iVar16;
        local_50 = uVar17;
        do {
          uVar6 = uVar15 - 1;
          if (uVar6 < (uint)uVar11) {
            iVar16 = puVar7[2] + uVar6 * 0x28 + 0x10;
          }
          else {
            iVar16 = 8;
          }
          if (*(uint *)(iVar16 + 8) != 0xffffffff) {
            uVar12 = FUN_10078798(uVar12,iVar16);
            if ((int)uVar12 != local_88) {
              iStack_64 = local_90;
              local_60 = *(uint *)(iVar16 + 8);
              local_68 = (int)uVar12;
              uVar12 = FUN_10078d08(local_84,&local_68);
            }
            uVar14 = *puVar1;
            if (uVar15 < uVar14) {
              do {
                uVar2 = uVar15 + 1;
                puVar3 = (undefined8 *)(puVar7[2] + uVar15 * 0x28);
                puVar3[-4] = puVar3[1];
                puVar3[-5] = *puVar3;
                puVar3[-2] = puVar3[3];
                puVar3[-3] = puVar3[2];
                puVar3[-1] = puVar3[4];
                uVar14 = *puVar1;
                uVar15 = uVar2;
              } while (uVar2 < uVar14);
            }
            uVar11 = (ulonglong)(uVar14 - 1);
            *puVar1 = uVar14 - 1;
          }
          uVar15 = uVar6;
        } while (uVar6 != 0);
        uVar11 = (ulonglong)local_8c;
        uVar17 = local_50;
        iVar16 = iStack_7c;
        uVar10 = local_78;
        param_2 = local_80;
        param_4 = local_90;
      }
      uVar15 = 0xffffffff;
      local_8c = 0xffffffff;
      piVar9 = (int *)FUN_100790d0(uVar11 & 0xffffffff,&local_8c);
      if (piVar9 == (int *)0x0) {
        local_8c = uVar15;
        local_68 = iVar5;
        iStack_64 = param_1;
        local_60 = uVar15;
        iStack_5c = param_4;
        local_58 = uVar17;
        FUN_10079160(extraout_x15_00 & 0xffffffff,&local_8c,&local_68);
      }
      else {
        uVar10 = FUN_10078798(piVar9,piVar9);
        *piVar9 = iVar5;
        piVar9[1] = param_1;
        piVar9[2] = -1;
        piVar9[3] = param_4;
        *(undefined8 *)(piVar9 + 4) = uVar17;
      }
    }
    (*(code *)PTR_FUN_100ba0f0)(iVar16);
    puVar1 = local_70;
    if (*(int *)(*local_74 + 0x20) != 3) {
      uVar11 = FUN_10078400(uVar10,param_4,0);
      if ((uVar11 & 1) == 0) {
        uVar15 = 0;
        if (extraout_w10 != 0) {
          do {
            puVar4 = (uint *)(*(int *)(param_1 + 0x8f4) + uVar15 * 0xc);
            uVar11 = (ulonglong)*puVar4;
            auVar18 = FUN_10078400(uVar11,puVar4[1],0);
            if ((auVar18._0_8_ & 1) != 0) {
              FUN_1007c660(param_1,param_2,*(undefined4 *)(extraout_w10_02 + 8),uVar11 & 0xffffffff,
                           auVar18._8_8_ & 0xffffffff);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar1);
        }
      }
      else {
        uVar15 = 0;
        if (extraout_w10 != 0) {
          do {
            uVar12 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x8f4) + uVar15 * 0xc);
            uVar11 = FUN_10078400(uVar12,uVar10,0);
            if ((uVar11 & 1) != 0) {
              FUN_1007c660(param_1,param_2,*(undefined4 *)(extraout_w10_00 + 8),uVar12 & 0xffffffff,
                           uVar10);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar1);
        }
        FUN_1007c660(param_1,param_2,0xffffffff,uVar10,param_4);
        uVar15 = 0;
        if (*puVar1 != 0) {
          do {
            auVar18 = FUN_10078400(param_4,*(undefined4 *)
                                            (*(int *)(param_1 + 0x8f4) + uVar15 * 0xc + 4),0);
            if ((auVar18._0_8_ & 1) != 0) {
              FUN_1007c660(param_1,param_2,*(undefined4 *)(extraout_w10_01 + 8),param_4,
                           auVar18._8_8_ & 0xffffffff);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)(param_1 + 0x8f8));
        }
      }
    }
  }
  return;
}

