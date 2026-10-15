/*
 * FUN_10083ef0 at 10083ef0
 * undefined4 __thiscall FUN_10083ef0(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5, uint * param_6)
 * Address ranges: 10083ef0-10084115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10083ef0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  void *this_00;
  int iVar7;
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
    FUN_100cef50(*(int *)((int)this + 0x44) + 0x11c0);
  }
  iStack_28 = (**(code **)(*(int *)this + 0x60))(1);
  if (iStack_28 == 0) {
    return uStack_34;
  }
  bVar2 = FUN_100828d9(this);
  if (!bVar2) {
    return uStack_34;
  }
  iVar7 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  local_30 = CONCAT44(iVar7,(uint)local_30);
  iVar4 = FUN_10082974((int)this);
  if ((char)iVar4 != '\0') {
    local_30 = local_30 & 0xffffffff00000000;
    bVar2 = FUN_10082a54(this_00,param_1,param_2,param_5,param_6,(uint *)&local_30);
    if (!bVar2) {
      return uStack_34;
    }
    lprc = (RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar7 * 0x20);
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
    cVar3 = FUN_100bd176(*(void **)(*(int *)((int)this + 0x44) + 0x1304),*(int **)(iStack_28 + 0xc),
                         local_30._4_4_,
                         (*(int *)((int)this + 0x24) + param_2) * *(int *)((int)this + 0x2c) +
                         param_1,(void *)(*(int *)((int)this + 0x44) + 0x1490),&iStack_24,
                         (undefined1 (*) [16])
                         (*param_6 * iStack_20 + iStack_24 * (uint)local_30 + *param_5),*param_6);
    if (cVar3 != '\0') {
      return 0;
    }
    return 2;
  }
  (*(code *)**(undefined4 **)this)(param_1,param_2);
  cVar3 = FUN_100c1862(*(void **)(*(int *)((int)this + 0x40) + 0x172c0));
  if (cVar3 == '\0') {
    piVar1 = (int *)((int)this + 0x44);
    local_30 = *(ulonglong *)((int)this + 0xe8);
    if (*(int *)((int)this + 0xe8) == 0 && *(int *)((int)this + 0xec) == 0) {
      local_30 = FUN_100bb258(*(int *)(*piVar1 + 0x1304));
    }
    uVar6 = FUN_100bad40((void *)(*(int *)(*piVar1 + 0x1304) + 4),'\0');
    if ((char)uVar6 != '\0') {
      if ((local_30._4_4_ != 0) || ((uint)local_30 != 0)) {
        FUN_100bb282(*(void **)(*piVar1 + 0x1304),(uint)local_30,local_30._4_4_);
        goto LAB_100840e6;
      }
    }
    FUN_100c17e3(*(void **)(*(int *)((int)this + 0x40) + 0x172c0),*(undefined4 *)((int)this + 0x90),
                 0);
  }
LAB_100840e6:
  iVar4 = FUN_10081694((void *)((int)this + 0x84),iVar7);
  *param_5 = iVar4;
  *param_6 = *(uint *)(iVar7 * 0x20 + 8 + *(int *)((int)this + 0x98));
  return 0;
}

