/*
 * FUN_100c29f0 at 100c29f0
 * undefined4 __thiscall FUN_100c29f0(void * this, int * param_1, int param_2)
 * Address ranges: 100c29f0-100c2a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100c29f0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  int local_c;
  int local_8;
  
  uVar3 = 0;
  if ((*(byte *)(*(int *)((int)this + 4) * 0x18 + 0xc + *(int *)this) & 1) != 0) {
    local_8 = 0;
    iVar2 = (param_2 + *(int *)((int)this + 0x1c) * 2) * 4;
    local_c = iVar2 + 4;
    local_10 = iVar2;
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_10,&local_8);
    if (-1 < iVar1) {
      uVar3 = *(undefined4 *)(iVar2 + local_8);
      local_c = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x24))(param_1,0,&local_10);
    }
  }
  return uVar3;
}

