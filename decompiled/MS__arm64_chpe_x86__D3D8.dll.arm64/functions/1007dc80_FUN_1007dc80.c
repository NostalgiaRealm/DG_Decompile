/*
 * FUN_1007dc80 at 1007dc80
 * undefined FUN_1007dc80(void)
 * Address ranges: 1007dc80-1007e047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007dc80(undefined8 param_1,int param_2)

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
  char cVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  byte bVar14;
  
  iVar9 = *(int *)(param_2 + 0x19c);
  pbVar1 = (byte *)(param_2 + 0x1a5);
  pbVar2 = (byte *)(param_2 + 0x1a9);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  puVar3 = (undefined1 *)(param_2 + 0x1ac);
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  *puVar3 = 1;
  pbVar4 = (byte *)(param_2 + 0x1a6);
  pbVar5 = (byte *)(param_2 + 0x1a7);
  pbVar6 = (byte *)(param_2 + 0x1a8);
  uVar13 = 0;
  do {
    uVar11 = (*(uint *)(iVar9 + 0xc) & *(uint *)(iVar9 + 0x20)) >> (ulonglong)(uVar13 * 3 & 0x1f) &
             7;
    if (uVar11 == 1) {
      *pbVar4 = *pbVar4 | 1;
      *pbVar6 = *pbVar6 | 1;
    }
    else if (uVar11 == 2) {
LAB_1007dd20:
      *pbVar5 = *pbVar5 | 1;
    }
    else if (uVar11 == 3) {
      *pbVar4 = *pbVar4 | 1;
      *pbVar6 = *pbVar6 | 1;
      if ((*(uint *)(iVar9 + 0x44) >> 0x1d & 1) != 0) goto LAB_1007dd20;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 8);
  puVar7 = (uint *)(iVar9 + 0x44);
  puVar8 = (uint *)(param_2 + 0x198);
  if ((*puVar7 >> 0x1a & 1) == 0) {
    if ((*puVar8 >> 1 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1aa) = 8;
      goto LAB_1007ddb0;
    }
  }
  else if ((*puVar7 >> 0x18 & 3) - 1 < 3) {
    *pbVar5 = *pbVar5 | 2;
LAB_1007ddb0:
    *puVar3 = 0;
  }
  else if ((*puVar8 >> 1 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x1aa) = 8;
  }
  uVar13 = *puVar7;
  *(byte *)(param_2 + 0x1ad) = (byte)(uVar13 >> 0x1f);
  if (-1 < (int)uVar13) {
    if ((*puVar8 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1a9) = 0xf;
    }
    if ((*puVar8 >> 1 & 1) == 0) {
      return;
    }
    *(byte *)(param_2 + 0x1aa) = *(byte *)(param_2 + 0x1aa) | 7;
    *(undefined1 *)(param_2 + 0x1ac) = 0;
    return;
  }
  uVar13 = 0;
  do {
    if ((*(uint *)(iVar9 + 0x28) >> (ulonglong)(uVar13 * 3 & 0x1f) & 7) != 0) {
      if (((int)*(uint *)(iVar9 + 0x28) < 0) && ((*puVar8 >> 2 & 1) != 0)) {
        *(byte *)(param_2 + 0x1a4) = *(byte *)(param_2 + 0x1a4) | 4;
      }
      else {
        *pbVar4 = *pbVar4 | 4;
      }
      if (((*(uint *)(iVar9 + 0x24) >> (ulonglong)(uVar13 * 3 & 0x1f) & 7) != 3) ||
         (((*puVar7 >> 0x14 & 1) != 0 && ((*puVar7 >> 0x1d & 1) != 0)))) {
        *pbVar1 = *pbVar1 | 4;
      }
      *(undefined1 *)(param_2 + 0x1ae) = 1;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 8);
  cVar10 = *(char *)(param_2 + 0x1ae);
  if ((cVar10 != '\0') && ((*puVar7 >> 0x14 & 1) != 0)) {
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
    bVar12 = (*puVar7 & 0x30) == 0x10;
    if (cVar10 == '\0') {
      if (!bVar12) goto LAB_1007df30;
      bVar14 = *(byte *)(param_2 + 0x1a9) | 8;
    }
    else {
      if (bVar12) {
        *pbVar2 = *pbVar2 | 0xf;
      }
      if ((*puVar7 & 0xc0) != 0x40) goto LAB_1007df30;
      bVar14 = *pbVar2 | 7;
    }
    *(byte *)(param_2 + 0x1a9) = bVar14;
  }
LAB_1007df30:
  if ((*puVar8 >> 1 & 1) != 0) {
    puVar7 = (uint *)(iVar9 + 0x2c);
    if ((*puVar7 & 3) == 2) {
      *(byte *)(param_2 + 0x1aa) = *(byte *)(param_2 + 0x1aa) | 7;
    }
    if ((*puVar7 & 0xc) == 8) {
      *(byte *)(param_2 + 0x1aa) = *(byte *)(param_2 + 0x1aa) | 7;
    }
    if (cVar10 == '\0') {
      if ((*(uint *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0x30) != 0x20) {
        return;
      }
      bVar14 = *(byte *)(param_2 + 0x1aa) | 8;
    }
    else {
      if ((*puVar7 & 0x30) == 0x20) {
        *(byte *)(param_2 + 0x1aa) = *(byte *)(param_2 + 0x1aa) | 0xf;
      }
      if ((*(uint *)(*(int *)(param_2 + 0x19c) + 0x2c) & 0xc0) != 0x80) {
        return;
      }
      bVar14 = *(byte *)(param_2 + 0x1aa) | 7;
    }
    *(byte *)(param_2 + 0x1aa) = bVar14;
  }
  return;
}

