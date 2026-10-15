/*
 * FUN_10059d34 at 10059d34
 * undefined __thiscall FUN_10059d34(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10059d34-10059dc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10059d34(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x20;
    SVar2 = (SIZE_T)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    iVar3 = FUN_10060bfe(SVar2);
    if (iVar3 != 0) {
      uVar6 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar4 = uVar6 * 0x20;
          uVar6 = uVar6 + 1;
          puVar7 = (undefined4 *)(*(int *)this + iVar4);
          puVar8 = (undefined4 *)(iVar4 + iVar3);
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        } while (uVar6 < *(uint *)((int)this + 4));
      }
      thunk_FUN_10060be1(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar3;
    }
  }
  uVar6 = *(uint *)((int)this + 8);
  while (param_1 < uVar6) {
    puVar8 = (undefined4 *)(uVar6 * 0x20 + *(int *)this);
    uVar6 = uVar6 - 1;
    puVar7 = puVar8 + -8;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_10059dca(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

