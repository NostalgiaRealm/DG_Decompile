/*
 * FUN_1004ce74 at 1004ce74
 * bool __thiscall FUN_1004ce74(void * this, int param_1, undefined4 * param_2, int param_3, undefined4 param_4)
 * Address ranges: 1004ce74-1004cf97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1004ce74(void *this,int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_48 [7];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  void *local_8;
  
  local_c = *(int *)(param_1 + 8);
  local_8 = (void *)(local_c * 0x16c0 + (int)this);
  if (param_3 == 0) {
    param_3 = 4;
  }
  else {
    param_3 = *(int *)(&DAT_10051e60 + param_3 * 4);
  }
  puVar8 = local_48;
  for (iVar6 = 7; iVar4 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1c = param_4;
  local_14 = param_3;
  local_10 = 2;
  local_20 = 2;
  if (*(char *)((int)this + 0x2d7) != '\0') {
    local_10 = 0x802;
  }
  local_2c = 1;
  local_28 = 0;
  local_24 = 0x60;
  local_18 = 1;
  uVar2 = *(undefined4 *)(*(int *)((int)local_8 + 0x19c0) + 8);
  uVar3 = *(undefined4 *)((int)this + 0x4ec);
  cVar5 = '\0';
  if (*(int *)((int)this + 0x518) != 0) {
    uVar7 = 0;
    cVar5 = '\0';
    do {
      if (cVar5 != '\0') break;
      cVar5 = (**(code **)(**(int **)(*(int *)((int)this + 0x514) + uVar7 * 4) + 0x10))
                        (iVar4,uVar3,uVar2,local_48,param_1 + 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x518));
  }
  piVar1 = (int *)(param_1 + 4);
  if (cVar5 == '\0') {
    (**(code **)(**(int **)((int)this + 0x4ec) + 0x28))
              (*(int **)((int)this + 0x4ec),*(undefined4 *)(*(int *)((int)local_8 + 0x19c0) + 8),
               local_48,piVar1);
  }
  else {
    (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
  }
  *(undefined1 *)(param_1 + 0xd5c) = *(undefined1 *)((int)this + 0x2d7);
  return *piVar1 != 0;
}

