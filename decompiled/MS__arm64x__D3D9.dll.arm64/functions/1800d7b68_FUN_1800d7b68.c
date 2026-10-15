/*
 * FUN_1800d7b68 at 1800d7b68
 * undefined FUN_1800d7b68(void)
 * Address ranges: 1800d7b68-1800d7ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d7b68(longlong param_1)

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
  uVar5 = FUN_1800d7a28();
  if ((uVar5 & 1) == 0) {
    return '\0';
  }
  cVar2 = *(char *)(param_1 + 0x50);
  if (cVar2 != '\0') goto LAB_1800d7ce0;
  cVar3 = **(char **)(param_1 + 0x40);
  if (cVar3 == '\r' || cVar3 == '\n') {
LAB_1800d7cdc:
    cVar2 = '\x01';
    goto LAB_1800d7ce0;
  }
  pbVar6 = (byte *)FUN_1800d7418(param_1);
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
          uVar7 = FUN_1800d7418(param_1);
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
    if (cVar2 != '\0') goto LAB_1800d7ce0;
    if (pbVar6 == (byte *)0x0) {
      return '\0';
    }
    if (0x3b < *pbVar6) {
      return '\0';
    }
    if ((0x800000100002600U >> ((ulonglong)*pbVar6 & 0x3f) & 1) == 0) {
      return '\0';
    }
LAB_1800d7e88:
    cVar2 = '\x01';
  }
  else {
    if (cVar3 == ',') {
      uVar8 = 4;
LAB_1800d7cd8:
      *(undefined4 *)(param_1 + 0x68) = uVar8;
      goto LAB_1800d7cdc;
    }
    if (cVar3 == ':') {
      cVar2 = *(char *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x68) = 6;
      if (cVar2 != '\0') goto LAB_1800d7ce0;
      cVar2 = FUN_1800d7a78(param_1);
      if (cVar2 != 0) {
        uVar10 = (int)cVar2 - 0x3a;
        if ((0x23 < (uVar10 & 0xff)) || ((0xa00000009U >> ((ulonglong)uVar10 & 0x3f) & 1) == 0))
        goto LAB_1800d7e88;
        goto LAB_1800d7c80;
      }
LAB_1800d7da0:
      cVar2 = *(char *)(param_1 + 0x50);
    }
    else {
      if (cVar3 == ';') {
        *(undefined4 *)(param_1 + 0x68) = 3;
        while (pbVar6 != (byte *)0x0) {
          if (*pbVar6 == 0xd || *pbVar6 == 10) goto LAB_1800d7e88;
          pbVar6 = (byte *)FUN_1800d7418(param_1);
          *(byte **)(param_1 + 0x40) = pbVar6;
        }
        if (*(char *)(param_1 + 0x50) != '\0') goto LAB_1800d7e88;
      }
      else {
        if (cVar3 == '=') {
          uVar8 = 5;
          goto LAB_1800d7cd8;
        }
        if (cVar3 != '[') {
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(char *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = cVar3;
          cVar2 = *(char *)(param_1 + 0x50);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          if (cVar2 != '\0') goto LAB_1800d7ce0;
          cVar2 = FUN_1800d7a78(param_1);
          if (cVar2 == 0) goto LAB_1800d7da0;
          cVar2 = ((int)cVar2 - 0x5bU & 0xfd) != 0;
          goto LAB_1800d7e8c;
        }
        *(undefined4 *)(param_1 + 0x68) = 2;
        uVar5 = FUN_1800d7a28(param_1);
        if ((uVar5 & 1) == 0) {
          return '\0';
        }
        if (*(char *)(param_1 + 0x50) != '\0') {
          return '\0';
        }
        cVar3 = FUN_1800d7a78(param_1);
        if (cVar3 == ' ' || cVar3 == '\t') {
          uVar5 = FUN_1800d7a28(param_1);
          if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x50) == '\0')) {
            cVar3 = **(char **)(param_1 + 0x40);
            goto LAB_1800d7c38;
          }
        }
        else {
LAB_1800d7c38:
          cVar2 = cVar3 == ']';
        }
        if (cVar2 != '\0') {
          pbVar6 = (byte *)FUN_1800d7418(param_1);
          *(byte **)(param_1 + 0x40) = pbVar6;
          if (*(char *)(param_1 + 0x50) != '\0') goto LAB_1800d7ce0;
          bVar9 = *pbVar6;
          if (((bVar9 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar9 & 0x3fU) & 1) != 0)) ||
             (bVar9 == 0x5b)) goto LAB_1800d7e88;
        }
      }
LAB_1800d7c80:
      cVar2 = '\0';
    }
  }
LAB_1800d7e8c:
  if (cVar2 == '\0') {
    return '\0';
  }
LAB_1800d7ce0:
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        uVar4 = func_0x0001802235f0((longlong)*(char *)(*(longlong *)(param_1 + 0x58) + uVar5));
        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + uVar5) = uVar4;
        uVar10 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0x60));
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 2) && (uVar5 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      uVar4 = func_0x000180223608((longlong)*(char *)(*(longlong *)(param_1 + 0x58) + uVar5));
      *(undefined1 *)(*(longlong *)(param_1 + 0x58) + uVar5) = uVar4;
      uVar10 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x60));
  }
  return cVar2;
}

