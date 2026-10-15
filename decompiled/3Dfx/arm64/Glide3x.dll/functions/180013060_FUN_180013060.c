/*
 * FUN_180013060 at 180013060
 * undefined __cdecl FUN_180013060(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 180013060-18001328b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013060(longlong param_1,byte param_2,byte param_3)

{
  LPPOINT lpPoints;
  uint uVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  RECT *pRVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  tagPOINT tVar13;
  uint local_c0 [2];
  RECT local_b8;
  RECT local_a0;
  RECT RStack_90;
  RECT local_80;
  RECT local_70;
  RECT RStack_60;
  RECT local_50;
  
  plVar5 = *(longlong **)(param_1 + 0x18);
  lVar11 = plVar5[0x14];
  cVar3 = (**(code **)(*plVar5 + 0x70))(plVar5,&local_70);
  if (cVar3 != '\0') {
    lVar10 = *(longlong *)(param_1 + 0x30);
    local_a0.right = local_70.right;
    local_a0.bottom = local_70.bottom;
    local_a0.left = local_70.left;
    local_a0.top = local_70.top;
    RStack_90.right = RStack_60.right;
    RStack_90.bottom = RStack_60.bottom;
    RStack_90.left = RStack_60.left;
    RStack_90.top = RStack_60.top;
    local_80.right = local_50.right;
    local_80.bottom = local_50.bottom;
    local_80.left = local_50.left;
    local_80.top = local_50.top;
    puVar6 = (undefined8 *)FUN_180007a00(lVar10,lVar11);
    if (puVar6 != (undefined8 *)0x0) {
      pRVar7 = &local_a0;
      if (*(char *)(lVar10 + 0x8e6) == '\0') {
        pRVar7 = &local_80;
      }
      uVar12 = *(undefined8 *)pRVar7;
      puVar6[10] = *(undefined8 *)&pRVar7->right;
      puVar6[9] = uVar12;
      if (((*(int *)(lVar10 + 0x81c) - 3U < 3) || (*(int *)(lVar10 + 0x81c) - 7U < 2)) &&
         (BVar4 = EqualRect(&RStack_90,&local_a0), BVar4 == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      lpPoints = (LPPOINT)(lVar10 + 0x164);
      *(uint *)(lVar10 + 0x36c) = *(uint *)(lVar10 + 0x36c) | 1;
      uVar9 = *(uint *)(lVar10 + 0x368) & 0xfffffffe;
      if (param_3 != 0) {
        uVar9 = *(uint *)(lVar10 + 0x368) | 1;
      }
      uVar1 = *(uint *)(lVar10 + 0x364) & 0xfffffffe;
      if (param_2 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x364) | 1;
      }
      *(uint *)(lVar10 + 0x364) = uVar1;
      *(uint *)(lVar10 + 0x368) = uVar9;
      tVar13 = *(tagPOINT *)(puVar6 + 9);
      *(undefined8 *)(lVar10 + 0x16c) = puVar6[10];
      *lpPoints = tVar13;
      MapWindowPoints((HWND)*puVar6,(HWND)0x0,lpPoints,2);
      if ((*(char *)(lVar10 + 0x823) == '\0') ||
         (uVar9 = *(uint *)(lVar10 + 0x36c) & *(uint *)(lVar10 + 0x368),
         (*(uint *)(lVar10 + 0x364) & uVar9) == 0)) {
        pRVar7 = (RECT *)0x0;
      }
      else {
        local_c0[0] = uVar9;
        uVar9 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        lVar11 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        local_b8.left = 0;
        local_b8.top = 0;
        local_b8.right = 0;
        local_b8.bottom = 0;
        uVar9 = (uint)lVar11;
        if ((1 - (uVar9 >> 5) & 0xff) != 0) {
          *(byte *)((longlong)local_c0 + (longlong)((int)uVar9 >> 3)) =
               *(byte *)((longlong)local_c0 + (longlong)((int)uVar9 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
          while( true ) {
            UnionRect(&local_b8,&local_b8,(RECT *)(lpPoints + lVar11 * 2));
            uVar9 = (local_c0[0] & 0xaaaaaaaa) >> 1 | (local_c0[0] & 0x55555555) << 1;
            uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
            lVar11 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
            uVar9 = (uint)lVar11;
            if ((1 - (uVar9 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)local_c0 + (longlong)((int)uVar9 >> 3)) =
                 *(byte *)((longlong)local_c0 + (longlong)((int)uVar9 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
          }
        }
        pRVar7 = &local_b8;
      }
      ClipCursor(pRVar7);
      if ((((param_3 & 1) == 0) || ((param_2 & 1) == 0)) || (!bVar2)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(puVar6 + 0xb) = uVar8;
    }
  }
  return;
}

