/*
 * FUN_180083f2c at 180083f2c
 * undefined __fastcall FUN_180083f2c(undefined8 param_1, longlong param_2)
 * Address ranges: 180083f2c-180084192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083f2c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x1b0);
  *(undefined1 *)(param_2 + 0x1c8) = 1;
  uVar5 = 0;
  *(undefined4 *)(param_2 + 0x1c1) = 0;
  *(undefined2 *)(param_2 + 0x1c5) = 0;
  do {
    uVar4 = (*(uint *)(lVar1 + 0x20) & *(uint *)(lVar1 + 0xc)) >> ((char)uVar5 * '\x03' & 0x1fU) & 7
    ;
    if (uVar4 == 1) {
LAB_180083f86:
      *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 1;
      *(byte *)(param_2 + 0x1c4) = *(byte *)(param_2 + 0x1c4) | 1;
    }
    else if (uVar4 == 2) {
LAB_180083fe2:
      *(byte *)(param_2 + 0x1c3) = *(byte *)(param_2 + 0x1c3) | 1;
    }
    else if (uVar4 == 3) {
      *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 1;
      *(byte *)(param_2 + 0x1c4) = *(byte *)(param_2 + 0x1c4) | 1;
      if ((*(uint *)(lVar1 + 0x44) & 0x20000000) != 0) goto LAB_180083fe2;
    }
    else if (uVar4 == 4) goto LAB_180083f86;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if ((*(uint *)(lVar1 + 0x44) >> 0x1a & 1) == 0) {
    if ((*(byte *)(param_2 + 0x1ac) & 2) == 0) goto LAB_18008401c;
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  else {
    uVar5 = *(uint *)(lVar1 + 0x44) >> 0x18 & 3;
    if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
      *(byte *)(param_2 + 0x1c3) = *(byte *)(param_2 + 0x1c3) | 2;
      *(undefined1 *)(param_2 + 0x1c8) = 0;
      goto LAB_18008401c;
    }
    if ((*(byte *)(param_2 + 0x1ac) & 2) == 0) goto LAB_18008401c;
  }
  *(undefined1 *)(param_2 + 0x1c6) = 8;
LAB_18008401c:
  cVar3 = -(char)((int)*(undefined4 *)(lVar1 + 0x44) >> 0x1f);
  *(char *)(param_2 + 0x1c9) = cVar3;
  if (cVar3 == '\0') {
    if ((*(byte *)(param_2 + 0x1ac) & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1c5) = 0xf;
    }
    if ((*(byte *)(param_2 + 0x1ac) & 2) == 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  else {
    uVar5 = 0;
    do {
      bVar2 = (char)uVar5 * '\x03';
      if ((*(uint *)(lVar1 + 0x28) >> (bVar2 & 0x1f) & 7) != 0) {
        if (((int)*(uint *)(lVar1 + 0x28) < 0) && ((*(byte *)(param_2 + 0x1ac) & 4) != 0)) {
          *(byte *)(param_2 + 0x1c0) = *(byte *)(param_2 + 0x1c0) | 4;
        }
        else {
          *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 4;
        }
        if ((((byte)(*(uint *)(lVar1 + 0x24) >> (bVar2 & 0x1f)) & 7) != 3) ||
           ((*(uint *)(lVar1 + 0x44) & 0x20100000) == 0x20100000)) {
          *(byte *)(param_2 + 0x1c1) = *(byte *)(param_2 + 0x1c1) | 4;
        }
        *(undefined1 *)(param_2 + 0x1ca) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    cVar3 = *(char *)(param_2 + 0x1ca);
    if ((cVar3 != '\0') && ((*(uint *)(lVar1 + 0x44) & 0x100000) != 0)) {
      *(undefined1 *)(param_2 + 0x1c8) = 0;
    }
    if ((*(uint *)(param_2 + 0x1ac) & 1) != 0) {
      if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 3) == 1) {
        *(undefined1 *)(param_2 + 0x1c5) = 7;
      }
      if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 0xc) == 4) {
        *(byte *)(param_2 + 0x1c5) = *(byte *)(param_2 + 0x1c5) | 7;
      }
      uVar5 = *(uint *)(lVar1 + 0x2c) & 0x30;
      if (cVar3 == '\0') {
        if (uVar5 == 0x10) {
          *(byte *)(param_2 + 0x1c5) = *(byte *)(param_2 + 0x1c5) | 8;
        }
      }
      else {
        if (uVar5 == 0x10) {
          *(byte *)(param_2 + 0x1c5) = *(byte *)(param_2 + 0x1c5) | 0xf;
        }
        if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 0xc0) == 0x40) {
          *(byte *)(param_2 + 0x1c5) = *(byte *)(param_2 + 0x1c5) | 7;
        }
      }
    }
    if ((*(uint *)(param_2 + 0x1ac) & 2) == 0) {
      return;
    }
    if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 3) == 2) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 7;
    }
    if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 0xc) == 8) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 7;
    }
    uVar5 = *(uint *)(lVar1 + 0x2c) & 0x30;
    if (cVar3 == '\0') {
      if (uVar5 != 0x20) {
        return;
      }
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 8;
      return;
    }
    if (uVar5 == 0x20) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 0xf;
    }
    if (((byte)*(undefined4 *)(lVar1 + 0x2c) & 0xc0) != 0x80) {
      return;
    }
  }
  *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 7;
  return;
}

