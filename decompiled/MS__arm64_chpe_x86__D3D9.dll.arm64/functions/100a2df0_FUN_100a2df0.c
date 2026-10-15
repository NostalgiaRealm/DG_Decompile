/*
 * FUN_100a2df0 at 100a2df0
 * undefined FUN_100a2df0(void)
 * Address ranges: 100a2df0-100a3397
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a2df0(uint param_1,char param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_100a2d78(param_3);
  *param_3 = param_1;
  puVar2 = param_3 + 1;
  *puVar2 = 4;
  if ((param_1 & 0x2001) != 0) {
    return 0;
  }
  uVar11 = param_1 >> 8 & 0xf;
  if (8 < uVar11) {
    return 0;
  }
  uVar10 = param_1 & 0x400e;
  if ((uVar10 == 2) || ((param_2 != '\0' && (uVar10 - 6 < 9)))) {
    param_3[5] = 0xc0300;
    *(undefined1 *)(param_3 + 6) = 2;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
    uVar9 = 1;
    if ((param_1 & 0x10) != 0) {
      uVar9 = 2;
    }
    *puVar2 = uVar9;
    switch(uVar10) {
    case 6:
      iVar6 = 1;
      break;
    case 8:
      iVar6 = 2;
      break;
    case 10:
      iVar6 = 3;
      break;
    case 0xc:
      iVar6 = 4;
      break;
    case 0xe:
      iVar6 = 5;
      break;
    default:
      uVar10 = 3;
      goto LAB_100a2fc8;
    }
    *(undefined1 *)(param_3 + 7) = 0;
    *(char *)((int)param_3 + 0x1d) = (char)iVar6;
    *(char *)((int)param_3 + 0x1e) = (char)(iVar6 << 2);
    *(undefined1 *)((int)param_3 + 0x1f) = 3;
    bVar3 = (&DAT_1016256c)[iVar6 * 4];
    *(byte *)(param_3 + 8) = bVar3;
    *(undefined1 *)((int)param_3 + 0x22) = *(undefined1 *)(bVar3 + 0x10162550);
    *(undefined1 *)((int)param_3 + 0x215) = 1;
    uVar10 = iVar6 + 3;
    uVar9 = 2;
  }
  else {
    if (uVar10 == 4) {
      if ((param_1 >> 4 & 1) != 0) {
        return 0;
      }
      *puVar2 = 0;
    }
    else {
      if (uVar10 != 0x4002) {
        return 0;
      }
      *puVar2 = 3;
    }
    param_3[5] = 0x100400;
    *(undefined1 *)(param_3 + 6) = 3;
    *(undefined1 *)((int)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
    uVar10 = 4;
LAB_100a2fc8:
    iVar6 = 0;
    uVar9 = 1;
  }
  cVar4 = (char)uVar10;
  if ((param_1 >> 0xc & 1) != 0) {
    if (iVar6 == 0) {
      iVar5 = 0;
      goto LAB_100a306c;
    }
    *(char *)((int)param_3 + 0x1e) = *(char *)((int)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((int)param_3 + 0x1d) + -1;
    *(char *)((int)param_3 + 0x1d) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((int)param_3 + 0x21) = 0xff;
      uVar9 = uVar9 + 0xff & 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((int)param_3 + 0x26) = 4;
    *(char *)((int)param_3 + 0x27) = cVar4 + -1;
    *(undefined1 *)(param_3 + 10) = 5;
    *(undefined1 *)((int)param_3 + 0x2a) = 2;
    *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 2;
    uVar9 = uVar9 + 1 & 0xff;
  }
  iVar5 = 1;
LAB_100a306c:
  if ((param_1 & 0x9000) == 0x9000) {
    iVar5 = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    if (iVar6 == 0) {
      return 0;
    }
    *(char *)((int)param_3 + 0x1e) = *(char *)((int)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((int)param_3 + 0x1d) + -1;
    *(char *)((int)param_3 + 0x1d) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((int)param_3 + 0x21) = 0xff;
      uVar9 = uVar9 + 0xff & 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((int)param_3 + 0x26) = 4;
    *(char *)((int)param_3 + 0x27) = cVar4 + -1;
    *(undefined1 *)(param_3 + 10) = 4;
    *(undefined1 *)((int)param_3 + 0x2a) = 0;
    *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 2;
    uVar9 = uVar9 + 1 & 0xff;
  }
  if (iVar5 != 0) {
    if ((param_1 >> 4 & 1) != 0) {
      *(undefined2 *)(param_3 + 0xb) = 0x300;
      *(undefined1 *)((int)param_3 + 0x2e) = 0xc;
      *(char *)((int)param_3 + 0x2f) = cVar4;
      *(undefined1 *)(param_3 + 0xc) = 2;
      *(undefined1 *)((int)param_3 + 0x32) = 0;
      *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 3;
      uVar9 = uVar9 + 1 & 0xff;
      uVar10 = uVar10 + 3;
    }
    if ((param_1 >> 5 & 1) != 0) {
      *(undefined2 *)(param_3 + 0xd) = 0x100;
      *(undefined1 *)((int)param_3 + 0x36) = 4;
      *(char *)((int)param_3 + 0x37) = (char)uVar10;
      *(undefined1 *)(param_3 + 0xe) = 0;
      *(undefined1 *)((int)param_3 + 0x3a) = 1;
      *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 4;
      uVar9 = uVar9 + 1 & 0xff;
      uVar10 = uVar10 + 1;
    }
    if ((param_1 >> 6 & 1) != 0) {
      *(undefined2 *)(param_3 + 0xf) = 0x400;
      *(undefined1 *)((int)param_3 + 0x3e) = 4;
      *(char *)((int)param_3 + 0x3f) = (char)uVar10;
      *(undefined1 *)(param_3 + 0x10) = 4;
      *(undefined1 *)((int)param_3 + 0x42) = 0;
      *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 5;
      uVar9 = uVar9 + 1 & 0xff;
      uVar10 = uVar10 + 1;
    }
    if ((param_1 >> 7 & 1) != 0) {
      *(undefined2 *)(param_3 + 0x11) = 0x400;
      *(undefined1 *)((int)param_3 + 0x46) = 4;
      *(char *)((int)param_3 + 0x47) = (char)uVar10;
      *(undefined1 *)(param_3 + 0x12) = 4;
      *(undefined1 *)((int)param_3 + 0x4a) = 0;
      *(undefined1 *)((int)param_3 + uVar9 + 0x214) = 6;
      uVar9 = uVar9 + 1 & 0xff;
      uVar10 = uVar10 + 1;
    }
    uVar8 = 0;
    if (uVar11 != 0) {
      do {
        *(undefined1 *)(param_3 + uVar8 * 2 + 0x13) = 0;
        bVar3 = *(byte *)((param_1 >> (ulonglong)(uVar8 * 2 + 0x10 & 0x1f) & 3) + 0x10162564);
        *(byte *)((int)param_3 + uVar8 * 8 + 0x4d) = bVar3;
        *(byte *)((int)param_3 + uVar8 * 8 + 0x4e) = bVar3 << 2;
        *(char *)((int)param_3 + uVar8 * 8 + 0x4f) = (char)uVar10;
        uVar10 = uVar10 + bVar3 & 0xff;
        bVar3 = (&DAT_1016256c)[(uint)bVar3 * 4];
        *(byte *)(param_3 + uVar8 * 2 + 0x14) = bVar3;
        *(undefined1 *)((int)param_3 + uVar8 * 8 + 0x52) = *(undefined1 *)(bVar3 + 0x10162550);
        *(char *)((int)param_3 + uVar9 + 0x214) = (char)uVar8 + '\a';
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar8 < uVar11);
    }
    param_3[3] = uVar10 << 2;
    param_3[4] = 1;
    uVar11 = 0;
    param_3[2] = uVar9;
    if (uVar9 != 0) {
      do {
        bVar3 = *(byte *)((int)param_3 + uVar11 + 0x214);
        if ((char)param_3[(uint)bVar3 * 2 + 5] != -1) {
          if (bVar3 < 0x11) {
            uVar7 = (&DAT_10162538)[bVar3];
          }
          else {
            uVar7 = 0xff;
          }
          *(undefined1 *)((int)param_3 + (uint)bVar3 * 8 + 0x19) = uVar7;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_3[2]);
    }
    if (0x10 < uVar9) {
      *puVar2 = 4;
      return 0;
    }
    return iVar5;
  }
  return 0;
}

