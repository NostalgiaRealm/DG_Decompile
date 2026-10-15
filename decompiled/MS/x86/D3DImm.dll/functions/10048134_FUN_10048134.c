/*
 * FUN_10048134 at 10048134
 * undefined4 __thiscall FUN_10048134(void * this, undefined4 param_1, undefined4 * param_2)
 * Address ranges: 10048134-10048198
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10048134(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0x88760005;
  if (*(char *)((int)this + 0x98) == '\0') {
    puVar3 = (undefined4 *)((int)this + 0x48);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1005c9cc((int *)((int)this + 0x5c),0,0x30);
    iVar2 = FUN_1005c789(*(SIZE_T *)((int)this + 0x54));
    *(int *)((int)this + 0x58) = iVar2;
    *(undefined4 *)((int)this + 0x4c) = 4;
    uVar1 = 0x887602c6;
    *(undefined4 *)((int)this + 0x50) = 0;
    if (iVar2 != 0) {
      *(undefined1 *)((int)this + 0x98) = 1;
      uVar1 = 0;
    }
  }
  return uVar1;
}

