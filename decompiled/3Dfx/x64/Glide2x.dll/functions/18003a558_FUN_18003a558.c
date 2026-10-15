/*
 * FUN_18003a558 at 18003a558
 * undefined __fastcall FUN_18003a558(int * param_1, int param_2, ushort param_3, byte param_4, byte param_5, char param_6)
 * Address ranges: 18003a558-18003a9b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003a558(int *param_1,int param_2,ushort param_3,byte param_4,byte param_5,char param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  
  uVar5 = (uint)param_3;
  if (param_2 == 1) {
    lVar4 = 0x17c;
    lVar9 = 0x180;
    lVar12 = 0x184;
    lVar8 = 0x188;
    lVar10 = 0x18c;
    lVar6 = 400;
  }
  else if (param_2 == 2) {
    lVar4 = 0x19c;
    lVar9 = 0x1a0;
    lVar12 = 0x1a4;
    lVar8 = 0x1a8;
    lVar10 = 0x1ac;
    lVar6 = 0x1b0;
  }
  else {
    lVar4 = 0x15c;
    lVar9 = 0x160;
    lVar12 = 0x164;
    lVar8 = 0x168;
    lVar10 = 0x16c;
    lVar6 = 0x170;
  }
  puVar1 = (uint *)(lVar4 + (longlong)param_1);
  if ((((uVar5 & 0xff0) != 0x100) && (((uVar5 & 0xf00) - 0x100 & 0xfffffaff) == 0)) &&
     ((uVar5 & 0xf00) != 0x600)) {
    param_5 = param_5 ^ 1;
  }
  uVar2 = 0xff;
  uVar11 = (ulonglong)(uVar5 & 0xf);
  if ((param_3 >> 0xc & 1) == 0) {
    uVar2 = (uint)param_4;
  }
  uVar5 = uVar5 & 0xf0;
  if ((param_3 & 0xf0) == 0) {
LAB_18003a87c:
    if ((param_3 & 0xf00) == 0x100) {
      fVar13 = 1.0;
    }
    else if ((param_3 & 0xf00) == 0x300) {
      fVar13 = -0.5;
    }
    else {
      fVar13 = 0.0;
    }
    if ((param_3 & 0x2000) != 0) {
      fVar13 = fVar13 * 255.0;
    }
    if (param_6 != '\0') {
      if (param_5 != 0) {
        fVar13 = -fVar13;
      }
      uVar5 = 2;
      if (uVar2 != 0xff) {
        uVar5 = 5;
      }
      *puVar1 = uVar5;
      iVar3 = 0x4001 - (uint)(uVar2 != 0xff);
      if (uVar2 != 0xff) {
        iVar3 = 0x4006;
      }
      *(int *)(lVar9 + (longlong)param_1) = iVar3;
      iVar3 = (int)fVar13;
      *(int *)(lVar6 + (longlong)param_1) = iVar3;
      *(int *)(lVar12 + (longlong)param_1) = iVar3;
      *(int *)(lVar10 + (longlong)param_1) = iVar3;
      *(int *)(lVar8 + (longlong)param_1) = iVar3;
      return;
    }
    if (param_5 != 0) {
      fVar13 = -fVar13;
    }
    *(float *)(lVar12 + (longlong)param_1) = fVar13;
    uVar5 = 2;
    if (uVar2 != 0xff) {
      uVar5 = 5;
    }
    *puVar1 = uVar5;
    iVar3 = 0x4001 - (uint)(uVar2 != 0xff);
    if (uVar2 != 0xff) {
      iVar3 = 0x4006;
    }
    *(int *)(lVar9 + (longlong)param_1) = iVar3;
    *(float *)(lVar6 + (longlong)param_1) = fVar13;
    *(float *)(lVar10 + (longlong)param_1) = fVar13;
    *(float *)(lVar8 + (longlong)param_1) = fVar13;
    return;
  }
  if (uVar5 == 0x10) {
    *puVar1 = 2;
    *(uint *)((longlong)param_1 + lVar9) = uVar2 << 4 | 0x100006;
    *(uint *)(lVar12 + (longlong)param_1) = (uint)*(byte *)(param_1 + uVar11 + 0x23);
    goto LAB_18003a843;
  }
  if ((uVar5 == 0x20) || (uVar5 == 0x30)) {
    uVar7 = uVar11 * 4 + 0x74;
    if (((byte)param_3 & 0xf0) != 0x20) {
      uVar7 = uVar11 * 4 | 0x80;
    }
    uVar5 = *(uint *)(uVar7 + (longlong)param_1);
    if (uVar5 == 0) goto LAB_18003a87c;
    *puVar1 = 2;
    uVar2 = FUN_180054b44(uVar5,0,1,4,0,0);
    *(uint *)(lVar9 + (longlong)param_1) = uVar2;
    uVar5 = uVar5 & 0xff;
  }
  else if (uVar5 == 0x40) {
    uVar5 = 2;
    *puVar1 = 2;
    *(uint *)(lVar9 + (longlong)param_1) = uVar2 << 4 | 0x101006;
  }
  else {
    if (uVar5 == 0x50) {
      param_1[2] = param_1[2] | 1;
      iVar3 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)param_1) = 0;
      if (iVar3 == 0x51) {
        *puVar1 = 4;
        *(uint *)(lVar9 + (longlong)param_1) = uVar2 << 4 | 0x308006;
        *(undefined4 *)(lVar8 + (longlong)param_1) = 0;
        *(undefined4 *)(lVar10 + (longlong)param_1) = 5;
      }
      else {
        *puVar1 = 3;
        *(uint *)(lVar9 + (longlong)param_1) = uVar2 << 4 | 0x208006;
        *(undefined4 *)(lVar8 + (longlong)param_1) = 5;
      }
      goto LAB_18003a843;
    }
    if (uVar5 == 0x80) {
      *puVar1 = 2;
      uVar5 = FUN_180054b44(param_1[uVar11 + 0x26],(byte)uVar2,1,4,0,0);
      *(uint *)(lVar9 + (longlong)param_1) = uVar5;
      uVar5 = (uint)*(byte *)(param_1 + uVar11 + 0x26);
    }
    else {
      if (uVar5 != 0xf0) goto LAB_18003a843;
      *puVar1 = 2;
      uVar5 = FUN_180054b44(param_1[0x2a],(byte)uVar2,1,4,0,0);
      *(uint *)(lVar9 + (longlong)param_1) = uVar5;
      uVar5 = (uint)*(byte *)(param_1 + 0x2a);
    }
  }
  *(uint *)(lVar12 + (longlong)param_1) = uVar5;
LAB_18003a843:
  if (param_5 != 0) {
    for (uVar5 = *puVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar1[uVar5 + 1] = puVar1[uVar5];
    }
    *(uint *)(lVar9 + (longlong)param_1) = *(uint *)(lVar9 + (longlong)param_1) | 0x80000000;
    *puVar1 = *puVar1 + 1;
    *(undefined4 *)(lVar12 + (longlong)param_1) = 0x41;
  }
  return;
}

