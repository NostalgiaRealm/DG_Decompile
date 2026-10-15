/*
 * FUN_18005de70 at 18005de70
 * ulonglong __fastcall FUN_18005de70(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 18005de70-18005e02e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005de70(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = (ulonglong)*param_1;
  cVar1 = (&DAT_18006b050)[uVar9];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    uVar9 = (ulonglong)*pbVar7;
    cVar1 = (&DAT_18006b050)[uVar9];
  }
  pbVar8 = pbVar7 + 1;
  if ((char)uVar9 == '-') {
    param_4 = param_4 | 2;
LAB_18005dec7:
    uVar9 = (ulonglong)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if ((char)uVar9 == '+') goto LAB_18005dec7;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar10 = 0;
  if (param_3 == 0) {
    if ((char)uVar9 != '0') {
      param_3 = 10;
      goto LAB_18005df2f;
    }
    if ((*pbVar8 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_18005df2f;
    }
    param_3 = 0x10;
  }
  else if ((param_3 != 0x10) || ((char)uVar9 != '0')) goto LAB_18005df2f;
  if ((*pbVar8 + 0xa8 & 0xdf) == 0) {
    uVar9 = (ulonglong)pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
LAB_18005df2f:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_3);
  uVar4 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0);
  do {
    cVar1 = (char)uVar9;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = (int)cVar1 - 0x30;
    }
    else {
      if ((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
      iVar6 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        iVar6 = (int)cVar1;
      }
      uVar5 = iVar6 - 0x37;
    }
    if (param_3 <= uVar5) break;
    if ((uVar10 < uVar4) ||
       ((uVar10 == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      uVar3 = 8;
      uVar10 = (ulonglong)uVar5 + CONCAT44(0,param_3) * uVar10;
    }
    else {
      uVar3 = 0xc;
    }
    uVar9 = (ulonglong)*pbVar8;
    pbVar8 = pbVar8 + 1;
    param_4 = param_4 | uVar3;
  } while( true );
  pbVar8 = pbVar8 + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      pbVar8 = param_1;
    }
    uVar10 = 0;
    goto LAB_18005e010;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) goto LAB_18005e010;
    if ((param_4 & 2) == 0) {
      if (uVar10 < 0x8000000000000000) goto LAB_18005e010;
      goto LAB_18005dff6;
    }
    if (uVar10 < 0x8000000000000001) goto LAB_18005e010;
  }
  else {
LAB_18005dff6:
    if ((param_4 & 1) != 0) {
      uVar10 = 0xffffffffffffffff;
      goto LAB_18005e010;
    }
    if ((param_4 & 2) == 0) {
      uVar10 = 0x7fffffffffffffff;
      goto LAB_18005e010;
    }
  }
  uVar10 = 0x8000000000000000;
LAB_18005e010:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar8;
  }
  if ((param_4 & 2) != 0) {
    return -uVar10;
  }
  return uVar10;
}

