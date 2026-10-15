/*
 * FUN_180103230 at 180103230
 * undefined FUN_180103230(void)
 * Address ranges: 180103230-18010344b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180103230(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_180246170)[bVar2];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar7;
    cVar1 = (&DAT_180246170)[bVar2];
  }
  iVar8 = (int)(char)bVar2;
  if (iVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1801032a4:
    iVar8 = (int)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
  else {
    if (iVar8 == 0x2b) goto LAB_1801032a4;
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
    if (iVar8 != 0x30) {
      param_3 = 10;
      goto LAB_18010333c;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_18010333c;
    }
    param_3 = 0x10;
  }
  else if (iVar8 != 0x30 || param_3 != 0x10) goto LAB_18010333c;
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    iVar8 = (int)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_18010333c:
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180103348);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 0xffffffff / param_3;
  }
  do {
    if ((iVar8 - 0x30U & 0xff) < 10) {
      uVar6 = iVar8 - 0x30;
    }
    else {
      iVar5 = func_0x000180222c70((char)iVar8);
      if (iVar5 == 0) break;
      if ((iVar8 - 0x61U & 0xff) < 0x1a) {
        iVar8 = iVar8 + -0x20;
      }
      uVar6 = iVar8 - 0x37;
    }
    if (param_3 <= uVar6) break;
    if ((uVar9 < uVar3) || (uVar9 == uVar3 && uVar6 <= -(uVar3 * param_3) - 1)) {
      uVar9 = uVar6 + uVar9 * param_3;
      uVar6 = 8;
    }
    else {
      uVar6 = 0xc;
    }
    iVar8 = (int)(char)*pbVar7;
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
    goto LAB_180103420;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_180103420;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x80000000) goto LAB_180103420;
      goto LAB_180103404;
    }
    if (uVar9 < 0x80000001) goto LAB_180103420;
  }
  else {
LAB_180103404:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_180103420;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffff;
      goto LAB_180103420;
    }
  }
  uVar9 = 0x80000000;
LAB_180103420:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

