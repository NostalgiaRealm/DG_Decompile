/*
 * FUN_1009de19 at 1009de19
 * void * __thiscall FUN_1009de19(void * this, int param_1, int param_2, int param_3, undefined2 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 1009de19-1009debb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * __thiscall
FUN_1009de19(void *this,int param_1,int param_2,int param_3,undefined2 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  int iVar1;
  undefined4 *extraout_ECX;
  
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  iVar1 = (int)this + 0x78;
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  *(int *)((int)this + 0x84) = iVar1;
  FUN_10001692(this,(int *)((int)this + 0x88),(LPRECT)((int)this + 200),param_1,param_2,param_3,
               param_4,3,param_5,param_6,param_7,param_8,param_9,param_10);
  *extraout_ECX = &PTR_FUN_100d71dc;
  extraout_ECX[0x1c] = &PTR_LAB_100d1570;
  extraout_ECX[0x1e] = &PTR_FUN_100d7184;
  extraout_ECX[0x36] = 2;
  FUN_100cfed0((int *)((int)this + 0x88),0,0x40);
  SetRect((LPRECT)((int)this + 200),0,0,param_2,param_3);
  return this;
}

