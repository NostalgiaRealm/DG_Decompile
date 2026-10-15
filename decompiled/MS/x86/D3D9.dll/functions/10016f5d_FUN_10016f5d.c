/*
 * FUN_10016f5d at 10016f5d
 * undefined4 __fastcall FUN_10016f5d(char * param_1)
 * Address ranges: 10016f5d-100170f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10016f5d(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  bVar9 = true;
  uVar7 = (uint)*(ushort *)(param_1 + 0x18);
  if (uVar7 != 0) {
    if (uVar7 == 0x1f) {
      uVar7 = *(uint *)(param_1 + 0x14);
      uVar6 = *(uint *)(uVar7 + 4);
      uVar8 = *(uint *)(uVar7 + 8);
      if ((((*(int *)(param_1 + 0x1c) == 0) && ((int)uVar8 < 0)) &&
          (uVar7 = uVar8 & 0x70000000, uVar7 == 0x10000000)) &&
         (((uVar8 & 0xfff0000) == 0xf0000 &&
          (uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 4 + (uint)(*param_1 == '\0') * 2),
          (uVar8 & 0x7ff) < uVar7)))) {
        uVar7 = uVar6 & 0xfff0fff0;
        if (uVar7 != 0x80000000) goto LAB_100170ed;
        uVar7 = CONCAT31(0x800000,(char)uVar6) & 0xffffff0f;
        if (0xd < (byte)uVar7) goto LAB_100170ed;
        *(byte *)((uVar8 & 0x7ff) + *(int *)(param_1 + 0xc)) =
             (byte)(uVar6 >> 0x10) & 0xf ^ (char)uVar6 << 4;
        uVar7 = *(uint *)(param_1 + 8) | 1 << (uVar8 & 0x1f);
        *(uint *)(param_1 + 8) = uVar7;
      }
      else {
LAB_100170ed:
        bVar9 = false;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0xc;
      goto LAB_10016f95;
    }
    if (uVar7 == 0x51) {
      iVar5 = *(int *)(param_1 + 0x14);
      uVar6 = *(uint *)(iVar5 + 4);
      uVar8 = uVar6 & 0x7ff;
      uVar7 = 0;
      if (((*(int *)(param_1 + 0x1c) == 0) && ((int)uVar6 < 0)) &&
         ((uVar7 = uVar6 & 0x70000000, uVar7 == 0x20000000 &&
          (((uVar6 & 0xfff0000) == 0xf0000 &&
           (uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 8 + (uint)(*param_1 == '\0') * 2),
           uVar8 < uVar7)))))) {
        uVar1 = *(undefined4 *)(iVar5 + 8);
        uVar2 = *(undefined4 *)(iVar5 + 0xc);
        uVar3 = *(undefined4 *)(iVar5 + 0x10);
        uVar4 = *(undefined4 *)(iVar5 + 0x14);
        *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x44f + uVar8) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + (uVar8 + 0x85) * 0x10) = uVar1;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x854 + uVar8 * 0x10) = uVar2;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x858 + uVar8 * 0x10) = uVar3;
        uVar7 = *(uint *)(param_1 + 0xc);
        *(undefined4 *)(uVar7 + 0x85c + uVar8 * 0x10) = uVar4;
      }
      else {
        bVar9 = false;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
      goto LAB_10016f95;
    }
    if (uVar7 == 0xfffe) {
      uVar7 = *(int *)(param_1 + 0x14) + (*(uint *)(param_1 + 0x1c) >> 0x10) * 4 + 4;
      *(uint *)(param_1 + 0x14) = uVar7;
      goto LAB_10016f95;
    }
    uVar7 = uVar7 - 0xffff;
    if (uVar7 != 0) goto LAB_10016f95;
    bVar9 = *(int *)(param_1 + 0x1c) == 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
LAB_10016f95:
  return CONCAT31((int3)(uVar7 >> 8),bVar9);
}

