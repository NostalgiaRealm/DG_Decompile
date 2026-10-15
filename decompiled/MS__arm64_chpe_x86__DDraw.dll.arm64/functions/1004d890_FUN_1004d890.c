/*
 * FUN_1004d890 at 1004d890
 * undefined FUN_1004d890(void)
 * Address ranges: 1004d890-1004ddd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004d890(int param_1,int param_2,undefined8 *param_3,int *param_4,uint *param_5,int param_6,
                undefined1 param_7,char param_8)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int iVar17;
  code *extraout_w11;
  int *extraout_w11_00;
  uint *extraout_w12;
  int extraout_w13;
  uint extraout_w14;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_74;
  int *local_70;
  undefined8 *local_6c;
  int *local_68;
  int local_64;
  uint *local_60;
  int *local_5c;
  int local_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [16];
  
  local_64 = param_6;
  local_58 = param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_1004f590(param_1);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return -0x7789fe3e;
  }
  piVar1 = (int *)(param_1 + 4);
  iVar14 = *piVar1;
  piVar2 = (int *)(iVar14 + 0xb0);
  iVar9 = *piVar2;
  if (iVar9 == 0) {
    iVar9 = (*(code *)PTR_FUN_100ba014)(0,0,0,0);
    *piVar2 = iVar9;
  }
  iVar12 = -0x7789fe52;
  iVar9 = (*(code *)PTR_FUN_100ba050)(iVar9,param_5);
  if (iVar9 == 0) {
    if ((param_8 == '\0') || (*(char *)(*piVar1 + 0x48) != '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    iVar12 = -0x7fffbffb;
    if ((*(int *)(*piVar1 + 0x50) != 0) &&
       ((bVar7 || (uVar15 = FUN_10008e00(*piVar1), (uVar15 & 1) != 0)))) {
      puVar3 = (uint *)(iVar14 + 0xb4);
      piVar4 = (int *)(iVar14 + 0xbc);
      local_68 = (int *)(iVar14 + 0xb8);
      iVar9 = *piVar4;
      local_60 = puVar3;
      if (*local_68 == iVar9) {
        local_70 = (int *)(iVar9 << 1);
        if (iVar9 == 0) {
          local_70 = (int *)&DAT_00000010;
        }
        iVar9 = (int)local_70 * 0x18;
        if (ZEXT48(local_70) * 0x18 >> 0x20 != 0) {
          iVar9 = -1;
        }
        local_5c = local_70;
        local_6c = (undefined8 *)FUN_100914b0(iVar9);
        puVar5 = local_6c;
        if (local_6c == (undefined8 *)0x0) goto LAB_1004dd84;
        for (; local_70 != (int *)0x0; local_70 = (int *)((int)local_70 + -1)) {
          *puVar5 = 0;
          puVar5[2] = 0;
          puVar5[1] = 0;
          puVar5 = puVar5 + 3;
        }
        local_70 = piVar4;
        FUN_100917a0(local_6c,*puVar3,((ulonglong)(uint)(*piVar4 * 3) & 0x1fffffff) << 3);
        FUN_100914d0(*puVar3);
        *puVar3 = (uint)local_6c;
        *local_70 = (int)local_5c;
      }
      puVar5 = (undefined8 *)(*puVar3 + *local_68 * 0x18);
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[2] = 0;
      *local_68 = *local_68 + 1;
      iVar9 = (*(code *)PTR_FUN_100ba018)(param_5);
      if (iVar9 != 0) {
        iVar10 = (*(code *)PTR_FUN_100ba004)(*piVar2,*piVar2,iVar9,2);
        if (iVar10 != 0) {
          FUN_100a9d50(auStack_54);
          if (DAT_100c291c != 0) {
            puVar16 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
            uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar11,*puVar16,param_1);
          }
          FUN_10008050(*piVar1 + 0x4c);
          local_74 = 0;
          iVar12 = FUN_1004e270(param_1,local_64,param_7,param_4,&local_74,param_8);
          puVar3 = local_60;
          if (iVar12 < 0) {
            (*(code *)PTR_FUN_100ba004)(*piVar2,*piVar2,iVar9,4);
          }
          else {
            puVar5 = (undefined8 *)(param_1 + 0x150);
            uVar19 = *puVar5;
            uVar18 = *(undefined8 *)(param_1 + 0x168);
            uVar8 = *(undefined8 *)(param_1 + 0x160);
            param_3[1] = *(undefined8 *)(param_1 + 0x158);
            *param_3 = uVar19;
            param_3[3] = uVar18;
            param_3[2] = uVar8;
            uVar19 = *(undefined8 *)(param_1 + 0x170);
            uVar18 = *(undefined8 *)(param_1 + 0x188);
            uVar8 = *(undefined8 *)(param_1 + 0x180);
            param_3[5] = *(undefined8 *)(param_1 + 0x178);
            param_3[4] = uVar19;
            param_3[7] = uVar18;
            param_3[6] = uVar8;
            uVar19 = *(undefined8 *)(param_1 + 400);
            uVar18 = *(undefined8 *)(param_1 + 0x1a8);
            uVar8 = *(undefined8 *)(param_1 + 0x1a0);
            param_3[9] = *(undefined8 *)(param_1 + 0x198);
            param_3[8] = uVar19;
            param_3[0xb] = uVar18;
            param_3[10] = uVar8;
            uVar8 = *(undefined8 *)(param_1 + 0x1b0);
            param_3[0xd] = *(undefined8 *)(param_1 + 0x1b8);
            param_3[0xc] = uVar8;
            param_3[0xe] = *(undefined8 *)(param_1 + 0x1c0);
            *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)(param_1 + 0x1c8);
            if (*param_4 == 0) {
              piVar4 = (int *)((int)param_3 + 0x24);
            }
            else {
              local_60 = (uint *)(param_1 + 0x19c);
              if (((*local_60 >> 2 & 1) == 0) || (uVar15 = FUN_1004d420(param_1), (uVar15 & 1) == 0)
                 ) {
                uVar13 = 8;
              }
              else {
                uVar13 = 0x80000;
              }
              local_68 = (int *)((int)param_3 + 0x24);
              *(uint *)((int)param_3 + 4) = *(uint *)((int)param_3 + 4) | uVar13;
              local_64 = *piVar1;
              if ((*local_60 >> 2 & 1) == 0) {
                *local_68 = *param_4 + param_5[1] * local_74 +
                            (uint)*(byte *)(local_64 + 0x1e) * *param_5;
                iVar10 = local_74;
              }
              else {
                FUN_1004c408(puVar5);
                FUN_1004c308(puVar5);
                uVar13 = FUN_1004c3a8(puVar5);
                iVar10 = local_74;
                if (uVar13 == 0) {
                    /* WARNING: Does not return */
                  uVar8 = SoftwareBreakpoint(0xf004,0x1004dc2c);
                  (*(code *)uVar8)();
                }
                uVar6 = 0;
                if (uVar13 != 0) {
                  uVar6 = *param_5 / uVar13;
                }
                if (extraout_w14 == 0) {
                    /* WARNING: Does not return */
                  uVar8 = SoftwareBreakpoint(0xf004,0x1004dc3c);
                  (*(code *)uVar8)();
                }
                uVar13 = 0;
                if (extraout_w14 != 0) {
                  uVar13 = *extraout_w12 / extraout_w14;
                }
                *extraout_w11_00 = *param_4 + uVar13 * local_74 + uVar6 * extraout_w13;
                uVar15 = FUN_1004d420(param_1);
                if ((uVar15 & 1) != 0) {
                  local_74 = (uint)*(ushort *)(local_64 + 0xe) * iVar10;
                  iVar10 = local_74;
                }
              }
              *(int *)(param_3 + 2) = iVar10;
              piVar4 = local_68;
            }
            iVar10 = *(int *)(iVar14 + 0xb8) * 0x18 + -0x18;
            *(int *)(iVar10 + *puVar3) = param_1;
            if (local_58 == 0) {
              iVar17 = -1;
            }
            else {
              iVar17 = *piVar4;
            }
            *(int *)(iVar10 + *puVar3 + 4) = iVar17;
            uVar13 = *puVar3;
            uVar8 = *(undefined8 *)param_5;
            *(undefined8 *)(iVar10 + uVar13 + 0x10) = *(undefined8 *)(param_5 + 2);
            *(undefined8 *)(iVar10 + uVar13 + 8) = uVar8;
            *(int *)(*piVar1 + 0xc0) = *(int *)(*piVar1 + 0xc0) + 1;
            *(undefined1 *)(param_1 + 9) = 1;
          }
          FUN_100a9ca0(auStack_54);
        }
        (*(code *)PTR_FUN_100ba020)(iVar9);
        if (-1 < iVar12) goto LAB_1004dd84;
      }
      iVar9 = *(int *)(iVar14 + 0xb8);
      if (iVar9 != 0) {
        *(int *)(iVar14 + 0xb8) = iVar9 + -1;
      }
    }
  }
LAB_1004dd84:
  iVar14 = (*(code *)PTR_FUN_100ba040)(*piVar2,auStack_50);
  if (iVar14 == 1) {
    (*(code *)PTR_FUN_100ba020)(*piVar2);
    *piVar2 = 0;
  }
  return iVar12;
}

