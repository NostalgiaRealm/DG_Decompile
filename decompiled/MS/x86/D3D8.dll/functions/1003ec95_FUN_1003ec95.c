/*
 * FUN_1003ec95 at 1003ec95
 * undefined __thiscall FUN_1003ec95(void * this, uint param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003ec95-1003ed3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003ec95(void *this,uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + param_1 * 4 + 0xdcf8);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0xdd3c) = param_3;
  *(undefined4 *)((int)this + param_1 * 4 + 0xdd7c) = param_4;
  *(int *)((int)this + param_1 * 4 + 0xdcf8) = param_2;
  uVar4 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0xddbc) = *(uint *)((int)this + 0xddbc) | 1 << (param_1 & 0x1f);
  uVar1 = *(uint *)((int)this + 0xddcc) & ~uVar4;
  *(uint *)((int)this + 0xddcc) = uVar1;
  if (param_2 != 0) {
    iVar3 = *(int *)((int)this + param_1 * 4 + 0xdcf8);
    uVar2 = 0;
    if (*(char *)(*(int *)(*(int *)(iVar3 + 0x28) + *(int *)(iVar3 + 0x38) * 8) + 0x34) != '\0') {
      uVar2 = uVar4;
    }
    *(uint *)((int)this + 0xddcc) = uVar2 | uVar1;
    iVar3 = (int)this + 0xd9b0;
    if (this == (void *)0x0) {
      iVar3 = 0;
    }
    *(int *)(*(int *)((int)this + param_1 * 4 + 0xdcf8) + 0x10) = iVar3;
  }
  return;
}

