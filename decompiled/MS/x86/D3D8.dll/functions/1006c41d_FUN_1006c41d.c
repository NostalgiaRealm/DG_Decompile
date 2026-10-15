/*
 * FUN_1006c41d at 1006c41d
 * undefined __thiscall FUN_1006c41d(void * this, int param_1, int param_2)
 * Address ranges: 1006c41d-1006c476
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006c41d(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    uVar1 = FUN_1006c237(this,(int)this + 0x84,(int)this + 0x48,this,this,param_1,param_2,
                         (RECT *)(*(int *)((int)this + 0x5c) + 0x10 +
                                 (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x20));
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((int)this + 0xe8) = 0;
      *(undefined4 *)((int)this + 0xec) = 0;
    }
  }
  return;
}

