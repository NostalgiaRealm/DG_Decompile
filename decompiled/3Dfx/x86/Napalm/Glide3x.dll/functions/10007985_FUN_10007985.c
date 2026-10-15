/*
 * FUN_10007985 at 10007985
 * int * __thiscall FUN_10007985(void * this, int param_1)
 * Address ranges: 10007985-100079f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10007985(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = 0;
  FUN_100561f1(this,0,0xe0);
  uVar2 = 0;
  do {
    bVar1 = (&DAT_1005895c)[uVar2];
    uVar3 = uVar2 + 1;
    *(int *)((int)this + uVar2 * 0x10 + 8) = (int)(char)(&DAT_1005894c)[uVar2];
    *(uint *)((int)this + uVar2 * 0x10 + 4) = (uint)bVar1;
    *(uint *)((int)this + uVar2 * 0x10 + 0xc) = param_1 + (uint)bVar1 * 4;
    uVar2 = uVar3;
  } while (uVar3 < 0xe);
  FUN_100079f7(this,param_1,0,0,'\x01');
  return this;
}

