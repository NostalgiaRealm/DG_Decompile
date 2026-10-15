/*
 * FUN_10019a24 at 10019a24
 * undefined __thiscall FUN_10019a24(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10019a24-10019abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10019a24(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x3c4) == '\0') {
    *(undefined4 *)((int)this + 0x2c) = param_1;
    *(undefined4 *)((int)this + 0x30) = param_2;
    *(undefined4 *)((int)this + 0x3c) = param_5;
    *(undefined4 *)((int)this + 0x34) = param_3;
    *(undefined4 *)((int)this + 0x38) = param_4;
    *(undefined4 *)((int)this + 0x40) = param_6;
    (**(code **)(**(int **)((int)this + 0x14) + 0x3c))((undefined4 *)((int)this + 0x2c));
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
    *(undefined4 *)(iVar1 + 0x4a34) = param_1;
    *(undefined4 *)(iVar1 + 19000) = param_2;
    *(undefined4 *)(iVar1 + 0x4a44) = param_5;
    *(undefined4 *)(iVar1 + 0x4a3c) = param_3;
    *(undefined4 *)(iVar1 + 0x4a40) = param_4;
    *(undefined4 *)(iVar1 + 0x4a48) = param_6;
    *(undefined1 *)(iVar1 + 0xac14) = 1;
  }
  return;
}

