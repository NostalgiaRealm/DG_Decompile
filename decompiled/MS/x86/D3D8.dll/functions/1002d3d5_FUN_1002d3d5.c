/*
 * FUN_1002d3d5 at 1002d3d5
 * undefined4 __thiscall FUN_1002d3d5(void * this, byte param_1, byte param_2, undefined4 * param_3)
 * Address ranges: 1002d3d5-1002d42b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002d3d5(void *this,byte param_1,byte param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10 [3];
  
  uVar3 = 1;
  if (*(int *)((int)this + 0x1c) == 1) {
    piVar1 = *(int **)(*(int *)((int)this + 0xc) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x10),0,param_1 ^ 1 | 4,
                       (uint)param_2 << 0x14,local_10);
    if (iVar2 == -0x7789fde4) {
      uVar3 = 2;
    }
    else if (-1 < iVar2) {
      uVar3 = 0;
      *param_3 = local_10[0];
    }
  }
  return uVar3;
}

