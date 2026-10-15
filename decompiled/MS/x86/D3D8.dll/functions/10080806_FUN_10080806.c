/*
 * FUN_10080806 at 10080806
 * undefined4 __thiscall FUN_10080806(void * this, undefined4 * param_1)
 * Address ranges: 10080806-1008089b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10080806(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 in_EAX;
  SIZE_T SVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar4 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar4) {
    if (iVar4 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar4 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar5 * 0x30);
    if ((int)((ulonglong)uVar5 * 0x30 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_100ad4a9(SVar2);
    puVar6 = puVar3;
    uVar1 = uVar5;
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_1007fc40(puVar6);
      puVar6 = puVar6 + 0xc;
    }
    FUN_100adac0(puVar3,*(undefined4 **)this,*(int *)((int)this + 8) * 0x30);
    in_EAX = thunk_FUN_100ad48c(*(LPVOID *)this);
    *(undefined4 **)this = puVar3;
    *(uint *)((int)this + 8) = uVar5;
  }
  puVar6 = (undefined4 *)(*(int *)((int)this + 4) * 0x30 + *(int *)this);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

