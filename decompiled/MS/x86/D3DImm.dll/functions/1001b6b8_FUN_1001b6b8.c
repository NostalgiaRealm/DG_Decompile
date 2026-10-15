/*
 * FUN_1001b6b8 at 1001b6b8
 * undefined4 __thiscall FUN_1001b6b8(void * this, undefined4 * param_1)
 * Address ranges: 1001b6b8-1001b72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001b6b8(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = iVar1 * 2;
    }
    SVar4 = (SIZE_T)((ulonglong)uVar6 * 8);
    if ((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) {
      SVar4 = 0xffffffff;
    }
    puVar5 = (undefined4 *)FUN_1005c789(SVar4);
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_1005ca00(puVar5,*(undefined4 **)this,*(int *)((int)this + 8) << 3);
    thunk_FUN_1005c76c(*(LPVOID *)this);
    *(undefined4 **)this = puVar5;
    *(uint *)((int)this + 8) = uVar6;
  }
  iVar1 = *(int *)this;
  uVar2 = param_1[1];
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + iVar3 * 8) = *param_1;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

