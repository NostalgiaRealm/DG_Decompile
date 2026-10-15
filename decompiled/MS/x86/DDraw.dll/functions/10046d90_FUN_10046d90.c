/*
 * FUN_10046d90 at 10046d90
 * undefined __thiscall FUN_10046d90(void * this, int param_1)
 * Address ranges: 10046d90-10046ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046d90(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x1510;
  if (((*(int *)(iVar2 + 0x7c4 + (int)this) != 0) || (*(int *)(iVar2 + 0x7c8 + (int)this) != 0)) ||
     (*(int *)(iVar2 + 0x7cc + (int)this) != 0)) {
    *(undefined4 *)(iVar2 + 0x7c4 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x7c8 + (int)this) = 0;
    *(undefined4 *)(iVar2 + 0x7cc + (int)this) = 0;
    piVar1 = *(int **)(iVar2 + 0x514 + (int)this);
    (**(code **)(*piVar1 + 0x4c))(piVar1,0,0,0);
  }
  return;
}

