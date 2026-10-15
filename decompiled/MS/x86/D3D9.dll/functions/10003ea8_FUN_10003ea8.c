/*
 * FUN_10003ea8 at 10003ea8
 * undefined __thiscall FUN_10003ea8(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10003ea8-10003fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003ea8(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int *piVar5;
  int local_48 [16];
  uint local_8;
  
  *(undefined4 *)((int)this + 0x6698) = 0;
  *(undefined4 *)((int)this + 0x6694) = 0;
  *(undefined4 *)((int)this + 0x6690) = 0;
  FUN_100cfed0(*(int **)((int)this + 0xd80),0,0x87b0);
  FUN_100289c6(local_48);
  local_8 = 0;
  do {
    piVar4 = local_48;
    piVar5 = (int *)(*(int *)((int)this + 0xd80) + local_8 * 0x40);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_10019671(this,local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x10a);
  FUN_1001869b(this);
  FUN_10018733(this);
  FUN_10018894(this);
  FUN_100187e9((int)this);
  FUN_100189db(this_00,param_1,param_2);
  *(undefined4 *)((int)this + 0xcc8) = 0xff;
  puVar1 = (undefined4 *)((int)this + 0x14);
  uVar2 = (uint)(*(int *)((int)this + 0x28) != 0);
  if (*(uint *)((int)this + 0x44c) != uVar2) {
    (**(code **)(*(int *)*puVar1 + 0x48))(7,uVar2);
  }
  *(uint *)((int)this + 0x44c) = uVar2;
  (**(code **)(*(int *)*puVar1 + 0x3c))((int)this + 0x2c);
  (**(code **)(*(int *)*puVar1 + 0x2c))(*(undefined4 *)((int)this + 0x3b0));
  (**(code **)(*(int *)*puVar1 + 0x30))(*(undefined1 *)((int)this + 0x3c6));
  (**(code **)(*(int *)*puVar1 + 0x34))(*(undefined1 *)(DAT_100dea74 + 0x7e9));
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0xfff;
  *(undefined4 *)((int)this + 0x398) = 0x45000000;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0x45000000;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  return;
}

