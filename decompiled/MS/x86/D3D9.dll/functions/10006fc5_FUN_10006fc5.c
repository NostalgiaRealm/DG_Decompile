/*
 * FUN_10006fc5 at 10006fc5
 * undefined __thiscall FUN_10006fc5(void * this, int param_1)
 * Address ranges: 10006fc5-1000706d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006fc5(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0xe28) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xe24) + uVar3 * 4) == param_1) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)((int)this + 0xdc8) == 1)) {
          iVar4 = *(int *)((int)this + 0xdf0) * 0x228;
          uVar1 = FUN_10012477(*(int *)(param_1 + 0x40),*(uint *)(param_1 + 0x44),
                               *(int *)(param_1 + 0x28));
          uVar2 = *(uint *)(&DAT_100df4e0 + iVar4);
          *(uint *)(&DAT_100df4e0 + iVar4) = uVar1 + *(uint *)(&DAT_100df4e0 + iVar4);
          *(uint *)(&DAT_100df4e4 + iVar4) =
               *(int *)(&DAT_100df4e4 + iVar4) + (uint)CARRY4(uVar1,uVar2);
        }
        uVar2 = *(uint *)((int)this + 0xe28);
        if (uVar2 <= uVar3) {
          return;
        }
        while (uVar3 = uVar3 + 1, uVar3 < uVar2) {
          *(undefined4 *)(*(int *)((int)this + 0xe24) + -4 + uVar3 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0xe24) + uVar3 * 4);
          uVar2 = *(uint *)((int)this + 0xe28);
        }
        *(uint *)((int)this + 0xe28) = uVar2 - 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0xe28));
  }
  return;
}

