/*
 * FUN_100a8c8b at 100a8c8b
 * undefined __thiscall FUN_100a8c8b(void * this, int param_1)
 * Address ranges: 100a8c8b-100a8d73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a8c8b(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  piVar1 = *(int **)(iVar2 + 0x1d64 + (int)this);
  if (piVar1 != (int *)0x0) {
    FUN_1009b6e2(this,piVar1);
    FUN_1009b6e2(this,*(int **)(iVar2 + 0x1d60 + (int)this));
    FUN_1009b6e2(this,*(int **)(iVar2 + 0x1d74 + (int)this));
    FUN_1009b6e2(this,*(int **)(iVar2 + 0x1d6c + (int)this));
    FUN_1009b6e2(this,*(int **)(iVar2 + 0x1d70 + (int)this));
    FUN_1009b6e2(this,*(int **)(iVar2 + 0x1d68 + (int)this));
    *(undefined4 *)(iVar2 + 0x1d64 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x1d60 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x1d74 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x1d6c + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x1d70 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x1d68 + (int)this) = 0;
    FUN_10097999(*(void **)(iVar2 + 0x1c9c + (int)this),*(int **)(iVar2 + 0x1d5c + (int)this),2,
                 (int *)0x0,0,0);
    FUN_10097999(*(void **)(iVar2 + 0x1c98 + (int)this),*(int **)(iVar2 + 0x1d58 + (int)this),2,
                 (int *)0x0,0,0);
    *(undefined4 *)(iVar2 + 0x1d58 + (int)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x1d5c + (int)this) = 0xffffffff;
  }
  return;
}

