/*
 * FUN_10049495 at 10049495
 * undefined __thiscall FUN_10049495(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10049495-10049557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049495(void *this,int param_1,int param_2,uint param_3)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = param_3;
  this_00 = (void *)((int)this + 0x28);
  puVar1 = (undefined4 *)FUN_100496a1(this_00,&local_8);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = param_1 + -1 + *(int *)((int)this + 0x18) & -*(int *)((int)this + 0x18);
    if (uVar2 != 0) {
      FUN_1004fd4c(puVar1[4],puVar1[5],(param_2 - param_3) / *(uint *)((int)this + 0x18),
                   ((uVar2 - param_3) + param_2) / *(uint *)((int)this + 0x18));
      puVar1[8] = puVar1[8] - uVar2 / *(uint *)((int)this + 0x18);
    }
    if ((puVar1[8] == 0) &&
       (((puVar1[3] != 0 || (*(uint *)((int)this + 0x1c) < (uint)puVar1[2])) &&
        (*(int *)((int)this + 0x20) == 0)))) {
      FUN_1004942d(puVar1);
      uVar2 = FUN_100497e8(this_00,param_3,0);
      if (uVar2 != *(uint *)((int)this + 0x30)) {
        if ((*(uint *)(uVar2 * 0x38 + *(int *)((int)this + 0x2c)) == param_3) &&
           (*(int *)(uVar2 * 0x38 + 4 + *(int *)((int)this + 0x2c)) == 0)) {
          FUN_100496db(this_00,uVar2);
        }
      }
    }
  }
  return;
}

