/*
 * FUN_1800d0c70 at 1800d0c70
 * char __fastcall FUN_1800d0c70(longlong param_1)
 * Address ranges: 1800d0c70-1800d128b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d0c70(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  char cVar16;
  
  pbVar10 = (byte *)0x0;
  uVar14 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  bVar11 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar5 = FUN_1800d0c20(param_1);
  if ((char)uVar5 == '\0') {
    return '\0';
  }
  cVar16 = *(char *)(param_1 + 0x50);
  if (cVar16 != '\0') goto LAB_1800d121c;
  cVar16 = **(char **)(param_1 + 0x40);
  if ((cVar16 != '\r') && (cVar16 != '\n')) {
    pcVar6 = *(char **)(param_1 + 0x40) + 1;
    *(char **)(param_1 + 0x40) = pcVar6;
    if ((pcVar6 == *(char **)(param_1 + 0x48)) &&
       (uVar7 = FUN_1800d0bc4(param_1), (char)uVar7 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    pbVar12 = *(byte **)(param_1 + 0x40);
    bVar3 = 0;
    if (cVar16 == '\"') {
      *(undefined4 *)(param_1 + 0x68) = 1;
      if (pbVar12 != (byte *)0x0) {
        bVar1 = false;
        bVar3 = 0;
        do {
          uVar14 = (uint)pbVar10;
          if (((0xfff < uVar14) || (bVar3 == 0x22)) || (bVar1)) break;
          bVar3 = *pbVar12;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar3;
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          if ((bVar3 == 0xd) || (bVar3 == 10)) {
            bVar1 = true;
          }
          else if (((*(longlong *)(param_1 + 0x40) != 0) &&
                   (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8
                   , lVar8 == *(longlong *)(param_1 + 0x48))) &&
                  (uVar7 = FUN_1800d0bc4(param_1), (char)uVar7 == '\0')) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          pbVar12 = *(byte **)(param_1 + 0x40);
          uVar14 = uVar14 + 1;
          pbVar10 = (byte *)(ulonglong)uVar14;
        } while (pbVar12 != (byte *)0x0);
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if (0xffe < uVar14 - 1) {
        return '\0';
      }
      if (bVar3 != 0x22) {
        return '\0';
      }
      cVar16 = *(char *)(param_1 + 0x50);
      if (cVar16 != '\0') goto LAB_1800d121c;
      if (pbVar12 == (byte *)0x0) {
        return '\0';
      }
      if (0x3b < *pbVar12) {
        return '\0';
      }
      if ((0x800000100002600U >> ((longlong)(char)*pbVar12 & 0x3fU) & 1) == 0) {
        return '\0';
      }
    }
    else if (cVar16 == ',') {
      *(undefined4 *)(param_1 + 0x68) = 4;
    }
    else {
      if (cVar16 == ':') {
        cVar16 = *(char *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x68) = 6;
        if (cVar16 != '\0') goto LAB_1800d121c;
        uVar7 = 0;
        bVar11 = bVar3;
        bVar13 = bVar3;
        while (pbVar12 != (byte *)0x0) {
          bVar11 = (byte)uVar7;
          if ((0xffe < (uint)pbVar10) || (bVar13 != 0)) break;
          bVar11 = *pbVar12;
          uVar7 = (ulonglong)(char)bVar11;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar11;
          if ((0x31 < (byte)((int)(char)bVar11 - 0x2cU)) ||
             (bVar13 = 1,
             (0x280000002c001U >> ((ulonglong)((int)(char)bVar11 - 0x2cU) & 0x3f) & 1) == 0)) {
            bVar13 = bVar3;
          }
          if ((0x20 < bVar11) || (bVar2 = 1, (0x100002600U >> (uVar7 & 0x3f) & 1) == 0)) {
            bVar2 = 0;
          }
          bVar13 = bVar13 | bVar2;
          if (bVar13 == 0) {
            if (((*(longlong *)(param_1 + 0x40) != 0) &&
                (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                lVar8 == *(longlong *)(param_1 + 0x48))) &&
               (uVar9 = FUN_1800d0bc4(param_1), (char)uVar9 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
          pbVar10 = (byte *)(ulonglong)((uint)pbVar10 + 1);
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        bVar11 = -(bVar13 != 0) & bVar11;
        if (bVar11 != 0) {
          bVar11 = bVar11 - 0x3a;
          if ((bVar11 < 0x24) && ((0xa00000009U >> ((ulonglong)bVar11 & 0x3f) & 1) != 0)) {
            return '\0';
          }
          goto LAB_1800d1219;
        }
LAB_1800d1129:
        cVar16 = *(char *)(param_1 + 0x50);
LAB_1800d112d:
        if (cVar16 == '\0') {
          return '\0';
        }
        goto LAB_1800d121c;
      }
      if (cVar16 == ';') {
        *(undefined4 *)(param_1 + 0x68) = 3;
        if (pbVar12 != (byte *)0x0) {
          bVar1 = false;
          do {
            if (bVar1) goto LAB_1800d1219;
            if ((*pbVar12 == 0xd) || (*pbVar12 == 10)) {
              bVar11 = 1;
              bVar1 = true;
            }
            else {
              *(byte **)(param_1 + 0x40) = pbVar12 + 1;
              bVar11 = bVar3;
              if (pbVar12 + 1 == *(byte **)(param_1 + 0x48)) {
                uVar7 = FUN_1800d0bc4(param_1);
                bVar1 = false;
                if ((char)uVar7 == '\0') {
                  *(undefined8 *)(param_1 + 0x40) = 0;
                }
              }
              else {
                bVar1 = false;
              }
            }
            pbVar12 = *(byte **)(param_1 + 0x40);
          } while (pbVar12 != (byte *)0x0);
          if (bVar11 != 0) goto LAB_1800d1219;
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          return '\0';
        }
      }
      else if (cVar16 == '=') {
        *(undefined4 *)(param_1 + 0x68) = 5;
      }
      else if (cVar16 == '[') {
        *(undefined4 *)(param_1 + 0x68) = 2;
        while (pbVar12 != (byte *)0x0) {
          if ((*pbVar12 != 0x20) && (*pbVar12 != 9)) goto LAB_1800d0e40;
          *(byte **)(param_1 + 0x40) = pbVar12 + 1;
          if ((pbVar12 + 1 == *(byte **)(param_1 + 0x48)) &&
             (uVar7 = FUN_1800d0bc4(param_1), (char)uVar7 == '\0')) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          return '\0';
        }
LAB_1800d0e40:
        if (*(char *)(param_1 + 0x50) != '\0') {
          return '\0';
        }
        if (pbVar12 == (byte *)0x0) {
LAB_1800d0f71:
          if (bVar11 != 0x5d) {
            return '\0';
          }
          cVar16 = true;
        }
        else {
          uVar7 = 0;
          bVar1 = false;
          pbVar15 = pbVar10;
          do {
            pbVar10 = pbVar12;
            bVar11 = (byte)uVar7;
            if ((0xffe < (uint)pbVar15) || (bVar1)) break;
            bVar11 = *pbVar10;
            uVar7 = (ulonglong)(char)bVar11;
            *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar11
            ;
            if (((byte)((int)(char)bVar11 - 0x2cU) < 0x32) &&
               ((0x280000002c001U >> ((ulonglong)((int)(char)bVar11 - 0x2cU) & 0x3f) & 1) != 0)) {
              bVar3 = 1;
            }
            else {
              bVar3 = 0;
            }
            if ((bVar11 < 0x21) && ((0x100002600U >> (uVar7 & 0x3f) & 1) != 0)) {
              bVar13 = 1;
            }
            else {
              bVar13 = 0;
            }
            bVar1 = (bool)(bVar3 | bVar13);
            if (!bVar1) {
              if (((*(longlong *)(param_1 + 0x40) != 0) &&
                  (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                  lVar8 == *(longlong *)(param_1 + 0x48))) &&
                 (uVar9 = FUN_1800d0bc4(param_1), (char)uVar9 == '\0')) {
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
            }
            pbVar10 = *(byte **)(param_1 + 0x40);
            pbVar15 = (byte *)(ulonglong)((uint)pbVar15 + 1);
            pbVar12 = pbVar10;
          } while (pbVar10 != (byte *)0x0);
          bVar11 = -bVar1 & bVar11;
          if ((bVar11 != 0x20) && (bVar11 != 9)) goto LAB_1800d0f71;
          pbVar12 = pbVar10;
          pbVar10 = (byte *)0x0;
          while (pbVar12 != (byte *)0x0) {
            if ((*pbVar12 != 0x20) && (pbVar10 = pbVar12, *pbVar12 != 9)) goto LAB_1800d0f4d;
            *(byte **)(param_1 + 0x40) = pbVar12 + 1;
            if ((pbVar12 + 1 == *(byte **)(param_1 + 0x48)) &&
               (uVar7 = FUN_1800d0bc4(param_1), (char)uVar7 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            pbVar12 = *(byte **)(param_1 + 0x40);
            pbVar10 = pbVar12;
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            return '\0';
          }
LAB_1800d0f4d:
          if (*(char *)(param_1 + 0x50) != '\0') {
            return '\0';
          }
          cVar16 = *pbVar10 == 0x5d;
          if (!(bool)cVar16) {
            return (bool)cVar16;
          }
        }
        if (((pbVar10 != (byte *)0x0) &&
            (*(byte **)(param_1 + 0x40) = pbVar10 + 1, pbVar10 + 1 == *(byte **)(param_1 + 0x48)))
           && (uVar7 = FUN_1800d0bc4(param_1), (char)uVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        if (*(char *)(param_1 + 0x50) != '\0') goto LAB_1800d112d;
        bVar11 = **(byte **)(param_1 + 0x40);
        if (((0x20 < bVar11) || ((0x100002600U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) &&
           (bVar11 != 0x5b)) {
          return '\0';
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(char *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = cVar16;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        cVar16 = *(char *)(param_1 + 0x50);
        if (cVar16 != '\0') goto LAB_1800d121c;
        uVar7 = 0;
        pbVar12 = *(byte **)(param_1 + 0x40);
        bVar3 = bVar11;
        bVar13 = bVar11;
        while (pbVar12 != (byte *)0x0) {
          bVar3 = (byte)uVar7;
          if ((0xffe < (uint)pbVar10) || (bVar13 != 0)) break;
          bVar3 = *pbVar12;
          uVar7 = (ulonglong)(char)bVar3;
          *(byte *)((ulonglong)*(uint *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x58)) = bVar3;
          if ((0x31 < (byte)((int)(char)bVar3 - 0x2cU)) ||
             (bVar13 = 1,
             (0x280000002c001U >> ((ulonglong)((int)(char)bVar3 - 0x2cU) & 0x3f) & 1) == 0)) {
            bVar13 = bVar11;
          }
          if ((0x20 < bVar3) || (bVar2 = 1, (0x100002600U >> (uVar7 & 0x3f) & 1) == 0)) {
            bVar2 = 0;
          }
          bVar13 = bVar13 | bVar2;
          if (bVar13 == 0) {
            if (((*(longlong *)(param_1 + 0x40) != 0) &&
                (lVar8 = *(longlong *)(param_1 + 0x40) + 1, *(longlong *)(param_1 + 0x40) = lVar8,
                lVar8 == *(longlong *)(param_1 + 0x48))) &&
               (uVar9 = FUN_1800d0bc4(param_1), (char)uVar9 == '\0')) {
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
          pbVar10 = (byte *)(ulonglong)((uint)pbVar10 + 1);
          pbVar12 = *(byte **)(param_1 + 0x40);
        }
        bVar3 = -(bVar13 != 0) & bVar3;
        if (bVar3 == 0) goto LAB_1800d1129;
        if ((bVar3 + 0xa5 & 0xfd) == 0) {
          return '\0';
        }
      }
    }
  }
LAB_1800d1219:
  cVar16 = '\x01';
LAB_1800d121c:
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        iVar4 = FUN_1800fccc0((int)*(char *)(uVar7 + *(longlong *)(param_1 + 0x58)));
        uVar14 = (int)uVar7 + 1;
        *(char *)(uVar7 + *(longlong *)(param_1 + 0x58)) = (char)iVar4;
        uVar7 = (ulonglong)uVar14;
      } while (uVar14 < *(uint *)(param_1 + 0x60));
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 2) && (uVar7 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      iVar4 = FUN_1800fcca0((int)*(char *)(uVar7 + *(longlong *)(param_1 + 0x58)));
      uVar14 = (int)uVar7 + 1;
      *(char *)(uVar7 + *(longlong *)(param_1 + 0x58)) = (char)iVar4;
      uVar7 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)(param_1 + 0x60));
  }
  return cVar16;
}

