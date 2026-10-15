/*
 * FUN_10055314 at 10055314
 * undefined __thiscall FUN_10055314(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10055314-100553e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10055314(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == *(int *)((int)this + 8)) {
    if (iVar4 == 0) {
      iVar4 = 0x10;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    iVar2 = FUN_100556a3(iVar4 * 0x18);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar6 = (undefined4 *)(*(int *)((int)this + 4) + uVar5 * 0x18);
          puVar7 = (undefined4 *)(iVar2 + uVar5 * 0x18);
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)this + 8));
      }
      thunk_FUN_10055686(*(LPVOID *)this);
      *(int *)this = iVar2;
      *(int *)((int)this + 4) = iVar2;
      *(int *)((int)this + 0xc) = iVar4;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar5) {
    while (param_1 < uVar5) {
      puVar7 = (undefined4 *)(uVar5 * 0x18 + *(int *)((int)this + 4));
      uVar5 = uVar5 - 1;
      puVar6 = puVar7 + -6;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    piVar8 = (int *)((int)this + 4);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar2 = param_1 * 0x18;
    uVar1 = param_4[1];
    iVar4 = *piVar8;
    *(undefined4 *)(iVar2 + 8 + iVar4) = *param_4;
    *(undefined4 *)(iVar2 + 0xc + iVar4) = uVar1;
    *(undefined4 *)(iVar2 + 0x10 + *piVar8) = *param_5;
    iVar4 = *piVar8;
    *(undefined4 *)(iVar2 + iVar4) = param_2;
    *(undefined4 *)(iVar2 + 4 + iVar4) = param_3;
  }
  return;
}

