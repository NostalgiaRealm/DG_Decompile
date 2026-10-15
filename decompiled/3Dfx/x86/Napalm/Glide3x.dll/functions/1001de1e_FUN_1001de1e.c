/*
 * FUN_1001de1e at 1001de1e
 * undefined __thiscall FUN_1001de1e(void * this, int param_1, int param_2)
 * Address ranges: 1001de1e-1001dffc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001de1e(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18 [5];
  
  local_18[0] = 0x800;
  local_18[1] = 0x800;
  local_18[2] = 0x800;
  local_18[3] = 0x800;
  local_18[4] = FUN_1001e529((void *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3688) + 0x360),
                             local_18);
  if (local_18[4] != 0) {
    iVar4 = FUN_1001e472((void *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3688) + 0x374),
                         local_18 + 4);
    piVar1 = (int *)((int)this + 0xc);
    local_18[4] = iVar4;
    if (*(int *)((int)this + 0x30a4) != iVar4) {
      FUN_100476d0(*(void **)(*(int *)((int)this + 0x3018) + 0x3680),
                   *(int *)(*(int *)((int)this + 0x3018) + 0x3684),*piVar1 + 0x10,1,
                   (int)(local_18 + 4));
      *(int *)((int)this + 0x30a4) = iVar4;
    }
    iVar4 = *(int *)((int)this + 8);
    local_4c = *(uint *)(&DAT_1005897c +
                        ((-(uint)(*(int *)(iVar4 + 0x94) != 1) & 0xfffffff8) + 8 |
                        (-(uint)(*(int *)(iVar4 + 0x90) != 1) & 0xfffffffc) + 4));
    local_48 = (uint)(*(int *)(iVar4 + 0x88) != 0) * 2 + 1;
    local_3c = 0;
    local_40 = 3;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_44 = (uint)(*(int *)(iVar4 + 0x8c) != 0) * 2 + 1;
    local_38 = 1;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x7f7fffff;
    local_34 = 8;
    iVar4 = FUN_1001e394((void *)(*(int *)(*(int *)((int)this + 0x3018) + 0x3688) + 0x388),&local_4c
                        );
    local_18[4] = iVar4;
    if (*(int *)((int)this + 0x30a8) != iVar4) {
      iVar3 = *(int *)((int)this + 0x3018);
      FUN_10047697(*(void **)(iVar3 + 0x3680),*(int *)(iVar3 + 0x3684),*piVar1,iVar3,
                   (int *)(local_18 + 4));
      *(int *)((int)this + 0x30a8) = iVar4;
    }
    piVar2 = (int *)((int)this + 0x30ac);
    iVar4 = *(int *)((int)this + param_1 * 4 + 0x3060);
    if (*piVar2 != iVar4) {
      *piVar2 = iVar4;
      FUN_100476d0(*(void **)(*(int *)((int)this + 0x3018) + 0x3680),
                   *(int *)(*(int *)((int)this + 0x3018) + 0x3684),*piVar1 + 0x14,1,(int)piVar2);
    }
    piVar2 = (int *)((int)this + 0x30b0);
    iVar4 = *(int *)((int)this + param_2 * 4 + 0x3060);
    if (*piVar2 != iVar4) {
      *piVar2 = iVar4;
      FUN_100476d0(*(void **)(*(int *)((int)this + 0x3018) + 0x3680),
                   *(int *)(*(int *)((int)this + 0x3018) + 0x3684),*piVar1 + 0x18,1,(int)piVar2);
    }
  }
  return;
}

