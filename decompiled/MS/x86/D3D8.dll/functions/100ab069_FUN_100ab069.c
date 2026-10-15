/*
 * FUN_100ab069 at 100ab069
 * undefined __thiscall FUN_100ab069(void * this, int param_1, RECT * param_2, int param_3, char param_4, char param_5)
 * Address ranges: 100ab069-100ab1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100ab069(void *this,int param_1,RECT *param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  int *piVar4;
  undefined1 uVar5;
  BOOL BVar6;
  LPPOINT lpPoints;
  RECT *pRVar7;
  uint uVar8;
  uint uVar9;
  tagRECT *lpRect;
  tagRECT local_20;
  int *local_10;
  int *local_c;
  
  local_10 = FUN_100aaabf(this,param_1);
  if (local_10 == (int *)0x0) {
    return;
  }
  local_c = local_10 + 0xc;
  pRVar7 = param_2 + 2;
  if (*(char *)((int)this + 0x84a) != '\0') {
    pRVar7 = param_2;
  }
  *local_c = pRVar7->left;
  local_10[0xd] = pRVar7->top;
  local_10[0xe] = pRVar7->right;
  local_10[0xf] = pRVar7->bottom;
  iVar1 = *(int *)((int)this + 0x780);
  if ((((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 7)))) {
    BVar6 = EqualRect(param_2 + 1,param_2);
    bVar3 = true;
    if (BVar6 == 0) goto LAB_100ab0de;
  }
  bVar3 = false;
LAB_100ab0de:
  piVar4 = local_10;
  uVar9 = 1 << ((byte)param_3 & 0x1f);
  *(uint *)((int)this + 0x304) = *(uint *)((int)this + 0x304) | uVar9;
  uVar8 = *(uint *)((int)this + 0x300) | uVar9;
  if (param_4 == '\0') {
    uVar8 = *(uint *)((int)this + 0x300) & ~uVar9;
  }
  *(uint *)((int)this + 0x300) = uVar8;
  uVar8 = *(uint *)((int)this + 0x2fc) | uVar9;
  if (param_5 == '\0') {
    uVar8 = ~uVar9 & *(uint *)((int)this + 0x2fc);
  }
  *(uint *)((int)this + 0x2fc) = uVar8;
  lpPoints = (LPPOINT)(param_3 * 0x10 + 0xfc + (int)this);
  lpPoints->x = *local_c;
  lpPoints->y = local_c[1];
  lpPoints[1].x = local_c[2];
  lpPoints[1].y = local_c[3];
  MapWindowPoints((HWND)*local_10,(HWND)0x0,lpPoints,2);
  if ((*(char *)((int)this + 0x787) == '\0') ||
     (pRVar7 = (RECT *)(*(uint *)((int)this + 0x304) & *(uint *)((int)this + 0x300)),
     (*(uint *)((int)this + 0x2fc) & (uint)pRVar7) == 0)) {
    lpRect = (RECT *)0x0;
  }
  else {
    param_2 = pRVar7;
    uVar8 = 0;
    if (pRVar7 != (RECT *)0x0) {
      for (; ((uint)pRVar7 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    if (pRVar7 != (RECT *)0x0) {
      pbVar2 = (byte *)((int)&param_2 + ((int)uVar8 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar8 & 7));
      while( true ) {
        UnionRect(&local_20,&local_20,(RECT *)((int)this + (uVar8 & 0xff) * 0x10 + 0xfc));
        uVar8 = 0;
        if (param_2 != (RECT *)0x0) {
          for (; ((uint)param_2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        if (param_2 == (RECT *)0x0) break;
        pbVar2 = (byte *)((int)&param_2 + ((int)uVar8 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar8 & 7));
      }
    }
    lpRect = &local_20;
  }
  ClipCursor(lpRect);
  if (((param_4 == '\0') || (param_5 == '\0')) || (!bVar3)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)(piVar4 + 0x10) = uVar5;
  return;
}

