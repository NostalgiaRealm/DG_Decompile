/*
 * FUN_180222fd0 at 180222fd0
 * undefined FUN_180222fd0(void)
 * Address ranges: 180222fd0-18022320b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180222fd0(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_180246060)[bVar2];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar7;
    cVar1 = (&DAT_180246060)[bVar2];
  }
  iVar9 = (int)(char)bVar2;
  if (iVar9 == 0x2d) {
    param_4 = param_4 | 2;
LAB_180223040:
    iVar9 = (int)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
  else {
    if (iVar9 == 0x2b) goto LAB_180223040;
    pbVar7 = pbVar7 + 1;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar10 = 0;
  if (param_3 == 0) {
    if (iVar9 != 0x30) {
      uVar12 = 10;
      goto LAB_1802230d8;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      uVar12 = 8;
      goto LAB_1802230d8;
    }
    uVar12 = 0x10;
  }
  else {
    uVar12 = (ulonglong)param_3;
    if (iVar9 != 0x30 || param_3 != 0x10) goto LAB_1802230d8;
  }
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    iVar9 = (int)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_1802230d8:
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x1802230e8);
    (*pcVar5)();
  }
  uVar4 = 0;
  if (uVar12 != 0) {
    uVar4 = 0xffffffffffffffff / uVar12;
  }
  do {
    if ((iVar9 - 0x30U & 0xff) < 10) {
      uVar8 = iVar9 - 0x30;
    }
    else {
      iVar6 = FUN_180222c70((char)iVar9);
      if (iVar6 == 0) break;
      if ((iVar9 - 0x61U & 0xff) < 0x1a) {
        iVar9 = iVar9 + -0x20;
      }
      uVar8 = iVar9 - 0x37;
    }
    uVar11 = (uint)uVar12;
    if (uVar11 <= uVar8) break;
    if (uVar10 < uVar4) {
LAB_18022316c:
      uVar10 = uVar12 * uVar10 + (ulonglong)uVar8;
      uVar8 = 8;
    }
    else {
      if (uVar10 == uVar4) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180223154);
          (*pcVar5)();
        }
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = 0xffffffff / uVar11;
        }
        if (uVar8 <= -(uVar3 * uVar11) - 1) goto LAB_18022316c;
      }
      uVar8 = 0xc;
    }
    iVar9 = (int)(char)*pbVar7;
    param_4 = uVar8 | param_4;
    pbVar7 = pbVar7 + 1;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 >> 3 & 1) == 0) {
    if (param_2 == (undefined8 *)0x0) {
      param_1 = pbVar7;
    }
    uVar10 = 0;
    pbVar7 = param_1;
    goto LAB_1802231e4;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_1802231e4;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar10 < 0x8000000000000000) goto LAB_1802231e4;
      goto LAB_1802231c8;
    }
    if (uVar10 < 0x8000000000000001) goto LAB_1802231e4;
  }
  else {
LAB_1802231c8:
    if ((param_4 & 1) != 0) {
      uVar10 = 0xffffffffffffffff;
      goto LAB_1802231e4;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar10 = 0x7fffffffffffffff;
      goto LAB_1802231e4;
    }
  }
  uVar10 = 0x8000000000000000;
LAB_1802231e4:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar10;
  }
  return uVar10;
}

