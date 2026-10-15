/*
 * FUN_1004aa35 at 1004aa35
 * undefined __thiscall FUN_1004aa35(void * this, int param_1, uint param_2)
 * Address ranges: 1004aa35-1004aa8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004aa35(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 != 0xffffffff) {
    iVar4 = param_1 * 0x16c0 + *(int *)((int)this + 4);
    uVar1 = FUN_10038aea((void *)(iVar4 + 0x1d34),param_2,0);
    if (uVar1 != *(uint *)(iVar4 + 0x1d3c)) {
      iVar4 = *(int *)(iVar4 + 0x1d38);
      iVar2 = uVar1 * 0x10;
      if (((*(uint *)(iVar2 + iVar4) == param_2) && (*(int *)(iVar2 + 4 + iVar4) == 0)) &&
         (piVar3 = (int *)(iVar2 + 0xc + iVar4), piVar3 != (int *)0x0)) {
        *(undefined1 *)(*piVar3 + 0x20) = 0;
      }
    }
  }
  return;
}

