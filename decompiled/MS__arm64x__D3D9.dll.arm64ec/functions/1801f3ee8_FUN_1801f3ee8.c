/*
 * FUN_1801f3ee8 at 1801f3ee8
 * undefined FUN_1801f3ee8(void)
 * Address ranges: 1801f3ee8-1801f4257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801f3ee8(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar5 = FUN_1801f3da8();
  if ((uVar5 & 1) == 0) {
    return '\0';
  }
  cVar2 = *(char *)(param_1 + 0x50);
  if (cVar2 != '\0') goto LAB_1801f4060;
  cVar3 = **(char **)(param_1 + 0x40);
  if (cVar3 == '\r' || cVar3 == '\n') {
LAB_1801f405c:
    cVar2 = '\x01';
    goto LAB_1801f4060;
  }
  pbVar6 = (byte *)FUN_1801f3740(param_1);
  *(byte **)(param_1 + 0x40) = pbVar6;
  if (cVar3 == '\"') {
    *(undefined4 *)(param_1 + 0x68) = 1;
    bVar9 = 0;
    uVar10 = 0;
    if (pbVar6 != (byte *)0x0) {
      bVar1 = false;
      do {
        if (((0xfff < uVar10) || (bVar9 == 0x22)) || (bVar1)) break;
        bVar9 = *pbVar6;
        bVar1 = bVar9 == 0xd || bVar9 == 10;
        *(byte *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = bVar9;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        if (bVar9 != 0xd && bVar9 != 10) {
          uVar7 = FUN_1801f3740(param_1);
          *(undefined8 *)(param_1 + 0x40) = uVar7;
        }
        pbVar6 = *(byte **)(param_1 + 0x40);
        uVar10 = uVar10 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    if (0xffe < uVar10 - 1 || bVar9 != 0x22) {
      return '\0';
    }
    cVar2 = *(char *)(param_1 + 0x50);
    if (cVar2 != '\0') goto LAB_1801f4060;
    if (pbVar6 == (byte *)0x0) {
      return '\0';
    }
    if (0x3b < *pbVar6) {
      return '\0';
    }
    if ((0x800000100002600U >> ((ulonglong)*pbVar6 & 0x3f) & 1) == 0) {
      return '\0';
    }
LAB_1801f4208:
    cVar2 = '\x01';
  }
  else {
    if (cVar3 == ',') {
      uVar8 = 4;
LAB_1801f4058:
      *(undefined4 *)(param_1 + 0x68) = uVar8;
      goto LAB_1801f405c;
    }
    if (cVar3 == ':') {
      cVar2 = *(char *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x68) = 6;
      if (cVar2 != '\0') goto LAB_1801f4060;
      cVar2 = FUN_1801f3df8(param_1);
      if (cVar2 != 0) {
        uVar10 = (int)cVar2 - 0x3a;
        if ((0x23 < (uVar10 & 0xff)) || ((0xa00000009U >> ((ulonglong)uVar10 & 0x3f) & 1) == 0))
        goto LAB_1801f4208;
        goto LAB_1801f4000;
      }
LAB_1801f4120:
      cVar2 = *(char *)(param_1 + 0x50);
    }
    else {
      if (cVar3 == ';') {
        *(undefined4 *)(param_1 + 0x68) = 3;
        while (pbVar6 != (byte *)0x0) {
          if (*pbVar6 == 0xd || *pbVar6 == 10) goto LAB_1801f4208;
          pbVar6 = (byte *)FUN_1801f3740(param_1);
          *(byte **)(param_1 + 0x40) = pbVar6;
        }
        if (*(char *)(param_1 + 0x50) != '\0') goto LAB_1801f4208;
      }
      else {
        if (cVar3 == '=') {
          uVar8 = 5;
          goto LAB_1801f4058;
        }
        if (cVar3 != '[') {
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(char *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = cVar3;
          cVar2 = *(char *)(param_1 + 0x50);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          if (cVar2 != '\0') goto LAB_1801f4060;
          cVar2 = FUN_1801f3df8(param_1);
          if (cVar2 == 0) goto LAB_1801f4120;
          cVar2 = ((int)cVar2 - 0x5bU & 0xfd) != 0;
          goto LAB_1801f420c;
        }
        *(undefined4 *)(param_1 + 0x68) = 2;
        uVar5 = FUN_1801f3da8(param_1);
        if ((uVar5 & 1) == 0) {
          return '\0';
        }
        if (*(char *)(param_1 + 0x50) != '\0') {
          return '\0';
        }
        cVar3 = FUN_1801f3df8(param_1);
        if (cVar3 == ' ' || cVar3 == '\t') {
          uVar5 = FUN_1801f3da8(param_1);
          if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x50) == '\0')) {
            cVar3 = **(char **)(param_1 + 0x40);
            goto LAB_1801f3fb8;
          }
        }
        else {
LAB_1801f3fb8:
          cVar2 = cVar3 == ']';
        }
        if (cVar2 != '\0') {
          pbVar6 = (byte *)FUN_1801f3740(param_1);
          *(byte **)(param_1 + 0x40) = pbVar6;
          if (*(char *)(param_1 + 0x50) != '\0') goto LAB_1801f4060;
          bVar9 = *pbVar6;
          if (((bVar9 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar9 & 0x3fU) & 1) != 0)) ||
             (bVar9 == 0x5b)) goto LAB_1801f4208;
        }
      }
LAB_1801f4000:
      cVar2 = '\0';
    }
  }
LAB_1801f420c:
  if (cVar2 == '\0') {
    return '\0';
  }
LAB_1801f4060:
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        uVar4 = FUN_1802235f0((longlong)*(char *)(*(longlong *)(param_1 + 0x58) + uVar5));
        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + uVar5) = uVar4;
        uVar10 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0x60));
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 2) && (uVar5 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      uVar4 = FUN_180223608((longlong)*(char *)(*(longlong *)(param_1 + 0x58) + uVar5));
      *(undefined1 *)(*(longlong *)(param_1 + 0x58) + uVar5) = uVar4;
      uVar10 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x60));
  }
  return cVar2;
}

