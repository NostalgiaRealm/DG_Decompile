/*
 * FUN_100476a5 at 100476a5
 * undefined __thiscall FUN_100476a5(void * this, undefined4 * param_1)
 * Address ranges: 100476a5-1004778c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100476a5(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  int *local_8;
  
  local_c = 0;
  iVar1 = *(int *)(*(int *)this + 4);
  *(undefined4 **)(*(int *)this + 4) = param_1 + 1;
  piVar3 = *(int **)this;
  local_8 = (int *)(piVar3[1] + 0xf + piVar3[3] & 0xfffffff0);
  if (*(int *)(*piVar3 + 8) != 0) {
    do {
      iVar4 = local_c * 0xc;
      uVar5 = (uint)*(byte *)(local_c + 0x214 + *piVar3);
      *(int **)(iVar4 + piVar3[1]) = local_8;
      *(uint *)(iVar4 + 4 + (*(int **)this)[1]) = (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8)
      ;
      *(undefined4 *)(iVar4 + 8 + *(int *)(*(int *)this + 4)) = *(undefined4 *)(iVar1 + 8 + iVar4);
      piVar3 = *(int **)this;
      uVar5 = (uint)*(byte *)(*piVar3 + 0x16 + uVar5 * 8);
      puVar2 = FUN_10045dc1(*(int *)((int)this + 8),uVar5,
                            (undefined4 *)
                            ((piVar3[6] + piVar3[5]) * *(int *)(iVar1 + 4 + iVar4) +
                            *(int *)(iVar1 + iVar4)),*(uint *)(iVar1 + 4 + iVar4),local_8,uVar5);
      piVar3 = *(int **)this;
      local_8 = (int *)((int)puVar2 + 0xfU & 0xfffffff0);
      local_c = local_c + 1;
    } while (local_c < *(uint *)(*piVar3 + 8));
  }
  FUN_100439d0((int *)piVar3[2],local_8,*(uint *)((int)this + 0xc),-piVar3[6],
               *(char *)((int)this + 0x10));
  *(undefined4 *)(*(int *)this + 0x14) = 0;
  *param_1 = local_8;
  *(int **)(*(int *)this + 8) = local_8;
  return;
}

