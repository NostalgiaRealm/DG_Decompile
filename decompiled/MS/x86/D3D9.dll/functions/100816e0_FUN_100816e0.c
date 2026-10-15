/*
 * FUN_100816e0 at 100816e0
 * undefined __thiscall FUN_100816e0(void * this, int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100816e0-10081717
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100816e0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10081083(this,1,1);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x34) = param_4;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)((int)this + 0x38) = 0x101;
  return;
}

