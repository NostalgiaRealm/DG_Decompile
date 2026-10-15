/*
 * FUN_10028107 at 10028107
 * undefined4 __thiscall FUN_10028107(void * this, undefined4 * param_1)
 * Address ranges: 10028107-1002817b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10028107(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar1) {
    if (iVar1 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = iVar1 * 2;
    }
    puVar3 = (undefined4 *)
             FUN_1004f643(-(int)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 4));
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_1004fd20(puVar3,*(undefined4 **)this,*(int *)((int)this + 8) << 2);
    thunk_FUN_1004f626(*(LPVOID *)this);
    *(undefined4 **)this = puVar3;
    *(uint *)((int)this + 8) = uVar4;
  }
  uVar2 = *param_1;
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

