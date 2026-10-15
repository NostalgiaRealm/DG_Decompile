/*
 * FUN_180030a4c at 180030a4c
 * undefined __fastcall FUN_180030a4c(longlong * param_1, char param_2, char param_3)
 * Address ranges: 180030a4c-180030c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030a4c(longlong *param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  LONG LVar4;
  LONG LVar5;
  LONG LVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  BOOL BVar11;
  longlong lVar12;
  longlong *plVar13;
  RECT *pRVar14;
  undefined1 uVar15;
  uint uVar16;
  LPPOINT lpPoints;
  uint local_res8 [8];
  RECT local_88;
  RECT local_78;
  RECT local_68;
  RECT local_58;
  
  lVar12 = (**(code **)(*param_1 + 0x28))();
  cVar9 = (**(code **)(*param_1 + 0xa0))(param_1,&local_78);
  lVar8 = DAT_180111f20;
  if (cVar9 == '\0') {
    return;
  }
  uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
  plVar13 = FUN_1800f91e4(lVar8,lVar12);
  if (plVar13 != (longlong *)0x0) {
    uVar15 = 1;
    pRVar14 = &local_78;
    if (*(char *)(lVar8 + 0x8e6) == '\0') {
      pRVar14 = &local_58;
    }
    LVar4 = pRVar14->top;
    LVar5 = pRVar14->right;
    LVar6 = pRVar14->bottom;
    *(LONG *)(plVar13 + 9) = pRVar14->left;
    *(LONG *)((longlong)plVar13 + 0x4c) = LVar4;
    *(LONG *)(plVar13 + 10) = LVar5;
    *(LONG *)((longlong)plVar13 + 0x54) = LVar6;
    iVar1 = *(int *)(lVar8 + 0x81c);
    if (((iVar1 - 3U < 3) || (iVar1 == 7 || iVar1 == 8)) &&
       (BVar11 = EqualRect(&local_68,&local_78), BVar11 == 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    uVar16 = 1 << ((byte)uVar10 & 0x1f);
    *(uint *)(lVar8 + 0x36c) = *(uint *)(lVar8 + 0x36c) | uVar16;
    uVar2 = *(uint *)(lVar8 + 0x368) | uVar16;
    if (param_3 == '\0') {
      uVar2 = ~uVar16 & *(uint *)(lVar8 + 0x368);
    }
    *(uint *)(lVar8 + 0x368) = uVar2;
    uVar2 = *(uint *)(lVar8 + 0x364) | uVar16;
    if (param_2 == '\0') {
      uVar2 = ~uVar16 & *(uint *)(lVar8 + 0x364);
    }
    *(uint *)(lVar8 + 0x364) = uVar2;
    LVar4 = *(LONG *)((longlong)plVar13 + 0x4c);
    lVar12 = plVar13[10];
    LVar5 = *(LONG *)((longlong)plVar13 + 0x54);
    lpPoints = (LPPOINT)((ulonglong)uVar10 * 0x10 + 0x164 + lVar8);
    lpPoints->x = (LONG)plVar13[9];
    lpPoints->y = LVar4;
    lpPoints[1].x = (LONG)lVar12;
    lpPoints[1].y = LVar5;
    MapWindowPoints((HWND)*plVar13,(HWND)0x0,lpPoints,2);
    if ((*(char *)(lVar8 + 0x823) == '\0') ||
       (uVar10 = *(uint *)(lVar8 + 0x36c) & *(uint *)(lVar8 + 0x368),
       (*(uint *)(lVar8 + 0x364) & uVar10) == 0)) {
      pRVar14 = (RECT *)0x0;
    }
    else {
      uVar2 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      local_res8[0] = uVar10;
      local_88.left = 0;
      local_88.top = 0;
      local_88.right = 0;
      local_88.bottom = 0;
      if (uVar10 != 0) {
        pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar2 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
        while( true ) {
          UnionRect(&local_88,&local_88,(RECT *)((ulonglong)(uVar2 & 0xff) * 0x10 + lVar8 + 0x164));
          uVar2 = 0;
          if (local_res8[0] != 0) {
            for (; (local_res8[0] >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
            }
          }
          if (local_res8[0] == 0) break;
          pbVar3 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar2 >> 3));
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
        }
      }
      pRVar14 = &local_88;
    }
    ClipCursor(pRVar14);
    if (((param_3 == '\0') || (param_2 == '\0')) || (!bVar7)) {
      uVar15 = 0;
    }
    *(undefined1 *)(plVar13 + 0xb) = uVar15;
    return;
  }
  return;
}

