/*
 * FUN_100919c8 at 100919c8
 * undefined FUN_100919c8(void)
 * Address ranges: 100919c8-10091bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100919c8(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_100bb060)[bVar2];
  pbVar8 = param_1;
  while (pbVar8 = pbVar8 + 1, cVar1 == '\x01') {
    bVar2 = *pbVar8;
    cVar1 = (&DAT_100bb060)[bVar2];
  }
  uVar7 = (uint)(char)bVar2;
  if (uVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10091a48:
    uVar7 = (uint)(char)*pbVar8;
    pbVar8 = pbVar8 + 1;
  }
  else if (uVar7 == 0x2b) goto LAB_10091a48;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    if (uVar7 != 0x30) {
      param_3 = 10;
      goto LAB_10091ad4;
    }
    if ((*pbVar8 + 0xa8 & 0xdf) != 0) {
      param_3 = 8;
      goto LAB_10091ad4;
    }
    param_3 = 0x10;
  }
  else if (uVar7 != 0x30 || param_3 != 0x10) goto LAB_10091ad4;
  if ((*pbVar8 + 0xa8 & 0xdf) == 0) {
    uVar7 = (uint)(char)pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
LAB_10091ad4:
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    uVar5 = SoftwareBreakpoint(0xf004,0x10091ae0);
    (*(code *)uVar5)();
  }
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 0xffffffff / param_3;
  }
  do {
    if ((uVar7 & 0xff) - 0x30 < 10) {
      uVar7 = uVar7 - 0x30;
    }
    else {
      iVar6 = FUN_10091810(uVar7 & 0xff);
      if (iVar6 == 0) break;
      if (uVar7 - 0x61 < 0x1a) {
        uVar7 = uVar7 - 0x20;
      }
      uVar7 = uVar7 - 0x37;
    }
    if (param_3 <= uVar7) break;
    if (uVar9 < uVar3) {
LAB_10091b54:
      uVar9 = uVar7 + uVar9 * param_3;
      param_4 = param_4 | 8;
    }
    else {
      if (uVar9 == uVar3) {
        uVar4 = 0;
        if (param_3 != 0) {
          uVar4 = 0xffffffff / param_3;
        }
        if (uVar7 <= -(uVar4 * param_3) - 1) goto LAB_10091b54;
      }
      param_4 = param_4 | 0xc;
    }
    uVar7 = (uint)(char)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  pbVar8 = pbVar8 + -1;
  if ((param_4 >> 3 & 1) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      param_1 = pbVar8;
    }
    uVar9 = 0;
    pbVar8 = param_1;
    goto LAB_10091bc8;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_10091bc8;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x80000000) goto LAB_10091bc8;
      goto LAB_10091bac;
    }
    if (uVar9 < 0x80000001) goto LAB_10091bc8;
  }
  else {
LAB_10091bac:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffff;
      goto LAB_10091bc8;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffff;
      goto LAB_10091bc8;
    }
  }
  uVar9 = 0x80000000;
LAB_10091bc8:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar8;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

