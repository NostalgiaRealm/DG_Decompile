/*
 * FUN_10032501 at 10032501
 * int __thiscall FUN_10032501(void * this, RECT * param_1)
 * Address ranges: 10032501-1003277d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10032501(void *this,RECT *param_1)

{
  int iVar1;
  HRGN this_00;
  char cVar2;
  LONG *pLVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  ushort in_FPUControlWord;
  LONG local_34 [5];
  RECT local_20;
  uint local_10;
  HRGN local_c;
  uint *local_8;
  
  local_8 = (uint *)0x88760248;
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)(iVar1 + 0xb8) != 0) {
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    local_c = this;
    if (param_1 != (RECT *)0x0) {
      pLVar3 = FUN_1003610d(this,param_1,local_34);
      local_20.left = *pLVar3;
      local_20.top = pLVar3[1];
      local_20.right = pLVar3[2];
      local_20.bottom = pLVar3[3];
    }
    if (*(int *)(iVar1 + 0xb8) == 1) {
      if (((param_1 == (RECT *)0x0) || (param_1->left == param_1->right)) ||
         (param_1->top == param_1->bottom)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      iVar5 = *(int *)(iVar1 + 0xb4);
      if ((*(int *)(iVar5 + 4) == -1) || (bVar10)) {
        local_20.left = *(LONG *)(iVar5 + 8);
        local_20.top = *(LONG *)(iVar5 + 0xc);
        local_20.right = *(LONG *)(iVar5 + 0x10);
        local_20.bottom = *(LONG *)(iVar5 + 0x14);
      }
    }
    local_8 = (uint *)0x88760096;
    BVar4 = IsRectEmpty(&local_20);
    this_00 = local_c;
    if (BVar4 == 0) {
      uVar8 = 0;
      local_8 = (uint *)0x88760248;
      bVar10 = *(int *)(iVar1 + 0xb8) == 0;
      if (*(int *)(iVar1 + 0xb8) != 0) {
        do {
          if ((*(void **)(uVar8 * 0x18 + *(int *)(iVar1 + 0xb4)) == this_00) &&
             (BVar4 = EqualRect((RECT *)(uVar8 * 0x18 + *(int *)(iVar1 + 0xb4) + 8),&local_20),
             BVar4 != 0)) break;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar1 + 0xb8));
        bVar10 = uVar8 == *(uint *)(iVar1 + 0xb8);
      }
      if ((!bVar10) && (*(int *)(iVar1 + 0xb0) != 0)) {
        local_8 = (uint *)0x80004005;
        local_c = CreateRectRgnIndirect(&local_20);
        if (local_c != (HRGN)0x0) {
          iVar5 = CombineRgn(local_c,*(HRGN *)(iVar1 + 0xb0),local_c,1);
          if ((iVar5 != 0) && (local_8 = (uint *)0x88760096, iVar5 == 2)) {
            iVar5 = CombineRgn(*(HRGN *)(iVar1 + 0xb0),*(HRGN *)(iVar1 + 0xb0),local_c,4);
            local_8 = (uint *)0x80004005;
            if ((iVar5 != 0) && (local_8 = (uint *)0x0, iVar5 == 1)) {
              local_8 = &local_10;
              local_10 = in_FPUControlWord | 0x80000000;
              if ((in_FPUControlWord & 0xf3f) != 0x23f) {
                local_10 = (uint)in_FPUControlWord;
              }
              local_8 = (uint *)FUN_10032800((int)this_00);
              if (DAT_1006c238 != (int *)0x0) {
                (**(code **)(*DAT_1006c238 + 0x24))
                          (*(undefined4 *)(*(int *)((int)this_00 + 0xfc) + 0xc),this_00);
              }
              DeleteObject(*(HGDIOBJ *)(iVar1 + 0xb0));
              *(undefined4 *)(iVar1 + 0xb0) = 0;
              *(undefined1 *)((int)this_00 + 9) = 0;
              LOCK();
              *(int *)((int)this_00 + 0x1dc) = *(int *)((int)this_00 + 0x1dc) + 1;
              UNLOCK();
              cVar2 = FUN_1003218f((int)this_00 + 0x150);
              if (cVar2 != '\0') {
                FUN_10031592((int)this_00);
              }
              FUN_10033568(this_00,'\x01');
            }
          }
          DeleteObject(local_c);
          if ((local_8 == (uint *)0x0) && (uVar6 = *(uint *)(iVar1 + 0xb8), uVar8 < uVar6)) {
            uVar8 = uVar8 + 1;
            if (uVar8 < uVar6) {
              do {
                puVar7 = (undefined4 *)(uVar8 * 0x18 + *(int *)(iVar1 + 0xb4));
                uVar8 = uVar8 + 1;
                puVar9 = puVar7 + -6;
                for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar9 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar9 = puVar9 + 1;
                }
                uVar6 = *(uint *)(iVar1 + 0xb8);
              } while (uVar8 < uVar6);
            }
            *(uint *)(iVar1 + 0xb8) = uVar6 - 1;
          }
        }
      }
    }
  }
  return (int)local_8;
}

