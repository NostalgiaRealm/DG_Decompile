/*
 * FUN_10028f5b at 10028f5b
 * undefined __thiscall FUN_10028f5b(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10028f5b-10028fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10028f5b(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x10;
    iVar2 = FUN_1004f9d3(-(int)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    if (iVar2 != 0) {
      uVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar3 = uVar4 * 0x10;
          puVar5 = (undefined4 *)(*(int *)this + iVar3);
          uVar4 = uVar4 + 1;
          puVar6 = (undefined4 *)(iVar3 + iVar2);
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
        } while (uVar4 < *(uint *)((int)this + 4));
      }
      thunk_FUN_1004f9b6(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar2;
    }
  }
  for (uVar4 = *(uint *)((int)this + 8); param_1 < uVar4; uVar4 = uVar4 - 1) {
    puVar6 = (undefined4 *)(uVar4 * 0x10 + *(int *)this);
    *puVar6 = puVar6[-4];
    puVar6[1] = puVar6[-3];
    puVar6[2] = puVar6[-2];
    puVar6[3] = puVar6[-1];
  }
  FUN_10028ff0(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

