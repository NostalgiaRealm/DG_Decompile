/*
 * FUN_1801bd678 at 1801bd678
 * undefined FUN_1801bd678(void)
 * Address ranges: 1801bd678-1801bd81b;1801bd828-1801bd97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1801bd678(longlong param_1,undefined8 param_2,int *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong extraout_x9;
  char *pcVar11;
  longlong extraout_x11;
  longlong extraout_x11_00;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined4 local_64;
  
  uVar12 = 0x8876086c;
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    iVar1 = param_3[1];
    puVar10 = param_5;
    auVar19 = FUN_1801072f0(iVar1);
    if (((auVar19._0_8_ & 1) != 0) &&
       (((uint)param_3[2] < 3 && puVar10 != (undefined4 *)0x0) && (uint)param_3[2] < 2)) {
      uVar17 = 0;
      uVar16 = 0;
      local_64 = 0;
      uVar15 = 0;
      if (auVar19._8_4_ < *(uint *)(extraout_x11 + -0x30)) {
        puVar13 = (undefined1 *)0x0;
        uVar14 = 0;
        uVar18 = 0;
        uVar2 = *(uint *)(*(longlong *)(extraout_x11 + -0x38) + (auVar19._8_8_ & 0xffffffff) * 4);
        if (((*(uint *)(DAT_18024d928 + 0x9e3) >> 2 & 1) != 0) &&
           (iVar5 = FUN_180106dc0(extraout_x12 & 0xffffffff), iVar5 == 0x20)) {
          uVar6 = FUN_180106a90(extraout_x12_00 & 0xffffffff);
          uVar7 = FUN_1801073a0(*(undefined8 *)
                                 (extraout_x9 + 0x158 +
                                 (ulonglong)*(uint *)(extraout_x11_00 + -0x90) * 0x1b0),uVar6);
          if (((uVar7 & 1) != 0) &&
             (puVar8 = (undefined1 *)FUN_1802229a8(0x10), puVar8 != (undefined1 *)0x0)) {
            FUN_1802229d8(0);
            uVar18 = 0x10;
            uVar14 = 1;
            *puVar8 = 0x20;
            puVar13 = puVar8;
          }
        }
        if (((*(uint *)(DAT_18024d928 + 0x9e3) >> 1 & 1) != 0) &&
           (iVar5 = FUN_180106dc0(iVar1), iVar5 == 0x10)) {
          uVar6 = FUN_180106a90(extraout_x12_01 & 0xffffffff);
          uVar7 = FUN_1801073a0((&DAT_180246578)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36],uVar6
                               );
          if ((uVar7 & 1) != 0) {
            if (uVar14 == uVar18) {
              iVar5 = uVar18 << 1;
              if (uVar18 == 0) {
                iVar5 = 0x10;
              }
              lVar9 = FUN_1802229a8(iVar5);
              if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(lVar9,puVar13,uVar18);
              }
            }
            else {
              puVar13[uVar14] = 0x10;
              uVar14 = uVar14 + 1;
            }
          }
        }
        uVar7 = FUN_18012bcd8();
        uVar7 = uVar7 & 0xff;
        if ((uVar14 == 0) &&
           (param_4 < *(uint *)(&DAT_18024ea70 + (ulonglong)uVar2 * 0x4b + uVar7 * 2))) {
          uVar12 = 0x8876086a;
        }
        uVar18 = *(uint *)(&DAT_18024ea70 + (ulonglong)uVar2 * 0x4b + uVar7 * 2);
        if (uVar18 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801bd884);
          (*pcVar4)();
        }
        uVar3 = 0;
        if (uVar18 != 0) {
          uVar3 = param_4 / uVar18;
        }
        if (uVar3 < uVar14) {
          uVar12 = 0;
          puVar10 = (undefined4 *)
                    ((&DAT_18024ea68)[(ulonglong)uVar2 * 0x4b + uVar7 * 2] +
                    (ulonglong)(param_4 - uVar3 * uVar18) * 0x18);
          uVar17 = *puVar10;
          uVar16 = puVar10[1];
          uVar15 = puVar10[4];
          if (iVar1 == 0x23) {
            local_64 = 0x23;
          }
          else if (puVar13[uVar3] == '\b') {
            local_64 = 0x29;
          }
          else {
            local_64 = 0;
            pcVar11 = (char *)(&DAT_180246578)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36];
            if (*pcVar11 != -1) {
              uVar7 = 0;
              do {
                if ((&DAT_180229a68)[(byte)pcVar11[uVar7]] == puVar13[uVar3]) {
                  local_64 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar11[uVar7] * 4);
                  break;
                }
                uVar7 = (ulonglong)((int)uVar7 + 1);
              } while (pcVar11[uVar7] != -1);
            }
          }
        }
        FUN_1802229d8(puVar13);
      }
      *param_5 = 0x18;
      param_5[1] = uVar17;
      param_5[2] = uVar16;
      param_5[3] = uVar15;
      param_5[4] = local_64;
      param_5[5] = 0;
    }
  }
  return uVar12;
}

