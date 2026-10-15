/*
 * FUN_180108248 at 180108248
 * undefined FUN_180108248(void)
 * Address ranges: 180108248-1801083e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180108248(undefined8 param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong extraout_x15;
  
  param_2 = param_2 & 0xffffffff;
  uVar15 = *param_3;
  lVar5 = param_2 * 600;
  (&DAT_18024e9d8)[param_2 * 0x4b] = param_3[1];
  (&DAT_18024e9d0)[param_2 * 0x4b] = uVar15;
  (&DAT_18024e9e0)[param_2 * 0x4b] = param_3[2];
  (&DAT_18024e9e8)[param_2 * 0x96] = *(undefined4 *)(param_3 + 3);
  uVar15 = *param_4;
  lVar6 = param_2 * 600;
  *(undefined8 *)(lVar6 + 0x18024e9f4) = param_4[1];
  *(undefined8 *)(&DAT_18024e9ec + lVar6) = uVar15;
  uVar15 = param_4[2];
  (&DAT_18024ea4e)[lVar5] = 1;
  *(undefined8 *)(&DAT_18024e9fc + lVar6) = uVar15;
  iVar12 = *(int *)(DAT_18024d928 + 0x81c);
  if ((iVar12 == 6 || iVar12 < 3) || 8 < iVar12) {
    thunk_FUN_180223bf8(&DAT_18024ea04 + param_2 * 600);
  }
  else {
    uVar2 = *(uint *)(&DAT_18024e9ec + lVar5);
    uVar3 = *(uint *)(&DAT_18024e9f0 + lVar5);
    uVar16 = *(uint *)(DAT_18024d928 + 0x8b6);
    uVar4 = *(uint *)(DAT_18024d928 + 0x8ba);
    uVar11 = *(uint *)(DAT_18024d928 + 0x8b2);
    uVar10 = *(uint *)(DAT_18024d928 + 0x8ae);
    uVar14 = uVar4;
    if (uVar16 == 0xffffffff) {
      uVar7 = uVar4 >> 0x10;
      uVar16 = 0;
      uVar14 = 0;
      if ((uVar7 != 0) && (uVar1 = uVar4 & 0xffff, (uVar4 & 0xffff) != 0)) {
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar14 = (uVar1 * uVar2) / uVar7;
        }
        uVar16 = uVar2;
        if (uVar3 <= uVar14) {
          if (uVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0xf004,0x18010834c);
            (*pcVar8)();
          }
          uVar16 = 0;
          uVar14 = uVar3;
          if (uVar1 != 0) {
            uVar16 = (uVar7 * uVar3) / uVar1;
          }
        }
      }
    }
    if (uVar10 == 0xffffffff && uVar11 == 0xffffffff) {
      uVar10 = uVar2 - uVar16 >> 1;
      uVar11 = uVar3 - uVar14 >> 1;
    }
    iVar12 = uVar10 + uVar16;
    if ((iVar12 <= (int)uVar10) || (iVar13 = uVar11 + uVar14, iVar13 <= (int)uVar11)) {
      iVar13 = 0;
      uVar11 = 0;
      iVar12 = 0;
      uVar10 = 0;
    }
    thunk_FUN_180223c20(&DAT_18024ea04 + param_2 * 600,uVar10,uVar11,iVar12,iVar13);
  }
  uVar9 = FUN_1801066e0(param_2 * 5,param_1,*(undefined4 *)((longlong)param_3 + 0x14));
  *(undefined4 *)(&DAT_18024e330 + extraout_x15) = uVar9;
  (&DAT_18024e334)[extraout_x15] = 1;
  return;
}

