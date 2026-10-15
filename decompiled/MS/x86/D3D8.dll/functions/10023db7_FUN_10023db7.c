/*
 * FUN_10023db7 at 10023db7
 * undefined4 __thiscall FUN_10023db7(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10023db7-10023e5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10023db7(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar4 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar4) {
    if (iVar4 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar4 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar5 * 0x18);
    if ((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_100ad4a9(SVar2);
    puVar6 = puVar3;
    uVar1 = uVar5;
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6 = puVar6 + 6;
    }
    FUN_100adac0(puVar3,*(undefined4 **)this,*(int *)((int)this + 8) * 0x18);
    thunk_FUN_100ad48c(*(LPVOID *)this);
    *(undefined4 **)this = puVar3;
    *(uint *)((int)this + 8) = uVar5;
  }
  uVar5 = *(uint *)((int)this + 4);
  while( true ) {
    iVar7 = 6;
    iVar4 = 6;
    if (uVar5 <= param_1) break;
    puVar3 = (undefined4 *)(uVar5 * 0x18 + *(int *)this);
    uVar5 = uVar5 - 1;
    puVar6 = puVar3 + -6;
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  puVar6 = (undefined4 *)(param_1 * 0x18 + *(int *)this);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)(param_1 >> 8),1);
}

