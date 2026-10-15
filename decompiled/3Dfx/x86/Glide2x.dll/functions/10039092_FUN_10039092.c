/*
 * FUN_10039092 at 10039092
 * undefined4 __thiscall FUN_10039092(void * this, undefined4 * param_1)
 * Address ranges: 10039092-10039105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10039092(void *this,undefined4 *param_1)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar3) {
    if (iVar3 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar3 * 2;
    }
    SVar1 = (SIZE_T)((ulonglong)uVar5 * 0x20);
    if ((int)((ulonglong)uVar5 * 0x20 >> 0x20) != 0) {
      SVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_1004f643(SVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_1004fd20(puVar2,*(undefined4 **)this,*(int *)((int)this + 8) << 5);
    iVar3 = thunk_FUN_1004f626(*(LPVOID *)this);
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 8) = uVar5;
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) * 0x20 + *(int *)this);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

