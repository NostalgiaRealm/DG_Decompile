/*
 * FUN_1003b98d at 1003b98d
 * undefined __stdcall FUN_1003b98d(int param_1, char param_2)
 * Address ranges: 1003b98d-1003bc03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003b98d(int param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar4 = *(int *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x189) = 0;
  uVar5 = 0;
  *(undefined2 *)(param_1 + 0x18d) = 0;
  *(undefined1 *)(param_1 + 400) = 1;
  do {
    uVar2 = (*(uint *)(iVar4 + 0x20) & *(uint *)(iVar4 + 0xc)) >> ((char)uVar5 * '\x03' & 0x1fU) & 7
    ;
    if (uVar2 == 1) {
      *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) | 1;
      *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 1;
    }
    else if (uVar2 == 2) {
LAB_1003b9f2:
      *(byte *)(param_1 + 0x18b) = *(byte *)(param_1 + 0x18b) | 1;
    }
    else if (uVar2 == 3) {
      *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) | 1;
      *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 1;
      if (((byte)((uint)*(undefined4 *)(iVar4 + 0x44) >> 0x1d) & 1) != 0) goto LAB_1003b9f2;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (((byte)(*(uint *)(iVar4 + 0x44) >> 0x1a) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x17c) & 2) == 0) goto LAB_1003ba69;
    *(undefined1 *)(param_1 + 400) = 0;
  }
  else {
    uVar5 = *(uint *)(iVar4 + 0x44) >> 0x18 & 3;
    if (((uVar5 == 1) || (uVar5 == 2)) || (uVar5 == 3)) {
      *(byte *)(param_1 + 0x18b) = *(byte *)(param_1 + 0x18b) | 2;
      *(undefined1 *)(param_1 + 400) = 0;
      goto LAB_1003ba69;
    }
    if ((*(byte *)(param_1 + 0x17c) & 2) == 0) goto LAB_1003ba69;
  }
  *(undefined1 *)(param_1 + 0x18e) = 8;
LAB_1003ba69:
  puVar6 = (uint *)(param_1 + 0x17c);
  bVar3 = (byte)((uint)*(undefined4 *)(iVar4 + 0x44) >> 0x18);
  bVar1 = bVar3 >> 7;
  *(byte *)(param_1 + 0x191) = bVar1;
  if (param_2 != '\0') {
    bVar1 = (byte)(*puVar6 >> 2) & bVar3 >> 7;
    *(byte *)(param_1 + 0x191) = bVar1;
  }
  if (bVar1 == 0) {
    if ((*(byte *)puVar6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x18d) = 0xf;
    }
    if ((*(byte *)puVar6 & 2) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 400) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x180);
    uVar5 = 0;
    do {
      bVar3 = (char)uVar5 * '\x03';
      if ((*(uint *)(iVar4 + 0x28) >> (bVar3 & 0x1f) & 7) == 0) {
        iVar4 = *(int *)(param_1 + 0x180);
      }
      else {
        if (((int)*(uint *)(iVar4 + 0x28) < 0) && ((*(byte *)puVar6 & 4) != 0)) {
          *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) | 4;
        }
        else {
          *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) | 4;
        }
        iVar4 = *(int *)(param_1 + 0x180);
        if ((((byte)(*(uint *)(iVar4 + 0x24) >> (bVar3 & 0x1f)) & 7) != 3) ||
           (((*(uint *)(iVar4 + 0x44) >> 0x14 & 1) != 0 &&
            ((*(uint *)(iVar4 + 0x44) >> 0x1d & 1) != 0)))) {
          *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) | 4;
        }
        *(undefined1 *)(param_1 + 0x192) = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    iVar4 = *(int *)(param_1 + 0x180);
    if ((*(char *)(param_1 + 0x192) != '\0') && ((*(uint *)(iVar4 + 0x44) >> 0x14 & 1) != 0)) {
      *(undefined1 *)(param_1 + 400) = 0;
    }
    if ((*(byte *)puVar6 & 1) != 0) {
      if (((byte)*(undefined4 *)(iVar4 + 0x2c) & 3) == 1) {
        *(undefined1 *)(param_1 + 0x18d) = 7;
      }
      if (((byte)*(undefined4 *)(iVar4 + 0x2c) & 0xc) == 4) {
        *(byte *)(param_1 + 0x18d) = *(byte *)(param_1 + 0x18d) | 7;
      }
      uVar5 = *(uint *)(iVar4 + 0x2c) & 0x30;
      if (*(char *)(param_1 + 0x192) == '\0') {
        if (uVar5 == 0x10) {
          *(byte *)(param_1 + 0x18d) = *(byte *)(param_1 + 0x18d) | 8;
        }
      }
      else {
        if (uVar5 == 0x10) {
          *(byte *)(param_1 + 0x18d) = *(byte *)(param_1 + 0x18d) | 0xf;
        }
        if (((byte)*(undefined4 *)(iVar4 + 0x2c) & 0xc0) == 0x40) {
          *(byte *)(param_1 + 0x18d) = *(byte *)(param_1 + 0x18d) | 7;
        }
      }
    }
    if ((*(byte *)puVar6 & 2) == 0) {
      return;
    }
    if (((byte)*(undefined4 *)(iVar4 + 0x2c) & 3) == 2) {
      *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 7;
    }
    if (((byte)*(undefined4 *)(iVar4 + 0x2c) & 0xc) == 8) {
      *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 7;
    }
    uVar5 = *(uint *)(iVar4 + 0x2c) & 0x30;
    if (*(char *)(param_1 + 0x192) == '\0') {
      if (uVar5 != 0x20) {
        return;
      }
      *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 8;
      return;
    }
    if (uVar5 == 0x20) {
      *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 0xf;
    }
    if (((byte)*(undefined4 *)(*(int *)(param_1 + 0x180) + 0x2c) & 0xc0) != 0x80) {
      return;
    }
  }
  *(byte *)(param_1 + 0x18e) = *(byte *)(param_1 + 0x18e) | 7;
  return;
}

