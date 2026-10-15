/*
 * FUN_10004090 at 10004090
 * undefined __thiscall FUN_10004090(void * this, int param_1, RECT * param_2, undefined4 param_3, char param_4, char param_5)
 * Address ranges: 10004090-100041e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10004090(void *this,int param_1,RECT *param_2,undefined4 param_3,char param_4,char param_5)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  LPPOINT ptVar4;
  int *piVar5;
  undefined1 uVar6;
  BOOL BVar7;
  RECT *pRVar8;
  uint uVar9;
  bool bVar10;
  tagRECT *lpRect;
  tagRECT local_24;
  LPPOINT local_14;
  int *local_10;
  LONG *local_c;
  
  local_10 = FUN_10003acf(this,param_1);
  if (local_10 == (int *)0x0) {
    return;
  }
  local_c = local_10 + 0xc;
  pRVar8 = param_2 + 2;
  if (*(char *)((int)this + 0x84a) != '\0') {
    pRVar8 = param_2;
  }
  *local_c = pRVar8->left;
  local_10[0xd] = pRVar8->top;
  local_10[0xe] = pRVar8->right;
  local_10[0xf] = pRVar8->bottom;
  iVar1 = *(int *)((int)this + 0x780);
  if ((((iVar1 == 3) || (iVar1 == 8)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 7)))) {
    BVar7 = EqualRect(param_2 + 1,param_2);
    bVar3 = true;
    if (BVar7 == 0) goto LAB_10004105;
  }
  bVar3 = false;
LAB_10004105:
  piVar5 = local_10;
  *(uint *)((int)this + 0x304) = *(uint *)((int)this + 0x304) | 1;
  uVar9 = *(uint *)((int)this + 0x300) | 1;
  if (param_4 == '\0') {
    uVar9 = *(uint *)((int)this + 0x300) & 0xfffffffe;
  }
  *(uint *)((int)this + 0x300) = uVar9;
  uVar9 = *(uint *)((int)this + 0x2fc) | 1;
  if (param_5 == '\0') {
    uVar9 = *(uint *)((int)this + 0x2fc) & 0xfffffffe;
  }
  local_14 = (LPPOINT)((int)this + 0xfc);
  *(uint *)((int)this + 0x2fc) = uVar9;
  local_14->x = *local_c;
  *(LONG *)((int)this + 0x100) = local_c[1];
  *(LONG *)((int)this + 0x104) = local_c[2];
  *(LONG *)((int)this + 0x108) = local_c[3];
  MapWindowPoints((HWND)*local_10,(HWND)0x0,local_14,2);
  ptVar4 = local_14;
  if ((*(char *)((int)this + 0x787) == '\0') ||
     (pRVar8 = (RECT *)(*(uint *)((int)this + 0x304) & *(uint *)((int)this + 0x300)),
     (*(uint *)((int)this + 0x2fc) & (uint)pRVar8) == 0)) {
    lpRect = (RECT *)0x0;
  }
  else {
    param_2 = pRVar8;
    uVar9 = 0;
    bVar10 = pRVar8 != (RECT *)0x0;
    if (bVar10) {
      for (; ((uint)pRVar8 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    while (bVar10) {
      pbVar2 = (byte *)((int)&param_2 + ((int)uVar9 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar9 & 7));
      UnionRect(&local_24,&local_24,(RECT *)(ptVar4 + (uVar9 & 0xff) * 2));
      uVar9 = 0;
      bVar10 = param_2 != (RECT *)0x0;
      if (bVar10) {
        for (; ((uint)param_2 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
    }
    lpRect = &local_24;
  }
  ClipCursor(lpRect);
  if (((param_4 == '\0') || (param_5 == '\0')) || (!bVar3)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(piVar5 + 0x10) = uVar6;
  return;
}

