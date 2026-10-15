/*
 * FUN_100174ed at 100174ed
 * undefined4 __thiscall FUN_100174ed(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5, uint * param_6)
 * Address ranges: 100174ed-10017712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100174ed(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  void *this_00;
  int iVar8;
  RECT *lprc;
  undefined4 uStack_34;
  undefined8 local_30;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  LONG LStack_18;
  LONG LStack_14;
  undefined4 uStack_10;
  
  local_30 = CONCAT44(local_30._4_4_,2);
  if (*(char *)((int)this + 0x3d) == '\x01') {
    FUN_100600a0(*(int *)((int)this + 0x44) + 0x11c0);
  }
  iStack_28 = (**(code **)(*(int *)this + 0x60))(1);
  if (iStack_28 == 0) {
    return uStack_34;
  }
  uVar4 = FUN_10015e84(this);
  if ((char)uVar4 == '\0') {
    return uStack_34;
  }
  iVar8 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  local_30 = CONCAT44(iVar8,(uint)local_30);
  cVar2 = FUN_10015f1f((int)this);
  if (cVar2 != '\0') {
    local_30 = local_30 & 0xffffffff00000000;
    bVar3 = FUN_10015ff4(this_00,param_1,param_2,param_5,param_6,(uint *)&local_30);
    if (!bVar3) {
      return uStack_34;
    }
    lprc = (RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar8 * 0x20);
    BVar5 = IsRectEmpty(lprc);
    iStack_24 = lprc->left;
    iStack_20 = lprc->top;
    uStack_1c = 0;
    LStack_18 = lprc->right;
    LStack_14 = lprc->bottom;
    uStack_10 = 1;
    (*(code *)**(undefined4 **)this)(param_1,param_2);
    if (BVar5 != 0) {
      return 0;
    }
    cVar2 = FUN_10054d9b(*(void **)(*(int *)((int)this + 0x44) + 0x1304),*(int **)(iStack_28 + 0xc),
                         local_30._4_4_,
                         (*(int *)((int)this + 0x24) + param_2) * *(int *)((int)this + 0x2c) +
                         param_1,(void *)(*(int *)((int)this + 0x44) + 0x1490),&iStack_24,
                         (undefined1 (*) [16])
                         (*param_6 * iStack_20 + iStack_24 * (uint)local_30 + *param_5),*param_6);
    if (cVar2 != '\0') {
      return 0;
    }
    return 2;
  }
  (*(code *)**(undefined4 **)this)(param_1,param_2);
  cVar2 = FUN_1005054c(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
  if (cVar2 == '\0') {
    piVar1 = (int *)((int)this + 0x44);
    local_30 = *(ulonglong *)((int)this + 0xe8);
    if (*(int *)((int)this + 0xe8) == 0 && *(int *)((int)this + 0xec) == 0) {
      local_30 = FUN_10052e8d(*(void **)(*piVar1 + 0x1304));
    }
    uVar6 = FUN_10052996((void *)(*(int *)(*piVar1 + 0x1304) + 4),'\0');
    if ((char)uVar6 != '\0') {
      if ((local_30._4_4_ != 0) || ((uint)local_30 != 0)) {
        FUN_10052ecc(*(void **)(*piVar1 + 0x1304),(uint)local_30,local_30._4_4_);
        goto LAB_100176e3;
      }
    }
    FUN_1005050b(*(void **)(*(int *)((int)this + 0x40) + 0x172c0),*(undefined4 *)((int)this + 0x90),
                 0);
  }
LAB_100176e3:
  iVar7 = FUN_10014ef0((void *)((int)this + 0x84),iVar8);
  *param_5 = iVar7;
  *param_6 = *(uint *)(iVar8 * 0x20 + 8 + *(int *)((int)this + 0x98));
  return 0;
}

