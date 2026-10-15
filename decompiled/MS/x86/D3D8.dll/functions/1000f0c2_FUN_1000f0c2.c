/*
 * FUN_1000f0c2 at 1000f0c2
 * undefined __thiscall FUN_1000f0c2(void * this, HWND param_1)
 * Address ranges: 1000f0c2-1000f119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f0c2(void *this,HWND param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = DAT_100ba2b4;
  *(undefined1 *)((int)this + 0xd5) = 1;
  uStack_8 = this;
  if (*(char *)(iVar1 + 0x7e6) != '\0') {
    FUN_10003838((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)((int)this + 0x2c) + 0xb0c) >> 2) & 1);
    *(undefined1 *)(*(int *)((int)this + 0x2c) + 0x58be) = 1;
    FUN_10003881((char *)((int)&uStack_8 + 3));
  }
  ShowWindowAsync(param_1,1);
  return;
}

