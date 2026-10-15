/*
 * FUN_1009d509 at 1009d509
 * undefined4 * __thiscall FUN_1009d509(void * this, int param_1, int * param_2, undefined4 * param_3, undefined4 param_4, undefined1 param_5, undefined1 param_6)
 * Address ranges: 1009d509-1009d5a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1009d509(void *this,int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6)

{
  void *this_00;
  void *this_01;
  char extraout_DL;
  
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(void **)((int)this + 0xec) = this;
  FUN_100cfed0((int *)((int)this + 0xf0),0,0x30);
  FUN_10012d52((void *)((int)this + 8),param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_FUN_100d7150;
  *(undefined ***)((int)this + 8) = &PTR_FUN_100d70f4;
  *(undefined ***)((int)this + 0x30) = &PTR_FUN_100d4c54;
  *(int *)((int)this + 0x120) = param_1;
  *(undefined1 *)((int)this + 0x124) = param_5;
  *(undefined1 *)((int)this + 0x125) = param_6;
  FUN_10091025((void *)((int)this + 0xe0),&DAT_100d1530);
  FUN_10091025(this_00,(uint *)&DAT_100d1390);
  if (extraout_DL != '\0') {
    FUN_10091025(this_01,(uint *)&DAT_100d1410);
  }
  return this;
}

