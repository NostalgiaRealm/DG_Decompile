/*
 * FUN_10023578 at 10023578
 * undefined __thiscall FUN_10023578(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 10023578-100236c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10023578(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            int param_5)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *local_14 [3];
  float local_8;
  
  FUN_1000c5f4(*(void **)((int)this + 0x138),5,*(int *)((int)this + 0x8c4),
               *(int *)((int)this + 0x8b8),*(int *)((int)this + 0x8a8));
  local_8 = (float)param_4;
  if (param_4 < 0) {
    local_8 = local_8 + 4.2949673e+09;
  }
  fVar2 = (float)param_5;
  if (param_5 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
  iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1,*(undefined4 *)((int)this + 0x8cc),0,4,0,local_14);
  if (-1 < iVar3) {
    *local_14[0] = 0;
    local_14[0][1] = 0;
    local_14[0][2] = param_3;
    local_14[0][3] = 0;
    local_14[0][4] = local_8;
    local_14[0][5] = 0;
    local_14[0][6] = param_3;
    local_14[0][7] = 0;
    local_14[0][8] = 0;
    local_14[0][9] = fVar2;
    local_14[0][10] = param_3;
    local_14[0][0xb] = 0;
    local_14[0][0xc] = local_8;
    local_14[0][0xd] = fVar2;
    local_14[0][0xe] = param_3;
    local_14[0][0xf] = 0;
    piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
    (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x8cc),0);
  }
  FUN_1001eaa6(*(int *)((int)this + 0x138) + 0x4090);
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,4,0);
  return;
}

