/*
 * FUN_10006d7f at 10006d7f
 * undefined __thiscall FUN_10006d7f(void * this, int param_1)
 * Address ranges: 10006d7f-10006e21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10006d7f(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = FUN_100086bd((void *)((int)this + 0xd94),&param_1);
  if (uVar2 == 0xffffffff) {
    uVar2 = 0;
    if (*(uint *)((int)this + 0xdf8) != 0) {
      do {
        if (*(int *)(*(int *)((int)this + 0xdf4) + uVar2 * 4) == param_1) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          iVar4 = *(int *)((int)this + 0xdf0) * 0x228;
          uVar3 = *(uint *)(param_1 + 0xcc);
          uVar1 = *(uint *)(&DAT_100df4e0 + iVar4);
          *(uint *)(&DAT_100df4e0 + iVar4) = uVar3 + *(uint *)(&DAT_100df4e0 + iVar4);
          *(uint *)(&DAT_100df4e4 + iVar4) =
               *(int *)(&DAT_100df4e4 + iVar4) + (uint)CARRY4(uVar3,uVar1);
          uVar3 = *(uint *)((int)this + 0xdf8);
          if (uVar3 <= uVar2) {
            return;
          }
          while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
            *(undefined4 *)(*(int *)((int)this + 0xdf4) + -4 + uVar2 * 4) =
                 *(undefined4 *)(*(int *)((int)this + 0xdf4) + uVar2 * 4);
            uVar3 = *(uint *)((int)this + 0xdf8);
          }
          *(uint *)((int)this + 0xdf8) = uVar3 - 1;
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0xdf8));
    }
  }
  return;
}

