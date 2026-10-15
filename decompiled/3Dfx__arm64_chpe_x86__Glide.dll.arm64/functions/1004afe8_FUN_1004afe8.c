/*
 * FUN_1004afe8 at 1004afe8
 * undefined FUN_1004afe8(void)
 * Address ranges: 1004afe8-1004b2ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004afe8(ushort *param_1,short param_2,ushort param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  
  puVar1 = param_1 + 1;
  if ((*param_1 & 0xdf0) == 0) {
LAB_1004b0c0:
    param_1[2] = 0;
    uVar4 = 0;
    *puVar1 = 0;
    *param_1 = 0;
  }
  else {
    uVar5 = *puVar1;
    if (((uVar5 & 0xdf0) == 0) && ((param_1[2] & 0xdf0) == 0)) goto LAB_1004b0c0;
    uVar4 = param_1[2];
    if (((uVar4 ^ uVar5) & 0xf0ff) == 0) {
      if ((uVar5 & 0xf00) == 0x200) {
        if ((uVar4 & 0xf00) == 0) goto LAB_1004b0c0;
      }
      else if ((uVar4 & 0xf00) == 0x200 && (uVar5 & 0xf00) == 0) goto LAB_1004b0c0;
    }
  }
  puVar3 = param_1 + 2;
  uVar5 = *param_1;
  if ((uVar5 & 0xff0) == 0x100) {
    if (((uVar4 & 0xff0) == 0) || ((uVar4 & 0xff0) == 0x200)) {
      if ((param_1[3] & 0xdf0) == 0) {
        uVar2 = param_1[1];
        param_1[1] = 0;
        *param_1 = 0;
        uVar5 = 0;
        param_1[3] = uVar2;
        goto LAB_1004b1c0;
      }
    }
    if (((*puVar1 & 0xdf0) != 0) || ((param_1[3] & 0xdf0) != 0)) goto LAB_1004b1c0;
    uVar4 = *puVar3;
    *puVar3 = 0;
    *param_1 = 0;
    uVar5 = 0;
    param_1[3] = uVar4;
LAB_1004b140:
    if ((uVar5 & 0xdf0) != 0) {
      return;
    }
  }
  else {
LAB_1004b1c0:
    if (((uVar5 & 0xdf0) == 0) ||
       ((((*puVar1 & 0xff0) != 0x100 || (uVar4 = *puVar3, (uVar4 & 0xdf0) != 0)) &&
        (((uVar4 & 0xff0) != 0x100 || ((*puVar1 & 0xdf0) != 0)))))) goto LAB_1004b140;
    *puVar3 = 0;
    if ((param_1[3] & 0xdf0) != 0) {
      *puVar1 = *param_1;
      *param_1 = 0x100;
      return;
    }
    param_1[3] = *param_1;
    *puVar1 = 0;
    *param_1 = 0;
  }
  if ((*puVar1 & 0xdf0) != 0) {
    return;
  }
  if ((*puVar3 & 0xdf0) != 0) {
    return;
  }
  if ((char)param_1[4] != '\0') {
    return;
  }
  uVar5 = param_1[3];
  if (param_2 == 0) {
    uVar4 = uVar5 & 0xf00;
    if (uVar4 < 0x300) {
      if (uVar4 == 0x200) {
LAB_1004b2ec:
        uVar5 = 0;
        goto LAB_1004b2f0;
      }
    }
    else if (uVar4 < 0x301) {
      uVar4 = uVar5 & 0xf0;
      uVar5 = 0xf0;
      if (uVar4 == 0) {
        uVar5 = 0;
      }
    }
    else {
      if (uVar4 == 0x400) goto LAB_1004b2ec;
      if (uVar4 == 0x500) {
        uVar5 = 0xf0;
      }
    }
  }
  else if (param_2 == 0x100) {
    uVar4 = uVar5 & 0xf00;
    if (uVar4 < 0x300) {
      if ((uVar5 & 0xf00) == 0) {
        uVar5 = uVar5 & 0xf0ff | 0x100;
      }
      else if (uVar4 == 0x100) {
        uVar5 = uVar5 & 0xf0ff;
      }
      else if (uVar4 == 0x200) goto LAB_1004b27c;
    }
    else if (uVar4 < 0x301) {
      uVar4 = uVar5 & 0xf0;
      uVar5 = 0xf0;
      if (uVar4 == 0) {
        uVar5 = 0x100;
      }
    }
    else {
      if (uVar4 == 0x400) {
LAB_1004b27c:
        uVar5 = 0x100;
        goto LAB_1004b2f0;
      }
      if (uVar4 == 0x500) {
        return;
      }
    }
  }
  if (uVar5 == 0xf0) {
    return;
  }
LAB_1004b2f0:
  param_1[5] = uVar5 | param_3;
  return;
}

