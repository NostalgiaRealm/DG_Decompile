/*
 * FUN_100825be at 100825be
 * undefined __thiscall FUN_100825be(void * this, int param_1, int param_2)
 * Address ranges: 100825be-10082617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100825be(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    uVar1 = FUN_100823d8(this,(int)this + 0x84,(int)this + 0x48,this,this,param_1,param_2,
                         (RECT *)(*(int *)((int)this + 0x5c) + 0x10 +
                                 (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20));
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((int)this + 0xe8) = 0;
      *(undefined4 *)((int)this + 0xec) = 0;
    }
  }
  return;
}

