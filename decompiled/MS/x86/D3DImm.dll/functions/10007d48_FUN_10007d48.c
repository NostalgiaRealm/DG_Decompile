/*
 * FUN_10007d48 at 10007d48
 * undefined __thiscall FUN_10007d48(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10007d48-10007ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10007d48(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x224) == '\0') {
    *(undefined4 *)((int)this + 0x2c) = param_1;
    *(undefined4 *)((int)this + 0x30) = param_2;
    *(undefined4 *)((int)this + 0x3c) = param_5;
    *(undefined4 *)((int)this + 0x34) = param_3;
    *(undefined4 *)((int)this + 0x38) = param_4;
    *(undefined4 *)((int)this + 0x40) = param_6;
    (**(code **)(**(int **)((int)this + 0x14) + 0x44))((undefined4 *)((int)this + 0x2c));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    *(undefined4 *)(iVar1 + 0x954) = param_1;
    *(undefined4 *)(iVar1 + 0x958) = param_2;
    *(undefined4 *)(iVar1 + 0x964) = param_5;
    *(undefined4 *)(iVar1 + 0x95c) = param_3;
    *(undefined4 *)(iVar1 + 0x960) = param_4;
    *(undefined4 *)(iVar1 + 0x968) = param_6;
    *(undefined1 *)(iVar1 + 0xa58) = 1;
  }
  return;
}

