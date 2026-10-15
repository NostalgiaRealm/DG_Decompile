/*
 * FUN_10007a08 at 10007a08
 * undefined FUN_10007a08(void)
 * Address ranges: 10007a08-10007c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10007a08(int param_1,int *param_2,undefined4 param_3,ulonglong param_4,undefined8 *param_5
                  ,byte *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  code *extraout_w11;
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar12 = *param_5;
  param_4 = param_4 & 0xffffffff;
  *(undefined8 *)(param_2 + 2) = param_5[1];
  *(undefined8 *)param_2 = uVar12;
  if (*(char *)(param_1 + 0x785) == '\0') {
    return param_2;
  }
  local_40 = 0;
  local_3c = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_4 & 0xffffffff,&local_40,&local_3c);
  if (local_40 == 0) {
    return param_2;
  }
  if (local_3c == 0) {
    return param_2;
  }
  local_38 = 0;
  local_30 = 0;
  uVar13 = (*(code *)PTR_FUN_1009d184)(param_3,0xfffffff0);
  uVar14 = (*(code *)PTR_FUN_1009d184)(param_3,0xffffffec);
  uVar15 = 0;
  uVar16 = uVar14 & 0xffffffff;
  (*(code *)PTR_FUN_1009d130)(&local_38,uVar13);
  piVar1 = param_2 + 1;
  piVar2 = param_2 + 2;
  piVar3 = param_2 + 3;
  iVar6 = *param_2 - (int)local_38;
  *param_2 = iVar6;
  iVar7 = *piVar1 - local_38._4_4_;
  *piVar1 = iVar7;
  iVar8 = *piVar2 - (int)local_30;
  *piVar2 = iVar8;
  iVar9 = *piVar3 - local_30._4_4_;
  *piVar3 = iVar9;
  if (local_3c == 0) {
                    /* WARNING: Does not return */
    uVar12 = SoftwareBreakpoint(0xf004,0x10007b2c);
    (*(code *)uVar12)();
  }
  uVar10 = 0;
  if (local_3c != 0) {
    uVar10 = ((iVar9 - iVar7) * local_40) / local_3c;
  }
  if (local_40 == 0) {
                    /* WARNING: Does not return */
    uVar12 = SoftwareBreakpoint(0xf004,0x10007b40);
    (*(code *)uVar12)();
  }
  uVar11 = 0;
  if (local_40 != 0) {
    uVar11 = ((iVar8 - iVar6) * local_3c) / local_40;
  }
  if (param_6 < (byte *)0x4) goto LAB_10007bac;
  if ((byte *)0x8 < param_6) goto switchD_10007b74_caseD_6;
  uVar4 = (uVar10 - iVar8) + iVar6;
  uVar15 = (ulonglong)uVar4;
  uVar5 = (uVar11 - iVar9) + iVar7;
  uVar16 = (ulonglong)uVar5;
  switch(param_6) {
  case (byte *)0x4:
    pbVar17 = (byte *)0x3;
    pbVar18 = (byte *)0x1;
    goto switchD_10007bc8_caseD_0;
  case (byte *)0x5:
    pbVar18 = (byte *)0x1;
    break;
  case (byte *)0x6:
    goto switchD_10007b74_caseD_6;
  case (byte *)0x7:
    param_6 = (byte *)0x2;
    if (uVar5 <= uVar4) goto LAB_10007bac;
    param_6 = (byte *)0x3;
    goto LAB_10007bac;
  case (byte *)0x8:
    pbVar18 = (byte *)0x2;
  }
  pbVar17 = (byte *)0x6;
switchD_10007bc8_caseD_0:
  param_6 = pbVar17;
  if ((uint)uVar16 <= (uint)uVar15) {
    param_6 = pbVar18;
  }
LAB_10007bac:
  if (param_6 == (byte *)0x0) goto switchD_10007bc8_caseD_4;
switchD_10007b74_caseD_6:
  if ((byte *)0x6 < param_6) goto switchD_10007bc8_caseD_4;
  pbVar17 = &BYTE_10007c30;
  pbVar18 = &BYTE_10007c30 + (char)(&switchD_10007bc8::switchdataD_10007c2f)[(int)param_6] * 4;
  switch(param_6) {
  case (byte *)0x0:
    goto switchD_10007bc8_caseD_0;
  case (byte *)0x1:
    *piVar1 = iVar9 - uVar11;
  default:
switchD_10007bc8_caseD_4:
    (*(code *)PTR_FUN_1009d130)(param_2,uVar13,0,uVar14 & 0xffffffff);
    return param_2;
  case (byte *)0x2:
    *piVar3 = uVar11 + iVar7;
    goto switchD_10007bc8_caseD_4;
  case (byte *)0x3:
    *param_2 = iVar8 - uVar10;
    goto switchD_10007bc8_caseD_4;
  case (byte *)0x6:
    *piVar2 = uVar10 + iVar6;
    goto switchD_10007bc8_caseD_4;
  }
}

