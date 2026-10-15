/*
 * FUN_1003bc01 at 1003bc01
 * undefined __thiscall FUN_1003bc01(void * this, undefined4 * param_1)
 * Address ranges: 1003bc01-1003bcd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003bc01(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(*(int *)this + 4);
  *(undefined4 **)(*(int *)this + 4) = param_1 + 1;
  piVar3 = *(int **)this;
  piVar4 = (int *)(piVar3[1] + 0xf + piVar3[3] & 0xfffffff0);
  if (*(int *)(*piVar3 + 8) != 0) {
    do {
      uVar5 = (uint)*(byte *)(local_8 + 0x9c + *piVar3);
      *(int **)(piVar3[1] + local_8 * 8) = piVar4;
      *(uint *)((*(int **)this)[1] + 4 + local_8 * 8) =
           (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8);
      uVar5 = (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8);
      puVar2 = FUN_1003a334(*(int *)((int)this + 8),uVar5,
                            (undefined4 *)
                            ((*(int *)(*(int *)this + 0x18) + *(int *)(*(int *)this + 0x14)) *
                             *(int *)(iVar1 + 4 + local_8 * 8) + *(int *)(iVar1 + local_8 * 8)),
                            *(uint *)(iVar1 + 4 + local_8 * 8),piVar4,uVar5);
      piVar3 = *(int **)this;
      piVar4 = (int *)((int)puVar2 + 0xfU & 0xfffffff0);
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(*piVar3 + 8));
  }
  FUN_10038060((int *)piVar3[2],piVar4,*(uint *)((int)this + 0xc),-piVar3[6],
               *(char *)((int)this + 0x10));
  *(undefined4 *)(*(int *)this + 0x14) = 0;
  *param_1 = piVar4;
  *(int **)(*(int *)this + 8) = piVar4;
  return;
}

