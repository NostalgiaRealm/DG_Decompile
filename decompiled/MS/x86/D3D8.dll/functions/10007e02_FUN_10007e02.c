/*
 * FUN_10007e02 at 10007e02
 * undefined4 __thiscall FUN_10007e02(void * this, uint param_1, int param_2)
 * Address ranges: 10007e02-10007e80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10007e02(void *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1;
  uVar2 = 0;
  param_1 = 0;
  if (*(int *)(uVar1 + 8) != 0) {
    do {
      uVar2 = (uint)*(byte *)(uVar1 + 0x9c + param_1);
      iVar3 = uVar2 * 0xc;
      iVar4 = (int)*(char *)(uVar1 + 0x14 + uVar2 * 8);
      *(uint *)(param_2 + iVar3) =
           *(int *)(*(int *)((int)this + iVar4 * 4 + 0x57bc) + 4) +
           (uint)*(byte *)(uVar1 + 0x17 + uVar2 * 8) * 4 + *(int *)((int)this + iVar4 * 4 + 0x583c);
      *(undefined1 *)(param_2 + 8 + iVar3) = *(undefined1 *)(uVar1 + 0x18 + uVar2 * 8);
      *(undefined1 *)(param_2 + 9 + iVar3) = *(undefined1 *)(uVar1 + 0x15 + uVar2 * 8);
      *(undefined4 *)(param_2 + 4 + iVar3) = *(undefined4 *)((int)this + iVar4 * 4 + 0x57fc);
      uVar2 = param_1 + 1;
      param_1 = uVar2;
    } while (uVar2 < *(uint *)(uVar1 + 8));
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

