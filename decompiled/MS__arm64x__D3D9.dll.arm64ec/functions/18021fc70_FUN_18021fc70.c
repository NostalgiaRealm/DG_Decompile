/*
 * FUN_18021fc70 at 18021fc70
 * undefined FUN_18021fc70(void)
 * Address ranges: 18021fc70-18021fe5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18021fc70(longlong *param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_10 [2];
  
  lVar11 = *param_1;
  uVar10 = *(uint *)(lVar11 + 100);
  uVar7 = *(uint *)(lVar11 + 0x68);
  if (uVar10 < 0xfffffff8) {
    bVar6 = false;
  }
  else {
    bVar6 = uVar10 == uVar7 && uVar10 != 0xfffffff9 || uVar7 < 0x100;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  if (!bVar6) {
    return param_2;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_4;
  uVar9 = *param_3;
  local_10[0] = uVar9;
  if (uVar10 == 0xfffffff8) {
    *(undefined8 *)param_2 = uVar9;
LAB_18021fd44:
    bVar6 = false;
  }
  else {
    uVar8 = (uint)((ulonglong)uVar9 >> 0x20);
    if (uVar10 + 6 < 2) {
      bVar6 = uVar10 == 0xfffffffa;
      if (0x9ff < (uint)uVar9) {
        bVar5 = 0x59f < uVar8;
        local_10[0] = 0x5a000000a00;
LAB_18021fd14:
        if (!bVar5) {
          local_10[0] = uVar9;
        }
      }
    }
    else if (uVar10 + 4 < 2) {
      bVar6 = uVar10 == 0xfffffffc;
      if (0x77f < (uint)uVar9) {
        bVar5 = 0x437 < uVar8;
        local_10[0] = 0x43800000780;
        goto LAB_18021fd14;
      }
    }
    else {
      if (1 < uVar10 + 2) goto LAB_18021fd44;
      bVar6 = uVar10 == 0xfffffffe;
    }
  }
  uVar8 = *(uint *)(lVar11 + 0x1c);
  if ((8 < uVar8) || ((0x188U >> (ulonglong)(uVar8 & 0x1f) & 1) == 0)) {
    if (uVar8 - 4 < 3) {
      if ((*param_2 < 0x501) && (param_2[1] < 0x401)) {
        *param_2 = (param_2[1] << 2) / 3;
      }
    }
    else if (1 < uVar8) {
      if (uVar8 == 2) {
        if (bVar6) {
          uVar8 = *param_2;
          if (uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18021fd8c);
            (*pcVar4)();
          }
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = (uint)local_10[0] / uVar8;
          }
          uVar1 = param_2[1];
          if (uVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18021fda0);
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
          *param_2 = uVar8 * uVar2;
          param_2[1] = uVar1 * uVar2;
        }
        else {
          *(undefined8 *)param_2 = local_10[0];
        }
      }
      goto LAB_18021fe10;
    }
  }
  uVar9 = FUN_18021fbc0(param_2,local_10);
  *(undefined8 *)param_2 = uVar9;
LAB_18021fe10:
  if ((uVar10 + 8 < 8) && ((0xfdU >> (ulonglong)(uVar10 + 8 & 0x1f) & 1) != 0)) {
    if (0xfd < uVar7 - 2) {
      return param_2;
    }
    uVar10 = *param_2;
    uVar8 = param_2[1];
  }
  else {
    if (uVar10 != 0xfffffff9) {
      return param_2;
    }
    uVar10 = *param_4;
    uVar8 = param_4[1];
  }
  *param_2 = uVar10 * uVar7;
  param_2[1] = uVar8 * uVar7;
  return param_2;
}

