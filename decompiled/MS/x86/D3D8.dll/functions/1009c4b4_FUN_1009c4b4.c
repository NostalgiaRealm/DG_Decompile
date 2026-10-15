/*
 * FUN_1009c4b4 at 1009c4b4
 * undefined __thiscall FUN_1009c4b4(void * this, int param_1)
 * Address ranges: 1009c4b4-1009c4e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009c4b4(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  while (uVar2 != 0) {
    uVar1 = uVar2 - 1;
    iVar3 = uVar2 * 0x20;
    uVar2 = uVar1;
    if (*(int *)(*(int *)this + -0x18 + iVar3) == param_1) {
      FUN_1009c925(this,uVar1);
    }
  }
  return;
}

