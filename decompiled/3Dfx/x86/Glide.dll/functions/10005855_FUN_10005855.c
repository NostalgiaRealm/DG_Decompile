/*
 * FUN_10005855 at 10005855
 * undefined4 __thiscall FUN_10005855(void * this, byte * param_1)
 * Address ranges: 10005855-100058cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10005855(void *this,byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_10050532(param_1,&DAT_10051220,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)((int)this + 0x1c);
  }
  else {
    iVar1 = FUN_10050532(param_1,&DAT_10051230,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)((int)this + 0x28);
    }
    else {
      iVar1 = FUN_10050532(param_1,&DAT_10051240,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)((int)this + 0x34);
      }
      else {
        iVar1 = FUN_10050532(param_1,&DAT_10051250,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)((int)this + 0x40);
        }
      }
    }
  }
  return uVar2;
}

