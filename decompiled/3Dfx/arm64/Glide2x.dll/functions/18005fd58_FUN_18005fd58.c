/*
 * FUN_18005fd58 at 18005fd58
 * uint __cdecl FUN_18005fd58(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 18005fd58-18005ff73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18005fd58(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_18006a010)[bVar2];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar7;
    cVar1 = (&DAT_18006a010)[bVar2];
  }
  uVar8 = (uint)(char)bVar2;
  if (uVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_18005fdcc:
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
  else {
    if (uVar8 == 0x2b) goto LAB_18005fdcc;
    pbVar7 = pbVar7 + 1;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    if (uVar8 != 0x30) {
      param_3 = 10;
      goto LAB_18005fe64;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_18005fe64;
    }
    param_3 = 0x10;
  }
  else if (uVar8 != 0x30 || param_3 != 0x10) goto LAB_18005fe64;
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_18005fe64:
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18005fe70);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 0xffffffff / param_3;
  }
  do {
    if ((uVar8 - 0x30 & 0xff) < 10) {
      uVar8 = uVar8 - 0x30;
    }
    else {
      uVar5 = FUN_18005fc58(uVar8 & 0xff);
      if ((int)uVar5 == 0) break;
      if ((uVar8 - 0x61 & 0xff) < 0x1a) {
        uVar8 = uVar8 - 0x20;
      }
      uVar8 = uVar8 - 0x37;
    }
    if (param_3 <= uVar8) break;
    if ((uVar9 < uVar3) || (uVar9 == uVar3 && uVar8 <= -(uVar3 * param_3) - 1)) {
      uVar9 = uVar8 + uVar9 * param_3;
      uVar6 = 8;
    }
    else {
      uVar6 = 0xc;
    }
    uVar8 = (uint)(char)*pbVar7;
    param_4 = uVar6 | param_4;
    pbVar7 = pbVar7 + 1;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 >> 3 & 1) == 0) {
    if (param_2 == (undefined8 *)0x0) {
      param_1 = pbVar7;
    }
    uVar9 = 0;
    pbVar7 = param_1;
    goto LAB_18005ff48;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_18005ff48;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x80000000) goto LAB_18005ff48;
      goto LAB_18005ff2c;
    }
    if (uVar9 < 0x80000001) goto LAB_18005ff48;
  }
  else {
LAB_18005ff2c:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_18005ff48;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffff;
      goto LAB_18005ff48;
    }
  }
  uVar9 = 0x80000000;
LAB_18005ff48:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

