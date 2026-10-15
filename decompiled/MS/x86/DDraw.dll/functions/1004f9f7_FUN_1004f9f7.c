/*
 * FUN_1004f9f7 at 1004f9f7
 * undefined4 __thiscall FUN_1004f9f7(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 1004f9f7-1004fa89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004f9f7(void *this,uint param_1,undefined4 *param_2)

{
  SIZE_T SVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar4) {
    if (iVar4 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = iVar4 * 2;
    }
    SVar1 = (SIZE_T)((ulonglong)uVar3 * 0x20);
    if ((int)((ulonglong)uVar3 * 0x20 >> 0x20) != 0) {
      SVar1 = 0xffffffff;
    }
    puVar2 = (undefined4 *)FUN_10060bfe(SVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_10060d80(puVar2,*(undefined4 **)this,*(int *)((int)this + 8) << 5);
    thunk_FUN_10060be1(*(LPVOID *)this);
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 8) = uVar3;
  }
  uVar3 = *(uint *)((int)this + 4);
  while( true ) {
    iVar6 = 8;
    iVar4 = 8;
    if (uVar3 <= param_1) break;
    puVar5 = (undefined4 *)(uVar3 * 0x20 + *(int *)this);
    uVar3 = uVar3 - 1;
    puVar2 = puVar5 + -8;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  puVar2 = (undefined4 *)(param_1 * 0x20 + *(int *)this);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)(uVar3 >> 8),1);
}

