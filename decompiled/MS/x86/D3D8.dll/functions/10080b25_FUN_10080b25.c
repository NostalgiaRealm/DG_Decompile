/*
 * FUN_10080b25 at 10080b25
 * undefined __thiscall FUN_10080b25(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10080b25-10080c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10080b25(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_c;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)((int)this + 8)) {
    if (iVar1 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = iVar1 * 2;
    }
    iVar1 = FUN_100ad4a9(uVar4 * 0x40 + 0x7f);
    if (iVar1 != 0) {
      uVar2 = iVar1 + 0x7fU & 0xffffff80;
      local_c = 0;
      if (*(int *)((int)this + 8) == 0) {
        uVar5 = 0;
      }
      else {
        do {
          iVar7 = local_c * 0x40;
          FUN_1007fc40((undefined4 *)(iVar7 + (uVar2 | 0x10)));
          puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar7);
          puVar8 = (undefined4 *)(iVar7 + uVar2);
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar5 = *(uint *)((int)this + 8);
          local_c = local_c + 1;
        } while (local_c < uVar5);
      }
      for (; uVar5 < uVar4; uVar5 = uVar5 + 1) {
        FUN_1007fc40((undefined4 *)(uVar5 * 0x40 + (uVar2 | 0x10)));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)this = iVar1;
      *(uint *)((int)this + 4) = uVar2;
      *(uint *)((int)this + 0xc) = uVar4;
    }
  }
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar4) {
    while (param_1 < uVar4) {
      puVar8 = (undefined4 *)(uVar4 * 0x40 + *(int *)((int)this + 4));
      uVar4 = uVar4 - 1;
      puVar6 = puVar8 + -0x10;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar3 = param_1 * 0x40;
    *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 4)) = *param_4;
    puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar3 + 0x10);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *param_5;
      param_5 = param_5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar3 + iVar1) = param_2;
    *(undefined4 *)(iVar3 + 4 + iVar1) = param_3;
  }
  return;
}

