/*
 * FUN_1801bca38 at 1801bca38
 * undefined FUN_1801bca38(void)
 * Address ranges: 1801bca38-1801bcb9b;1801bcba8-1801bcd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801bca38(longlong param_1,uint param_2,int param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong extraout_x9;
  char *pcVar9;
  undefined4 uVar10;
  longlong extraout_x11;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  
  uVar5 = 0x8876086c;
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = 0;
    *param_5 = 0;
    if (param_2 < *(uint *)(param_1 + -0x30)) {
      puVar12 = (undefined1 *)0x0;
      uVar13 = 0;
      uVar11 = 0;
      uVar1 = *(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4);
      if (((*(uint *)(DAT_18024d928 + 0x9e3) >> 2 & 1) != 0) &&
         (iVar4 = FUN_180106dc0(param_3), iVar4 == 0x20)) {
        uVar5 = FUN_180106a90(param_3);
        uVar6 = FUN_1801073a0(*(undefined8 *)
                               (extraout_x11 + 0x158 +
                               (ulonglong)*(uint *)(extraout_x9 + -0x90) * 0x1b0),uVar5);
        if (((uVar6 & 1) != 0) &&
           (puVar7 = (undefined1 *)FUN_1802229a8(0x10), puVar7 != (undefined1 *)0x0)) {
          FUN_1802229d8(0);
          *puVar7 = 0x20;
          uVar11 = 0x10;
          uVar13 = 1;
          puVar12 = puVar7;
        }
      }
      if (((*(uint *)(DAT_18024d928 + 0x9e3) >> 1 & 1) != 0) &&
         (iVar4 = FUN_180106dc0(param_3), iVar4 == 0x10)) {
        uVar5 = FUN_180106a90(param_3);
        uVar6 = FUN_1801073a0((&DAT_180246578)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36],uVar5);
        if ((uVar6 & 1) != 0) {
          if (uVar13 == uVar11) {
            iVar4 = uVar11 << 1;
            if (uVar11 == 0) {
              iVar4 = 0x10;
            }
            lVar8 = FUN_1802229a8(iVar4);
            if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_180104c48(lVar8,puVar12,uVar11);
            }
          }
          else {
            puVar12[uVar13] = 0x10;
            uVar13 = uVar13 + 1;
          }
        }
      }
      uVar6 = FUN_18012bcd8();
      uVar6 = uVar6 & 0xff;
      uVar5 = 0x8876086c;
      if ((uVar13 == 0) &&
         (param_4 < *(uint *)(&DAT_18024ea70 + (ulonglong)uVar1 * 0x4b + uVar6 * 2))) {
        uVar5 = 0x8876086a;
      }
      uVar11 = *(uint *)(&DAT_18024ea70 + (ulonglong)uVar1 * 0x4b + uVar6 * 2);
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1801bcc08);
        (*pcVar3)();
      }
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = param_4 / uVar11;
      }
      if (uVar2 < uVar13) {
        uVar5 = 0;
        lVar8 = (ulonglong)(param_4 - uVar2 * uVar11) * 0x18;
        *(undefined4 *)param_5 =
             *(undefined4 *)((&DAT_18024ea68)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + lVar8);
        *(undefined4 *)((longlong)param_5 + 4) =
             *(undefined4 *)(lVar8 + (&DAT_18024ea68)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + 4);
        *(undefined4 *)(param_5 + 1) =
             *(undefined4 *)(lVar8 + (&DAT_18024ea68)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + 0x10);
        if (param_3 == 0x23) {
          uVar10 = 0x23;
        }
        else if (puVar12[uVar2] == '\b') {
          uVar10 = 0x29;
        }
        else {
          uVar10 = 0;
          pcVar9 = (char *)(&DAT_180246578)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36];
          if (*pcVar9 != -1) {
            uVar6 = 0;
            do {
              if ((&DAT_180229a68)[(byte)pcVar9[uVar6]] == puVar12[uVar2]) {
                uVar10 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar9[uVar6] * 4);
                break;
              }
              uVar6 = (ulonglong)((int)uVar6 + 1);
            } while (pcVar9[uVar6] != -1);
          }
        }
        *(undefined4 *)((longlong)param_5 + 0xc) = uVar10;
      }
      FUN_1802229d8(puVar12);
    }
  }
  return uVar5;
}

