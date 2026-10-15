/*
 * FUN_180060ba8 at 180060ba8
 * uint __cdecl FUN_180060ba8(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180060ba8-180060dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180060ba8(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

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
  cVar1 = (&DAT_18006b010)[bVar2];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar7;
    cVar1 = (&DAT_18006b010)[bVar2];
  }
  uVar8 = (uint)(char)bVar2;
  if (uVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_180060c1c:
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
  else {
    if (uVar8 == 0x2b) goto LAB_180060c1c;
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
      goto LAB_180060cb4;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_180060cb4;
    }
    param_3 = 0x10;
  }
  else if (uVar8 != 0x30 || param_3 != 0x10) goto LAB_180060cb4;
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_180060cb4:
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180060cc0);
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
      uVar5 = FUN_180060aa8(uVar8 & 0xff);
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
    goto LAB_180060d98;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_180060d98;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x80000000) goto LAB_180060d98;
      goto LAB_180060d7c;
    }
    if (uVar9 < 0x80000001) goto LAB_180060d98;
  }
  else {
LAB_180060d7c:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_180060d98;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffff;
      goto LAB_180060d98;
    }
  }
  uVar9 = 0x80000000;
LAB_180060d98:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

