/*
 * FUN_10039ccd at 10039ccd
 * undefined __thiscall FUN_10039ccd(void * this, int param_1, int param_2, int param_3, undefined4 * param_4, uint param_5, undefined4 * param_6, char param_7)
 * Address ranges: 10039ccd-10039d1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10039ccd(void *this,int param_1,int param_2,int param_3,undefined4 *param_4,uint param_5,
            undefined4 *param_6,char param_7)

{
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  FUN_10035800((int)this);
  local_c = (void *)(-(uint)(param_3 != 0) & param_3 - 0x18U);
  local_8 = *(void **)(param_2 + 0x10);
  FUN_10045b79(this,param_1,param_2,'\0',&local_c,param_4,param_5,param_6,param_7,0,
               (uint)*(byte *)((int)local_c + 0x28));
  return;
}

