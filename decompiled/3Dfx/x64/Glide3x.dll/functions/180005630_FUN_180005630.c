/*
 * FUN_180005630 at 180005630
 * undefined __fastcall FUN_180005630(longlong param_1, longlong param_2, RECT * param_3, uint param_4, char param_5, char param_6)
 * Address ranges: 180005630-1800057ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005630(longlong param_1,longlong param_2,RECT *param_3,uint param_4,char param_5,
                  char param_6)

{
  LPPOINT lpPoints;
  uint uVar1;
  byte *pbVar2;
  LONG LVar3;
  LONG LVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  BOOL BVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  RECT *pRVar13;
  undefined1 uVar14;
  uint local_res20 [2];
  RECT local_28;
  
  lVar12 = param_1;
  local_res20[0] = param_4;
  plVar11 = FUN_180004efc(param_1,param_2);
  if (plVar11 != (longlong *)0x0) {
    uVar14 = 1;
    pRVar13 = param_3 + 2;
    if (*(char *)(lVar12 + 0x8e6) != '\0') {
      pRVar13 = param_3;
    }
    LVar3 = pRVar13->top;
    LVar4 = pRVar13->right;
    LVar5 = pRVar13->bottom;
    *(LONG *)(plVar11 + 9) = pRVar13->left;
    *(LONG *)((longlong)plVar11 + 0x4c) = LVar3;
    *(LONG *)(plVar11 + 10) = LVar4;
    *(LONG *)((longlong)plVar11 + 0x54) = LVar5;
    if (((*(int *)(lVar12 + 0x81c) - 3U < 3) || (*(int *)(lVar12 + 0x81c) - 7U < 2)) &&
       (BVar9 = EqualRect(param_3 + 1,param_3), BVar9 == 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    lpPoints = (LPPOINT)(param_1 + 0x164);
    *(uint *)(param_1 + 0x36c) = *(uint *)(param_1 + 0x36c) | 1;
    uVar10 = *(uint *)(param_1 + 0x368) | 1;
    if (param_5 == '\0') {
      uVar10 = *(uint *)(param_1 + 0x368) & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x368) = uVar10;
    uVar10 = *(uint *)(param_1 + 0x364) | 1;
    if (param_6 == '\0') {
      uVar10 = *(uint *)(param_1 + 0x364) & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x364) = uVar10;
    uVar6 = *(undefined4 *)((longlong)plVar11 + 0x4c);
    lVar12 = plVar11[10];
    uVar7 = *(undefined4 *)((longlong)plVar11 + 0x54);
    lpPoints->x = (LONG)plVar11[9];
    *(undefined4 *)(param_1 + 0x168) = uVar6;
    *(int *)(param_1 + 0x16c) = (int)lVar12;
    *(undefined4 *)(param_1 + 0x170) = uVar7;
    MapWindowPoints((HWND)*plVar11,(HWND)0x0,lpPoints,2);
    if ((*(char *)(param_1 + 0x823) == '\0') ||
       (uVar10 = *(uint *)(param_1 + 0x36c) & *(uint *)(param_1 + 0x368),
       (*(uint *)(param_1 + 0x364) & uVar10) == 0)) {
      pRVar13 = (RECT *)0x0;
    }
    else {
      uVar1 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      local_res20[0] = uVar10;
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      if (uVar10 != 0) {
        pbVar2 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar1 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
        while( true ) {
          UnionRect(&local_28,&local_28,(RECT *)(lpPoints + (ulonglong)(uVar1 & 0xff) * 2));
          uVar1 = 0;
          if (local_res20[0] != 0) {
            for (; (local_res20[0] >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
            }
          }
          if (local_res20[0] == 0) break;
          pbVar2 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar1 >> 3));
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
        }
      }
      pRVar13 = &local_28;
    }
    ClipCursor(pRVar13);
    if (((param_5 == '\0') || (param_6 == '\0')) || (!bVar8)) {
      uVar14 = 0;
    }
    *(undefined1 *)(plVar11 + 0xb) = uVar14;
    return;
  }
  return;
}

