/*
 * FUN_1001583d at 1001583d
 * undefined4 __thiscall FUN_1001583d(void * this, int param_1, int * param_2, char param_3)
 * Address ranges: 1001583d-100158b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001583d(void *this,int param_1,int *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int local_14 [4];
  
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_14[0] = param_1;
  uVar2 = FUN_10013fc2(this,local_14,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    *(int *)((int)this + 0x18) = param_1;
    *(int **)((int)this + 0x28) = param_2;
    if (param_3 != '\0') {
      iVar1 = *(int *)(param_1 + 4);
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar1 + 100);
      *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar1 + 0x68);
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x40) = 0x3f800000;
      uVar2 = (**(code **)(**(int **)((int)this + 0x14) + 0x3c))((undefined4 *)((int)this + 0x2c));
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2;
}

