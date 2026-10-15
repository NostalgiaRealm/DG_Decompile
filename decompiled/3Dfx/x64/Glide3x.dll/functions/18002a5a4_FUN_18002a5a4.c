/*
 * FUN_18002a5a4 at 18002a5a4
 * undefined __fastcall FUN_18002a5a4(ushort * param_1, short param_2, ushort param_3)
 * Address ranges: 18002a5a4-18002a8a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a5a4(ushort *param_1,short param_2,ushort param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (((*param_1 & 0xdf0) == 0) ||
     ((uVar2 = param_1[1], (uVar2 & 0xdf0) == 0 && ((param_1[2] & 0xdf0) == 0))))
  goto LAB_18002a64c;
  uVar3 = param_1[2];
  if ((uVar2 & 0xf0ff) == (uVar3 & 0xf0ff)) {
    if ((uVar2 & 0xf00) == 0x200) {
      if ((uVar3 & 0xf00) == 0) {
LAB_18002a64c:
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        uVar3 = 0;
      }
    }
    else if (((uVar2 & 0xf00) == 0) && ((uVar3 & 0xf00) == 0x200)) goto LAB_18002a64c;
  }
  puVar1 = param_1 + 1;
  if (((*param_1 & 0xff0) == 0x100) && (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) {
    if ((param_1[3] & 0xdf0) == 0) {
      param_1[3] = param_1[1];
      param_1[1] = 0;
      uVar2 = 0;
      *param_1 = 0;
      goto LAB_18002a7a4;
    }
LAB_18002a6bd:
    if (((*puVar1 & 0xdf0) != 0) || ((param_1[3] & 0xdf0) != 0)) goto LAB_18002a7a0;
    uVar2 = 0;
    param_1[3] = param_1[2];
    uVar3 = 0;
    param_1[2] = 0;
    *param_1 = 0;
LAB_18002a6ff:
    if ((uVar2 & 0xdf0) != 0) {
      return;
    }
  }
  else {
    if ((*param_1 & 0xff0) == 0x100) goto LAB_18002a6bd;
LAB_18002a7a0:
    uVar2 = *param_1;
LAB_18002a7a4:
    if ((((uVar2 & 0xff0) == 0) || ((uVar2 & 0xff0) == 0x200)) ||
       ((((*puVar1 & 0xff0) != 0x100 || (uVar3 = param_1[2], (uVar3 & 0xdf0) != 0)) &&
        (((uVar3 & 0xff0) != 0x100 || ((*puVar1 & 0xdf0) != 0)))))) goto LAB_18002a6ff;
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
LAB_18002a879:
      uVar2 = 0;
      goto LAB_18002a87b;
    }
    if (uVar3 == 0x300) {
      uVar2 = -(ushort)((uVar2 & 0xf0) != 0) & 0xf0;
    }
    else {
      if (uVar3 == 0x400) goto LAB_18002a879;
LAB_18002a78f:
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
            goto LAB_18002a89a;
          }
          if (uVar3 != 0x400) goto LAB_18002a78f;
        }
        uVar2 = 0x100;
        goto LAB_18002a87b;
      }
      uVar2 = uVar2 & 0xf0ff;
    }
  }
LAB_18002a89a:
  if (uVar2 == 0xf0) {
    return;
  }
LAB_18002a87b:
  param_1[5] = uVar2 | param_3;
  return;
}

