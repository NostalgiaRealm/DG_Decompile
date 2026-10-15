/*
 * FUN_10057a39 at 10057a39
 * undefined __thiscall FUN_10057a39(void * this, uint param_1, uint param_2, int param_3)
 * Address ranges: 10057a39-10057a9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057a39(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(*(int *)this + 0xec))(0);
  for (uVar3 = param_1; uVar3 < param_2; uVar3 = uVar3 + 1) {
    iVar2 = uVar3 * 0x10;
    iVar1 = iVar2 + param_1 * -0x10;
    *(undefined4 *)((int)this + iVar2 + 0x6340) = *(undefined4 *)(param_3 + iVar1);
    *(undefined4 *)((int)this + iVar2 + 0x6344) = *(undefined4 *)(param_3 + 4 + iVar1);
    *(undefined4 *)((int)this + iVar2 + 0x6348) = *(undefined4 *)(param_3 + 8 + iVar1);
  }
  *(undefined1 *)((int)this + 0xf697) = 1;
  return;
}

