/*
 * FUN_10006e22 at 10006e22
 * undefined __thiscall FUN_10006e22(void * this, int param_1)
 * Address ranges: 10006e22-10006e97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006e22(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0xe04) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xe00) + uVar4 * 4) == param_1) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
        uVar1 = *(uint *)(param_1 + 0x68);
        uVar2 = *(uint *)(&DAT_100df4e0 + iVar3);
        *(uint *)(&DAT_100df4e0 + iVar3) = uVar1 + *(uint *)(&DAT_100df4e0 + iVar3);
        *(uint *)(&DAT_100df4e4 + iVar3) =
             *(int *)(&DAT_100df4e4 + iVar3) + (uint)CARRY4(uVar1,uVar2);
        FUN_1000868d((int *)((int)this + 0xe00),uVar4);
        FUN_100014dc(this,(undefined4 *)(-(uint)(param_1 != 0) & param_1 + 0x70U));
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xe04));
  }
  return;
}

