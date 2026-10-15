/*
 * FUN_10028811 at 10028811
 * undefined __thiscall FUN_10028811(void * this, undefined4 param_1, uint param_2, int param_3)
 * Address ranges: 10028811-10028873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10028811(void *this,undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 != 0) {
    local_1c[0] = param_2 & 0xfffffffc;
    local_1c[3] = ((param_2 & 3) + 3 + param_3 & 0xfffffffc) + local_1c[0];
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_c = 1;
    local_8 = 1;
    piVar1 = *(int **)(*(int *)((int)this + 0x3188) + 4);
    (**(code **)(*piVar1 + 0xc0))(piVar1,*(undefined4 *)((int)this + 0x31ac),0,local_1c,param_1,0,0)
    ;
  }
  return;
}

