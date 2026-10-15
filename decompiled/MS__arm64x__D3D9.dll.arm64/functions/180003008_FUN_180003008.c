/*
 * FUN_180003008 at 180003008
 * undefined FUN_180003008(void)
 * Address ranges: 180003008-1800031b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003008(undefined8 param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong extraout_x13;
  
  param_2 = param_2 & 0xffffffff;
  uVar14 = *param_3;
  lVar5 = param_2 * 600;
  (&DAT_1802539e8)[param_2 * 0x4b] = param_3[1];
  (&DAT_1802539e0)[param_2 * 0x4b] = uVar14;
  (&DAT_1802539f0)[param_2 * 0x4b] = param_3[2];
  (&DAT_1802539f8)[param_2 * 0x96] = *(undefined4 *)(param_3 + 3);
  uVar14 = *param_4;
  lVar6 = param_2 * 600;
  *(undefined8 *)(lVar6 + 0x180253a04) = param_4[1];
  *(undefined8 *)(&DAT_1802539fc + lVar6) = uVar14;
  uVar14 = param_4[2];
  (&DAT_180253a5e)[lVar5] = 1;
  *(undefined8 *)(&DAT_180253a0c + lVar6) = uVar14;
  iVar11 = *(int *)(DAT_18024de60 + 0x81c);
  if ((iVar11 == 6 || iVar11 < 3) || 8 < iVar11) {
    (*__imp_USER32_dll_SetRectEmpty)(&DAT_180253a14 + param_2 * 600);
  }
  else {
    uVar1 = *(uint *)(&DAT_1802539fc + lVar5);
    uVar2 = *(uint *)(&DAT_180253a00 + lVar5);
    uVar15 = *(uint *)(DAT_18024de60 + 0x8b6);
    uVar3 = *(uint *)(DAT_18024de60 + 0x8ba);
    uVar10 = *(uint *)(DAT_18024de60 + 0x8b2);
    uVar9 = *(uint *)(DAT_18024de60 + 0x8ae);
    uVar13 = uVar3;
    if (uVar15 == 0xffffffff) {
      uVar4 = uVar3 >> 0x10;
      uVar15 = 0;
      uVar13 = 0;
      if ((uVar4 != 0) && (uVar3 = uVar3 & 0xffff, uVar3 != 0)) {
        uVar13 = 0;
        if (uVar4 != 0) {
          uVar13 = (uVar3 * uVar1) / uVar4;
        }
        uVar15 = uVar1;
        if (uVar2 <= uVar13) {
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x180003114);
            (*pcVar7)();
          }
          uVar15 = 0;
          uVar13 = uVar2;
          if (uVar3 != 0) {
            uVar15 = (uVar4 * uVar2) / uVar3;
          }
        }
      }
    }
    if (uVar9 == 0xffffffff && uVar10 == 0xffffffff) {
      uVar9 = uVar1 - uVar15 >> 1;
      uVar10 = uVar2 - uVar13 >> 1;
    }
    iVar11 = uVar9 + uVar15;
    if ((iVar11 <= (int)uVar9) || (iVar12 = uVar10 + uVar13, iVar12 <= (int)uVar10)) {
      iVar12 = 0;
      uVar10 = 0;
      iVar11 = 0;
      uVar9 = 0;
    }
    (*__imp_USER32_dll_SetRect)(&DAT_180253a14 + param_2 * 600,uVar9,uVar10,iVar11,iVar12);
  }
  uVar8 = FUN_180001e18(param_2 * 5,param_1,*(undefined4 *)((longlong)param_3 + 0x14));
  *(undefined4 *)(&DAT_180253340 + extraout_x13) = uVar8;
  (&DAT_180253344)[extraout_x13] = 1;
  return;
}

