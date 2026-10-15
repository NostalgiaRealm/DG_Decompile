/*
 * FUN_10008155 at 10008155
 * undefined4 __thiscall FUN_10008155(void * this, undefined4 * param_1)
 * Address ranges: 10008155-100081c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10008155(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar1 * 2;
    }
    SVar3 = (SIZE_T)((ulonglong)uVar5 * 4);
    if ((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_1005c789(SVar3);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_1005ca00(puVar4,*(undefined4 **)this,*(int *)((int)this + 8) << 2);
    thunk_FUN_1005c76c(*(LPVOID *)this);
    *(undefined4 **)this = puVar4;
    *(uint *)((int)this + 8) = uVar5;
  }
  uVar2 = *param_1;
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

