/*
 * FUN_100bb1dc at 100bb1dc
 * undefined __thiscall FUN_100bb1dc(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100bb1dc-100bb257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100bb1dc(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  longlong local_2c;
  undefined4 local_24;
  longlong local_1c;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_100ba856((int)this);
  FUN_100ba94f((int)this);
  iVar1 = *(int *)((int)this + 0x910);
  piVar2 = *(int **)(*(int *)((int)this + 0x900) + 8);
  local_2c = (**(code **)(*piVar2 + 0x2c))(piVar2);
  local_2c = local_2c + (ulonglong)(uint)(iVar1 * 8);
  local_24 = param_1;
  local_1c = local_2c + 4;
  local_14 = param_2;
  local_c = 2;
  local_8 = 2;
  (**(code **)(**(int **)((int)this + 0x638) + 0x108))
            (*(int **)((int)this + 0x638),2,&local_2c,&local_c);
  return;
}

