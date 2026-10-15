/*
 * FUN_10015f9a at 10015f9a
 * undefined __thiscall FUN_10015f9a(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10015f9a-10016092
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10015f9a(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar5 = *(int *)((int)this + 0xc);
  if (iVar5 == *(int *)((int)this + 8)) {
    if (iVar5 == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = iVar5 * 2;
    }
    iVar1 = FUN_100ad4a9(iVar5 * 0xa0 + 0xf);
    if (iVar1 != 0) {
      uVar6 = 0;
      uVar3 = iVar1 + 0xfU & 0xfffffff0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar2 = uVar6 * 0xa0;
          uVar6 = uVar6 + 1;
          puVar7 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
          puVar8 = (undefined4 *)(iVar2 + uVar3);
          for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        } while (uVar6 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)this = iVar1;
      *(uint *)((int)this + 4) = uVar3;
      *(int *)((int)this + 0xc) = iVar5;
    }
  }
  uVar3 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar3) {
    while (param_1 < uVar3) {
      puVar8 = (undefined4 *)(uVar3 * 0xa0 + *(int *)((int)this + 4));
      uVar3 = uVar3 - 1;
      puVar7 = puVar8 + -0x28;
      for (iVar5 = 0x28; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar1 = param_1 * 0xa0;
    *(undefined4 *)(iVar1 + 0x10 + *(int *)((int)this + 4)) = *param_4;
    puVar7 = (undefined4 *)(*(int *)((int)this + 4) + 0x20 + iVar1);
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_5;
      param_5 = param_5 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + iVar5) = param_2;
    *(undefined4 *)(iVar1 + 4 + iVar5) = param_3;
  }
  return;
}

