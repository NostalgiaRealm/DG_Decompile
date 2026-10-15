/*
 * FUN_10012e8b at 10012e8b
 * undefined __thiscall FUN_10012e8b(void * this, HWND param_1)
 * Address ranges: 10012e8b-10012ee2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012e8b(void *this,HWND param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = DAT_100dea74;
  *(undefined1 *)((int)this + 0xd5) = 1;
  uStack_8 = this;
  if (*(char *)(iVar1 + 0x7e6) != '\0') {
    FUN_10003e40((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)((int)this + 0x2c) + 0xdd0) >> 2) & 1);
    *(undefined1 *)(*(int *)((int)this + 0x2c) + 0x669e) = 1;
    FUN_10003e89((char *)((int)&uStack_8 + 3));
  }
  ShowWindowAsync(param_1,1);
  return;
}

