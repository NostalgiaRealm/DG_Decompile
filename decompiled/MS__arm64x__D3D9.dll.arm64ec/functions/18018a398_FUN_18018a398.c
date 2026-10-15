/*
 * FUN_18018a398 at 18018a398
 * undefined FUN_18018a398(void)
 * Address ranges: 18018a398-18018a66f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018a398(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  
  pbVar1 = (byte *)(param_2 + 0x1c1);
  lVar8 = *(longlong *)(param_2 + 0x1b0);
  pbVar2 = (byte *)(param_2 + 0x1c5);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  *(undefined1 *)(param_2 + 0x1c8) = 1;
  uVar7 = 0;
  do {
    uVar5 = (*(uint *)(lVar8 + 0x20) & *(uint *)(lVar8 + 0xc)) >> (ulonglong)(uVar7 * 3 & 0x1f) & 7;
    if (uVar5 == 1) {
LAB_18018a3f0:
      *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 1;
      *(byte *)(param_2 + 0x1c4) = *(byte *)(param_2 + 0x1c4) | 1;
    }
    else if (uVar5 == 2) {
LAB_18018a45c:
      *(byte *)(param_2 + 0x1c3) = *(byte *)(param_2 + 0x1c3) | 1;
    }
    else if (uVar5 == 3) {
      *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 1;
      *(byte *)(param_2 + 0x1c4) = *(byte *)(param_2 + 0x1c4) | 1;
      if ((*(uint *)(lVar8 + 0x44) >> 0x1d & 1) != 0) goto LAB_18018a45c;
    }
    else if (uVar5 == 4) goto LAB_18018a3f0;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 8);
  if ((*(uint *)(lVar8 + 0x44) >> 0x1a & 1) == 0) {
    if ((*(uint *)(param_2 + 0x1ac) >> 1 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1c6) = 8;
      goto LAB_18018a490;
    }
  }
  else if ((*(uint *)(lVar8 + 0x44) >> 0x18 & 3) - 1 < 3) {
    *(byte *)(param_2 + 0x1c3) = *(byte *)(param_2 + 0x1c3) | 2;
LAB_18018a490:
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  else if ((*(uint *)(param_2 + 0x1ac) >> 1 & 1) != 0) {
    *(undefined1 *)(param_2 + 0x1c6) = 8;
  }
  iVar3 = *(int *)(lVar8 + 0x44);
  *(byte *)(param_2 + 0x1c9) = (byte)((uint)iVar3 >> 0x1f);
  if (iVar3 < 0) {
    uVar7 = 0;
    do {
      if ((*(uint *)(lVar8 + 0x28) >> (ulonglong)(uVar7 * 3 & 0x1f) & 7) != 0) {
        if (((int)*(uint *)(lVar8 + 0x28) < 0) && ((*(uint *)(param_2 + 0x1ac) >> 2 & 1) != 0)) {
          *(byte *)(param_2 + 0x1c0) = *(byte *)(param_2 + 0x1c0) | 4;
        }
        else {
          *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 4;
        }
        if (((*(uint *)(lVar8 + 0x24) >> (ulonglong)(uVar7 * 3 & 0x1f) & 7) != 3) ||
           (((*(uint *)(lVar8 + 0x44) ^ 0xffffffff) & 0x20100000) == 0)) {
          *pbVar1 = *pbVar1 | 4;
        }
        *(undefined1 *)(param_2 + 0x1ca) = 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    cVar4 = *(char *)(param_2 + 0x1ca);
    if ((cVar4 != '\0') && ((*(uint *)(lVar8 + 0x44) >> 0x14 & 1) != 0)) {
      *(undefined1 *)(param_2 + 0x1c8) = 0;
    }
    if ((*(uint *)(param_2 + 0x1ac) & 1) != 0) {
      if ((*(uint *)(lVar8 + 0x2c) & 3) == 1) {
        *pbVar2 = 7;
      }
      if ((*(uint *)(lVar8 + 0x2c) & 0xc) == 4) {
        *pbVar2 = *pbVar2 | 7;
      }
      bVar6 = (*(uint *)(lVar8 + 0x2c) & 0x30) == 0x10;
      if (cVar4 == '\0') {
        if (bVar6) {
          bVar9 = *(byte *)(param_2 + 0x1c5) | 8;
          goto LAB_18018a5c0;
        }
      }
      else {
        if (bVar6) {
          *(byte *)(param_2 + 0x1c5) = *pbVar2 | 0xf;
        }
        if ((*(uint *)(lVar8 + 0x2c) & 0xc0) == 0x40) {
          bVar9 = *(byte *)(param_2 + 0x1c5) | 7;
LAB_18018a5c0:
          *(byte *)(param_2 + 0x1c5) = bVar9;
        }
      }
    }
    if ((*(uint *)(param_2 + 0x1ac) >> 1 & 1) == 0) {
      return;
    }
    if ((*(uint *)(lVar8 + 0x2c) & 3) == 2) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 7;
    }
    if ((*(uint *)(lVar8 + 0x2c) & 0xc) == 8) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 7;
    }
    bVar6 = (*(uint *)(lVar8 + 0x2c) & 0x30) != 0x20;
    if (cVar4 == '\0') {
      if (bVar6) {
        return;
      }
      bVar9 = *(byte *)(param_2 + 0x1c6) | 8;
      goto LAB_18018a668;
    }
    if (!bVar6) {
      *(byte *)(param_2 + 0x1c6) = *(byte *)(param_2 + 0x1c6) | 0xf;
    }
    if ((*(uint *)(*(longlong *)(param_2 + 0x1b0) + 0x2c) & 0xc0) != 0x80) {
      return;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x1ac) & 1) != 0) {
      *(undefined1 *)(param_2 + 0x1c5) = 0xf;
    }
    if ((*(uint *)(param_2 + 0x1ac) >> 1 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  bVar9 = *(byte *)(param_2 + 0x1c6) | 7;
LAB_18018a668:
  *(byte *)(param_2 + 0x1c6) = bVar9;
  return;
}

