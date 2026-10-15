/*
 * FUN_1800a5038 at 1800a5038
 * undefined FUN_1800a5038(void)
 * Address ranges: 1800a5038-1800a533b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800a5038(longlong param_1,undefined8 param_2,int *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  longlong extraout_x10;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  ulonglong extraout_x11_01;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  
  uVar11 = 0x8876086c;
  if (param_3 == (int *)0x0) {
    return 0x8876086c;
  }
  if (*param_3 != 0xc) {
    return 0x8876086c;
  }
  iVar1 = param_3[1];
  puVar9 = param_5;
  auVar19 = func_0x0001801072f0(iVar1);
  if ((auVar19._0_8_ & 1) == 0) {
    return 0x8876086c;
  }
  if ((2 < (uint)param_3[2] || puVar9 == (undefined4 *)0x0) || 1 < (uint)param_3[2]) {
    return 0x8876086c;
  }
  uVar17 = 0;
  uVar16 = 0;
  uVar15 = 0;
  uVar12 = 0;
  if (*(uint *)(param_1 + -0x30) <= auVar19._8_4_) goto LAB_1800a5308;
  puVar13 = (undefined1 *)0x0;
  uVar14 = 0;
  uVar18 = 0;
  uVar2 = *(uint *)(*(longlong *)(param_1 + -0x38) + (auVar19._8_8_ & 0xffffffff) * 4);
  if (((*(uint *)(DAT_18024de60 + 0x9e3) >> 2 & 1) != 0) &&
     (iVar5 = func_0x000180106dc0(extraout_x11 & 0xffffffff), iVar5 == 0x20)) {
    uVar6 = func_0x000180106a90(extraout_x11_00 & 0xffffffff);
    uVar7 = func_0x0001801073a0(*(undefined8 *)
                                 (extraout_x10 + 0x158 +
                                 (ulonglong)*(uint *)(param_1 + -0x90) * 0x1b0),uVar6);
    if (((uVar7 & 1) != 0) &&
       (puVar8 = (undefined1 *)thunk_FUN_180102f80(0x10), puVar8 != (undefined1 *)0x0)) {
      thunk_FUN_180102fc0(0);
      uVar18 = 0x10;
      uVar14 = 1;
      *puVar8 = 0x20;
      puVar13 = puVar8;
    }
  }
  if (((*(uint *)(DAT_18024de60 + 0x9e3) >> 1 & 1) != 0) &&
     (iVar5 = func_0x000180106dc0(iVar1), iVar5 == 0x10)) {
    uVar6 = func_0x000180106a90(extraout_x11_01 & 0xffffffff);
    uVar7 = func_0x0001801073a0((&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36],uVar6
                               );
    if ((uVar7 & 1) != 0) {
      puVar8 = puVar13;
      if (uVar14 == uVar18) {
        iVar5 = uVar18 << 1;
        if (uVar18 == 0) {
          iVar5 = 0x10;
        }
        puVar8 = (undefined1 *)thunk_FUN_180102f80(iVar5);
        if (puVar8 == (undefined1 *)0x0) goto LAB_1800a51f4;
        thunk_FUN_180001218(puVar8,puVar13,uVar18);
        thunk_FUN_180102fc0(puVar13);
      }
      puVar8[uVar14] = 0x10;
      uVar14 = uVar14 + 1;
      puVar13 = puVar8;
    }
  }
LAB_1800a51f4:
  uVar7 = FUN_18001f9b8();
  uVar7 = uVar7 & 0xff;
  if ((uVar14 == 0) && (param_4 < *(uint *)(&DAT_180253a80 + (ulonglong)uVar2 * 0x4b + uVar7 * 2)))
  {
    uVar11 = 0x8876086a;
  }
  uVar18 = *(uint *)(&DAT_180253a80 + (ulonglong)uVar2 * 0x4b + uVar7 * 2);
  if (uVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1800a5244);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar18 != 0) {
    uVar3 = param_4 / uVar18;
  }
  if (uVar3 < uVar14) {
    uVar11 = 0;
    puVar9 = (undefined4 *)
             ((&DAT_180253a78)[(ulonglong)uVar2 * 0x4b + uVar7 * 2] +
             (ulonglong)(param_4 - uVar3 * uVar18) * 0x18);
    uVar17 = *puVar9;
    uVar16 = puVar9[1];
    uVar15 = puVar9[4];
    if (iVar1 == 0x23) {
      uVar12 = 0x23;
    }
    else if (puVar13[uVar3] == '\b') {
      uVar12 = 0x29;
    }
    else {
      uVar12 = 0;
      pcVar10 = (char *)(&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36];
      if (*pcVar10 != -1) {
        uVar7 = 0;
        do {
          if ((&DAT_180229a68)[(byte)pcVar10[uVar7]] == puVar13[uVar3]) {
            uVar12 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar10[uVar7] * 4);
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (pcVar10[uVar7] != -1);
      }
    }
  }
  thunk_FUN_180102fc0(puVar13);
LAB_1800a5308:
  *param_5 = 0x18;
  param_5[1] = uVar17;
  param_5[2] = uVar16;
  param_5[3] = uVar15;
  param_5[4] = uVar12;
  param_5[5] = 0;
  return uVar11;
}

