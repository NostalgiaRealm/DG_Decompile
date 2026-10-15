/*
 * FUN_18000b578 at 18000b578
 * char __cdecl FUN_18000b578(longlong param_1)
 * Address ranges: 18000b578-18000b8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18000b578(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  bVar3 = FUN_18000b438(param_1);
  if ((bVar3 & 1) == 0) {
    return '\0';
  }
  cVar2 = *(char *)(param_1 + 0x50);
  if (cVar2 != '\0') goto LAB_18000b6f0;
  cVar7 = **(char **)(param_1 + 0x40);
  if (cVar7 == '\r' || cVar7 == '\n') {
LAB_18000b6ec:
    cVar2 = '\x01';
    goto LAB_18000b6f0;
  }
  pbVar5 = (byte *)FUN_18000ae18(param_1);
  *(byte **)(param_1 + 0x40) = pbVar5;
  if (cVar7 == '\"') {
    *(undefined4 *)(param_1 + 0x68) = 1;
    bVar3 = 0;
    uVar10 = 0;
    if (pbVar5 != (byte *)0x0) {
      bVar1 = false;
      do {
        if (((0xfff < uVar10) || (bVar3 == 0x22)) || (bVar1)) break;
        bVar3 = *pbVar5;
        bVar1 = bVar3 == 0xd || bVar3 == 10;
        *(byte *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = bVar3;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        if (bVar3 != 0xd && bVar3 != 10) {
          lVar6 = FUN_18000ae18(param_1);
          *(longlong *)(param_1 + 0x40) = lVar6;
        }
        pbVar5 = *(byte **)(param_1 + 0x40);
        uVar10 = uVar10 + 1;
      } while (pbVar5 != (byte *)0x0);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    if (0xffe < uVar10 - 1 || bVar3 != 0x22) {
      return '\0';
    }
    cVar2 = *(char *)(param_1 + 0x50);
    if (cVar2 != '\0') goto LAB_18000b6f0;
    if (pbVar5 == (byte *)0x0) {
      return '\0';
    }
    if (0x3b < *pbVar5) {
      return '\0';
    }
    if ((0x800000100002600U >> ((ulonglong)*pbVar5 & 0x3f) & 1) == 0) {
      return '\0';
    }
LAB_18000b898:
    cVar2 = '\x01';
  }
  else {
    if (cVar7 == ',') {
      uVar8 = 4;
LAB_18000b6e8:
      *(undefined4 *)(param_1 + 0x68) = uVar8;
      goto LAB_18000b6ec;
    }
    if (cVar7 == ':') {
      cVar2 = *(char *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x68) = 6;
      if (cVar2 != '\0') goto LAB_18000b6f0;
      iVar4 = FUN_18000b488(param_1);
      if ((char)iVar4 != 0) {
        uVar10 = (int)(char)iVar4 - 0x3a;
        if ((0x23 < (uVar10 & 0xff)) || ((0xa00000009U >> ((ulonglong)uVar10 & 0x3f) & 1) == 0))
        goto LAB_18000b898;
        goto LAB_18000b690;
      }
LAB_18000b7b0:
      cVar2 = *(char *)(param_1 + 0x50);
    }
    else {
      if (cVar7 == ';') {
        *(undefined4 *)(param_1 + 0x68) = 3;
        while (pbVar5 != (byte *)0x0) {
          if (*pbVar5 == 0xd || *pbVar5 == 10) goto LAB_18000b898;
          pbVar5 = (byte *)FUN_18000ae18(param_1);
          *(byte **)(param_1 + 0x40) = pbVar5;
        }
        if (*(char *)(param_1 + 0x50) != '\0') goto LAB_18000b898;
      }
      else {
        if (cVar7 == '=') {
          uVar8 = 5;
          goto LAB_18000b6e8;
        }
        if (cVar7 != '[') {
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(char *)(*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60)) = cVar7;
          cVar2 = *(char *)(param_1 + 0x50);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          if (cVar2 != '\0') goto LAB_18000b6f0;
          iVar4 = FUN_18000b488(param_1);
          if ((char)iVar4 == 0) goto LAB_18000b7b0;
          cVar2 = ((int)(char)iVar4 - 0x5bU & 0xfd) != 0;
          goto LAB_18000b89c;
        }
        *(undefined4 *)(param_1 + 0x68) = 2;
        bVar3 = FUN_18000b438(param_1);
        if ((bVar3 & 1) == 0) {
          return '\0';
        }
        if (*(char *)(param_1 + 0x50) != '\0') {
          return '\0';
        }
        iVar4 = FUN_18000b488(param_1);
        cVar7 = (char)iVar4;
        if (cVar7 == ' ' || cVar7 == '\t') {
          bVar3 = FUN_18000b438(param_1);
          if (((bVar3 & 1) != 0) && (*(char *)(param_1 + 0x50) == '\0')) {
            cVar7 = **(char **)(param_1 + 0x40);
            goto LAB_18000b648;
          }
        }
        else {
LAB_18000b648:
          cVar2 = cVar7 == ']';
        }
        if (cVar2 != '\0') {
          pbVar5 = (byte *)FUN_18000ae18(param_1);
          *(byte **)(param_1 + 0x40) = pbVar5;
          if (*(char *)(param_1 + 0x50) != '\0') goto LAB_18000b6f0;
          bVar3 = *pbVar5;
          if (((bVar3 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar3 & 0x3fU) & 1) != 0)) ||
             (bVar3 == 0x5b)) goto LAB_18000b898;
        }
      }
LAB_18000b690:
      cVar2 = '\0';
    }
  }
LAB_18000b89c:
  if (cVar2 == '\0') {
    return '\0';
  }
LAB_18000b6f0:
  if (*(int *)(param_1 + 0xa0) == 1) {
    uVar9 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        iVar4 = FUN_1800615d0((int)*(char *)(*(longlong *)(param_1 + 0x58) + uVar9));
        *(char *)(*(longlong *)(param_1 + 0x58) + uVar9) = (char)iVar4;
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_1 + 0x60));
    }
  }
  else if ((*(int *)(param_1 + 0xa0) == 2) && (uVar9 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      iVar4 = FUN_180061598((int)*(char *)(*(longlong *)(param_1 + 0x58) + uVar9));
      *(char *)(*(longlong *)(param_1 + 0x58) + uVar9) = (char)iVar4;
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x60));
  }
  return cVar2;
}

