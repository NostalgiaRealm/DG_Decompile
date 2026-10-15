/*
 * FUN_180037d24 at 180037d24
 * undefined __fastcall FUN_180037d24(ushort * param_1, short param_2, ushort param_3)
 * Address ranges: 180037d24-180038020
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037d24(ushort *param_1,short param_2,ushort param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (((*param_1 & 0xdf0) == 0) ||
     ((uVar2 = param_1[1], (uVar2 & 0xdf0) == 0 && ((param_1[2] & 0xdf0) == 0))))
  goto LAB_180037dcc;
  uVar3 = param_1[2];
  if ((uVar2 & 0xf0ff) == (uVar3 & 0xf0ff)) {
    if ((uVar2 & 0xf00) == 0x200) {
      if ((uVar3 & 0xf00) == 0) {
LAB_180037dcc:
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        uVar3 = 0;
      }
    }
    else if (((uVar2 & 0xf00) == 0) && ((uVar3 & 0xf00) == 0x200)) goto LAB_180037dcc;
  }
  puVar1 = param_1 + 1;
  if (((*param_1 & 0xff0) == 0x100) && (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) {
    if ((param_1[3] & 0xdf0) == 0) {
      param_1[3] = param_1[1];
      param_1[1] = 0;
      uVar2 = 0;
      *param_1 = 0;
      goto LAB_180037f24;
    }
LAB_180037e3d:
    if (((*puVar1 & 0xdf0) != 0) || ((param_1[3] & 0xdf0) != 0)) goto LAB_180037f20;
    uVar2 = 0;
    param_1[3] = param_1[2];
    uVar3 = 0;
    param_1[2] = 0;
    *param_1 = 0;
LAB_180037e7f:
    if ((uVar2 & 0xdf0) != 0) {
      return;
    }
  }
  else {
    if ((*param_1 & 0xff0) == 0x100) goto LAB_180037e3d;
LAB_180037f20:
    uVar2 = *param_1;
LAB_180037f24:
    if ((((uVar2 & 0xff0) == 0) || ((uVar2 & 0xff0) == 0x200)) ||
       ((((*puVar1 & 0xff0) != 0x100 || (uVar3 = param_1[2], (uVar3 & 0xdf0) != 0)) &&
        (((uVar3 & 0xff0) != 0x100 || ((*puVar1 & 0xdf0) != 0)))))) goto LAB_180037e7f;
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
LAB_180037ff9:
      uVar2 = 0;
      goto LAB_180037ffb;
    }
    if (uVar3 == 0x300) {
      uVar2 = -(ushort)((uVar2 & 0xf0) != 0) & 0xf0;
    }
    else {
      if (uVar3 == 0x400) goto LAB_180037ff9;
LAB_180037f0f:
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
            goto LAB_18003801a;
          }
          if (uVar3 != 0x400) goto LAB_180037f0f;
        }
        uVar2 = 0x100;
        goto LAB_180037ffb;
      }
      uVar2 = uVar2 & 0xf0ff;
    }
  }
LAB_18003801a:
  if (uVar2 == 0xf0) {
    return;
  }
LAB_180037ffb:
  param_1[5] = uVar2 | param_3;
  return;
}

