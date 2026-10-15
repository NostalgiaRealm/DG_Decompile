/*
 * FUN_10050ba8 at 10050ba8
 * undefined __thiscall FUN_10050ba8(void * this, int param_1, int * param_2)
 * Address ranges: 10050ba8-10050c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10050ba8(void *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0xc) != 0) {
    local_8 = *(int *)((int)this + 4);
    local_c = param_2[1];
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0x14) != -1) {
      FUN_1004301c(*(void **)(param_1 * 0x16c0 + 0x19c4 + local_8),*(uint *)(iVar1 + 4),0,0,
                   *(uint *)(iVar1 + 0x14));
    }
    local_2c = param_2[1];
    local_28 = param_2[3];
    iStack_24 = param_2[4];
    iStack_20 = param_2[5];
    iStack_1c = param_2[6];
    local_18 = *(undefined4 *)(local_c + 0xd70 + *(int *)(local_c + 0xd68) * 4);
    FUN_10042460(*(void **)(param_1 * 0x16c0 + 0x1c9c + local_8),&local_14,
                 *(uint *)(local_c + 0xd78),*(int *)(local_c + 0xd68));
    local_10 = FUN_1003f798(*(void **)(*(int *)((int)this + 4) + 0x172c0));
    uVar2 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 8) + uVar2 * 4) + 0x24))(param_1,&local_2c);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0xc));
    }
  }
  return;
}

