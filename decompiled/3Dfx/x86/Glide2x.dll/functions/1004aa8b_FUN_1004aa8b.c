/*
 * FUN_1004aa8b at 1004aa8b
 * undefined __thiscall FUN_1004aa8b(void * this, int param_1, int * param_2)
 * Address ranges: 1004aa8b-1004acb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004aa8b(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  byte bVar4;
  BOOL BVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_104 [16];
  uint local_f4;
  uint local_ec;
  uint local_c8;
  int local_c4;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined1 local_94 [16];
  uint local_84;
  uint local_7c;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  int *local_c;
  
  if (*(int *)((int)this + 0xc) != 0) {
    iVar1 = *(int *)*param_2;
    if ((iVar1 != 0) || (((int *)*param_2)[1] != 0)) {
      iVar8 = *(int *)((int)this + 4) + param_1 * 0x16c0 + 0x6c0;
      local_14 = iVar8;
      local_10 = this;
      if (iVar1 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x1304) + 0x634);
        *piVar6 = *piVar6 + 1;
        puVar2 = (uint *)*param_2;
        FUN_1004507c(iVar8,puVar2[1],*puVar2,puVar2[4]);
        FUN_1003d0af((void *)(*(int *)(iVar8 + 0x1304) + 4),'\0');
        *(undefined4 *)*param_2 = 0;
        *(undefined4 *)(*param_2 + 0x10) = 0;
      }
      local_c = (int *)param_2[1];
      (**(code **)(**(int **)(*param_2 + 4) + 0x28))(*(int **)(*param_2 + 4),local_94);
      (**(code **)(*(int *)local_c[local_c[0x35a] + 0x35c] + 0x28))
                ((int *)local_c[local_c[0x35a] + 0x35c],local_104);
      FUN_100422f2(&local_c8,local_c,(int *)param_2[2],local_84,local_7c,local_f4,local_ec,0,0);
      local_5c = param_2[1];
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = local_84;
      local_58 = 0;
      iStack_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      local_30 = local_7c;
      local_2c = *(undefined4 *)(*param_2 + 4);
      local_28 = *(undefined4 *)(*param_2 + 0xc);
      local_24 = FUN_100398a5(*(void **)(*(int *)((int)this + 4) + 0x172c0));
      BVar5 = IsRectEmpty((RECT *)(param_2[2] + 0xc));
      if (BVar5 == 0) {
        iVar1 = param_2[2];
        local_3c = *(undefined4 *)(iVar1 + 0xc);
        local_38 = *(undefined4 *)(iVar1 + 0x10);
        local_34 = *(uint *)(iVar1 + 0x14);
        local_30 = *(uint *)(iVar1 + 0x18);
        iVar8 = local_14;
      }
      if (local_c4 == 0) {
        local_48 = local_c[local_c[0x35a] + 0x35c];
        piVar6 = FUN_1003c572(*(void **)(iVar8 + 0x15dc),&local_14,local_c[0x35e],local_c[0x35a]);
        local_44 = *piVar6;
        local_58 = local_a8;
        iStack_54 = iStack_a4;
        iStack_50 = iStack_a0;
        iStack_4c = iStack_9c;
        local_40 = FUN_100398a5(*(void **)(*(int *)((int)local_10 + 4) + 0x172c0));
      }
      pvVar3 = local_10;
      local_20 = 0;
      param_2[3] = local_a8;
      local_1c = 0;
      local_18 = 0;
      param_2[4] = iStack_a4;
      param_2[5] = iStack_a0;
      param_2[6] = iStack_9c;
      uVar9 = 0;
      if (*(int *)((int)local_10 + 0xc) != 0) {
        bVar7 = 0;
        do {
          bVar4 = (**(code **)(**(int **)(*(int *)((int)pvVar3 + 8) + uVar9 * 4) + 0x20))
                            (param_1,&local_5c,&local_20);
          bVar7 = bVar7 | bVar4;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)((int)pvVar3 + 0xc));
        if (bVar7 != 0) {
          iVar1 = *param_2;
          if (local_20 == *(int *)(iVar1 + 8)) {
            *(undefined4 *)(iVar1 + 8) = 0;
          }
          else {
            *(int *)(iVar1 + 4) = local_20;
            *(undefined4 *)(*param_2 + 0xc) = local_1c;
            *(undefined4 *)(*param_2 + 0x14) = local_18;
          }
        }
      }
    }
  }
  return;
}

