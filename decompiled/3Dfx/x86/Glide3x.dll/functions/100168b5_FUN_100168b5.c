/*
 * FUN_100168b5 at 100168b5
 * undefined __thiscall FUN_100168b5(void * this, undefined4 * param_1)
 * Address ranges: 100168b5-10016928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100168b5(void *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_8;
  
  this_00 = (void *)*param_1;
  iVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  iVar4 = param_1[4];
  local_8 = CONCAT31((int3)((uint)this >> 8),*(undefined1 *)(param_1 + 5));
  *(undefined4 *)((int)this_00 + 0x4038) = param_1[6];
  FUN_100082f0(this_00,iVar1,uVar2,uVar3,iVar4,local_8);
  if (param_1[7] != 0) {
    FUN_10049678((void *)(*(int *)((int)this_00 + 0x3308) + 0x14f0),param_1[9],param_1[7],param_1[8]
                );
  }
  return;
}

