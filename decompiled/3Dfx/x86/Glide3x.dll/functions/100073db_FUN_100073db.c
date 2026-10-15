/*
 * FUN_100073db at 100073db
 * int * __thiscall FUN_100073db(void * this, int param_1)
 * Address ranges: 100073db-1000744c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100073db(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = 0;
  FUN_10052de1(this,0,0xe0);
  uVar2 = 0;
  do {
    bVar1 = (&DAT_10055634)[uVar2];
    uVar3 = uVar2 + 1;
    *(int *)((int)this + uVar2 * 0x10 + 8) = (int)(char)(&DAT_10055624)[uVar2];
    *(uint *)((int)this + uVar2 * 0x10 + 4) = (uint)bVar1;
    *(uint *)((int)this + uVar2 * 0x10 + 0xc) = param_1 + (uint)bVar1 * 4;
    uVar2 = uVar3;
  } while (uVar3 < 0xe);
  FUN_1000744d(this,param_1,0,0,'\x01');
  return this;
}

