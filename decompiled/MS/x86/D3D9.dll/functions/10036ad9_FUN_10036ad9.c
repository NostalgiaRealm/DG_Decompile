/*
 * FUN_10036ad9 at 10036ad9
 * bool __thiscall FUN_10036ad9(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10036ad9-10036b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10036ad9(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  bVar2 = *(int *)((int)this + 0x1c) != 1;
  if (bVar2) {
    local_1c[3] = param_3 + param_2;
    local_1c[0] = param_2;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_c = 1;
    local_8 = 1;
    piVar1 = *(int **)(*(int *)((int)this + 0xc) + 4);
    (**(code **)(*piVar1 + 0xc0))
              (piVar1,*(undefined4 *)((int)this + 0x10),0,local_1c,param_1 + param_2,0,0);
  }
  return bVar2;
}

