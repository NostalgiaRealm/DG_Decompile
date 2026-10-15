/*
 * FUN_10007105 at 10007105
 * undefined __thiscall FUN_10007105(void * this, int param_1)
 * Address ranges: 10007105-1000719b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007105(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(uint *)((int)this + 0xe40) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xe3c) + uVar4 * 4) == param_1) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)((int)this + 0xdc8) == 1)) {
          iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
          uVar2 = *(uint *)(param_1 + 0x10);
          uVar1 = *(uint *)(&DAT_100df4e0 + iVar3);
          *(uint *)(&DAT_100df4e0 + iVar3) = uVar2 + *(uint *)(&DAT_100df4e0 + iVar3);
          *(uint *)(&DAT_100df4e4 + iVar3) =
               *(int *)(&DAT_100df4e4 + iVar3) + (uint)CARRY4(uVar2,uVar1);
        }
        uVar2 = *(uint *)((int)this + 0xe40);
        if (uVar2 <= uVar4) {
          return;
        }
        while (uVar4 = uVar4 + 1, uVar4 < uVar2) {
          *(undefined4 *)(*(int *)((int)this + 0xe3c) + -4 + uVar4 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0xe3c) + uVar4 * 4);
          uVar2 = *(uint *)((int)this + 0xe40);
        }
        *(uint *)((int)this + 0xe40) = uVar2 - 1;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xe40));
  }
  return;
}

