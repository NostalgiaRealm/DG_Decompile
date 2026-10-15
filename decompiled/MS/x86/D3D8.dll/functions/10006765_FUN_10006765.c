/*
 * FUN_10006765 at 10006765
 * undefined __thiscall FUN_10006765(void * this, int param_1)
 * Address ranges: 10006765-100067fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006765(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(uint *)((int)this + 0xb70) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xb6c) + uVar4 * 4) == param_1) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)((int)this + 0xb04) == 1)) {
          iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
          uVar2 = *(uint *)(param_1 + 0x10);
          uVar1 = *(uint *)(&DAT_100ba918 + iVar3);
          *(uint *)(&DAT_100ba918 + iVar3) = uVar2 + *(uint *)(&DAT_100ba918 + iVar3);
          *(uint *)(&DAT_100ba91c + iVar3) =
               *(int *)(&DAT_100ba91c + iVar3) + (uint)CARRY4(uVar2,uVar1);
        }
        uVar2 = *(uint *)((int)this + 0xb70);
        if (uVar2 <= uVar4) {
          return;
        }
        while (uVar4 = uVar4 + 1, uVar4 < uVar2) {
          *(undefined4 *)(*(int *)((int)this + 0xb6c) + -4 + uVar4 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0xb6c) + uVar4 * 4);
          uVar2 = *(uint *)((int)this + 0xb70);
        }
        *(uint *)((int)this + 0xb70) = uVar2 - 1;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xb70));
  }
  return;
}

