/*
 * FUN_1800add94 at 1800add94
 * ulonglong __fastcall FUN_1800add94(longlong param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1800add94-1800ade95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800add94(longlong param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  char cVar9;
  undefined8 *puVar10;
  
  uVar8 = 0;
  if (param_3 == param_4) goto LAB_1800ade88;
  uVar8 = 0x8876086c;
  if (param_2 == 2) {
    puVar10 = &DAT_18010e280;
  }
  else {
    puVar10 = (undefined8 *)(&DAT_18010e430 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0);
  }
  uVar2 = FUN_18000223c(param_3);
  pcVar1 = (char *)*puVar10;
  uVar6 = 0;
  cVar9 = *pcVar1;
  while (cVar9 != -1) {
    if ((byte)pcVar1[uVar6] == uVar2) {
      cVar9 = '\x01';
      goto LAB_1800addfc;
    }
    uVar6 = (ulonglong)((int)uVar6 + 1);
    cVar9 = pcVar1[uVar6];
  }
  cVar9 = '\0';
LAB_1800addfc:
  cVar7 = '\0';
  iVar4 = 0;
  iVar5 = 0;
  if (param_4 < 0x72) {
    if (param_4 != 0x71) {
      if (param_4 < 0x1a) {
        if (((((param_4 != 0x19) && (param_4 != 0x14)) && (param_4 != 0x15)) &&
            ((param_4 != 0x16 && (param_4 != 0x17)))) && (param_4 != 0x18)) goto LAB_1800ade64;
LAB_1800ade2f:
        iVar4 = 1;
      }
      else if (param_4 != 0x1f) {
        if ((param_4 == 0x20) || (param_4 == 0x21)) goto LAB_1800ade2f;
        if ((param_4 != 0x23) && (iVar4 = 0, param_4 != 0x24)) goto LAB_1800ade64;
      }
    }
LAB_1800ade61:
    iVar5 = iVar4;
    cVar7 = '\x01';
  }
  else {
    iVar4 = 0;
    if (param_4 == 0x74) goto LAB_1800ade61;
  }
LAB_1800ade64:
  uVar3 = FUN_180002928(param_3);
  if ((((char)uVar3 != '\0') || (cVar9 != '\0')) && (cVar7 != '\0')) {
    uVar8 = (ulonglong)(~-(uint)(iVar5 != 0) & 0x8876086a);
  }
LAB_1800ade88:
  return uVar8 & 0xffffffff;
}

