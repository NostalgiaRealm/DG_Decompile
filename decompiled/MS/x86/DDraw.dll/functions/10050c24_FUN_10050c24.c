/*
 * FUN_10050c24 at 10050c24
 * undefined __thiscall FUN_10050c24(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 10050c24-10050cb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10050c24(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  longlong lVar1;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x10;
    SVar2 = (SIZE_T)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    iVar3 = FUN_10060bfe(SVar2);
    if (iVar3 != 0) {
      uVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar4 = uVar5 * 0x10;
          puVar6 = (undefined4 *)(*(int *)this + iVar4);
          uVar5 = uVar5 + 1;
          puVar7 = (undefined4 *)(iVar4 + iVar3);
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
          puVar7[2] = puVar6[2];
          puVar7[3] = puVar6[3];
        } while (uVar5 < *(uint *)((int)this + 4));
      }
      thunk_FUN_10060be1(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar3;
    }
  }
  for (uVar5 = *(uint *)((int)this + 8); param_1 < uVar5; uVar5 = uVar5 - 1) {
    puVar7 = (undefined4 *)(uVar5 * 0x10 + *(int *)this);
    *puVar7 = puVar7[-4];
    puVar7[1] = puVar7[-3];
    puVar7[2] = puVar7[-2];
    puVar7[3] = puVar7[-1];
  }
  FUN_10050cb5(this,param_1,param_2,param_3,param_4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

