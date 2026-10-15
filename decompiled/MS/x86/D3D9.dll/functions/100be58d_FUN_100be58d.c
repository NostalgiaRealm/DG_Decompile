/*
 * FUN_100be58d at 100be58d
 * undefined __thiscall FUN_100be58d(void * this, uint param_1)
 * Address ranges: 100be58d-100be5ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100be58d(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != 0xffffffff) {
    uVar2 = FUN_1000887d(this,param_1,0);
    if (uVar2 != *(uint *)((int)this + 8)) {
      iVar1 = *(int *)((int)this + 4);
      iVar3 = uVar2 * 0x10;
      if (((*(uint *)(iVar3 + iVar1) == param_1) && (*(int *)(iVar3 + 4 + iVar1) == 0)) &&
         (piVar4 = (int *)(iVar3 + 0xc + iVar1), piVar4 != (int *)0x0)) {
        *(undefined1 *)(*piVar4 + 0x20) = 0;
      }
    }
  }
  return;
}

