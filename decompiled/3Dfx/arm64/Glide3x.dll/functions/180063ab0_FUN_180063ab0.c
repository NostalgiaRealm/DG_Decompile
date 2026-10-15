/*
 * FUN_180063ab0 at 180063ab0
 * ulonglong __cdecl FUN_180063ab0(byte * param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180063ab0-180063ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180063ab0(byte *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_18006e010)[bVar2];
  pbVar7 = param_1;
  while (cVar1 == '\x01') {
    pbVar7 = pbVar7 + 1;
    bVar2 = *pbVar7;
    cVar1 = (&DAT_18006e010)[bVar2];
  }
  uVar8 = (uint)(char)bVar2;
  if (uVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_180063b24:
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
  else {
    if (uVar8 == 0x2b) goto LAB_180063b24;
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
      uVar11 = 10;
      goto LAB_180063bbc;
    }
    if ((*pbVar7 + 0xa8 & 0xdf) != 0) {
      uVar11 = 8;
      goto LAB_180063bbc;
    }
    uVar11 = 0x10;
  }
  else {
    uVar11 = (ulonglong)param_3;
    if (uVar8 != 0x30 || param_3 != 0x10) goto LAB_180063bbc;
  }
  if ((*pbVar7 + 0xa8 & 0xdf) == 0) {
    uVar8 = (uint)(char)pbVar7[1];
    pbVar7 = pbVar7 + 2;
  }
LAB_180063bbc:
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180063bcc);
    (*pcVar5)();
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = 0xffffffffffffffff / uVar11;
  }
  do {
    if ((uVar8 - 0x30 & 0xff) < 10) {
      uVar8 = uVar8 - 0x30;
    }
    else {
      uVar6 = FUN_180063790(uVar8 & 0xff);
      if ((int)uVar6 == 0) break;
      if ((uVar8 - 0x61 & 0xff) < 0x1a) {
        uVar8 = uVar8 - 0x20;
      }
      uVar8 = uVar8 - 0x37;
    }
    uVar10 = (uint)uVar11;
    if (uVar10 <= uVar8) break;
    if (uVar9 < uVar4) {
LAB_180063c44:
      uVar9 = uVar11 * uVar9 + (ulonglong)uVar8;
      uVar10 = 8;
    }
    else {
      if (uVar9 == uVar4) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180063c2c);
          (*pcVar5)();
        }
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = 0xffffffff / uVar10;
        }
        if (uVar8 <= -(uVar3 * uVar10) - 1) goto LAB_180063c44;
      }
      uVar10 = 0xc;
    }
    uVar8 = (uint)(char)*pbVar7;
    param_4 = uVar10 | param_4;
    pbVar7 = pbVar7 + 1;
  } while( true );
  pbVar7 = pbVar7 + -1;
  if ((param_4 >> 3 & 1) == 0) {
    if (param_2 == (undefined8 *)0x0) {
      param_1 = pbVar7;
    }
    uVar9 = 0;
    pbVar7 = param_1;
    goto LAB_180063cb8;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_180063cb8;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x8000000000000000) goto LAB_180063cb8;
      goto LAB_180063c9c;
    }
    if (uVar9 < 0x8000000000000001) goto LAB_180063cb8;
  }
  else {
LAB_180063c9c:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffffffffffff;
      goto LAB_180063cb8;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffffffffffff;
      goto LAB_180063cb8;
    }
  }
  uVar9 = 0x8000000000000000;
LAB_180063cb8:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar7;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

