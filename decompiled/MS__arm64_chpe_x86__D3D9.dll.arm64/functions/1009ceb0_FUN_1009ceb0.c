/*
 * FUN_1009ceb0 at 1009ceb0
 * undefined FUN_1009ceb0(void)
 * Address ranges: 1009ceb0-1009d293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009ceb0(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  byte bVar13;
  
  iVar9 = *(int *)(param_2 + 0x1a0);
  pbVar1 = (byte *)(param_2 + 0x1a9);
  pbVar2 = (byte *)(param_2 + 0x1ad);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  puVar3 = (undefined1 *)(param_2 + 0x1b0);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  *puVar3 = 1;
  pbVar4 = (byte *)(param_2 + 0x1aa);
  pbVar5 = (byte *)(param_2 + 0x1ab);
  pbVar6 = (byte *)(param_2 + 0x1ac);
  uVar12 = 0;
  do {
    uVar10 = (*(uint *)(iVar9 + 0xc) & *(uint *)(iVar9 + 0x20)) >> (ulonglong)(uVar12 * 3 & 0x1f) &
             7;
    if (uVar10 << 0x10 < 0x30000) {
      if (uVar10 == 1) {
LAB_1009cf50:
        *pbVar4 = *pbVar4 | 1;
        *pbVar6 = *pbVar6 | 1;
      }
      else if (uVar10 == 2) goto LAB_1009cfb8;
    }
    else if (uVar10 << 0x10 < 0x30001) {
      *pbVar4 = *pbVar4 | 1;
      *pbVar6 = *pbVar6 | 1;
      if ((*(uint *)(iVar9 + 0x44) >> 0x1d & 1) != 0) {
LAB_1009cfb8:
        *pbVar5 = *pbVar5 | 1;
      }
    }
    else if (uVar10 == 4) goto LAB_1009cf50;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 8);
  puVar7 = (uint *)(iVar9 + 0x44);
  puVar8 = (uint *)(param_2 + 0x19c);
  if ((*puVar7 >> 0x1a & 1) == 0) {
    if ((*puVar8 >> 1 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1ae) = 8;
      goto LAB_1009cff0;
    }
  }
  else if ((*puVar7 >> 0x18 & 3) - 1 < 3) {
    *pbVar5 = *pbVar5 | 2;
LAB_1009cff0:
    *puVar3 = 0;
  }
  else if ((*puVar8 >> 1 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x1ae) = 8;
  }
  uVar12 = *puVar7;
  *(byte *)(param_2 + 0x1b1) = (byte)(uVar12 >> 0x1f);
  if (-1 < (int)uVar12) {
    if ((*puVar8 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1ad) = 0xf;
    }
    if ((*puVar8 >> 1 & 1) == 0) {
      return;
    }
    *(byte *)(param_2 + 0x1ae) = *(byte *)(param_2 + 0x1ae) | 7;
    *(undefined1 *)(param_2 + 0x1b0) = 0;
    return;
  }
  uVar12 = 0;
  do {
    if ((*(uint *)(iVar9 + 0x28) >> (ulonglong)(uVar12 * 3 & 0x1f) & 7) != 0) {
      if (((int)*(uint *)(iVar9 + 0x28) < 0) && ((*puVar8 >> 2 & 1) != 0)) {
        *(byte *)(param_2 + 0x1a8) = *(byte *)(param_2 + 0x1a8) | 4;
      }
      else {
        *pbVar4 = *pbVar4 | 4;
      }
      if (((*(uint *)(iVar9 + 0x24) >> (ulonglong)(uVar12 * 3 & 0x1f) & 7) != 3) ||
         (((*puVar7 >> 0x14 & 1) != 0 && ((*puVar7 >> 0x1d & 1) != 0)))) {
        *pbVar1 = *pbVar1 | 4;
      }
      *(undefined1 *)(param_2 + 0x1b2) = 1;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 8);
  if ((*(char *)(param_2 + 0x1b2) != '\0') && ((*puVar7 >> 0x14 & 1) != 0)) {
    *puVar3 = 0;
  }
  if ((*puVar8 & 1) != 0) {
    puVar7 = (uint *)(iVar9 + 0x2c);
    if ((*puVar7 & 3) == 1) {
      *pbVar2 = 7;
    }
    if ((*puVar7 & 0xc) == 4) {
      *pbVar2 = *pbVar2 | 7;
    }
    bVar11 = (*puVar7 & 0x30) == 0x10;
    if (*(char *)(param_2 + 0x1b2) == '\0') {
      if (!bVar11) goto LAB_1009d17c;
      bVar13 = *(byte *)(param_2 + 0x1ad) | 8;
    }
    else {
      if (bVar11) {
        *(byte *)(param_2 + 0x1ad) = *pbVar2 | 0xf;
      }
      if ((*(uint *)(iVar9 + 0x2c) & 0xc0) != 0x40) goto LAB_1009d17c;
      bVar13 = *(byte *)(param_2 + 0x1ad) | 7;
    }
    *(byte *)(param_2 + 0x1ad) = bVar13;
  }
LAB_1009d17c:
  if ((*puVar8 >> 1 & 1) != 0) {
    puVar7 = (uint *)(iVar9 + 0x2c);
    if ((*puVar7 & 3) == 2) {
      *(byte *)(param_2 + 0x1ae) = *(byte *)(param_2 + 0x1ae) | 7;
    }
    if ((*puVar7 & 0xc) == 8) {
      *(byte *)(param_2 + 0x1ae) = *(byte *)(param_2 + 0x1ae) | 7;
    }
    if (*(char *)(param_2 + 0x1b2) == '\0') {
      if ((*(uint *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0x30) != 0x20) {
        return;
      }
      bVar13 = *(byte *)(param_2 + 0x1ae) | 8;
    }
    else {
      if ((*puVar7 & 0x30) == 0x20) {
        *(byte *)(param_2 + 0x1ae) = *(byte *)(param_2 + 0x1ae) | 0xf;
      }
      if ((*(uint *)(*(int *)(param_2 + 0x1a0) + 0x2c) & 0xc0) != 0x80) {
        return;
      }
      bVar13 = *(byte *)(param_2 + 0x1ae) | 7;
    }
    *(byte *)(param_2 + 0x1ae) = bVar13;
  }
  return;
}

