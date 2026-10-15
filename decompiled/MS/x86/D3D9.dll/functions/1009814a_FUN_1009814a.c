/*
 * FUN_1009814a at 1009814a
 * undefined __thiscall FUN_1009814a(void * this, uint param_1, undefined4 param_2, undefined4 param_3, uint * param_4)
 * Address ranges: 1009814a-100981f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1009814a(void *this,uint param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  longlong lVar1;
  SIZE_T SVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    lVar1 = (ulonglong)(uint)(*(int *)((int)this + 4) * 2) * 0x10;
    SVar2 = (SIZE_T)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    iVar3 = FUN_100cfd89(SVar2);
    if (iVar3 != 0) {
      uVar6 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar4 = uVar6 * 0x10;
          puVar7 = (undefined4 *)(*(int *)this + iVar4);
          uVar6 = uVar6 + 1;
          puVar5 = (undefined4 *)(iVar4 + iVar3);
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
          puVar5[2] = puVar7[2];
          puVar5[3] = puVar7[3];
        } while (uVar6 < *(uint *)((int)this + 4));
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
      *(int *)this = iVar3;
    }
  }
  for (uVar6 = *(uint *)((int)this + 8); param_1 < uVar6; uVar6 = uVar6 - 1) {
    puVar5 = (undefined4 *)(uVar6 * 0x10 + *(int *)this);
    *puVar5 = puVar5[-4];
    puVar5[1] = puVar5[-3];
    puVar5[2] = puVar5[-2];
    puVar5[3] = puVar5[-1];
  }
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar3 + 4 + param_1 * 0x10) = param_3;
  *(uint *)(*(int *)this + 8 + param_1 * 0x10) = *param_4;
  iVar3 = *(int *)this;
  puVar5 = FUN_1009f22e(this,*param_4);
  *(undefined4 **)(iVar3 + 0xc + param_1 * 0x10) = puVar5;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}

