/*
 * FUN_1800a4468 at 1800a4468
 * undefined FUN_1800a4468(void)
 * Address ranges: 1800a4468-1800a4723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a4468(longlong param_1,uint param_2,int param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  
  if (param_5 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  param_5[1] = 0;
  *param_5 = 0;
  if (*(uint *)(param_1 + -0x30) <= param_2) {
    return 0x8876086c;
  }
  puVar12 = (undefined1 *)0x0;
  uVar13 = 0;
  uVar11 = 0;
  uVar1 = *(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4);
  if (((*(uint *)(DAT_18024de60 + 0x9e3) >> 2 & 1) != 0) &&
     (iVar4 = func_0x000180106dc0(param_3), iVar4 == 0x20)) {
    uVar5 = func_0x000180106a90(param_3);
    uVar6 = func_0x0001801073a0((&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36],uVar5
                               );
    if (((uVar6 & 1) != 0) &&
       (puVar7 = (undefined1 *)thunk_FUN_180102f80(0x10), puVar7 != (undefined1 *)0x0)) {
      thunk_FUN_180102fc0(0);
      *puVar7 = 0x20;
      uVar11 = 0x10;
      uVar13 = 1;
      puVar12 = puVar7;
    }
  }
  if (((*(uint *)(DAT_18024de60 + 0x9e3) >> 1 & 1) != 0) &&
     (iVar4 = func_0x000180106dc0(param_3), iVar4 == 0x10)) {
    uVar5 = func_0x000180106a90(param_3);
    uVar6 = func_0x0001801073a0((&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36],uVar5
                               );
    if ((uVar6 & 1) != 0) {
      puVar7 = puVar12;
      if (uVar13 == uVar11) {
        iVar4 = uVar11 << 1;
        if (uVar11 == 0) {
          iVar4 = 0x10;
        }
        puVar7 = (undefined1 *)thunk_FUN_180102f80(iVar4);
        if (puVar7 == (undefined1 *)0x0) goto LAB_1800a45d8;
        thunk_FUN_180001218(puVar7,puVar12,uVar11);
        thunk_FUN_180102fc0(puVar12);
      }
      puVar7[uVar13] = 0x10;
      uVar13 = uVar13 + 1;
      puVar12 = puVar7;
    }
  }
LAB_1800a45d8:
  uVar6 = FUN_18001f9b8();
  uVar6 = uVar6 & 0xff;
  uVar5 = 0x8876086c;
  if ((uVar13 == 0) && (param_4 < *(uint *)(&DAT_180253a80 + (ulonglong)uVar1 * 0x4b + uVar6 * 2)))
  {
    uVar5 = 0x8876086a;
  }
  uVar11 = *(uint *)(&DAT_180253a80 + (ulonglong)uVar1 * 0x4b + uVar6 * 2);
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800a4624);
    (*pcVar3)();
  }
  uVar2 = 0;
  if (uVar11 != 0) {
    uVar2 = param_4 / uVar11;
  }
  if (uVar2 < uVar13) {
    uVar5 = 0;
    lVar10 = (ulonglong)(param_4 - uVar2 * uVar11) * 0x18;
    *(undefined4 *)param_5 =
         *(undefined4 *)((&DAT_180253a78)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + lVar10);
    *(undefined4 *)((longlong)param_5 + 4) =
         *(undefined4 *)(lVar10 + (&DAT_180253a78)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + 4);
    *(undefined4 *)(param_5 + 1) =
         *(undefined4 *)(lVar10 + (&DAT_180253a78)[(ulonglong)uVar1 * 0x4b + uVar6 * 2] + 0x10);
    if (param_3 == 0x23) {
      uVar9 = 0x23;
    }
    else if (puVar12[uVar2] == '\b') {
      uVar9 = 0x29;
    }
    else {
      uVar9 = 0;
      pcVar8 = (char *)(&DAT_180248e88)[(ulonglong)*(uint *)(param_1 + -0x90) * 0x36];
      if (*pcVar8 != -1) {
        uVar6 = 0;
        do {
          if ((&DAT_180229a68)[(byte)pcVar8[uVar6]] == puVar12[uVar2]) {
            uVar9 = *(undefined4 *)(&DAT_180229aa0 + (ulonglong)(byte)pcVar8[uVar6] * 4);
            break;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (pcVar8[uVar6] != -1);
      }
    }
    *(undefined4 *)((longlong)param_5 + 0xc) = uVar9;
  }
  thunk_FUN_180102fc0(puVar12);
  return uVar5;
}

