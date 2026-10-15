/*
 * FUN_1006a1df at 1006a1df
 * undefined __stdcall FUN_1006a1df(uint * param_1, uint param_2, int param_3, int param_4, char param_5, char param_6)
 * Address ranges: 1006a1df-1006a6f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a1df(uint *param_1,uint param_2,int param_3,int param_4,char param_5,char param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined1 uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint local_28;
  int local_1c;
  byte local_18;
  uint local_14;
  uint local_8;
  
  local_8 = 0;
  if (param_2 != 0) {
    local_28 = 0xb000000;
    local_1c = 0;
    do {
      uVar5 = *param_1;
      iVar7 = 0;
      if (local_8 == 1) {
        iVar7 = param_3;
      }
      uVar8 = iVar7 + (uVar5 & 0x7ff);
      uVar11 = uVar5 >> 0x10;
      uVar13 = uVar5 >> 0xd & 0xffffff01;
      bVar9 = (byte)(uVar5 >> 0x10);
      if (param_5 != '\0') {
        bVar9 = bVar9 >> 6;
        bVar9 = bVar9 | ((bVar9 << 2 | bVar9) << 2 | bVar9) << 2;
        uVar11 = (uint)bVar9;
      }
      local_14 = 0;
      local_18 = 0;
      cVar12 = (char)uVar13;
      if (cVar12 != '\0') {
        param_1 = param_1 + 1;
        uVar14 = (*param_1 >> 0x14 & 0x700 | *param_1 & 0x1800) >> 8;
        if (uVar14 == 3) {
          local_14 = *(uint *)(param_4 + 0x224) | 0x10000000;
          local_18 = (byte)(*param_1 >> 0x10) & 3;
        }
        else if (uVar14 == 0xf) {
          local_18 = 1;
          local_14 = *(uint *)(param_4 + 0x29c + *(int *)(param_4 + 0x2dc) * 4) | 0x10000000;
        }
      }
      param_1 = param_1 + 1;
      uVar14 = uVar5 & 0xf000000;
      if (param_6 != '\0') {
        uVar14 = local_28;
      }
      uVar5 = (uVar5 >> 0x14 & 0x700 | uVar5 & 0x1800) >> 8;
      uVar10 = (undefined1)uVar11;
      if (uVar5 == 0) {
        uVar6 = FUN_10070621(param_4,uVar8);
        *(undefined4 *)(param_4 + 0x3c0 + local_1c) = uVar6;
        *(undefined1 *)(param_4 + 0x3c4 + local_1c) = uVar10;
        *(undefined4 *)(param_4 + 0x3d0 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3dc + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d8 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d4 + local_1c) = 0xffffffff;
      }
      else if (uVar5 == 1) {
        if (cVar12 == '\0') {
          *(undefined4 *)(param_4 + 0x3c0 + local_1c) = *(undefined4 *)(param_4 + 0xec + uVar8 * 4);
          *(undefined1 *)(param_4 + 0x3c4 + local_1c) = uVar10;
          *(undefined4 *)(param_4 + 0x3d0 + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3dc + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3d8 + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3d4 + local_1c) = 0xffffffff;
        }
        else {
          uVar5 = *(uint *)(param_4 + 0x228 + uVar8 * 4);
          *(undefined1 *)(param_4 + 0x3c4 + local_1c) = uVar10;
          *(uint *)(param_4 + 0x3c0 + local_1c) = uVar5 | 0x40000000;
          *(undefined4 *)(param_4 + 0x3d0 + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3dc + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3d8 + local_1c) = 0xffffffff;
          *(undefined4 *)(param_4 + 0x3d4 + local_1c) = 0xffffffff;
          *(uint *)(param_4 + 0x3e0 + local_8 * 0x30) = local_14;
          *(byte *)(param_4 + 0x3e4 + local_8 * 0x30) = local_18;
        }
      }
      else if (uVar5 == 2) {
        if (((*(char *)(param_4 + 200) == '\0') || (cVar12 != '\0')) ||
           (iVar7 = *(int *)(param_4 + 0x10), *(char *)(uVar8 + 0x44f + iVar7) == '\0')) {
          FUN_1005e1dc((undefined4 *)(local_1c + 0x3c0 + param_4),
                       uVar13 << 0x1e | *(uint *)(param_4 + 0x2c8),bVar9,uVar8 * 0x10 + 0x140);
          if (cVar12 != '\0') {
            *(uint *)(param_4 + 0x3e0 + local_8 * 0x30) = local_14;
            *(byte *)(param_4 + 0x3e4 + local_8 * 0x30) = local_18;
          }
        }
        else {
          if ((uVar14 == 0xb000000) || (_param_6 = 0xffffffff, uVar14 == 0xc000000)) {
            _param_6 = 0x7fffffff;
          }
          if ((uVar14 == 0x1000000) || (local_14 = 0, uVar14 == 0xc000000)) {
            local_14 = 0x80000000;
          }
          uVar13 = uVar11 & 0xff;
          iVar15 = uVar8 * 4 + 0x214;
          uVar5 = *(uint *)(iVar7 + ((uVar13 >> 6) + iVar15) * 4);
          uVar8 = *(uint *)(iVar7 + ((uVar13 >> 4 & 3) + iVar15) * 4);
          uVar13 = *(uint *)(iVar7 + ((uVar13 >> 2 & 3) + iVar15) * 4);
          uVar11 = *(uint *)(iVar7 + ((uVar11 & 3) + iVar15) * 4);
          *(undefined4 *)(param_4 + 0x3c0 + local_1c) = 0x410400;
          *(undefined1 *)(param_4 + 0x3c4 + local_1c) = 0xe4;
          *(uint *)(param_4 + 0x3d0 + local_1c) = uVar11 & _param_6 ^ local_14;
          *(uint *)(param_4 + 0x3d4 + local_1c) = uVar13 & _param_6 ^ local_14;
          *(uint *)(param_4 + 0x3d8 + local_1c) = uVar8 & _param_6 ^ local_14;
          uVar14 = 0;
          *(uint *)(param_4 + 0x3dc + local_1c) = uVar5 & _param_6 ^ local_14;
        }
      }
      else if (uVar5 == 7) {
        if ((*(char *)(param_4 + 200) == '\0') ||
           (iVar7 = *(int *)(param_4 + 0x10), *(char *)(uVar8 + 0x48c5 + iVar7) == '\0')) {
          FUN_1005e1dc((undefined4 *)(local_1c + 0x3c0 + param_4),*(undefined4 *)(param_4 + 0x2c8),
                       bVar9,uVar8 * 0x10);
        }
        else {
          uVar5 = uVar11 & 0xff;
          iVar15 = uVar8 * 4;
          uVar6 = *(undefined4 *)(iVar7 + 0x48d8 + ((uVar5 >> 6) + iVar15) * 4);
          uVar2 = *(undefined4 *)(iVar7 + 0x48d8 + ((uVar5 >> 4 & 3) + iVar15) * 4);
          uVar3 = *(undefined4 *)(iVar7 + 0x48d8 + ((uVar5 >> 2 & 3) + iVar15) * 4);
          uVar4 = *(undefined4 *)(iVar7 + 0x48d8 + ((uVar11 & 3) + iVar15) * 4);
          *(undefined4 *)(param_4 + 0x3c0 + local_1c) = 0x410400;
          *(undefined1 *)(param_4 + 0x3c4 + local_1c) = 0xe4;
          *(undefined4 *)(param_4 + 0x3d0 + local_1c) = uVar4;
          *(undefined4 *)(param_4 + 0x3d4 + local_1c) = uVar3;
          *(undefined4 *)(param_4 + 0x3d8 + local_1c) = uVar2;
          *(undefined4 *)(param_4 + 0x3dc + local_1c) = uVar6;
        }
      }
      else if (uVar5 == 10) {
        uVar5 = FUN_100c2df1((uint *)(param_4 + 0x18),uVar8,0,uVar8);
        *(uint *)(param_4 + 0x3c0 + local_1c) = uVar5;
        *(undefined1 *)(param_4 + 0x3c4 + local_1c) = 0;
        *(undefined4 *)(param_4 + 0x3d0 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3dc + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d8 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d4 + local_1c) = 0xffffffff;
      }
      else if (uVar5 == 0x12) {
        *(undefined1 *)(param_4 + 0x3c4 + local_1c) = 0;
        *(uint *)(param_4 + 0x3c0 + local_1c) = uVar8 | 0x20410a00;
        *(undefined4 *)(param_4 + 0x3d0 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3dc + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d8 + local_1c) = 0xffffffff;
        *(undefined4 *)(param_4 + 0x3d4 + local_1c) = 0xffffffff;
      }
      if (uVar14 == 0x1000000) {
        puVar1 = (uint *)(param_4 + 0x3c0 + local_1c);
        *puVar1 = *puVar1 | 0x80000000;
      }
      else if (uVar14 == 0xb000000) {
        puVar1 = (uint *)(param_4 + 0x3c0 + local_1c);
        *puVar1 = *puVar1 | 0x8000000;
      }
      else if (uVar14 == 0xc000000) {
        puVar1 = (uint *)(param_4 + 0x3c0 + local_1c);
        *puVar1 = *puVar1 | 0x88000000;
      }
      local_8 = local_8 + 1;
      local_1c = local_1c + 0x30;
      param_6 = '\0';
    } while (local_8 < param_2);
  }
  return;
}

