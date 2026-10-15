/*
 * FUN_1000f1c3 at 1000f1c3
 * undefined __thiscall FUN_1000f1c3(void * this, int * param_1)
 * Address ranges: 1000f1c3-1000f26d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f1c3(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  bool local_5;
  
  FUN_100102f1(*(int **)((int)this + 0x32dc));
  (**(code **)(*(int *)this + 0x170))();
  *(int *)((int)this + 0x2a00) = *param_1;
  *(int *)((int)this + 0x2a04) = param_1[1];
  *(int *)((int)this + 0x2a08) = param_1[2];
  *(int *)((int)this + 0x2a0c) = param_1[3];
  *(undefined1 *)((int)this + 0x32d1) = 1;
  uVar1 = FUN_1001059c(*(void **)((int)this + 0x32dc),*(int *)((int)this + 0x29e0));
  if (uVar1 == 0xffffffff) {
    local_5 = true;
  }
  else {
    iVar2 = (**(code **)(**(int **)((int)this + 0x32dc) + 0x2c))(uVar1);
    if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == *(int *)(iVar2 + 0x20))) &&
       (param_1[3] == *(int *)(iVar2 + 0x24))) {
      local_5 = true;
    }
    else {
      local_5 = false;
    }
  }
  if (local_5 != (*(int *)((int)this + 0x2b7c) == 0)) {
    *(undefined1 *)((int)this + 0x2c62) = 1;
    *(uint *)((int)this + 0x2b7c) = local_5 ^ 1;
  }
  return;
}

