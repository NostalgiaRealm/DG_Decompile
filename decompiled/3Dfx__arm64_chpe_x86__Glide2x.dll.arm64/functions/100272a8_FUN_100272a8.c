/*
 * FUN_100272a8 at 100272a8
 * undefined FUN_100272a8(void)
 * Address ranges: 100272a8-100274cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100272a8(int param_1,uint *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong extraout_x13;
  uint *extraout_w14;
  uint *puVar13;
  uint extraout_w15;
  uint uVar14;
  undefined8 local_10;
  uint local_8;
  uint uStack_4;
  
  iVar7 = param_1 + param_3 * 8;
  iVar8 = *(int *)(param_1 + 0x98);
  uVar9 = *(uint *)(param_1 + 0x9c);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  puVar13 = (uint *)(iVar7 + 0x14);
  local_8 = *puVar13;
  uStack_4 = *(uint *)(iVar7 + 0x18);
  local_10 = *(undefined8 *)puVar13;
  uVar12 = ZEXT48(param_2);
  if (param_4 == 0) {
    param_4 = *(int *)(param_1 + 4);
  }
  uVar10 = *(uint *)(param_4 + 0x3b);
  uVar14 = *(uint *)(param_4 + 0x37);
  if (uVar14 < 0xfffffff8) {
    bVar1 = false;
  }
  else {
    bVar1 = uVar14 == uVar10 && uVar14 != 0xfffffff9 || uVar10 < 0x100;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  puVar13 = param_2 + 1;
  if (bVar1) {
    iVar7 = 0;
    *(undefined8 *)param_2 = uVar6;
    switch(uVar14) {
    case 0xfffffff8:
      *(undefined8 *)param_2 = local_10;
      break;
    case 0xfffffffa:
      iVar7 = 1;
    case 0xfffffffb:
      if ((0x9ff < local_8) && (0x59f < uStack_4)) {
        local_10 = 0x5a000000a00;
      }
      break;
    case 0xfffffffc:
      iVar7 = 1;
    case 0xfffffffd:
      if ((0x77f < local_8) && (0x437 < uStack_4)) {
        local_10 = 0x43800000780;
      }
      break;
    case 0xfffffffe:
      iVar7 = 1;
    }
    switch(*(undefined4 *)(param_4 + 0x1c)) {
    case 2:
      if (iVar7 == 0) {
        *(undefined8 *)param_2 = local_10;
      }
      else {
        uVar2 = *param_2;
        if (uVar2 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x100273e0);
          (*(code *)uVar6)();
        }
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = (uint)local_10 / uVar2;
        }
        uVar3 = *puVar13;
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          uVar6 = SoftwareBreakpoint(0xf004,0x100273f4);
          (*(code *)uVar6)();
        }
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (uint)((ulonglong)local_10 >> 0x20) / uVar3;
        }
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        if (uVar5 <= uVar4) {
          uVar4 = uVar5;
        }
        *param_2 = uVar4 * uVar2;
        *puVar13 = uVar4 * uVar3;
      }
      break;
    case 4:
    case 5:
    case 6:
      if ((*param_2 < 0x501) && (*puVar13 < 0x401)) {
        *param_2 = (*puVar13 << 2) / 3;
      }
    case 0:
    case 1:
    case 3:
    case 7:
    case 8:
      uVar6 = FUN_100556a8(param_2,&local_10,iVar7);
      *(undefined8 *)extraout_x13 = uVar6;
      uVar12 = extraout_x13;
      uVar14 = extraout_w15;
      puVar13 = extraout_w14;
    }
    piVar11 = (int *)uVar12;
    switch(uVar14) {
    case 0xfffffff8:
    case 0xfffffffa:
    case 0xfffffffb:
    case 0xfffffffc:
    case 0xfffffffd:
    case 0xfffffffe:
    case 0xffffffff:
      if (0xfd < uVar10 - 2) goto switchD_10027488_default;
      *piVar11 = *piVar11 * uVar10;
      uVar9 = *puVar13;
      break;
    case 0xfffffff9:
      *piVar11 = uVar10 * iVar8;
      break;
    default:
      goto switchD_10027488_default;
    }
    *puVar13 = uVar9 * uVar10;
  }
switchD_10027488_default:
  return uVar12 & 0xffffffff;
}

