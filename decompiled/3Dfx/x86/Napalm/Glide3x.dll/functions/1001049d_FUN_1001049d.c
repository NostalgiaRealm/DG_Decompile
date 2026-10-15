/*
 * FUN_1001049d at 1001049d
 * undefined __thiscall FUN_1001049d(void * this, int * param_1)
 * Address ranges: 1001049d-10010547
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001049d(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  bool local_5;
  
  FUN_1001164d(*(int **)((int)this + 0x365c));
  (**(code **)(*(int *)this + 0x198))();
  *(int *)((int)this + 0x2b3c) = *param_1;
  *(int *)((int)this + 0x2b40) = param_1[1];
  *(int *)((int)this + 0x2b44) = param_1[2];
  *(int *)((int)this + 0x2b48) = param_1[3];
  *(undefined1 *)((int)this + 0x3651) = 1;
  uVar1 = FUN_100118f8(*(void **)((int)this + 0x365c),*(int *)((int)this + 0x2b1c));
  if (uVar1 == 0xffffffff) {
    local_5 = true;
  }
  else {
    iVar2 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))(uVar1);
    if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == *(int *)(iVar2 + 0x20))) &&
       (param_1[3] == *(int *)(iVar2 + 0x24))) {
      local_5 = true;
    }
    else {
      local_5 = false;
    }
  }
  if (local_5 != (*(int *)((int)this + 0x2cbc) == 0)) {
    *(undefined1 *)((int)this + 0x2daa) = 1;
    *(uint *)((int)this + 0x2cbc) = local_5 ^ 1;
  }
  return;
}

