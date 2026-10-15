/*
 * FUN_100781b0 at 100781b0
 * undefined __thiscall FUN_100781b0(void * this, int param_1)
 * Address ranges: 100781b0-10078387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100781b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x23) = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x9e) = *(undefined4 *)(param_1 + 0x9e);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xae) = *(undefined4 *)(param_1 + 0xae);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb2) = *(undefined4 *)(param_1 + 0xb2);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb6) = *(undefined4 *)(param_1 + 0xb6);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xba) = *(undefined4 *)(param_1 + 0xba);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xca) = *(undefined4 *)(param_1 + 0xca);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xda) = *(undefined4 *)(param_1 + 0xda);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xde) = *(undefined4 *)(param_1 + 0xde);
  *(undefined1 *)(*(int *)((int)this + 4) + 0xe6) = *(undefined1 *)(param_1 + 0xe6);
  iVar1 = *(int *)((int)this + 4);
  if (((*(int *)(iVar1 + 8) != *(int *)(param_1 + 8)) ||
      (*(int *)(iVar1 + 0xc2) != *(int *)(param_1 + 0xc2))) ||
     (*(int *)(iVar1 + 0xc6) != *(int *)(param_1 + 0xc6))) {
    *(int *)(iVar1 + 8) = *(int *)(param_1 + 8);
    uVar2 = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc2) = *(undefined4 *)(param_1 + 0xc2);
    *(undefined4 *)(*(int *)((int)this + 4) + 0xc6) = *(undefined4 *)(param_1 + 0xc6);
    if (*(int *)((int)this + 0x1009c) != 0) {
      do {
        iVar1 = uVar2 * 0x28;
        *(undefined4 *)(iVar1 + 0x18 + *(int *)((int)this + 0x10098)) = *(undefined4 *)(param_1 + 8)
        ;
        *(uint *)(iVar1 + 0x10 + *(int *)((int)this + 0x10098)) = *(uint *)(param_1 + 0xc6) & 1;
        uVar2 = uVar2 + 1;
        *(uint *)(iVar1 + 0xc + *(int *)((int)this + 0x10098)) = *(uint *)(param_1 + 0xc2) >> 2 & 1;
      } while (uVar2 < *(uint *)((int)this + 0x1009c));
    }
  }
  *(undefined1 *)(*(int *)((int)this + 4) + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x86) = *(undefined1 *)(param_1 + 0x86);
  *(undefined1 *)(*(int *)((int)this + 4) + 0x83) = *(undefined1 *)(param_1 + 0x83);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1cf) = *(undefined4 *)(param_1 + 0x1cf);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1cb) = *(undefined4 *)(param_1 + 0x1cb);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1d3) = *(undefined4 *)(param_1 + 0x1d3);
  return;
}

