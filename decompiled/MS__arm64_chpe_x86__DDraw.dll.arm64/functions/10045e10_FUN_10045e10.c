/*
 * FUN_10045e10 at 10045e10
 * undefined FUN_10045e10(void)
 * Address ranges: 10045e10-100463db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10045e10(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined1 auVar16 [16];
  int local_90;
  int aiStack_80 [16];
  
  auVar16 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (auVar16._0_4_ == 0) {
    auVar16 = FUN_10001c10(auVar16._0_8_ & 0xffffffff);
  }
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_90 = -0x7ff8ffa9;
  if (param_3 == 0) goto LAB_10046384;
  piVar1 = (int *)(param_1 + 0xfc);
  local_90 = -0x7789fd45;
  if (((*(int *)(*(int *)(param_3 + 0xfc) + 0x118) != *(int *)(*piVar1 + 0x118)) ||
      (local_90 = -0x7789fe3e, *(char *)(param_1 + 8) != '\0')) || (*(char *)(param_3 + 8) != '\0'))
  goto LAB_10046384;
  iVar3 = *(int *)(param_1 + 0x10c);
  iVar15 = param_1;
  iVar11 = iVar3;
  while (iVar11 != 0) {
    iVar15 = *(int *)(iVar15 + 0x10c);
    iVar11 = *(int *)(iVar15 + 0x10c);
  }
  iVar11 = *(int *)(param_3 + 0x10c);
  iVar4 = param_3;
  iVar5 = iVar11;
  while (iVar5 != 0) {
    iVar4 = *(int *)(iVar4 + 0x10c);
    iVar5 = *(int *)(iVar4 + 0x10c);
  }
  local_90 = -0x7789fff6;
  iVar6 = param_1;
  iVar5 = iVar3;
  if (iVar15 == iVar4) goto LAB_10046384;
  while (iVar5 != 0) {
    piVar2 = (int *)(iVar6 + 0x10c);
    iVar6 = *piVar2;
    iVar5 = *(int *)(*piVar2 + 0x10c);
  }
  for (; iVar5 = param_3, iVar15 = iVar11, iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x110)) {
    if (iVar6 == param_3) goto LAB_10045fb4;
  }
  while (iVar15 != 0) {
    piVar2 = (int *)(iVar5 + 0x10c);
    iVar5 = *piVar2;
    iVar15 = *(int *)(*piVar2 + 0x10c);
  }
  for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x110)) {
    if (iVar5 == param_1) goto LAB_10045fb4;
  }
  bVar8 = false;
LAB_10045f84:
  uVar13 = *(uint *)(param_3 + 0x1b8);
  if (((uVar13 >> 0x11 & 1) == 0) || (piVar2 = (int *)(param_1 + 0x118), *piVar2 != 0)) {
    if (iVar11 != 0) goto LAB_10046384;
    uVar7 = *(uint *)(param_1 + 0x1b8);
    if ((uVar7 & 0x234) == 0) {
      if (*(int *)(param_1 + 0x110) != 0) goto LAB_10046384;
      if ((((uVar7 & 0x401000) == 0x401000) && ((uVar13 & 0x401000) == 0x401000)) &&
         (((*(uint *)(param_1 + 0x1bc) >> 9 & 1) == 0 &&
          ((*(uint *)(param_3 + 0x1bc) >> 9 & 1) == 0)))) {
        if (!bVar8) {
          local_90 = -0x7789fff6;
          if (((*(uint *)(param_3 + 0x15c) <= *(uint *)(param_1 + 0x15c)) &&
              (*(uint *)(param_3 + 0x158) <= *(uint *)(param_1 + 0x158))) &&
             (uVar12 = FUN_1004cb90(param_1 + 0x198,param_3 + 0x198,0), iVar11 = param_1,
             (uVar12 & 1) != 0)) {
            while (iVar3 != 0) {
              iVar3 = *(int *)(*(int *)(iVar11 + 0x10c) + 0x10c);
              iVar11 = *(int *)(iVar11 + 0x10c);
            }
            if (((uVar13 >> 3 & 1) == 0) && ((*(uint *)(iVar11 + 0x1b8) >> 3 & 1) == 0)) {
              uVar13 = 0;
              do {
                piVar2 = aiStack_80 + uVar13;
                uVar13 = uVar13 + 1;
                *piVar2 = iVar11;
                iVar15 = param_3;
                if (0x10 < uVar13) {
                  bVar8 = false;
                  goto LAB_10046184;
                }
                iVar11 = *(int *)(iVar11 + 0x110);
              } while (iVar11 != 0);
              bVar8 = true;
LAB_10046184:
              do {
                piVar2 = aiStack_80 + uVar13;
                uVar13 = uVar13 + 1;
                *piVar2 = iVar15;
                if (0x10 < uVar13) goto LAB_10046340;
                piVar2 = (int *)(iVar15 + 0x110);
                iVar15 = *piVar2;
              } while (*piVar2 != 0);
              if ((bVar8) &&
                 (uVar12 = FUN_1004bbf0(param_1,aiStack_80,uVar13,uVar13), (uVar12 & 1) != 0)) {
                *(int *)(param_1 + 0x110) = param_3;
                *(undefined4 *)(param_1 + 0x114) = param_2;
                (*pcVar9)();
                (*extraout_w11_00)(param_2);
                local_90 = 0;
                *(int *)(param_3 + 0x10c) = param_1;
              }
            }
          }
          goto LAB_10046340;
        }
        goto LAB_10045fac;
      }
      if (((param_4 == '\0') || ((uVar7 & 0x80c2100a) != 0)) || ((uVar13 & 0x80c2100a) != 0))
      goto LAB_10046384;
      if (*(int *)(DAT_100be0c0 + 0x58) != 0) {
        auVar16 = ZEXT816(0x100a8e78) << 0x40;
        local_90 = -0x7789fff6;
        uVar13 = 0;
        iVar11 = DAT_100be0c0;
        do {
          iVar15 = *(int *)(*(int *)(iVar11 + 0x54) + uVar13 * 4);
          if (iVar15 != 0) {
            (*pcVar9)(auVar16._0_8_,auVar16._8_8_);
            auVar16 = (*extraout_w11_01)(iVar15);
            iVar11 = DAT_100be0c0;
            if (auVar16._0_4_ == 1) {
              uVar10 = (*pcVar9)();
              uVar10 = (*extraout_w11_02)(uVar10);
              (*pcVar9)();
              auVar16 = (*extraout_w11_03)(iVar15,uVar10);
              iVar11 = DAT_100be0c0;
              if ((auVar16._0_8_ & 0xff) != 0) {
                iVar11 = FUN_10039370(uVar10);
                if (*piVar1 != iVar11) goto LAB_10046384;
                break;
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(iVar11 + 0x58));
      }
      local_90 = -0x7789fff6;
      if (DAT_100c2990 != '\0') goto LAB_10046384;
    }
    else if ((uVar7 >> 3 & 1) != 0) goto LAB_10046384;
    if (!bVar8) {
      local_90 = FUN_10045b28(param_1,param_2,param_3);
      goto LAB_10046340;
    }
  }
  else if (!bVar8) {
    local_90 = -0x7789fff6;
    if ((((*(uint *)(param_1 + 0x1b8) >> 0xd & 1) != 0) &&
        ((*(uint *)(param_1 + 0x1bc) & 0xfe00) != 0x200)) &&
       (local_90 = -0x7fffbffb,
       ((*(uint *)(*(int *)(param_3 + 4) + 200) ^ *(uint *)(*(int *)(param_1 + 4) + 200)) & 1) == 0)
       ) {
      *piVar2 = param_3;
      *(undefined4 *)(param_1 + 0x114) = param_2;
      (*pcVar9)(auVar16._0_8_,auVar16._8_8_,param_1 + 0x11c);
      local_90 = (*extraout_w11)(param_3,&DAT_100b1860);
      if (-1 < local_90) {
        *piVar2 = param_3;
      }
    }
LAB_10046340:
    if ((-1 < local_90) && (DAT_100c291c != 0)) {
      puVar14 = (undefined4 *)(*piVar1 + 0xc);
      uVar10 = (*pcVar9)();
      (*extraout_w11_04)(uVar10,*puVar14,param_1);
    }
    goto LAB_10046384;
  }
LAB_10045fac:
  local_90 = -0x7789fe66;
LAB_10046384:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return local_90;
LAB_10045fb4:
  bVar8 = true;
  goto LAB_10045f84;
}

