/*
 * FUN_1002f746 at 1002f746
 * byte __thiscall FUN_1002f746(void * this, int * param_1, int param_2, int * param_3)
 * Address ranges: 1002f746-1002f8de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_1002f746(void *this,int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *this_00;
  byte local_61;
  uint local_60;
  RECT local_58;
  RECT local_48;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  
  local_61 = 0;
  if ((*(int *)((int)this + 0x10c) == 0) && (*(int *)(param_2 + 0x10c) == 0)) {
    local_60 = 1;
    if ((*(uint *)((int)this + 0x154) & 0x20000) != 0) {
      local_60 = *(uint *)((int)this + 0x168);
    }
    uVar4 = 1;
    if ((*(uint *)(param_2 + 0x154) & 0x20000) != 0) {
      uVar4 = *(uint *)(param_2 + 0x168);
    }
    iVar3 = param_2;
    this_00 = this;
    if (local_60 <= uVar4) {
      do {
        FUN_1002c788(this_00,iVar3);
        piVar1 = (int *)((int)this_00 + 0x110);
        iVar3 = *(int *)(iVar3 + 0x110);
        this_00 = (void *)*piVar1;
      } while ((void *)*piVar1 != (void *)0x0);
      iVar5 = 0;
      local_48.left = 0;
      iVar3 = 0;
      local_48.top = 0;
      local_48.right = *(int *)(param_2 + 0x15c);
      local_48.bottom = *(int *)(param_2 + 0x158);
      local_38.right = *(LONG *)((int)this + 0x15c);
      local_58.left = 0;
      local_38.bottom = *(LONG *)((int)this + 0x158);
      local_38.left = 0;
      local_58.top = 0;
      local_38.top = 0;
      local_58.right = local_48.right;
      local_58.bottom = local_48.bottom;
      if (param_3 != (int *)0x0) {
        local_58.left = *param_3;
        local_58.top = param_3[1];
        local_58.right = param_3[2];
        local_58.bottom = param_3[3];
      }
      if (param_1 != (int *)0x0) {
        iVar3 = *param_1;
        iVar5 = param_1[1];
      }
      local_28.left = local_58.left;
      local_28.top = local_58.top;
      local_28.right = local_58.right;
      local_28.bottom = local_58.bottom;
      OffsetRect(&local_28,iVar3 - local_58.left,iVar5 - local_58.top);
      IntersectRect(&local_18,&local_58,&local_48);
      local_61 = 0;
      BVar2 = EqualRect(&local_18,&local_58);
      if (BVar2 != 0) {
        IntersectRect(&local_18,&local_28,&local_38);
        local_61 = 0;
        BVar2 = EqualRect(&local_18,&local_28);
        if (BVar2 != 0) {
          local_61 = FUN_1002f407(this,param_2,local_60,(uint *)&local_58,&local_28);
        }
      }
      do {
        FUN_1002c7ef(this,'\x01');
        this = *(void **)((int)this + 0x110);
      } while (this != (void *)0x0);
    }
  }
  return local_61;
}

