/*
 * FUN_10021641 at 10021641
 * undefined __thiscall FUN_10021641(void * this, int param_1, int param_2, int param_3, int param_4, float param_5)
 * Address ranges: 10021641-1002171a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10021641(void *this,int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 0xc;
    *(float *)((int)this + iVar4 + param_1 * 0xc18 + 0x9c) =
         (float)*(ushort *)(param_2 + uVar3 * 2) / param_5;
    *(float *)((int)this + iVar4 + param_1 * 0xc18 + 0xa0) =
         (float)*(ushort *)(param_3 + uVar3 * 2) / param_5;
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 1;
    *(float *)((int)this + iVar4 + param_1 * 0xc18 + 0xa4) =
         (float)*(ushort *)(param_4 + iVar1) / param_5;
  } while (uVar3 < 0x100);
  uVar3 = 0;
  if (*(uint *)((int)this + 0x9c) != 0) {
    do {
      piVar2 = (int *)(*(int *)((int)this + 0x98) + uVar3 * 0x28);
      if ((param_1 == piVar2[5]) && ((char)piVar2[9] != '\0')) {
        FUN_10021074(this,piVar2);
        FUN_100499bf(*(void **)((int)this + 0x10),
                     *(int *)(uVar3 * 0x28 + *(int *)((int)this + 0x98)),
                     (int *)(param_1 * 0xc18 + 0xa8 + (int)this),(undefined4 *)((int)this + 0xc));
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x9c));
  }
  return;
}

