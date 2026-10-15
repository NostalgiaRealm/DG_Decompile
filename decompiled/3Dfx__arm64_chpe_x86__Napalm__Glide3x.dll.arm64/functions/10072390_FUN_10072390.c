/*
 * FUN_10072390 at 10072390
 * undefined FUN_10072390(void)
 * Address ranges: 10072390-100726db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072390(undefined4 param_1,uint *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar22;
  uint uVar23;
  undefined4 local_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  
  puVar1 = param_2 + 6;
  puVar2 = param_2 + 4;
  uVar12 = *(uint *)(param_3 + 0x18);
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    uVar16 = SoftwareBreakpoint(0xf004,0x100723e4);
    (*(code *)uVar16)();
  }
  uVar23 = 0;
  if (uVar12 != 0) {
    uVar23 = (*puVar1 - *puVar2) / uVar12;
  }
  puVar3 = param_2 + 5;
  puVar4 = param_2 + 7;
  uVar12 = *(uint *)(param_3 + 0x1c);
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    uVar16 = SoftwareBreakpoint(0xf004,0x10072410);
    (*(code *)uVar16)();
  }
  uVar22 = 0;
  if (uVar12 != 0) {
    uVar22 = (*puVar4 - *puVar3) / uVar12;
  }
  puVar5 = param_2 + 10;
  puVar6 = param_2 + 8;
  puVar7 = param_2 + 0xb;
  puVar8 = param_2 + 9;
  bVar17 = (*puVar5 - *puVar6) * 2 <= uVar23;
  uVar12 = (*puVar7 - *puVar8) * 2;
  bVar18 = uVar12 <= uVar22;
  if (((uVar23 < (*puVar5 - *puVar6) * 2 && uVar22 < uVar12) ||
      (FUN_10074828(param_1,param_3,2), 1 < *(uint *)(param_3 + 0x20))) &&
     ((pcVar15 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, bVar17 || (bVar18)))) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar19 = (*extraout_w11)(param_1,param_4);
    if (cVar19 != '\0') {
      puVar9 = param_2 + 3;
      puVar10 = param_2 + 2;
      uVar13 = *puVar9;
      uVar14 = *puVar10;
      uVar12 = uVar14;
      uVar11 = uVar13;
      while( true ) {
        uVar21 = (ulonglong)uVar11;
        uVar20 = (ulonglong)uVar12;
        if ((!bVar17) && (!bVar18)) break;
        local_70 = (float)uVar14;
        local_88 = 0xbf800000;
        uStack_84 = 0x3f800000;
        fStack_5c = (float)uVar13;
        local_78 = 0x3f800000;
        uStack_74 = 0x3f800000;
        local_80 = 0.0 / local_70;
        fStack_7c = 0.0 / fStack_5c;
        local_70 = (((float)uVar20 - 0.5) + 0.5) / local_70;
        fStack_5c = (((float)uVar21 - 0.5) + 0.5) / fStack_5c;
        local_68 = 0xbf800000;
        uStack_64 = 0xbf800000;
        local_58 = 0x3f800000;
        uStack_54 = 0xbf800000;
        fStack_6c = fStack_7c;
        local_60 = local_80;
        local_50 = local_70;
        fStack_4c = fStack_5c;
        (*pcVar15)();
        (*extraout_w11_00)(param_1,&local_88,uVar20 & 0xffffffff,uVar21 & 0xffffffff,param_4);
        uVar23 = uVar23 >> 1;
        uVar22 = uVar22 >> 1;
        uVar12 = (int)*puVar10 >> 1;
        *puVar10 = uVar12;
        uVar11 = (int)*puVar9 >> 1;
        *puVar9 = uVar11;
        *puVar2 = (int)*puVar2 >> 1;
        *puVar3 = (int)*puVar3 >> 1;
        *puVar1 = (int)*puVar1 >> 1;
        *puVar4 = (int)*puVar4 >> 1;
        bVar17 = (*puVar5 - *puVar6) * 2 <= uVar23;
        bVar18 = (*puVar7 - *puVar8) * 2 <= uVar22;
      }
      if ((*puVar5 - *puVar6 == *puVar1 - *puVar2) || (*puVar7 - *puVar8 == *puVar4 - *puVar3)) {
        *param_2 = *param_2 & 0xffffffc7;
      }
    }
  }
  return;
}

