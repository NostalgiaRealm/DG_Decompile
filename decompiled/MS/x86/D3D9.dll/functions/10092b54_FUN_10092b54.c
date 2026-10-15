/*
 * FUN_10092b54 at 10092b54
 * undefined __thiscall FUN_10092b54(void * this, int param_1, int param_2, undefined4 param_3)
 * Address ranges: 10092b54-10092b90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10092b54(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x14);
  if (param_1 == 1) {
    iVar2 = param_2 + 0x6ff;
  }
  else {
    this = (void *)((int)this + 0x12ac);
    iVar2 = param_2;
  }
  (**(code **)(*(int *)*puVar1 + 0x94))(param_2,param_3,(void *)(iVar2 * 0x10 + (int)this));
  return;
}

