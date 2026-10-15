/*
 * FUN_1007a4b8 at 1007a4b8
 * undefined FUN_1007a4b8(void)
 * Address ranges: 1007a4b8-1007a6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1007a4b8(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  bVar2 = *param_1;
  cVar1 = (&DAT_1009e060)[bVar2];
  pbVar8 = param_1;
  while (pbVar8 = pbVar8 + 1, cVar1 == '\x01') {
    bVar2 = *pbVar8;
    cVar1 = (&DAT_1009e060)[bVar2];
  }
  uVar7 = (uint)(char)bVar2;
  if (uVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1007a538:
    uVar7 = (uint)(char)*pbVar8;
    pbVar8 = pbVar8 + 1;
  }
  else if (uVar7 == 0x2b) goto LAB_1007a538;
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    if (uVar7 != 0x30) {
      uVar11 = 10;
      goto LAB_1007a5c4;
    }
    if ((*pbVar8 + 0xa8 & 0xdf) != 0) {
      uVar11 = 8;
      goto LAB_1007a5c4;
    }
    uVar11 = 0x10;
  }
  else {
    uVar11 = (ulonglong)param_3;
    if (uVar7 != 0x30 || param_3 != 0x10) goto LAB_1007a5c4;
  }
  if ((*pbVar8 + 0xa8 & 0xdf) == 0) {
    uVar7 = (uint)(char)pbVar8[1];
    pbVar8 = pbVar8 + 2;
  }
LAB_1007a5c4:
  if (uVar11 == 0) {
                    /* WARNING: Does not return */
    uVar5 = SoftwareBreakpoint(0xf004,0x1007a5d4);
    (*(code *)uVar5)();
  }
  uVar4 = 0;
  if (uVar11 != 0) {
    uVar4 = 0xffffffffffffffff / uVar11;
  }
  do {
    if ((uVar7 & 0xff) - 0x30 < 10) {
      uVar7 = uVar7 - 0x30;
    }
    else {
      iVar6 = FUN_1007a0d0(uVar7 & 0xff);
      if (iVar6 == 0) break;
      if (uVar7 - 0x61 < 0x1a) {
        uVar7 = uVar7 - 0x20;
      }
      uVar7 = uVar7 - 0x37;
    }
    uVar10 = (uint)uVar11;
    if (uVar10 <= uVar7) break;
    if (uVar9 < uVar4) {
LAB_1007a658:
      uVar9 = uVar11 * uVar9 + (ulonglong)uVar7;
      param_4 = param_4 | 8;
    }
    else {
      if (uVar9 == uVar4) {
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          uVar5 = SoftwareBreakpoint(0xf004,0x1007a640);
          (*(code *)uVar5)();
        }
        uVar3 = 0;
        if (uVar10 != 0) {
          uVar3 = 0xffffffff / uVar10;
        }
        if (uVar7 <= -(uVar3 * uVar10) - 1) goto LAB_1007a658;
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
    goto LAB_1007a6d0;
  }
  if ((param_4 >> 2 & 1) == 0) {
    if ((param_4 & 1) != 0) goto LAB_1007a6d0;
    if ((param_4 >> 1 & 1) == 0) {
      if (uVar9 < 0x8000000000000000) goto LAB_1007a6d0;
      goto LAB_1007a6b4;
    }
    if (uVar9 < 0x8000000000000001) goto LAB_1007a6d0;
  }
  else {
LAB_1007a6b4:
    if ((param_4 & 1) != 0) {
      uVar9 = 0xffffffffffffffff;
      goto LAB_1007a6d0;
    }
    if ((param_4 >> 1 & 1) == 0) {
      uVar9 = 0x7fffffffffffffff;
      goto LAB_1007a6d0;
    }
  }
  uVar9 = 0x8000000000000000;
LAB_1007a6d0:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar8;
  }
  if ((param_4 & 2) != 0) {
    return -uVar9;
  }
  return uVar9;
}

