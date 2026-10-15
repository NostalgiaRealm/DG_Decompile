/*
 * FUN_180100380 at 180100380
 * undefined FUN_180100380(void)
 * Address ranges: 180100380-18010056f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180100380(longlong *param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint extraout_w14;
  uint uVar10;
  uint extraout_w15;
  uint uVar11;
  undefined8 local_10 [2];
  
  lVar9 = *param_1;
  uVar10 = *(uint *)(lVar9 + 100);
  uVar11 = *(uint *)(lVar9 + 0x68);
  if (uVar10 < 0xfffffff8) {
    bVar6 = false;
  }
  else {
    bVar6 = uVar10 == uVar11 && uVar10 != 0xfffffff9 || uVar11 < 0x100;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  if (!bVar6) {
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  uVar8 = *param_3;
  local_10[0] = uVar8;
  if (uVar10 == 0xfffffff8) {
    *(undefined8 *)param_2 = uVar8;
LAB_180100454:
    bVar6 = false;
  }
  else {
    uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
    if (uVar10 + 6 < 2) {
      bVar6 = uVar10 == 0xfffffffa;
      if (0x9ff < (uint)uVar8) {
        bVar5 = 0x59f < uVar7;
        local_10[0] = 0x5a000000a00;
LAB_180100424:
        if (!bVar5) {
          local_10[0] = uVar8;
        }
      }
    }
    else if (uVar10 + 4 < 2) {
      bVar6 = uVar10 == 0xfffffffc;
      if (0x77f < (uint)uVar8) {
        bVar5 = 0x437 < uVar7;
        local_10[0] = 0x43800000780;
        goto LAB_180100424;
      }
    }
    else {
      if (1 < uVar10 + 2) goto LAB_180100454;
      bVar6 = uVar10 == 0xfffffffe;
    }
  }
  uVar7 = *(uint *)(lVar9 + 0x1c);
  if ((8 < uVar7) || ((0x188U >> (ulonglong)(uVar7 & 0x1f) & 1) == 0)) {
    if (uVar7 - 4 < 3) {
      if ((*param_2 < 0x501) && (param_2[1] < 0x401)) {
        *param_2 = (param_2[1] << 2) / 3;
      }
    }
    else if (1 < uVar7) {
      if (uVar7 == 2) {
        if (bVar6) {
          uVar7 = *param_2;
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18010049c);
            (*pcVar4)();
          }
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = (uint)local_10[0] / uVar7;
          }
          uVar1 = param_2[1];
          if (uVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801004b0);
            (*pcVar4)();
          }
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = (uint)((ulonglong)local_10[0] >> 0x20) / uVar1;
          }
          if (uVar2 == 0) {
            uVar2 = 1;
          }
          if (uVar3 == 0) {
            uVar3 = 1;
          }
          if (uVar3 <= uVar2) {
            uVar2 = uVar3;
          }
          *param_2 = uVar7 * uVar2;
          param_2[1] = uVar1 * uVar2;
        }
        else {
          *(undefined8 *)param_2 = local_10[0];
        }
      }
      goto LAB_180100520;
    }
  }
  uVar8 = FUN_1801002d0(param_2,local_10);
  *(undefined8 *)param_2 = uVar8;
  uVar10 = extraout_w14;
  uVar11 = extraout_w15;
LAB_180100520:
  if ((uVar10 + 8 < 8) && ((0xfdU >> (ulonglong)(uVar10 + 8 & 0x1f) & 1) != 0)) {
    if (0xfd < uVar11 - 2) {
      return param_2;
    }
    uVar10 = *param_2;
    uVar7 = param_2[1];
  }
  else {
    if (uVar10 != 0xfffffff9) {
      return param_2;
    }
    uVar10 = *param_4;
    uVar7 = param_4[1];
  }
  *param_2 = uVar10 * uVar11;
  param_2[1] = uVar7 * uVar11;
  return param_2;
}

