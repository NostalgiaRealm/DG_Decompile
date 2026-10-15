/*
 * FUN_10007c0b at 10007c0b
 * undefined4 __thiscall FUN_10007c0b(void * this, int param_1, int * param_2, undefined4 param_3, char param_4)
 * Address ranges: 10007c0b-10007c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10007c0b(void *this,int param_1,int *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_14 [4];
  
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[0] = param_1;
  uVar2 = FUN_10006421(this,local_14,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    *(int *)((int)this + 0x18) = param_1;
    *(int **)((int)this + 0x28) = param_2;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar1 + 0x68);
    uVar3 = (**(code **)(**(int **)((int)this + 0x14) + 0x44))((undefined4 *)((int)this + 0x2c));
    if (param_4 != '\0') {
      uVar2 = (uint)(*(int *)((int)this + 0x28) != 0);
      if (*(uint *)((int)this + 0x2ac) != uVar2) {
        uVar3 = (**(code **)(**(int **)((int)this + 0x14) + 0x50))(7,uVar2);
      }
      *(uint *)((int)this + 0x2ac) = uVar2;
    }
    uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2;
}

