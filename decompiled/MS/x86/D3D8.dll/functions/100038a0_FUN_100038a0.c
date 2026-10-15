/*
 * FUN_100038a0 at 100038a0
 * undefined __thiscall FUN_100038a0(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100038a0-100039f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100038a0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int *piVar5;
  int local_48 [16];
  uint local_8;
  
  *(undefined4 *)((int)this + 0x58b8) = 0;
  *(undefined4 *)((int)this + 0x58b4) = 0;
  *(undefined4 *)((int)this + 0x58b0) = 0;
  FUN_100ada8e(*(int **)((int)this + 0xabc),0,0x87b0);
  FUN_10021331(local_48);
  local_8 = 0;
  do {
    piVar4 = local_48;
    piVar5 = (int *)(*(int *)((int)this + 0xabc) + local_8 * 0x40);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_1001553d(this,local_8);
    local_8 = local_8 + 1;
  } while (local_8 < 0x10a);
  FUN_1001451e(this);
  FUN_100145f1(this);
  FUN_1001474c((int)this);
  FUN_100146a1((int)this);
  FUN_1001489d(this_00,param_1,param_2);
  *(undefined4 *)((int)this + 0xa04) = 0xff;
  puVar1 = (undefined4 *)((int)this + 0x14);
  uVar2 = (uint)(*(int *)((int)this + 0x28) != 0);
  if (*(uint *)((int)this + 0x2a8) != uVar2) {
    (**(code **)(*(int *)*puVar1 + 0x48))(7,uVar2);
  }
  *(uint *)((int)this + 0x2a8) = uVar2;
  (**(code **)(*(int *)*puVar1 + 0x3c))((int)this + 0x2c);
  (**(code **)(*(int *)*puVar1 + 0x2c))(*(undefined4 *)((int)this + 0x20c));
  (**(code **)(*(int *)*puVar1 + 0x30))(*(undefined1 *)((int)this + 0x222));
  (**(code **)(*(int *)*puVar1 + 0x34))(*(undefined1 *)(DAT_100ba2b4 + 0x7e9));
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0xfff;
  *(undefined4 *)((int)this + 500) = 0x45000000;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0x45000000;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  return;
}

