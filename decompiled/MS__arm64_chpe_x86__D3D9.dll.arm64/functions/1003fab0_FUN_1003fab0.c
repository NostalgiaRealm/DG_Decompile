/*
 * FUN_1003fab0 at 1003fab0
 * undefined FUN_1003fab0(void)
 * Address ranges: 1003fab0-1003fc27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1003fab0(int param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  puVar1 = param_2 + 2;
  param_2[0] = 0;
  param_2[1] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar2 = param_2 + 1;
  puVar3 = param_2 + 3;
  if (param_3 < param_4) {
    uVar8 = *(uint *)(param_1 + 0x18);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = param_3 * 0x1000;
    param_4 = param_4 * 0x1000;
    uVar13 = (uint)*(ushort *)(param_1 + 8);
    uVar12 = (uint)*(ushort *)(param_1 + 10);
    if (uVar8 == 0) {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x1003fb68);
        (*(code *)uVar6)();
      }
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = param_3 / uVar4;
      }
      uVar11 = 0;
      if (uVar4 != 0) {
        uVar11 = param_4 / uVar4;
      }
      bVar5 = *(byte *)(param_1 + 0x1e);
      if (bVar5 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x1003fb88);
        (*(code *)uVar6)();
      }
      uVar7 = 0;
      uVar8 = (uint)bVar5;
      if (bVar5 != 0) {
        uVar7 = (param_3 - uVar10 * uVar4) / uVar8;
      }
      uVar9 = 0;
      uVar14 = uVar13;
      uVar13 = uVar12;
      if (uVar8 != 0) {
        uVar9 = (param_4 - uVar11 * uVar4) / uVar8;
      }
    }
    else {
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x1003fb04);
        (*(code *)uVar6)();
      }
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = param_3 / uVar4;
      }
      bVar5 = *(byte *)(param_1 + 0x1c);
      uVar11 = 0;
      if (uVar4 != 0) {
        uVar11 = param_4 / uVar4;
      }
      if (bVar5 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x1003fb24);
        (*(code *)uVar6)();
      }
      uVar14 = 0;
      if (bVar5 != 0) {
        uVar14 = uVar13 / bVar5;
      }
      bVar5 = *(byte *)(param_1 + 0x1d);
      if (bVar5 == 0) {
                    /* WARNING: Does not return */
        uVar6 = SoftwareBreakpoint(0xf004,0x1003fb38);
        (*(code *)uVar6)();
      }
      uVar13 = 0;
      if (bVar5 != 0) {
        uVar13 = uVar12 / bVar5;
      }
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = (param_3 - uVar10 * uVar4) / uVar8;
      }
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = (param_4 - uVar11 * uVar4) / uVar8;
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
    }
    *puVar2 = uVar10;
    *param_2 = uVar7;
    *puVar3 = uVar11;
    *puVar1 = uVar9;
    if (uVar14 < uVar7) {
      uVar10 = uVar10 + 1;
      *param_2 = 0;
      *puVar2 = uVar10;
    }
    if (uVar14 < uVar9) {
      *puVar1 = uVar14;
      uVar9 = uVar14;
    }
    if (uVar13 <= uVar10) {
      *puVar2 = uVar13;
    }
    if (uVar13 <= uVar11) {
      uVar11 = uVar13 - 1;
      *puVar1 = uVar14;
      *puVar3 = uVar11;
      uVar9 = uVar14;
    }
    if (uVar9 == 0) {
      *puVar1 = uVar14;
      *puVar3 = uVar11 - 1;
    }
  }
  return param_2;
}

