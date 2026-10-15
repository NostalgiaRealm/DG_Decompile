/*
 * FUN_1004dbe0 at 1004dbe0
 * undefined FUN_1004dbe0(void)
 * Address ranges: 1004dbe0-1004e0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004dbe0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  byte bVar14;
  uint uVar15;
  
  puVar1 = (uint *)(param_1 + 0x38);
  puVar2 = (undefined4 *)(param_1 + 0x40);
  *puVar1 = 0;
  *puVar2 = 0;
  uVar11 = FUN_1004da08(param_1);
  if ((uVar11 & 1) == 0) {
    return false;
  }
  pcVar3 = (char *)(param_1 + 0x2c);
  cVar9 = *pcVar3;
  if (cVar9 != '\0') goto LAB_1004dff0;
  piVar4 = (int *)(param_1 + 0x24);
  cVar9 = *(char *)*piVar4;
  if (cVar9 == '\r' || cVar9 == '\n') {
LAB_1004debc:
    cVar9 = '\x01';
    goto LAB_1004dff0;
  }
  pcVar5 = (char *)*piVar4 + 1;
  *piVar4 = (int)pcVar5;
  if ((pcVar5 == *(char **)(param_1 + 0x28)) && (uVar11 = FUN_1004d968(param_1), (uVar11 & 1) == 0))
  {
    *piVar4 = 0;
  }
  pbVar12 = (byte *)*piVar4;
  if (cVar9 < ';') {
    if (cVar9 == '\"') {
      *puVar2 = 1;
      uVar15 = 0;
      bVar14 = 0;
      if (pbVar12 != (byte *)0x0) {
        bVar7 = false;
        do {
          if (((0xfff < uVar15) || (bVar14 == 0x22)) || (bVar7)) break;
          bVar14 = *pbVar12;
          *(byte *)(*(int *)(param_1 + 0x34) + *puVar1) = bVar14;
          *puVar1 = *puVar1 + 1;
          if (bVar14 == 0xd || bVar14 == 10) {
            bVar7 = true;
          }
          else {
            if (((*piVar4 != 0) &&
                (iVar6 = *piVar4 + 1, *piVar4 = iVar6, iVar6 == *(int *)(param_1 + 0x28))) &&
               (uVar11 = FUN_1004d968(param_1), (uVar11 & 1) == 0)) {
              *piVar4 = 0;
            }
            bVar7 = false;
          }
          pbVar12 = (byte *)*piVar4;
          uVar15 = uVar15 + 1;
        } while (pbVar12 != (byte *)0x0);
      }
      *puVar1 = *puVar1 - 1;
      if (0xffe < uVar15 - 1 || bVar14 != 0x22) {
        return false;
      }
      cVar9 = *pcVar3;
      if (cVar9 != '\0') goto LAB_1004dff0;
      if (pbVar12 == (byte *)0x0) {
        return false;
      }
      if (0x3b < *pbVar12) {
        return false;
      }
      if ((0x800000100002600U >> ((ulonglong)*pbVar12 & 0x3f) & 1) == 0) {
        return false;
      }
      cVar9 = '\x01';
      goto LAB_1004dfdc;
    }
    if (cVar9 == ',') {
      uVar13 = 4;
      goto LAB_1004deb8;
    }
    if (cVar9 != ':') goto LAB_1004de18;
    cVar9 = *pcVar3;
    *puVar2 = 6;
    if (cVar9 != '\0') goto LAB_1004dff0;
    cVar9 = FUN_1004da98(param_1);
    if (cVar9 == 0) goto LAB_1004deac;
    uVar15 = (int)cVar9 - 0x3a;
    if ((0x23 < (uVar15 & 0xff)) || ((0xa00000009U >> ((ulonglong)uVar15 & 0x3f) & 1) == 0))
    goto LAB_1004ddec;
LAB_1004dd10:
    cVar9 = '\0';
  }
  else if (cVar9 < '<') {
    *puVar2 = 3;
    if (pbVar12 == (byte *)0x0) {
LAB_1004dd08:
      if (*pcVar3 == '\0') goto LAB_1004dd10;
    }
    else {
      bVar7 = false;
      do {
        if (bVar7) goto LAB_1004ddec;
        if (*pbVar12 == 0xd || *pbVar12 == 10) {
          bVar8 = true;
          bVar7 = true;
        }
        else {
          *piVar4 = (int)(pbVar12 + 1);
          if ((pbVar12 + 1 == *(byte **)(param_1 + 0x28)) &&
             (uVar11 = FUN_1004d968(param_1), (uVar11 & 1) == 0)) {
            *piVar4 = 0;
          }
          pbVar12 = (byte *)*piVar4;
          bVar8 = false;
          bVar7 = false;
        }
      } while (pbVar12 != (byte *)0x0);
      if (!bVar8) goto LAB_1004dd08;
    }
LAB_1004ddec:
    cVar9 = '\x01';
  }
  else {
    if (cVar9 == '=') {
      uVar13 = 5;
LAB_1004deb8:
      *puVar2 = uVar13;
      goto LAB_1004debc;
    }
    if (cVar9 == '[') {
      *puVar2 = 2;
      uVar11 = FUN_1004da08(param_1);
      if ((uVar11 & 1) == 0) {
        return false;
      }
      if (*pcVar3 != '\0') {
        return false;
      }
      cVar9 = FUN_1004da98(param_1);
      if (cVar9 == ' ' || cVar9 == '\t') {
        uVar11 = FUN_1004da08(param_1);
        if ((uVar11 & 1) == 0) {
          return false;
        }
        if (*pcVar3 != '\0') {
          return false;
        }
        cVar9 = *(char *)*piVar4;
      }
      cVar9 = cVar9 == ']';
      if (!(bool)cVar9) {
        return (bool)cVar9;
      }
      if (((*piVar4 != 0) &&
          (iVar6 = *piVar4 + 1, *piVar4 = iVar6, iVar6 == *(int *)(param_1 + 0x28))) &&
         (uVar11 = FUN_1004d968(param_1), (uVar11 & 1) == 0)) {
        *piVar4 = 0;
      }
      if (*pcVar3 != '\0') goto LAB_1004dff0;
      bVar14 = *(byte *)*piVar4;
      if (((bVar14 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar14 & 0x3fU) & 1) != 0)) ||
         (cVar9 = '\0', bVar14 == 0x5b)) goto LAB_1004ddec;
    }
    else {
LAB_1004de18:
      *puVar2 = 0;
      *(char *)(*(int *)(param_1 + 0x34) + *puVar1) = cVar9;
      cVar9 = *pcVar3;
      *puVar1 = *puVar1 + 1;
      if (cVar9 != '\0') goto LAB_1004dff0;
      cVar9 = FUN_1004da98(param_1);
      if (cVar9 == 0) {
LAB_1004deac:
        cVar9 = *pcVar3;
      }
      else {
        cVar9 = ((int)cVar9 - 0x5bU & 0xfd) != 0;
      }
    }
  }
LAB_1004dfdc:
  if (cVar9 == '\0') {
    return false;
  }
LAB_1004dff0:
  if (*(int *)(param_1 + 0x68) == 1) {
    uVar15 = 0;
    if (*puVar1 != 0) {
      do {
        uVar10 = FUN_10086670(*(undefined1 *)(*(int *)(param_1 + 0x34) + uVar15));
        *(undefined1 *)(*(int *)(param_1 + 0x34) + uVar15) = uVar10;
        uVar15 = uVar15 + 1;
      } while (uVar15 < *puVar1);
    }
  }
  else if ((*(int *)(param_1 + 0x68) == 2) && (uVar15 = 0, *puVar1 != 0)) {
    do {
      uVar10 = FUN_10086610(*(undefined1 *)(uVar15 + *(int *)(param_1 + 0x34)));
      *(undefined1 *)(uVar15 + *(int *)(param_1 + 0x34)) = uVar10;
      uVar15 = uVar15 + 1;
    } while (uVar15 < *puVar1);
  }
  return cVar9;
}

