/*
 * FUN_10092150 at 10092150
 * undefined __thiscall FUN_10092150(void * this, int param_1)
 * Address ranges: 10092150-10092201
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_10092150(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14 [4];
  
  uVar2 = 0;
  piVar3 = *(int **)((int)this + 0x28);
  bVar1 = false;
  do {
    if (bVar1) break;
    local_14[uVar2] = *(int *)((int)this + uVar2 * 4 + 0x18);
    if (param_1 == *(int *)((int)this + uVar2 * 4 + 0xc270)) {
      bVar1 = true;
      *(undefined4 *)((int)this + uVar2 * 4 + 0xc270) = 0;
      local_14[uVar2] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (param_1 == *(int *)((int)this + 0xc280)) {
    *(undefined4 *)((int)this + 0xc280) = 0;
    piVar3 = (int *)0x0;
  }
  else if (!bVar1) {
    return;
  }
  if (*(int *)((int)this + 0xc270) == 0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0x44))(4,1,&local_44,local_14 + 1);
  }
  else {
    FUN_100180a8(this,local_14,piVar3,'\0');
  }
  return;
}

