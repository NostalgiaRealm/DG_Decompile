/*
 * FUN_1003c490 at 1003c490
 * undefined FUN_1003c490(void)
 * Address ranges: 1003c490-1003cca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003c490(int param_1,int param_2,uint param_3,char param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int *piVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  byte local_c0;
  byte local_bf;
  int *local_bc;
  code *local_b8;
  int *local_b4;
  char *local_b0;
  int *local_ac;
  code *local_a8;
  int *local_a4;
  code *local_a0;
  uint *local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 auStack_8c [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  code *pcStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  char *local_4c;
  
  FUN_10037888(&local_c0);
  uVar12 = FUN_100a9d50(auStack_8c);
  uVar15 = 0x80070057;
  if (((param_3 >> 6 & 1) == 0) || ((param_3 & 0x11) == 0x11)) {
    uVar3 = param_3 >> 7 & 1;
    uVar14 = param_3 >> 8 & 1;
    if (((uVar3 == 0) || (uVar14 == 0)) &&
       (((uVar4 = param_3 >> 9 & 1, uVar4 == 0 || (uVar14 == 0)) && ((param_3 & 0x1800) != 0x1800)))
       ) {
      uVar5 = uVar3;
      if ((((param_3 & 0x18) != 0) || (uVar5 = uVar4, uVar3 != 0)) &&
         ((uVar5 == 0 || (((param_3 & 0x18) == 0x10 && uVar3 != 0) && uVar4 != 0)))) {
        local_9c = (uint *)(param_1 + 0x104);
        uVar5 = *local_9c >> 4 & 1;
        if ((param_3 & 0x18) == 0) {
          uVar15 = 0x8876023b;
          if (uVar5 != 0) goto LAB_1003cc74;
          if (uVar3 != 0) {
            *(int *)(param_1 + 0xf8) = param_2;
            *(int *)(param_1 + 0x24) = param_2;
          }
        }
        else {
          if (uVar4 == 0) {
            if ((uVar14 != 0) && (*(int *)(param_1 + 0xf8) == 0)) {
              uVar15 = 0x8876025a;
              goto LAB_1003cc74;
            }
            if ((param_2 == 0) && (uVar15 = 0x80070057, (param_3 & 0x18) != 8)) goto LAB_1003cc74;
          }
          else {
            if (uVar3 == 0) {
              if (param_2 == 0) {
                if (*(int *)(param_1 + 0xf8) == 0) goto LAB_1003cc74;
                bVar8 = true;
              }
              else {
                bVar8 = param_2 == *(int *)(param_1 + 0xf8);
              }
            }
            else {
              bVar8 = param_2 != 0;
              uVar15 = 0x88760239;
            }
            if (!bVar8) goto LAB_1003cc74;
          }
          local_b4 = (int *)(param_1 + 0x11c);
          if ((((&DAT_100be33c)[*local_b4 * 0x228] != '\0') && (uVar5 == 0)) &&
             (uVar15 = 0x88760245, (param_3 >> 4 & 1) != 0)) goto LAB_1003cc74;
          uVar15 = 0x80004005;
          local_bf = (byte)(param_3 >> 4) & 1;
          local_a4 = local_b4;
          if (uVar4 != 0) {
            if (uVar3 != 0) {
              *(int *)(param_1 + 0xf8) = param_2;
              *(int *)(param_1 + 0x24) = param_2;
            }
            local_b0 = (char *)(param_1 + 0x36);
            if (*local_b0 == '\0') {
              iVar11 = DAT_100be0d8 + 1;
              bVar8 = DAT_100be0d8 == 0;
              DAT_100be0d8 = iVar11;
              if (bVar8) {
                local_68 = 0;
                local_5c = 0;
                local_70 = 0x20;
                pcStack_6c = FUN_10005ab0;
                local_54 = 0;
                local_60 = DAT_100c2954;
                local_4c = s_DGDEVICEWINDOW_100b33c8;
                DAT_100be0d0 = (*(code *)PTR_FUN_100ba284)(&local_70);
              }
              *local_b0 = '\x01';
            }
            uVar12 = (*(code *)PTR_FUN_100ba1b8)
                               (0,DAT_100be0d0,s_DirectDrawDeviceWnd_100b3ca0,0x90000000,
                                *(undefined4 *)(&DAT_100be310 + *local_b4 * 0x228),
                                *(undefined4 *)(&DAT_100be314 + *local_b4 * 0x228),0x80,0x80,
                                *(undefined4 *)(param_1 + 0xf8));
            param_2 = (int)uVar12;
          }
          if (param_2 != 0) {
            uVar12 = FUN_1008eaa0(uVar12,param_2);
          }
          local_b4 = (int *)(param_1 + 0xfc);
          local_a8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
          if (*local_b4 != param_2) {
            puVar1 = (uint *)(param_1 + 0x110);
            uVar3 = *puVar1;
            if (uVar3 != 0) {
              uVar14 = 0;
LAB_1003c75c:
              if (*(int *)(*(int *)(param_1 + 0x10c) + uVar14 * 4) != param_2)
              goto code_r0x1003c76c;
              if (uVar14 != 0xffffffff) {
                uVar14 = uVar14 + 1;
                if (uVar14 < uVar3) {
                  do {
                    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10c) + uVar14 * 4);
                    uVar14 = uVar14 + 1;
                    puVar2[-1] = *puVar2;
                  } while (uVar14 < *puVar1);
                }
                *puVar1 = *puVar1 - 1;
                goto LAB_1003cae0;
              }
            }
LAB_1003c778:
            local_ac = (int *)(param_1 + 0x118);
            local_bc = (int *)*local_ac;
            local_b0 = (char *)(*local_bc + 0x60);
            local_98 = param_1 + 0x18;
            local_94 = param_1 + 0x120;
            local_90 = param_1 + 0x1c;
            local_a0 = (code *)(param_1 + 0x20);
            auVar16 = FUN_1008e100(local_bc + 1);
            local_b8 = local_a8;
            (*local_a8)(auVar16._0_8_,auVar16._8_8_,auVar16._0_8_ & 0xffffffff);
            local_c0 = local_bf;
            cVar9 = (*extraout_w11)(local_bc,param_2);
            if (cVar9 == '\0') goto LAB_1003cc74;
            uVar10 = (*local_b8)();
            (*extraout_w11_00)(uVar10,param_2,1,1);
            if (((param_4 != '\0') && (local_c0 == 0)) && (uVar5 != 0)) {
              FUN_1003c2f0(param_1);
              param_4 = '\0';
            }
            local_b8 = local_a8;
            uVar10 = (*local_a8)();
            local_bc = local_b4;
            (*extraout_w11_01)(uVar10,*local_b4,1,1);
            uVar10 = (*local_b8)();
            uVar12 = (*extraout_w11_02)(uVar10,*local_bc);
            local_bc = (int *)*local_a4;
            local_b8 = (code *)(&DAT_100be150 + (int)local_bc * 0x8a);
            if ((((&DAT_100be33a)[(int)local_bc * 0x228] != '\0') && (param_2 != 0)) &&
               (local_bf != 0)) {
              iVar11 = (*(code *)PTR_FUN_100ba1dc)();
              local_b0 = (char *)0x0;
              if (iVar11 != 0) {
                local_b0 = (char *)(*(code *)PTR_FUN_100ba23c)(iVar11,0);
              }
              uVar12 = (*(code *)PTR_FUN_100ba23c)(param_2,0);
              if ((char *)uVar12 == local_b0) {
                if ((*(char *)(DAT_100be0c0 + 0x7e5) == '\0') &&
                   (*(char *)(DAT_100be0c0 + 0x784) != '\0')) {
                  local_c0 = 1;
                }
                else {
                  local_c0 = 0;
                }
                local_a0 = local_b8 + 0x198;
                local_88 = *(undefined4 *)local_a0;
                uStack_84 = *(undefined4 *)(local_b8 + 0x19c);
                local_80 = *(undefined4 *)(local_b8 + 0x1a0);
                uStack_7c = *(undefined4 *)(local_b8 + 0x1a4);
                local_78 = *(undefined4 *)(&DAT_100bbc78 + (int)local_bc * 0xa4);
                uStack_74 = *(undefined4 *)(&DAT_100bbcb4 + (int)local_bc * 0xa4);
                local_bc = (int *)(param_1 + 0x10);
                FUN_10006550((int *)(param_1 + 0x10));
                local_b8 = local_a8;
                uVar10 = (*local_a8)();
                (*extraout_w11_03)(uVar10,param_2,&local_88,local_c0);
                uVar10 = (*local_b8)();
                (*extraout_w11_04)(uVar10,param_2,*(undefined4 *)(local_a0 + 0x10),
                                   *(undefined4 *)(local_a0 + 0x14));
                FUN_100065c8(local_bc);
                (*(code *)PTR_FUN_100ba2a4)(param_2);
                uVar12 = (*(code *)PTR_FUN_100ba2b0)(param_2);
              }
            }
          }
LAB_1003cae0:
          if (((param_4 != '\0') && (local_bf == 0)) && (uVar5 != 0)) {
            uVar12 = FUN_1003c2f0(param_1);
          }
          piVar7 = local_b4;
          if (*local_b4 != 0) {
            iVar11 = 0;
            if (param_1 != 0) {
              iVar11 = param_1 + 0x10;
            }
            FUN_1008f050(uVar12,*local_b4,iVar11);
            if ((*(char *)(param_1 + 0x10a) != '\0') && (*piVar7 != param_2)) {
              (*(code *)PTR_FUN_100ba1cc)(*piVar7);
            }
          }
          uVar10 = (*local_a8)();
          bVar6 = local_bf;
          (*extraout_w11_05)(uVar10,param_2,local_bf);
          *local_b4 = param_2;
          uVar13 = (*(code *)PTR_FUN_100ba23c)(param_2,0);
          *(int *)(param_1 + 0x100) = (int)uVar13;
          *local_9c = param_3;
          *(char *)(param_1 + 0x10a) = (char)uVar4;
          *(undefined1 *)(param_1 + 0x108) = 1;
          if (bVar6 == 0) {
            if (uVar5 != 0) {
              (&DAT_100be33c)[*local_a4 * 0x228] = 0;
            }
          }
          else {
            (&DAT_100be33c)[*local_a4 * 0x228] = 1;
            uVar13 = FUN_1003c130(param_1);
          }
          if (((&DAT_100be33a)[*local_a4 * 0x228] == '\0') &&
             (uVar13 = FUN_100389c8(param_1,*(undefined4 *)(param_1 + 0x120)), (uVar13 & 1) == 0))
          goto LAB_1003cc74;
          if (param_2 != 0) {
            FUN_1008ec70(uVar13,param_2);
          }
        }
        uVar15 = 0;
      }
    }
  }
LAB_1003cc74:
  FUN_100a9ca0(auStack_8c);
  FUN_10037900(&local_c0);
  return uVar15;
code_r0x1003c76c:
  uVar14 = uVar14 + 1;
  if (uVar3 <= uVar14) goto LAB_1003c778;
  goto LAB_1003c75c;
}

