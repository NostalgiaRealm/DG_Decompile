/*
 * FUN_180060bd8 at 180060bd8
 * uint __fastcall FUN_180060bd8(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180060bd8-180060d6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180060bd8(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar4 = (ulonglong)param_3;
  uVar8 = (ulonglong)*param_1;
  cVar1 = (&DAT_18006c050)[uVar8];
  pbVar6 = param_1;
  while (cVar1 == '\x01') {
    pbVar6 = pbVar6 + 1;
    uVar8 = (ulonglong)*pbVar6;
    cVar1 = (&DAT_18006c050)[uVar8];
  }
  pbVar7 = pbVar6 + 1;
  if ((char)uVar8 == '-') {
    param_4 = param_4 | 2;
LAB_180060c2b:
    uVar8 = (ulonglong)*pbVar7;
    pbVar7 = pbVar6 + 2;
  }
  else if ((char)uVar8 == '+') goto LAB_180060c2b;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    if ((char)uVar8 != '0') {
      uVar4 = 10;
      goto LAB_180060c93;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      uVar4 = 8;
      goto LAB_180060c93;
    }
    uVar4 = 0x10;
  }
  else if ((param_3 != 0x10) || ((char)uVar8 != '0')) goto LAB_180060c93;
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    uVar8 = (ulonglong)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_180060c93:
  do {
    cVar1 = (char)uVar8;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar2 = (int)cVar1 - 0x30;
    }
    else {
      if ((0x19 < (byte)(cVar1 + 0xbfU)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
      iVar3 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        iVar3 = (int)cVar1;
      }
      uVar2 = iVar3 - 0x37;
    }
    if ((uint)uVar4 <= uVar2) break;
    uVar5 = (uint)(0xffffffff / uVar4);
    if ((uVar9 < uVar5) || ((uVar9 == uVar5 && (uVar2 <= (uint)(0xffffffff % uVar4))))) {
      uVar5 = 8;
      uVar9 = uVar9 * (uint)uVar4 + uVar2;
    }
    else {
      uVar5 = 0xc;
    }
    uVar8 = (ulonglong)*pbVar7;
    pbVar7 = pbVar7 + 1;
    param_4 = param_4 | uVar5;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      pbVar7 = param_1;
    }
    uVar9 = 0;
    goto LAB_180060d55;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) != 0) goto LAB_180060d55;
    if ((param_4 & 2) == 0) {
      if (uVar9 < 0x80000000) goto LAB_180060d55;
      goto LAB_180060d3b;
    }
    if (uVar9 < 0x80000001) goto LAB_180060d55;
  }
  else {
LAB_180060d3b:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_180060d55;
    }
    uVar9 = 0x7fffffff;
    if ((param_4 & 2) == 0) goto LAB_180060d55;
  }
  uVar9 = 0x80000000;
LAB_180060d55:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

