/*
 * FUN_100660d3 at 100660d3
 * undefined1 __thiscall FUN_100660d3(void * this, undefined4 param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100660d3-10066179
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_100660d3(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  int *piVar2;
  LPVOID local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  pvVar1 = *(void **)((int)this + 0x14);
  local_8 = *(int *)((int)pvVar1 + 0x14) * 0x1510;
  local_c = *(int *)((int)pvVar1 + 0x1cf00);
  if (*(char *)((int)this + -3) == '\0') {
    piVar2 = *(int **)(local_8 + 0x514 + local_c);
    (**(code **)(*piVar2 + 0xc0))(piVar2,*(undefined4 *)((int)this + 0x18),param_1,0);
  }
  else {
    FUN_10079353((void *)((int)this + -0x1c),(int *)&local_1c,pvVar1,(byte)param_1,param_2,param_3,
                 param_4);
    if (local_1c == (LPVOID)0x0) {
      return 0;
    }
    piVar2 = *(int **)(local_8 + 0x514 + local_c);
    (**(code **)(*piVar2 + 0xc0))
              (piVar2,*(undefined4 *)((int)this + 0x18),param_1,0,local_1c,local_18 << 2,
               local_14 * local_18 * 4);
    thunk_FUN_100ad48c(local_1c);
  }
  return 1;
}

