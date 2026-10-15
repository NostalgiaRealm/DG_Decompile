/*
 * FUN_1002b764 at 1002b764
 * bool __thiscall FUN_1002b764(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int * param_5, SIZE_T param_6, uint param_7)
 * Address ranges: 1002b764-1002b7ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1002b764(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5,SIZE_T param_6,uint param_7)

{
  undefined4 *puVar1;
  bool bVar2;
  
  *(uint *)((int)this + 0x18) = param_7;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  if ((param_7 & 1) == 0) {
    puVar1 = (undefined4 *)FUN_10060bfe(param_6);
    bVar2 = puVar1 != (undefined4 *)0x0;
    *(undefined4 **)((int)this + 0x10) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_10060d80(puVar1,param_5,param_6);
      *(SIZE_T *)((int)this + 0x14) = param_6;
    }
  }
  else {
    *(int **)((int)this + 0x10) = param_5;
    *(undefined4 *)((int)this + 0x14) = 0;
    (**(code **)(*param_5 + 4))(param_5);
    bVar2 = true;
  }
  return bVar2;
}

