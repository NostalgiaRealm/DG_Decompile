/*
 * FUN_100eb6a8 at 100eb6a8
 * undefined FUN_100eb6a8(void)
 * Address ranges: 100eb6a8-100eb953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100eb6a8(int param_1,undefined4 param_2,ulonglong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = (int)param_3 * 8;
  if ((param_3 & 0xffffffff) >> 0x1d != 0) {
    iVar10 = -1;
  }
  iVar10 = FUN_101322b0(iVar10);
  if (iVar10 == 0) {
    bVar6 = false;
  }
  else {
    *(int *)(param_1 + 0x26c) = iVar10;
    FUN_101325a0(iVar10,param_2,(param_3 & 0x1fffffff) << 3);
    *(int *)(param_1 + 0x270) = (int)param_3;
    bVar6 = true;
    if (*(int *)(param_1 + 0x24) != 1) {
      puVar7 = (undefined4 *)FUN_101321c0(0x254);
      bVar6 = puVar7 != (undefined4 *)0x0;
      *(undefined4 **)(param_1 + 0x268) = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0x24) == 1) {
          FUN_101325a0(puVar7,(undefined4 *)(param_1 + 0x14),0x254);
        }
        else {
          FUN_100a2d78();
          puVar1 = (uint *)(param_1 + 0x1c);
          *puVar7 = *(undefined4 *)(param_1 + 0x14);
          puVar7[1] = *(undefined4 *)(param_1 + 0x18);
          puVar7[2] = *puVar1;
          puVar7[4] = 1;
          iVar10 = 0;
          uVar9 = 0;
          if (*puVar1 != 0) {
            do {
              pbVar2 = (byte *)(param_1 + 0x228 + uVar9);
              iVar5 = uVar9 + 0x214;
              uVar9 = uVar9 + 1;
              *(byte *)((int)puVar7 + iVar5) = *pbVar2;
              bVar3 = *pbVar2;
              *(undefined1 *)(puVar7 + 5 + (uint)bVar3 * 2) = 0;
              uVar11 = (uint)bVar3;
              *(undefined1 *)((int)puVar7 + (uint)bVar3 * 8 + 0x15) =
                   *(undefined1 *)(param_1 + 0x29 + uVar11 * 8);
              pbVar2 = (byte *)(param_1 + 0x2a + uVar11 * 8);
              *(byte *)((int)puVar7 + uVar11 * 8 + 0x16) = *pbVar2;
              uVar12 = (uint)bVar3;
              *(char *)((int)puVar7 + uVar11 * 8 + 0x17) = (char)iVar10;
              *(undefined1 *)(puVar7 + 6 + uVar12 * 2) =
                   *(undefined1 *)(param_1 + 0x2c + uVar12 * 8);
              *(undefined1 *)((int)puVar7 + uVar12 * 8 + 0x19) =
                   *(undefined1 *)(param_1 + 0x2d + uVar12 * 8);
              iVar10 = iVar10 + (uint)(*pbVar2 >> 2);
            } while (uVar9 < *puVar1);
          }
          puVar7[3] = iVar10 << 2;
        }
      }
    }
    if (*(char *)(param_1 + 0x27b) == '\0') {
      bVar4 = false;
      uVar9 = 0;
      do {
        if (*(uint *)(param_1 + 0x1c) <= uVar9) break;
        if ((*(char *)(uVar9 + param_1 + 0x228) != '\0') ||
           (bVar4 = true, *(char *)(param_1 + 0x2d) != '\0' && *(char *)(param_1 + 0x2d) != -0x70))
        {
          bVar4 = false;
        }
        uVar9 = uVar9 + 1;
      } while (!bVar4);
      *(bool *)(param_1 + 0x278) = bVar4;
      uVar9 = 0;
      if (*(uint *)(param_1 + 0x1c) != 0) {
        do {
          if (4 < *(byte *)(param_1 + 0x2c + (uint)*(byte *)(param_1 + 0x228 + uVar9) * 8)) {
            uVar8 = 0;
            goto LAB_100eb920;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x1c));
      }
      uVar8 = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x278) = 1;
      uVar8 = 1;
    }
LAB_100eb920:
    *(undefined1 *)(param_1 + 0x279) = uVar8;
  }
  return bVar6;
}

