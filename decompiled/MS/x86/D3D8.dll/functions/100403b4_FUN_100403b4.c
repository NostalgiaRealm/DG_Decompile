/*
 * FUN_100403b4 at 100403b4
 * undefined __thiscall FUN_100403b4(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 100403b4-10040493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100403b4(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == *(int *)((int)this + 8)) {
    if (iVar4 == 0) {
      iVar4 = 0x10;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    iVar2 = FUN_100ad4a9(iVar4 * 0x68);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar6 = (undefined4 *)(*(int *)((int)this + 4) + uVar5 * 0x68);
          puVar7 = (undefined4 *)(iVar2 + uVar5 * 0x68);
          for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)this = iVar2;
      *(int *)((int)this + 4) = iVar2;
      *(int *)((int)this + 0xc) = iVar4;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar5) {
    while (param_1 < uVar5) {
      puVar7 = (undefined4 *)(uVar5 * 0x68 + *(int *)((int)this + 4));
      uVar5 = uVar5 - 1;
      puVar6 = puVar7 + -0x1a;
      for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar2 = param_1 * 0x68;
    uVar1 = param_4[1];
    iVar4 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = *param_4;
    *(undefined4 *)(iVar2 + 0xc + iVar4) = uVar1;
    puVar6 = (undefined4 *)(*(int *)((int)this + 4) + 0x10 + iVar2);
    for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_5;
      param_5 = param_5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar4 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + iVar4) = param_2;
    *(undefined4 *)(iVar2 + 4 + iVar4) = param_3;
  }
  return;
}

