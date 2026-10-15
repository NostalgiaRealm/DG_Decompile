/*
 * FUN_10048e87 at 10048e87
 * undefined __thiscall FUN_10048e87(void * this, uint param_1, uint param_2, int param_3)
 * Address ranges: 10048e87-10048edd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10048e87(void *this,uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(*(int *)this + 0xc0))(0);
  uVar1 = param_1;
  while (uVar1 < param_2) {
    auVar2 = minps(*(undefined1 (*) [16])((uVar1 - param_1) * 0x10 + param_3),_DAT_100b5cb0);
    auVar2 = maxps(auVar2,_DAT_100b5d80);
    *(undefined1 (*) [16])((int)this + uVar1 * 0x10 + 0x47d0) = auVar2;
    uVar1 = uVar1 + 1;
  }
  *(undefined1 *)((int)this + 0xd9a6) = 1;
  return;
}

