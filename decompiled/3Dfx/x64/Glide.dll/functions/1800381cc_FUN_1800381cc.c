/*
 * FUN_1800381cc at 1800381cc
 * undefined __fastcall FUN_1800381cc(ushort * param_1, short param_2, ushort param_3)
 * Address ranges: 1800381cc-1800384c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800381cc(ushort *param_1,short param_2,ushort param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (((*param_1 & 0xdf0) == 0) ||
     ((uVar2 = param_1[1], (uVar2 & 0xdf0) == 0 && ((param_1[2] & 0xdf0) == 0))))
  goto LAB_180038274;
  uVar3 = param_1[2];
  if ((uVar2 & 0xf0ff) == (uVar3 & 0xf0ff)) {
    if ((uVar2 & 0xf00) == 0x200) {
      if ((uVar3 & 0xf00) == 0) {
LAB_180038274:
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        uVar3 = 0;
      }
    }
    else if (((uVar2 & 0xf00) == 0) && ((uVar3 & 0xf00) == 0x200)) goto LAB_180038274;
  }
  puVar1 = param_1 + 1;
  if (((*param_1 & 0xff0) == 0x100) && (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) {
    if ((param_1[3] & 0xdf0) == 0) {
      param_1[3] = param_1[1];
      param_1[1] = 0;
      uVar2 = 0;
      *param_1 = 0;
      goto LAB_1800383cc;
    }
LAB_1800382e5:
    if (((*puVar1 & 0xdf0) != 0) || ((param_1[3] & 0xdf0) != 0)) goto LAB_1800383c8;
    uVar2 = 0;
    param_1[3] = param_1[2];
    uVar3 = 0;
    param_1[2] = 0;
    *param_1 = 0;
LAB_180038327:
    if ((uVar2 & 0xdf0) != 0) {
      return;
    }
  }
  else {
    if ((*param_1 & 0xff0) == 0x100) goto LAB_1800382e5;
LAB_1800383c8:
    uVar2 = *param_1;
LAB_1800383cc:
    if ((((uVar2 & 0xff0) == 0) || ((uVar2 & 0xff0) == 0x200)) ||
       ((((*puVar1 & 0xff0) != 0x100 || (uVar3 = param_1[2], (uVar3 & 0xdf0) != 0)) &&
        (((uVar3 & 0xff0) != 0x100 || ((*puVar1 & 0xdf0) != 0)))))) goto LAB_180038327;
    param_1[2] = 0;
    if ((param_1[3] & 0xdf0) != 0) {
      *puVar1 = *param_1;
      *param_1 = 0x100;
      return;
    }
    param_1[3] = *param_1;
    *param_1 = 0;
    uVar3 = 0;
    *puVar1 = 0;
  }
  if ((*puVar1 & 0xdf0) != 0) {
    return;
  }
  if ((uVar3 & 0xdf0) != 0) {
    return;
  }
  if ((char)param_1[4] != '\0') {
    return;
  }
  uVar2 = param_1[3];
  if (param_2 == 0) {
    uVar3 = uVar2 & 0xf00;
    if (uVar3 == 0x200) {
LAB_1800384a1:
      uVar2 = 0;
      goto LAB_1800384a3;
    }
    if (uVar3 == 0x300) {
      uVar2 = -(ushort)((uVar2 & 0xf0) != 0) & 0xf0;
    }
    else {
      if (uVar3 == 0x400) goto LAB_1800384a1;
LAB_1800383b7:
      if ((uVar2 & 0xf00) == 0x500) {
        return;
      }
    }
  }
  else if (param_2 == 0x100) {
    uVar3 = uVar2 & 0xf00;
    if ((uVar2 & 0xf00) == 0) {
      uVar2 = uVar2 & 0xf1ff | 0x100;
    }
    else {
      if (uVar3 != 0x100) {
        if (uVar3 != 0x200) {
          if (uVar3 == 0x300) {
            uVar2 = (-(ushort)((uVar2 & 0xf0) != 0) & 0xfff0) + 0x100;
            goto LAB_1800384c2;
          }
          if (uVar3 != 0x400) goto LAB_1800383b7;
        }
        uVar2 = 0x100;
        goto LAB_1800384a3;
      }
      uVar2 = uVar2 & 0xf0ff;
    }
  }
LAB_1800384c2:
  if (uVar2 == 0xf0) {
    return;
  }
LAB_1800384a3:
  param_1[5] = uVar2 | param_3;
  return;
}

