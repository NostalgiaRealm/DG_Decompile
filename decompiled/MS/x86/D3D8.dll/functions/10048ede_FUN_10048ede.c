/*
 * FUN_10048ede at 10048ede
 * undefined __thiscall FUN_10048ede(void * this, float param_1, undefined1 param_2)
 * Address ranges: 10048ede-10048f38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048ede(void *this,float param_1,undefined1 param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0xc0))(0);
  *(undefined1 *)((int)this + 0x574) = param_2;
  iVar1 = (int)param_1;
  *(float *)((int)this + 0x570) = param_1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (8 < iVar1) {
    iVar1 = 8;
  }
  *(int *)((int)this + 0x4cd8) = iVar1;
  *(undefined1 *)((int)this + 0xd981) = 1;
  *(int *)((int)this + 0x4738) = iVar1;
  *(undefined1 *)((int)this + 0xd9a4) = 1;
  return;
}

