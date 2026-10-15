/*
 * FUN_10045494 at 10045494
 * undefined __thiscall FUN_10045494(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, undefined4 param_6, uint * param_7, uint param_8, int param_9, char param_10, char param_11)
 * Address ranges: 10045494-1004551a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10045494(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,uint *param_7,uint param_8,int param_9,char param_10,char param_11)

{
  uint uVar1;
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68 [25];
  
  FUN_10040dc0((int)this);
  local_70 = (void *)(-(uint)(param_3 != 0) & param_3 - 0x18U);
  if ((*(byte *)((int)this + 0x7634) & 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x7630);
  }
  FUN_1004da3a(local_70,local_68,uVar1,0);
  local_6c = *(undefined4 *)(param_2 + 0x10);
  FUN_10054ff8(this,param_1,param_2,'\0',&local_70,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,0,(uint)*(byte *)((int)local_70 + 0x28));
  return;
}

