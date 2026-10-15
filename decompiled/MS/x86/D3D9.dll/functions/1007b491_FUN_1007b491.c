/*
 * FUN_1007b491 at 1007b491
 * char __thiscall FUN_1007b491(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 1007b491-1007b4ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1007b491(void *this,uint param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  void *this_00;
  uint uVar3;
  
  cVar2 = FUN_10079aa0((int)this);
  if (cVar2 == '\0') {
    uVar3 = FUN_10078087(this_00,param_1,param_2);
    cVar2 = (char)uVar3;
  }
  else {
    cVar2 = FUN_1007aa05(this_00,param_1,param_2,param_3 & 0xff);
    if (cVar2 != '\0') {
      *(undefined1 *)((int)this + 0xdb) = 0;
      uVar3 = *(int *)((int)this + 0x2c) * param_2 + param_1;
      pbVar1 = (byte *)((int)this + ((int)(uVar3 & 0x1f) >> 3) + (uVar3 >> 5) * 4 + 0xcc);
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    }
  }
  return cVar2;
}

