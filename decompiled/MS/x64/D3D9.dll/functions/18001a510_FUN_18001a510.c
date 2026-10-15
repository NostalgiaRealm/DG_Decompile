/*
 * FUN_18001a510 at 18001a510
 * undefined8 __fastcall FUN_18001a510(char * param_1)
 * Address ranges: 18001a510-18001a8b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001a510(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  bVar17 = *(int *)(param_1 + 0x34) == 0;
  uVar15 = *(uint *)(*(longlong *)(param_1 + 0x28) + 4);
  uVar5 = (ulonglong)(uVar15 & 0x1800);
  uVar11 = uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800;
  uVar13 = uVar11 >> 8;
  bVar6 = (byte)(uVar15 >> 0x10);
  uVar9 = (ulonglong)(uVar15 & 0x7ff);
  bVar14 = bVar6 & 0xf;
  if (((*(int *)(param_1 + 0x34) != 0) || (-1 < (int)uVar15)) || (0x80 < *(uint *)(param_1 + 0x20)))
  goto LAB_18001a62a;
  if ((uVar11 < 0x100) || (uVar5 = (ulonglong)(uVar13 - 3), uVar13 - 3 < 4)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
  }
  uVar7 = uVar15 & 0xf0000;
  if ((uVar7 == 0) || ((uVar7 != 0x10000 && (uVar13 == 3)))) {
    bVar8 = 0;
  }
  else {
    bVar8 = 1;
  }
  if (*(short *)(param_1 + 0x30) == 0x13) {
    uVar7 = uVar7 - 0x20000;
    uVar5 = (ulonglong)uVar7;
    if ((uVar7 & 0xfffeffff) == 0) goto LAB_18001a5d6;
    uVar5 = (ulonglong)(uint3)(uVar7 >> 8) << 8;
  }
  else {
LAB_18001a5d6:
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  if ((((bVar18) && ((bVar8 & (byte)uVar5) != 0)) &&
      (uVar5 = (ulonglong)(uVar15 & 0xff00000), (uVar15 & 0xff00000) == 0)) &&
     (uVar5 = *(ulonglong *)(param_1 + 8),
     (uVar15 & 0x7ff) <
     (uint)*(ushort *)(uVar5 + (ulonglong)((uint)(*param_1 == '\0') + uVar13 * 2) * 2))) {
    if (0xff < uVar11) {
      bVar14 = param_1[0x40] & bVar6 & 0xf;
    }
    if (param_1[0x42] != '\0') {
      param_1[0x41] = param_1[0x41] & bVar14;
    }
    bVar17 = true;
  }
LAB_18001a62a:
  uVar15 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      bVar18 = bVar17 == false;
      bVar17 = false;
      if (bVar18) goto LAB_18001a894;
      uVar5 = *(ulonglong *)(param_1 + 0x28);
      bVar18 = false;
      uVar11 = *(uint *)(uVar5 + (ulonglong)(uVar15 + 2) * 4);
      bVar17 = false;
      if ((int)uVar11 < 0) {
        uVar7 = uVar11 >> 0x14 & 0x700 | uVar11 & 0x1800;
        uVar16 = uVar7 >> 8;
        if ((uVar7 < 0x100) || (uVar16 - 1 < 3)) {
          bVar6 = 1;
          if (uVar16 != 2) goto LAB_18001a694;
LAB_18001a69f:
          bVar3 = true;
        }
        else {
          bVar6 = 0;
LAB_18001a694:
          if ((uVar11 >> 0xd & 1) == 0) goto LAB_18001a69f;
          bVar3 = false;
        }
        uVar7 = uVar11 & 0xff0000;
        if ((uVar16 != 3) || (bVar8 = 0, uVar7 == 0)) {
          bVar8 = 1;
        }
        bVar2 = param_1[0x41];
        uVar5 = 0;
        if ((((bool)(bVar8 & bVar6)) && (bVar17 = bVar18, bVar3)) && ((uVar11 & 0xe000000) == 0)) {
          uVar10 = uVar11 & 0x7ff;
          uVar5 = *(ulonglong *)(param_1 + 8);
          if (uVar10 < *(ushort *)(uVar5 + (ulonglong)((uint)(*param_1 == '\0') + uVar16 * 2) * 2))
          {
            bVar8 = -((bVar2 & 4) != 0) & '\x01' << ((byte)(uVar7 >> 0x14) & 3) |
                    -((bVar2 & 2) != 0) & '\x01' << ((byte)(uVar7 >> 0x12) & 3) |
                    -((bVar2 & 1) != 0) & '\x01' << ((byte)(uVar7 >> 0x10) & 3) |
                    -((bVar2 & 8) != 0) & '\x01' << (sbyte)(uVar7 >> 0x16);
            uVar5 = (ulonglong)(*(int *)(param_1 + 0x38) - 1U);
            bVar6 = 0xff;
            if (uVar15 == *(int *)(param_1 + 0x38) - 1U) {
              uVar7 = *(uint *)(param_1 + 0x3c);
              if (uVar7 != 0) goto LAB_18001a7af;
            }
            else {
              uVar7 = 1;
LAB_18001a7af:
              uVar12 = 0;
              do {
                if (uVar16 == 0) {
                  uVar5 = *(ulonglong *)(param_1 + 0x18);
                  bVar6 = bVar6 & *(byte *)((ulonglong)(uVar12 + uVar10) + 0x20 + uVar5);
                }
                else if (uVar16 == 1) {
                  uVar5 = *(ulonglong *)(param_1 + 0x18);
                  bVar6 = bVar6 & 0xf;
                  pbVar1 = (byte *)(uVar5 + 0x10 + (ulonglong)(uVar12 + uVar10));
                  *pbVar1 = *pbVar1 | bVar8;
                }
                else {
                  uVar4 = uVar16 - 2;
                  uVar5 = (ulonglong)uVar4;
                  if (uVar4 == 0) {
                    uVar5 = *(ulonglong *)(param_1 + 0x18);
                    bVar6 = bVar6 & 0xf;
                    pbVar1 = (byte *)(uVar5 + 0x41 + (ulonglong)(uVar12 + uVar10));
                    *pbVar1 = *pbVar1 | bVar8;
                  }
                  else if (uVar4 == 1) {
                    uVar5 = *(ulonglong *)(param_1 + 0x18);
                    bVar6 = bVar6 & *(byte *)((ulonglong)(uVar12 + uVar10) + 0x40 + uVar5);
                  }
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar7);
            }
            if ((bVar6 & bVar8) == bVar8) {
              if ((uVar11 >> 0xd & 1) != 0) {
                uVar5 = *(ulonglong *)(param_1 + 0x18);
                *(undefined1 *)(uVar5 + 0x44e) = 1;
              }
              bVar17 = true;
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x38));
  }
  if (bVar17 != false) {
    if (uVar13 == 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x20 + uVar9);
      *pbVar1 = *pbVar1 | bVar14;
    }
    else if (uVar13 == 3) {
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      pbVar1 = (byte *)(uVar5 + 0x40 + uVar9);
      *pbVar1 = *pbVar1 | bVar14;
    }
    else if (uVar13 == 4) {
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      pbVar1 = (byte *)(uVar5 + 0x441 + uVar9);
      *pbVar1 = *pbVar1 | bVar14;
    }
    else if (uVar13 == 5) {
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      pbVar1 = (byte *)(uVar5 + 0x444 + uVar9);
      *pbVar1 = *pbVar1 | bVar14;
    }
    else if (uVar13 == 6) {
      uVar5 = *(ulonglong *)(param_1 + 0x18);
      pbVar1 = (byte *)(uVar5 + 0x446 + uVar9);
      *pbVar1 = *pbVar1 | bVar14;
    }
  }
LAB_18001a894:
  *(ulonglong *)(param_1 + 0x28) =
       *(longlong *)(param_1 + 0x28) + (ulonglong)(*(int *)(param_1 + 0x38) + 2) * 4;
  return CONCAT71((int7)(uVar5 >> 8),bVar17);
}

