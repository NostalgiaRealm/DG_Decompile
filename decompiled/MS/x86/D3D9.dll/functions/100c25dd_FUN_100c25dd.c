/*
 * FUN_100c25dd at 100c25dd
 * undefined __thiscall FUN_100c25dd(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 100c25dd-100c26b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100c25dd(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == *(int *)((int)this + 8)) {
    if (iVar3 == 0) {
      iVar3 = 0x10;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    iVar1 = FUN_100cfd89(iVar3 * 0x38);
    if (iVar1 != 0) {
      uVar4 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar5 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 0x38);
          puVar6 = (undefined4 *)(iVar1 + uVar4 * 0x38);
          for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)this = iVar1;
      *(int *)((int)this + 4) = iVar1;
      *(int *)((int)this + 0xc) = iVar3;
    }
  }
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar4) {
    while (param_1 < uVar4) {
      puVar6 = (undefined4 *)(uVar4 * 0x38 + *(int *)((int)this + 4));
      uVar4 = uVar4 - 1;
      puVar5 = puVar6 + -0xe;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar1 = param_1 * 0x38;
    *(undefined4 *)(iVar1 + 8 + *(int *)((int)this + 4)) = *param_4;
    puVar5 = (undefined4 *)(*(int *)((int)this + 4) + 0x10 + iVar1);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_5;
      param_5 = param_5 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + iVar3) = param_2;
    *(undefined4 *)(iVar1 + 4 + iVar3) = param_3;
  }
  return;
}

