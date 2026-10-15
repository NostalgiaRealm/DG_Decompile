/*
 * FUN_100832c0 at 100832c0
 * undefined FUN_100832c0(void)
 * Address ranges: 100832c0-100837a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100832c0(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong extraout_x1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  
  param_1 = param_1 & 0xffffffff;
  FUN_10083260(param_3);
  puVar2 = param_3 + 1;
  uVar6 = (uint)param_1;
  *param_3 = uVar6;
  *puVar2 = 3;
  if ((param_1 & 0xe001) != 0) {
    return false;
  }
  uVar4 = uVar6 >> 8 & 0xf;
  if (8 < uVar4) {
    return false;
  }
  uVar7 = uVar6 & 0xe;
  if ((uVar7 == 2) || (((extraout_x1 & 1) != 0 && (uVar7 - 6 < 9)))) {
    param_3[5] = 0xc0300;
    *(undefined1 *)(param_3 + 6) = 2;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
    uVar8 = 1;
    if ((param_1 & 0x10) != 0) {
      uVar8 = 2;
    }
    *puVar2 = uVar8;
    iVar5 = 0;
    if (5 < uVar7) {
      switch(uVar7) {
      case 6:
        iVar5 = 1;
        break;
      case 8:
        iVar5 = 2;
        break;
      case 10:
        iVar5 = 3;
        break;
      case 0xc:
        iVar5 = 4;
        break;
      case 0xe:
        iVar5 = 5;
        break;
      default:
        uVar8 = 1;
        uVar7 = 3;
        goto LAB_10083490;
      }
      *(undefined1 *)(param_3 + 7) = 0;
      *(char *)((int)param_3 + 0x1d) = (char)iVar5;
      *(char *)((int)param_3 + 0x1e) = (char)(iVar5 << 2);
      *(undefined1 *)((int)param_3 + 0x1f) = 3;
      bVar3 = (&DAT_1012ca4c)[iVar5 * 4];
      *(byte *)(param_3 + 8) = bVar3;
      *(undefined1 *)((int)param_3 + 0x22) = *(undefined1 *)(bVar3 + 0x1012ca40);
      *(undefined1 *)((int)param_3 + 0x9d) = 1;
      uVar8 = 2;
      uVar7 = iVar5 + 3;
      goto LAB_10083490;
    }
    uVar7 = 3;
  }
  else {
    if (uVar7 != 4) {
      return false;
    }
    if ((param_1 & 0x10) != 0) {
      return false;
    }
    *puVar2 = 0;
    param_3[5] = 0x100400;
    *(undefined1 *)(param_3 + 6) = 3;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x27) = 0;
    uVar7 = 4;
  }
  iVar5 = 0;
  uVar8 = 1;
LAB_10083490:
  if ((uVar6 >> 0xc & 1) != 0) {
    if (iVar5 == 0) {
      return false;
    }
    *(char *)((int)param_3 + 0x1e) = *(char *)((int)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((int)param_3 + 0x1d) + -1;
    *(char *)((int)param_3 + 0x1d) = cVar1;
    if (cVar1 == '\0') {
      uVar8 = uVar8 + 0xff & 0xff;
      *(undefined1 *)(param_3 + 7) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((int)param_3 + 0x26) = 4;
    *(char *)((int)param_3 + 0x27) = (char)uVar7 + -1;
    *(undefined1 *)(param_3 + 10) = 5;
    *(undefined1 *)((int)param_3 + 0x2a) = 2;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 2;
    uVar8 = uVar8 + 1 & 0xff;
  }
  if ((param_1 & 0x10) != 0) {
    *(undefined2 *)(param_3 + 0xb) = 0x300;
    *(undefined1 *)((int)param_3 + 0x2e) = 0xc;
    *(char *)((int)param_3 + 0x2f) = (char)uVar7;
    *(undefined1 *)(param_3 + 0xc) = 2;
    *(undefined1 *)((int)param_3 + 0x32) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 3;
    uVar8 = uVar8 + 1 & 0xff;
    uVar7 = uVar7 + 3;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    *(undefined2 *)(param_3 + 0xd) = 0x100;
    *(undefined1 *)((int)param_3 + 0x36) = 4;
    *(char *)((int)param_3 + 0x37) = (char)uVar7;
    *(undefined1 *)(param_3 + 0xe) = 0;
    *(undefined1 *)((int)param_3 + 0x3a) = 1;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 4;
    uVar8 = uVar8 + 1 & 0xff;
    uVar7 = uVar7 + 1;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    *(undefined2 *)(param_3 + 0xf) = 0x400;
    *(undefined1 *)((int)param_3 + 0x3e) = 4;
    *(char *)((int)param_3 + 0x3f) = (char)uVar7;
    *(undefined1 *)(param_3 + 0x10) = 4;
    *(undefined1 *)((int)param_3 + 0x42) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 5;
    uVar8 = uVar8 + 1 & 0xff;
    uVar7 = uVar7 + 1;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    *(undefined2 *)(param_3 + 0x11) = 0x400;
    *(undefined1 *)((int)param_3 + 0x46) = 4;
    *(char *)((int)param_3 + 0x47) = (char)uVar7;
    *(undefined1 *)(param_3 + 0x12) = 4;
    *(undefined1 *)((int)param_3 + 0x4a) = 0;
    *(undefined1 *)((int)param_3 + uVar8 + 0x9c) = 6;
    uVar8 = uVar8 + 1 & 0xff;
    uVar7 = uVar7 + 1;
  }
  uVar9 = 0;
  if (uVar4 != 0) {
    do {
      bVar3 = *(byte *)((uVar6 >> (ulonglong)(uVar9 * 2 + 0x10 & 0x1f) & 3) + 0x1012ca48);
      *(undefined1 *)(param_3 + uVar9 * 2 + 0x13) = 0;
      *(byte *)((int)param_3 + uVar9 * 8 + 0x4d) = bVar3;
      *(byte *)((int)param_3 + uVar9 * 8 + 0x4e) = bVar3 << 2;
      *(char *)((int)param_3 + uVar9 * 8 + 0x4f) = (char)uVar7;
      uVar7 = uVar7 + bVar3 & 0xff;
      bVar3 = (&DAT_1012ca4c)[(uint)bVar3 * 4];
      *(byte *)(param_3 + uVar9 * 2 + 0x14) = bVar3;
      *(undefined1 *)((int)param_3 + uVar9 * 8 + 0x52) = *(undefined1 *)(bVar3 + 0x1012ca40);
      *(char *)((int)param_3 + uVar8 + 0x9c) = (char)uVar9 + '\a';
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar9 < uVar4);
  }
  param_3[3] = uVar7 << 2;
  param_3[4] = 1;
  uVar6 = 0;
  param_3[2] = uVar8;
  if (uVar8 != 0) {
    do {
      bVar3 = *(byte *)((int)param_3 + uVar6 + 0x9c);
      if ((char)param_3[(uint)bVar3 * 2 + 5] != -1) {
        if (bVar3 < 0x11) {
          uVar10 = (&DAT_1012ca28)[bVar3];
        }
        else {
          uVar10 = 0xff;
        }
        *(undefined1 *)((int)param_3 + (uint)bVar3 * 8 + 0x19) = uVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3[2]);
  }
  if (uVar8 >= 0x11) {
    *puVar2 = 3;
  }
  return uVar8 < 0x11;
}

