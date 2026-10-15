/*
 * FUN_1001dcf3 at 1001dcf3
 * undefined __thiscall FUN_1001dcf3(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1001dcf3-1001ddb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001dcf3(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x60;
    iVar2 = FUN_100556a3(-(int)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar3 = uVar5 * 0x60;
          uVar5 = uVar5 + 1;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          puVar7 = (undefined4 *)(iVar3 + iVar2);
          for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        } while (uVar5 < *(uint *)((int)this + 4));
      }
      thunk_FUN_10055686(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar2;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  while (param_1 < uVar5) {
    puVar7 = (undefined4 *)(uVar5 * 0x60 + *(int *)this);
    uVar5 = uVar5 - 1;
    puVar6 = puVar7 + -0x18;
    for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  iVar4 = param_1 * 0x60;
  iVar2 = *(int *)this;
  *(undefined4 *)(iVar4 + iVar2) = param_2;
  *(undefined4 *)(iVar4 + 4 + iVar2) = param_3;
  puVar6 = (undefined4 *)(*(int *)this + 8 + iVar4);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = **(int **)((int)this + 0xc);
  **(int **)((int)this + 0xc) = iVar2 + 1;
  *(int *)(iVar4 + 0x58 + *(int *)this) = iVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

