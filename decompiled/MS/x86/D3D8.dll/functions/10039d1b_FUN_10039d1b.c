/*
 * FUN_10039d1b at 10039d1b
 * undefined __thiscall FUN_10039d1b(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, undefined4 param_6, uint * param_7, uint param_8, int param_9, char param_10, char param_11)
 * Address ranges: 10039d1b-10039da1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10039d1b(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,uint *param_7,uint param_8,int param_9,char param_10,char param_11)

{
  uint uVar1;
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68 [25];
  
  FUN_10035800((int)this);
  local_70 = (void *)(-(uint)(param_3 != 0) & param_3 - 0x18U);
  if ((*(byte *)((int)this + 0x5948) & 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x5944);
  }
  FUN_1003ff86(local_70,local_68,uVar1,0);
  local_6c = *(undefined4 *)(param_2 + 0x10);
  FUN_100469e3(this,param_1,param_2,'\0',&local_70,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,0,(uint)*(byte *)((int)local_70 + 0x28));
  return;
}

