/*
 * FUN_18000d5c0 at 18000d5c0
 * uint * __cdecl FUN_18000d5c0(longlong param_1, uint * param_2, uint param_3, longlong param_4)
 * Address ranges: 18000d5c0-18000d81f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18000d5c0(longlong param_1,uint *param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 local_10;
  
  lVar2 = param_1 + (ulonglong)param_3 * 8;
  uVar3 = *(uint *)(param_1 + 0xa8);
  uVar5 = *(uint *)(param_1 + 0xac);
  uVar16 = *(undefined8 *)(param_1 + 0xa8);
  puVar1 = (uint *)(lVar2 + 0x20);
  uVar4 = *puVar1;
  uVar13 = *(uint *)(lVar2 + 0x24);
  uVar9 = *(undefined8 *)puVar1;
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 8);
  }
  uVar6 = *(uint *)(param_4 + 0x37);
  uVar7 = *(uint *)(param_4 + 0x3b);
  if (uVar6 < 0xfffffff8) {
    bVar12 = false;
  }
  else {
    bVar12 = uVar6 == uVar7 && uVar6 != 0xfffffff9 || uVar7 < 0x100;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  if (!bVar12) {
    return param_2;
  }
  *(undefined8 *)param_2 = uVar16;
  uVar16 = uVar9;
  if (uVar6 == 0xfffffff8) {
    *(undefined8 *)param_2 = uVar9;
LAB_18000d694:
    bVar12 = false;
  }
  else if (uVar6 + 6 < 2) {
    bVar12 = uVar6 == 0xfffffffa;
    if (0x9ff < uVar4) {
      bVar11 = 0x59f < uVar13;
      uVar16 = 0x5a000000a00;
LAB_18000d66c:
      if (!bVar11) {
        uVar16 = uVar9;
      }
    }
  }
  else if (uVar6 + 4 < 2) {
    bVar12 = uVar6 == 0xfffffffc;
    if (0x77f < uVar4) {
      bVar11 = 0x437 < uVar13;
      uVar16 = 0x43800000780;
      goto LAB_18000d66c;
    }
  }
  else {
    if (1 < uVar6 + 2) goto LAB_18000d694;
    bVar12 = uVar6 == 0xfffffffe;
  }
  uVar4 = *(uint *)(param_4 + 0x1c);
  uVar15 = (uint)uVar16;
  uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
  if ((8 < uVar4) || ((0x188U >> (ulonglong)(uVar4 & 0x1f) & 1) == 0)) {
    if (uVar4 - 4 < 3) {
      if ((*param_2 < 0x501) && (param_2[1] < 0x401)) {
        *param_2 = (param_2[1] << 2) / 3;
      }
    }
    else if (1 < uVar4) {
      if (uVar4 == 2) {
        if (bVar12) {
          uVar4 = *param_2;
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18000d6dc);
            (*pcVar10)();
          }
          uVar8 = 0;
          if (uVar4 != 0) {
            uVar8 = uVar15 / uVar4;
          }
          uVar15 = param_2[1];
          if (uVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18000d6f0);
            (*pcVar10)();
          }
          uVar14 = 0;
          if (uVar15 != 0) {
            uVar14 = uVar13 / uVar15;
          }
          if (uVar8 == 0) {
            uVar8 = 1;
          }
          if (uVar14 == 0) {
            uVar14 = 1;
          }
          if (uVar14 <= uVar8) {
            uVar8 = uVar14;
          }
          *param_2 = uVar4 * uVar8;
          param_2[1] = uVar15 * uVar8;
        }
        else {
          *(undefined8 *)param_2 = uVar16;
        }
      }
      goto LAB_18000d7cc;
    }
  }
  uVar4 = *param_2;
  uVar8 = param_2[1];
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18000d764);
    (*pcVar10)();
  }
  uVar14 = 0;
  if (uVar4 != 0) {
    uVar14 = (uVar8 * uVar15) / uVar4;
  }
  if (uVar13 < uVar14) {
    if (bVar12) {
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18000d794);
        (*pcVar10)();
      }
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = uVar13 / uVar8;
      }
      goto LAB_18000d798;
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0xf004,0x18000d7bc);
      (*pcVar10)();
    }
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = (uVar4 * uVar13) / uVar8;
    }
    local_10 = CONCAT44(uVar13,uVar15);
  }
  else if (bVar12) {
    uVar14 = 0;
    if (uVar4 != 0) {
      uVar14 = uVar15 / uVar4;
    }
LAB_18000d798:
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    local_10 = CONCAT44(uVar8 * uVar14,uVar4 * uVar14);
  }
  else {
    local_10 = CONCAT44(uVar14,uVar15);
  }
  *(undefined8 *)param_2 = local_10;
LAB_18000d7cc:
  if ((uVar6 + 8 < 8) && ((0xfdU >> (ulonglong)(uVar6 + 8 & 0x1f) & 1) != 0)) {
    if (0xfd < uVar7 - 2) {
      return param_2;
    }
    uVar3 = *param_2;
    uVar5 = param_2[1];
  }
  else if (uVar6 != 0xfffffff9) {
    return param_2;
  }
  *param_2 = uVar3 * uVar7;
  param_2[1] = uVar5 * uVar7;
  return param_2;
}

