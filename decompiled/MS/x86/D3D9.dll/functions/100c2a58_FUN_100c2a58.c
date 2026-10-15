/*
 * FUN_100c2a58 at 100c2a58
 * undefined __thiscall FUN_100c2a58(void * this, int * param_1, int param_2)
 * Address ranges: 100c2a58-100c2aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c2a58(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((*(byte *)(*(int *)((int)this + 4) * 0x18 + 0xc + *(int *)this) & 1) != 0) {
    iVar1 = *(int *)((int)this + 0x1c);
    local_8 = 0;
    local_10 = 0;
    local_c = 0;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_10,&local_8);
    if (-1 < iVar2) {
      *(undefined4 *)(local_8 + (param_2 + iVar1 * 2) * 4) = 0;
      (**(code **)(*param_1 + 0x24))(param_1,0,&local_10);
    }
  }
  return;
}

