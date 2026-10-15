/*
 * FUN_1000658f at 1000658f
 * undefined __thiscall FUN_1000658f(void * this, int param_1)
 * Address ranges: 1000658f-10006604
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000658f(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0xb4c) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0xb48) + uVar4 * 4) == param_1) {
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
        uVar1 = *(uint *)(param_1 + 0x68);
        uVar2 = *(uint *)(&DAT_100ba918 + iVar3);
        *(uint *)(&DAT_100ba918 + iVar3) = uVar1 + *(uint *)(&DAT_100ba918 + iVar3);
        *(uint *)(&DAT_100ba91c + iVar3) =
             *(int *)(&DAT_100ba91c + iVar3) + (uint)CARRY4(uVar1,uVar2);
        FUN_10007b3a((int *)((int)this + 0xb48),uVar4);
        FUN_1000164c(this,(undefined4 *)(-(uint)(param_1 != 0) & param_1 + 0x70U));
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xb4c));
  }
  return;
}

