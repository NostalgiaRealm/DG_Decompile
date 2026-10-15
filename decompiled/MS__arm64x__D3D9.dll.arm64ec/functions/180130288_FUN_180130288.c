/*
 * FUN_180130288 at 180130288
 * undefined FUN_180130288(void)
 * Address ranges: 180130288-180130383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180130288(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (param_3 < param_4) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    uVar10 = (uint)uVar2;
    param_3 = param_3 * 0x1000;
    uVar3 = *(ushort *)(param_1 + 0x12);
    uVar9 = (uint)uVar3;
    param_4 = param_4 * 0x1000;
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar11 = *(uint *)(param_1 + 0x18);
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801302b4);
      (*pcVar4)();
    }
    uVar8 = 0;
    if (uVar11 != 0) {
      uVar8 = param_3 / uVar11;
    }
    param_2[1] = uVar8;
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = param_3 / uVar11;
    }
    param_3 = param_3 - uVar5 * uVar11;
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = param_4 / uVar11;
    }
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = param_4 / uVar11;
    }
    param_2[3] = uVar5;
    param_4 = param_4 - uVar7 * uVar11;
    if (uVar6 == 0) {
      bVar1 = *(byte *)(param_1 + 0x26);
      if (bVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180130320);
        (*pcVar4)();
      }
      uVar11 = 0;
      uVar6 = (uint)bVar1;
      if (bVar1 != 0) {
        uVar11 = param_3 / uVar6;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = param_4 / uVar6;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x24);
      if (bVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801302e4);
        (*pcVar4)();
      }
      uVar10 = 0;
      if (bVar1 != 0) {
        uVar10 = (uint)uVar2 / (uint)bVar1;
      }
      bVar1 = *(byte *)(param_1 + 0x25);
      if (bVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801302f4);
        (*pcVar4)();
      }
      uVar9 = 0;
      if (bVar1 != 0) {
        uVar9 = (uint)uVar3 / (uint)bVar1;
      }
      if (uVar10 == 0) {
        uVar10 = 1;
      }
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = param_3 / uVar6;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = param_4 / uVar6;
      }
      if (uVar9 == 0) {
        uVar9 = 1;
      }
    }
    *param_2 = uVar11;
    param_2[2] = uVar7;
    if (uVar10 < uVar11) {
      uVar8 = uVar8 + 1;
      *param_2 = 0;
      param_2[1] = uVar8;
    }
    if (uVar10 < uVar7) {
      param_2[2] = uVar10;
      uVar7 = uVar10;
    }
    if (uVar9 <= uVar8) {
      param_2[1] = uVar9;
    }
    if (uVar9 <= uVar5) {
      uVar5 = uVar9 - 1;
      param_2[2] = uVar10;
      param_2[3] = uVar5;
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      param_2[2] = uVar10;
      param_2[3] = uVar5 - 1;
    }
  }
  return param_2;
}

