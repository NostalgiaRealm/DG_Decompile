/*
 * FUN_100178c5 at 100178c5
 * undefined __thiscall FUN_100178c5(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100178c5-1001795a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100178c5(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x38;
    iVar2 = FUN_1004f9d3(-(int)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar3 = uVar5 * 0x38;
          uVar5 = uVar5 + 1;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          puVar7 = (undefined4 *)(iVar3 + iVar2);
          for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        } while (uVar5 < *(uint *)((int)this + 4));
      }
      thunk_FUN_1004f9b6(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar2;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  while (param_1 < uVar5) {
    puVar7 = (undefined4 *)(uVar5 * 0x38 + *(int *)this);
    uVar5 = uVar5 - 1;
    puVar6 = puVar7 + -0xe;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  FUN_1001795b(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

