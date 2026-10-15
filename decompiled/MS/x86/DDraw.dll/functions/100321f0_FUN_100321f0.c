/*
 * FUN_100321f0 at 100321f0
 * int __thiscall FUN_100321f0(void * this, int param_1, undefined4 * param_2, int * param_3, RECT * param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 100321f0-10032500
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_100321f0(void *this,int param_1,undefined4 *param_2,int *param_3,RECT *param_4,uint param_5,
            uint param_6,char param_7)

{
  bool bVar1;
  HRGN pHVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *extraout_EDX;
  undefined4 *puVar10;
  int extraout_EDX_00;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  LONG *pLVar15;
  ushort in_FPUControlWord;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  tagRECT local_34;
  uint local_24;
  int *local_20;
  uint *local_1c;
  int *local_18;
  HRGN local_14;
  int local_10;
  uint local_c;
  
  if (*(char *)((int)this + 8) != '\0') {
    FUN_10033038((int)this);
  }
  if (*(char *)((int)this + 8) != '\0') {
    return -0x7789fe3e;
  }
  iVar5 = *(int *)((int)this + 4);
  piVar12 = (int *)(iVar5 + 0xb0);
  pHVar2 = (HRGN)*piVar12;
  local_18 = piVar12;
  if (pHVar2 == (HRGN)0x0) {
    pHVar2 = CreateRectRgn(0,0,0,0);
    *piVar12 = (int)pHVar2;
  }
  iVar13 = -0x7789fe52;
  BVar3 = RectInRegion(pHVar2,param_4);
  if (BVar3 == 0) {
    if ((param_7 == '\0') || (*(char *)(*(int *)((int)this + 4) + 0x48) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar13 = -0x7fffbffb;
    if ((*(int *)((int)*(void **)((int)this + 4) + 0x50) != 0) &&
       ((bVar1 || (uVar4 = FUN_10006569(*(void **)((int)this + 4)), (char)uVar4 != '\0')))) {
      local_4c = 0;
      local_48 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_20 = (int *)(iVar5 + 0xb4);
      uVar4 = FUN_10032fa6(local_20,&local_4c);
      if ((char)uVar4 != '\0') {
        local_14 = CreateRectRgnIndirect(param_4);
        if (local_14 != (HRGN)0x0) {
          iVar5 = CombineRgn((HRGN)*piVar12,(HRGN)*piVar12,local_14,2);
          pHVar2 = local_14;
          if (iVar5 != 0) {
            local_1c = &local_24;
            local_c = CONCAT22(local_c._2_2_,in_FPUControlWord);
            local_24 = in_FPUControlWord | 0x80000000;
            if ((in_FPUControlWord & 0xf3f) != 0x23f) {
              local_24 = (uint)in_FPUControlWord;
              local_c = in_FPUControlWord & 0xf0ff | 0x23f;
            }
            if (DAT_1006c238 != (int *)0x0) {
              (**(code **)(*DAT_1006c238 + 0x20))
                        (*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
            }
            FUN_10005b31((undefined4 *)(*(int *)((int)this + 4) + 0x4c));
            local_10 = 0;
            iVar13 = FUN_1003277e(this,param_5,param_6,param_3,&local_10,param_7);
            pHVar2 = local_14;
            if (iVar13 < 0) {
              CombineRgn((HRGN)*piVar12,(HRGN)*piVar12,local_14,4);
            }
            else {
              puVar10 = (undefined4 *)((int)this + 0x150);
              puVar14 = param_2;
              for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar14 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar14 = puVar14 + 1;
              }
              if (*param_3 != 0) {
                puVar10 = param_2;
                if (((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) ||
                   (uVar4 = FUN_10031444((int)this + 0x150), puVar10 = extraout_EDX,
                   (char)uVar4 == '\0')) {
                  uVar6 = 8;
                }
                else {
                  uVar6 = 0x80000;
                }
                puVar10[1] = puVar10[1] | uVar6;
                iVar5 = *(int *)((int)this + 4);
                if ((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) {
                  param_2[9] = (uint)*(byte *)(iVar5 + 0x1e) * param_4->left +
                               param_4->top * local_10 + *param_3;
                  iVar11 = local_10;
                }
                else {
                  iVar11 = (int)this + 0x150;
                  uVar7 = FUN_100313c3(iVar11);
                  uVar6 = param_4->left;
                  iVar8 = FUN_1003137a(iVar11);
                  uVar9 = FUN_10031403(iVar11);
                  param_2[9] = (uVar6 / uVar7) * iVar8 + ((uint)param_4->top / uVar9) * local_10 +
                               *param_3;
                  uVar4 = FUN_10031444((int)this + 0x150);
                  iVar11 = extraout_EDX_00;
                  if ((char)uVar4 != '\0') {
                    local_10 = extraout_EDX_00 * (uint)*(ushort *)(iVar5 + 0xe);
                    iVar11 = local_10;
                  }
                }
                param_2[4] = iVar11;
              }
              iVar5 = (local_18[2] + -1) * 0x18;
              *(void **)(iVar5 + *local_20) = this;
              if (param_1 == 0) {
                uVar4 = 0xffffffff;
              }
              else {
                uVar4 = param_2[9];
              }
              *(undefined4 *)(iVar5 + 4 + *local_20) = uVar4;
              pLVar15 = (LONG *)(*local_20 + 8 + iVar5);
              *pLVar15 = param_4->left;
              pLVar15[1] = param_4->top;
              pLVar15[2] = param_4->right;
              pLVar15[3] = param_4->bottom;
              piVar12 = (int *)(*(int *)((int)this + 4) + 0xc0);
              *piVar12 = *piVar12 + 1;
              *(undefined1 *)((int)this + 9) = 1;
              pHVar2 = local_14;
              piVar12 = local_18;
            }
          }
          DeleteObject(pHVar2);
          if (-1 < iVar13) goto LAB_100324d9;
        }
        if (piVar12[2] != 0) {
          piVar12[2] = piVar12[2] + -1;
        }
      }
    }
  }
LAB_100324d9:
  iVar5 = GetRgnBox((HRGN)*piVar12,&local_34);
  if (iVar5 == 1) {
    DeleteObject((HGDIOBJ)*piVar12);
    *piVar12 = 0;
  }
  return iVar13;
}

