/*
 * FUN_1003f7d7 at 1003f7d7
 * undefined __thiscall FUN_1003f7d7(void * this, int * param_1)
 * Address ranges: 1003f7d7-1003f89c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f7d7(void *this,int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == *(int **)((int)this + 0x18)) {
    *(int **)((int)this + 0x18) = param_1;
    piVar4 = (int *)(**(code **)(*param_1 + 0x48))();
    *(int **)((int)this + 0x28) = piVar4;
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar4 + 0x44))();
    }
    *(undefined1 *)((int)this + 0xfc) = uVar2;
    local_2c = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x18) + 4) + 0x50);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (*(int *)((int)this + 0x28) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 4) + 0x50);
    }
    cVar3 = (**(code **)(**(int **)((int)this + 0x14) + 0x48))(&local_2c,uVar5);
    if (cVar3 != '\0') {
      iVar1 = param_1[1];
      local_1c = *(undefined4 *)(iVar1 + 0x50);
      local_18 = *(undefined4 *)(iVar1 + 0x6c);
      local_14 = *(undefined4 *)(iVar1 + 0x70);
      if (*(int *)((int)this + 0x28) == 0) {
        local_10 = 0;
      }
      else {
        local_10 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 4) + 0x50);
      }
      local_c = 0;
      local_8 = 0;
      (**(code **)(**(int **)((int)this + 0x14) + 0x4c))(1,1,&local_1c,&local_10);
      *(undefined2 *)((int)this + 0xfe) = 0x100;
    }
  }
  return;
}

