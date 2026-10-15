/*
 * FUN_1006f91a at 1006f91a
 * undefined __stdcall FUN_1006f91a(int param_1)
 * Address ranges: 1006f91a-1006fb79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f91a(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a9) = 0;
  uVar5 = 0;
  *(undefined2 *)(param_1 + 0x1ad) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  do {
    uVar3 = (*(uint *)(iVar1 + 0x20) & *(uint *)(iVar1 + 0xc)) >> ((char)uVar5 * '\x03' & 0x1fU) & 7
    ;
    if (uVar3 == 1) {
LAB_1006f970:
      *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) | 1;
      *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 1;
    }
    else if (uVar3 == 2) {
LAB_1006f9c6:
      *(byte *)(param_1 + 0x1ab) = *(byte *)(param_1 + 0x1ab) | 1;
    }
    else if (uVar3 == 3) {
      *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) | 1;
      *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) | 1;
      if (((byte)((uint)*(undefined4 *)(iVar1 + 0x44) >> 0x1d) & 1) != 0) goto LAB_1006f9c6;
    }
    else if (uVar3 == 4) goto LAB_1006f970;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (((byte)(*(uint *)(iVar1 + 0x44) >> 0x1a) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x19c) & 2) == 0) goto LAB_1006f9fd;
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  else {
    uVar5 = *(uint *)(iVar1 + 0x44) >> 0x18 & 3;
    if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
      *(byte *)(param_1 + 0x1ab) = *(byte *)(param_1 + 0x1ab) | 2;
      *(undefined1 *)(param_1 + 0x1b0) = 0;
      goto LAB_1006f9fd;
    }
    if ((*(byte *)(param_1 + 0x19c) & 2) == 0) goto LAB_1006f9fd;
  }
  *(undefined1 *)(param_1 + 0x1ae) = 8;
LAB_1006f9fd:
  cVar2 = -(char)((int)*(undefined4 *)(iVar1 + 0x44) >> 0x1f);
  *(char *)(param_1 + 0x1b1) = cVar2;
  if (cVar2 == '\0') {
    if ((*(byte *)(param_1 + 0x19c) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1ad) = 0xf;
    }
    if ((*(byte *)(param_1 + 0x19c) & 2) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1a0);
    uVar5 = 0;
    do {
      bVar4 = (char)uVar5 * '\x03';
      if ((*(uint *)(iVar1 + 0x28) >> (bVar4 & 0x1f) & 7) != 0) {
        if (((int)*(uint *)(iVar1 + 0x28) < 0) && ((*(byte *)(param_1 + 0x19c) & 4) != 0)) {
          *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) | 4;
        }
        else {
          *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) | 4;
        }
        if ((((byte)(*(uint *)(iVar1 + 0x24) >> (bVar4 & 0x1f)) & 7) != 3) ||
           (((*(uint *)(iVar1 + 0x44) >> 0x14 & 1) != 0 &&
            ((*(uint *)(iVar1 + 0x44) >> 0x1d & 1) != 0)))) {
          *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) | 4;
        }
        *(undefined1 *)(param_1 + 0x1b2) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    cVar2 = *(char *)(param_1 + 0x1b2);
    iVar1 = *(int *)(param_1 + 0x1a0);
    if ((cVar2 != '\0') && ((*(uint *)(iVar1 + 0x44) >> 0x14 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x1b0) = 0;
    }
    if ((*(uint *)(param_1 + 0x19c) & 1) != 0) {
      if (((byte)*(undefined4 *)(iVar1 + 0x2c) & 3) == 1) {
        *(undefined1 *)(param_1 + 0x1ad) = 7;
      }
      if (((byte)*(undefined4 *)(iVar1 + 0x2c) & 0xc) == 4) {
        *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) | 7;
      }
      uVar5 = *(uint *)(iVar1 + 0x2c) & 0x30;
      if (cVar2 == '\0') {
        if (uVar5 == 0x10) {
          *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) | 8;
        }
      }
      else {
        if (uVar5 == 0x10) {
          *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) | 0xf;
        }
        if (((byte)*(undefined4 *)(iVar1 + 0x2c) & 0xc0) == 0x40) {
          *(byte *)(param_1 + 0x1ad) = *(byte *)(param_1 + 0x1ad) | 7;
        }
      }
    }
    if ((*(uint *)(param_1 + 0x19c) & 2) == 0) {
      return;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x2c) & 3) == 2) {
      *(byte *)(param_1 + 0x1ae) = *(byte *)(param_1 + 0x1ae) | 7;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x2c) & 0xc) == 8) {
      *(byte *)(param_1 + 0x1ae) = *(byte *)(param_1 + 0x1ae) | 7;
    }
    uVar5 = *(uint *)(iVar1 + 0x2c) & 0x30;
    if (cVar2 == '\0') {
      if (uVar5 != 0x20) {
        return;
      }
      *(byte *)(param_1 + 0x1ae) = *(byte *)(param_1 + 0x1ae) | 8;
      return;
    }
    if (uVar5 == 0x20) {
      *(byte *)(param_1 + 0x1ae) = *(byte *)(param_1 + 0x1ae) | 0xf;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x1a0) + 0x2c) & 0xc0) != 0x80) {
      return;
    }
  }
  *(byte *)(param_1 + 0x1ae) = *(byte *)(param_1 + 0x1ae) | 7;
  return;
}

