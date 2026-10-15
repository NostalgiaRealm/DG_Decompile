/*
 * FUN_10054be8 at 10054be8
 * undefined FUN_10054be8(void)
 * Address ranges: 10054be8-10054fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10054be8(int param_1,int param_2,int param_3,int *param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_e0 [4];
  int local_dc;
  int local_d8 [2];
  int *local_d0;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [72];
  
  local_d8[0] = param_2;
  local_d0 = param_4;
  uVar9 = FUN_10037888(auStack_e0);
  local_dc = param_3;
  piVar5 = (int *)FUN_10055228(uVar9,&local_dc);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)FUN_100913c0(0x14);
    if (piVar5 != (int *)0x0) {
      *piVar5 = param_3;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      *(undefined2 *)(piVar5 + 4) = 0;
      uVar14 = (ulonglong)param_3;
      uVar11 = 0;
      uVar10 = DAT_100c2658;
      if (DAT_100c2658 == 0) {
        uVar13 = 0;
      }
      else {
        do {
          uVar13 = uVar10 + uVar11 >> 1;
          uVar12 = *(ulonglong *)(DAT_100c2650._4_4_ + uVar13 * 0x10);
          uVar4 = uVar13;
          if (uVar12 <= uVar14) {
            if (uVar14 <= uVar12) break;
            uVar11 = uVar13 + 1;
            uVar13 = uVar11;
            uVar4 = uVar10;
          }
          uVar10 = uVar4;
        } while (uVar10 != uVar11);
      }
      if ((uVar13 == DAT_100c2658) ||
         (puVar1 = (ulonglong *)(DAT_100c2650._4_4_ + uVar13 * 0x10), *puVar1 != uVar14)) {
        uVar11 = DAT_100c2658;
        if (_DAT_100c265c == DAT_100c2658) {
          if (_DAT_100c265c == 0) {
            uVar11 = 0x10;
          }
          else {
            uVar11 = _DAT_100c265c << 1;
          }
          iVar6 = FUN_100914b0(uVar11 << 4);
          if (iVar6 != 0) {
            uVar10 = 0;
            if (DAT_100c2658 != 0) {
              do {
                puVar2 = (undefined8 *)(DAT_100c2650._4_4_ + uVar10 * 0x10);
                puVar3 = (undefined8 *)(iVar6 + uVar10 * 0x10);
                uVar10 = uVar10 + 1;
                uVar9 = *puVar2;
                puVar3[1] = puVar2[1];
                *puVar3 = uVar9;
              } while (uVar10 < DAT_100c2658);
            }
            FUN_100914d0((int)DAT_100c2650);
            DAT_100c2650._0_4_ = iVar6;
            DAT_100c2650._4_4_ = iVar6;
            _DAT_100c265c = uVar11;
          }
          uVar11 = DAT_100c2658;
          if (_DAT_100c265c == DAT_100c2658) goto LAB_10054ddc;
        }
        for (; uVar13 < uVar11; uVar11 = uVar11 - 1) {
          puVar2 = (undefined8 *)(DAT_100c2650._4_4_ + uVar11 * 0x10);
          puVar2[1] = puVar2[-1];
          *puVar2 = puVar2[-2];
        }
        DAT_100c2658 = DAT_100c2658 + 1;
        *(int *)(DAT_100c2650._4_4_ + uVar13 * 0x10 + 8) = param_3;
        *(int **)(DAT_100c2650._4_4_ + uVar13 * 0x10 + 0xc) = piVar5;
        *(ulonglong *)(DAT_100c2650._4_4_ + uVar13 * 0x10) = uVar14;
      }
      else {
        *(int **)((int)puVar1 + 0xc) = piVar5;
      }
LAB_10054ddc:
      if ((char)piVar5[4] == '\0') {
        if ((param_1 != 0) &&
           (iVar6 = (*(code *)PTR_FUN_100ba1e8)(param_1,auStack_c8,0x40), iVar6 != 0)) {
          FUN_10091640(auStack_c8);
          iVar6 = FUN_10091880(auStack_c8,s_videorenderer_100b3e90);
          if ((iVar6 == 0) &&
             (iVar6 = (*(code *)PTR_FUN_100ba234)(param_1,auStack_88,0x40), iVar6 != 0)) {
            FUN_10091640(auStack_88);
            iVar6 = FUN_10091880(auStack_88,s_activemovie_window_100b3ea0);
            if (iVar6 == 0 && local_d8[0] == 8) {
              FUN_10054a08(piVar5,local_d8);
              iVar7 = local_d8[0];
              iVar6 = param_1;
              if (local_d8[0] != 0) {
                iVar6 = 0;
              }
              iVar6 = FUN_1003c490(*piVar5,iVar6,8,0);
              if (-1 < iVar6) {
                *(bool *)((int)piVar5 + 0x11) = iVar7 == 0;
                piVar5[1] = param_1;
                iVar7 = (*(code *)PTR_FUN_100ba23c)(param_1,0);
                piVar5[2] = iVar7;
                if ((char)piVar5[4] == '\0') {
                  DAT_100c296c = DAT_100c296c + 1;
                  DAT_100c2948 = DAT_100c2948 + 1;
                  *(undefined1 *)(piVar5 + 4) = 1;
                }
                pcVar8 = (code *)(*(code *)PTR_FUN_100ba22c)(param_1,0xfffffffc);
                if (pcVar8 != FUN_10054bb0) {
                  DAT_100c2994 = (*(code *)PTR_FUN_100ba2c8)(param_1,0xfffffffc,FUN_10054bb0);
                }
              }
              *local_d0 = iVar6;
              uVar9 = 1;
              goto LAB_10054fd8;
            }
          }
          else {
            iVar6 = FUN_10091880(auStack_c8,s_mr3frameclass_100b3eb8);
            if (iVar6 == 0) {
              DAT_100c2990 = 1;
            }
          }
        }
      }
      else if (param_1 != piVar5[1]) {
        (*(code *)PTR_FUN_100ba2c8)(param_1,0xfffffffc,DAT_100c2994);
        FUN_10054b60(piVar5);
        piVar5[1] = 0;
        piVar5[2] = 0;
      }
      uVar9 = 0;
      goto LAB_10054fd8;
    }
  }
  else {
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) goto LAB_10054ddc;
  }
  uVar9 = 0;
LAB_10054fd8:
  FUN_10037900(auStack_e0);
  return uVar9;
}

