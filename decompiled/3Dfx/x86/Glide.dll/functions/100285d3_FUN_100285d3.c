/*
 * FUN_100285d3 at 100285d3
 * undefined __thiscall FUN_100285d3(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100285d3-10028692
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100285d3(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x30;
    iVar2 = FUN_1004f9d3(-(int)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    if (iVar2 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar3 = uVar5 * 0x30;
          uVar5 = uVar5 + 1;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          puVar7 = (undefined4 *)(iVar3 + iVar2);
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    puVar7 = (undefined4 *)(uVar5 * 0x30 + *(int *)this);
    uVar5 = uVar5 - 1;
    puVar6 = puVar7 + -0xc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  iVar4 = param_1 * 0x30;
  iVar2 = *(int *)this;
  *(undefined4 *)(iVar4 + iVar2) = param_2;
  *(undefined4 *)(iVar4 + 4 + iVar2) = param_3;
  puVar6 = (undefined4 *)(*(int *)this + 8 + iVar4);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = **(int **)((int)this + 0xc);
  **(int **)((int)this + 0xc) = iVar2 + 1;
  *(int *)(iVar4 + 0x28 + *(int *)this) = iVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

