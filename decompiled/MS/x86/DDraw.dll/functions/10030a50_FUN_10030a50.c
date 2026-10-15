/*
 * FUN_10030a50 at 10030a50
 * undefined1 __thiscall FUN_10030a50(void * this, int param_1)
 * Address ranges: 10030a50-10030c58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10030a50(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  tagRECT *ptVar9;
  uint uVar10;
  char cVar11;
  tagRECT local_70;
  tagRECT local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40 [4];
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined1 local_9;
  
  local_9 = 1;
  if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x50) + 4) != 2) {
    local_9 = 0;
    FUN_100253c5(*(void **)((int)this + 0xfc),local_40);
    piVar5 = local_40;
    iVar8 = param_1 + 0x150;
    cVar11 = '\x01';
    iVar2 = FUN_100321a7(iVar8);
    FUN_100314b0(this,&local_30,*(uint *)(param_1 + 0x15c),*(uint *)(param_1 + 0x158),iVar2,piVar5,
                 cVar11);
    iVar2 = FUN_100321a7(iVar8);
    local_14 = 1;
    if (iVar2 == 2) {
      local_14 = 6;
    }
    local_10 = FUN_10031f92((int)this);
    piVar5 = *(int **)(*(int *)((int)this + 4) + 0x4c);
    uVar3 = *(uint *)(param_1 + 0x1b8) >> 0xb & 1 |
            -(uint)((*(uint *)(param_1 + 0x1bc) & 0x20010) != 0) & 2;
    uVar4 = FUN_100321a7(iVar8);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x28))
                              (local_30,local_2c,*(undefined4 *)((int)this + 0x15c),
                               *(undefined4 *)((int)this + 0x158),local_28,
                               *(undefined4 *)(param_1 + 0x1cc),1,uVar4,uVar3);
    if (piVar5 != (int *)0x0) {
      local_20 = piVar5;
      (*(code *)**(undefined4 **)this)();
      (**(code **)(*piVar5 + 0x44))();
      local_1c = *(int **)(*(int *)(param_1 + 4) + 0x50);
      *(int **)(*(int *)(param_1 + 4) + 0x50) = piVar5;
      uVar3 = *(uint *)(*(int *)(param_1 + 4) + 200);
      *(uint *)(*(int *)(param_1 + 4) + 200) = (local_24 ^ uVar3) & 1 ^ uVar3;
      puVar1 = (uint *)(*(int *)((int)this + 4) + 200);
      *puVar1 = *puVar1 | 4;
      FUN_100337af(param_1);
      local_44 = 1;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      ptVar9 = &local_70;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        ptVar9->left = 0;
        ptVar9 = (tagRECT *)&ptVar9->top;
      }
      local_18 = 0;
      uVar3 = local_10;
      uVar6 = local_14;
      do {
        uVar10 = 0;
        uVar7 = local_18;
        if (uVar3 != 0) {
          do {
            uVar6 = *(uint *)((int)this + 0x15c) >> ((byte)uVar10 & 0x1f);
            uVar3 = 1;
            if (uVar6 != 0) {
              uVar3 = uVar6;
            }
            uVar7 = *(uint *)((int)this + 0x158) >> ((byte)uVar10 & 0x1f);
            uVar6 = 1;
            if (uVar7 != 0) {
              uVar6 = uVar7;
            }
            SetRect(&local_60,0,0,uVar3,uVar6);
            SetRect(&local_70,0,0,uVar3,uVar6);
            uVar7 = local_18;
            (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x4c) + 0x84))
                      (uVar10,local_18,uVar10,local_18,local_20,local_1c,&local_70);
            uVar10 = uVar10 + 1;
            uVar3 = local_10;
            uVar6 = local_14;
          } while (uVar10 < local_10);
        }
        local_18 = uVar7 + 1;
      } while (local_18 < uVar6);
      if (DAT_1006c238 != (int *)0x0) {
        (**(code **)(*DAT_1006c238 + 0x24))(*(undefined4 *)(*(int *)((int)this + 0xfc) + 0xc),this);
      }
      (**(code **)(*local_1c + 0x10))();
      local_9 = 1;
    }
  }
  return local_9;
}

