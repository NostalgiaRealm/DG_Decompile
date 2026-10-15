/*
 * FUN_1002579a at 1002579a
 * undefined4 __thiscall FUN_1002579a(void * this, undefined4 param_1)
 * Address ranges: 1002579a-10025829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002579a(void *this,undefined4 param_1)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x148);
  if (*(int *)((int)this + 0x144) == iVar1) {
    if (iVar1 == 0) {
      uVar4 = 0x10;
    }
    else {
      uVar4 = iVar1 * 2;
    }
    SVar2 = (SIZE_T)((ulonglong)uVar4 * 4);
    if ((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (undefined4 *)FUN_10060bfe(SVar2);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_10060d80(puVar3,*(undefined4 **)((int)this + 0x140),*(int *)((int)this + 0x148) << 2);
    thunk_FUN_10060be1(*(LPVOID *)((int)this + 0x140));
    *(undefined4 **)((int)this + 0x140) = puVar3;
    *(uint *)((int)this + 0x148) = uVar4;
  }
  *(undefined4 *)(*(int *)((int)this + 0x140) + *(int *)((int)this + 0x144) * 4) = param_1;
  *(int *)((int)this + 0x144) = *(int *)((int)this + 0x144) + 1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

