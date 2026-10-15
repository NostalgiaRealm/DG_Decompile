/*
 * FUN_1800b0b54 at 1800b0b54
 * char __fastcall FUN_1800b0b54(longlong param_1, uint param_2)
 * Address ranges: 1800b0b54-1800b0e81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800b0b54(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  
  lVar9 = 0;
  cVar10 = '\0';
  if ((*(char *)(param_1 + 0xc509) == '\0') && (param_2 == *(uint *)(param_1 + 0xc500))) {
    return *(char *)(param_1 + 0xc504);
  }
  bVar11 = 1;
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar4 = *plVar1;
  cVar12 = '\x01';
  bVar13 = *(byte *)(*(longlong *)(lVar4 + 8) + 0x100) & 1;
  if ((param_2 & 1) != 0) {
    uVar8 = 1;
    do {
      if (3 < (uint)uVar8) break;
      lVar5 = *(longlong *)(param_1 + 0x30 + uVar8 * 8);
      cVar7 = cVar12;
      if (lVar5 != 0) {
        if ((((*(int *)(lVar5 + 0x60) != *(int *)(lVar4 + 0x60)) ||
             (*(int *)(lVar5 + 100) != *(int *)(lVar4 + 100))) ||
            (*(int *)(lVar5 + 0x58) != *(int *)(lVar4 + 0x58))) ||
           (*(int *)(lVar5 + 0x5c) != *(int *)(lVar4 + 0x5c))) {
          cVar7 = cVar10;
        }
        cVar12 = cVar10;
        if (bVar13 != (*(byte *)(*(longlong *)(lVar5 + 8) + 0x100) & 1)) break;
      }
      cVar12 = cVar7;
      uVar8 = (ulonglong)((uint)uVar8 + 1);
    } while (cVar12 != '\0');
  }
  if (param_2 == 3) {
    cVar7 = '\0';
    if (cVar12 == '\0') goto LAB_1800b0e62;
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x60);
      cVar7 = cVar10;
      if ((((uVar2 <= *(uint *)(lVar5 + 0x60)) &&
           (uVar3 = *(uint *)(lVar4 + 100), uVar3 <= *(uint *)(lVar5 + 100))) &&
          ((cVar7 = cVar12, uVar2 < (uint)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58)) ||
           (uVar3 < (uint)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c)))))) &&
         ((uVar2 < 3 && (uVar3 < 3)))) {
        param_2 = 2;
      }
      cVar12 = cVar7;
      cVar7 = cVar10;
      if (bVar13 != (*(byte *)(*(longlong *)(lVar5 + 8) + 0x100) & 1)) goto LAB_1800b0e62;
      goto LAB_1800b0c6f;
    }
  }
  else {
LAB_1800b0c6f:
    cVar7 = '\0';
    if (cVar12 == '\0') goto LAB_1800b0e62;
  }
  if (param_2 == 1) {
    uVar8 = FUN_18001b944(param_1,plVar1,(longlong *)0x0,'\0');
    cVar7 = (char)uVar8;
    do {
      *(undefined8 *)(param_1 + 0xc460 + lVar9 * 8) = *(undefined8 *)(param_1 + 0x30 + lVar9 * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    *(undefined8 *)(param_1 + 0xc480) = 0;
    if (((*(longlong *)(*(longlong *)(param_1 + 0xc460) + 200) == 0) &&
        ((*(longlong *)(param_1 + 0xc468) == 0 ||
         (*(longlong *)(*(longlong *)(param_1 + 0xc468) + 200) == 0)))) &&
       ((*(longlong *)(param_1 + 0xc470) == 0 ||
        (*(longlong *)(*(longlong *)(param_1 + 0xc470) + 200) == 0)))) {
      lVar9 = *(longlong *)(param_1 + 0xc478);
      goto LAB_1800b0e4a;
    }
  }
  else {
    if ((param_2 == 2) &&
       ((((plVar6 = *(longlong **)(param_1 + 0x50),
          *(uint *)(lVar4 + 0x60) < (uint)(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58)) ||
          (*(uint *)(lVar4 + 100) < (uint)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c)))) ||
         ((int)plVar6[0xb] != *(int *)(lVar4 + 0x58))) ||
        (*(int *)((longlong)plVar6 + 0x5c) != *(int *)(lVar4 + 0x5c))))) {
      uVar8 = FUN_18001b944(param_1,plVar1,plVar6,'\x01');
      cVar7 = (char)uVar8;
      *(undefined8 *)(param_1 + 0xc460) = 0;
      *(undefined8 *)(param_1 + 0xc468) = 0;
      *(undefined8 *)(param_1 + 0xc470) = 0;
      *(undefined8 *)(param_1 + 0xc478) = 0;
      lVar9 = *(longlong *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0xc480) = lVar9;
      if ((*(int *)(*(longlong *)(lVar9 + 8) + 0x88) != -1) && (*(longlong *)(lVar9 + 200) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar9 + 200) + 0x3e) = 1;
      }
    }
    else {
      uVar8 = FUN_18001b944(param_1,plVar1,*(longlong **)(param_1 + 0x50),'\0');
      cVar7 = (char)uVar8;
      do {
        *(undefined8 *)(param_1 + 0xc460 + lVar9 * 8) = *(undefined8 *)(param_1 + 0x30 + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 4);
      lVar9 = *(longlong *)(param_1 + 0x50);
      *(longlong *)(param_1 + 0xc480) = lVar9;
      if (((lVar9 != 0) && (*(int *)(*(longlong *)(lVar9 + 8) + 0x88) != -1)) &&
         (*(longlong *)(lVar9 + 200) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar9 + 200) + 0x3e) = 1;
      }
      if (((*(longlong *)(*(longlong *)(param_1 + 0xc460) + 200) != 0) ||
          ((*(longlong *)(param_1 + 0xc468) != 0 &&
           (*(longlong *)(*(longlong *)(param_1 + 0xc468) + 200) != 0)))) ||
         (((*(longlong *)(param_1 + 0xc470) != 0 &&
           (*(longlong *)(*(longlong *)(param_1 + 0xc470) + 200) != 0)) ||
          ((*(longlong *)(param_1 + 0xc478) != 0 &&
           (*(longlong *)(*(longlong *)(param_1 + 0xc478) + 200) != 0)))))) goto LAB_1800b0e5b;
    }
    lVar9 = *(longlong *)(param_1 + 0xc480);
LAB_1800b0e4a:
    if ((lVar9 == 0) || (*(longlong *)(lVar9 + 200) == 0)) {
      bVar11 = 0;
    }
  }
LAB_1800b0e5b:
  *(byte *)(param_1 + 0xd10) = *(byte *)(param_1 + 0xd10) | bVar11;
LAB_1800b0e62:
  *(char *)(param_1 + 0xc504) = cVar7;
  *(uint *)(param_1 + 0xc500) = param_2;
  *(undefined1 *)(param_1 + 0xc509) = 0;
  return cVar7;
}

