/*
 * FUN_10002d9a at 10002d9a
 * undefined1 __thiscall FUN_10002d9a(void * this, char param_1)
 * Address ranges: 10002d9a-10002e06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10002d9a(void *this,char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x330) != 0) {
    *(undefined4 *)((int)this + 0x330) = 0;
    *(undefined4 *)((int)this + 0x334) = 0;
    CloseHandle(*(HANDLE *)((int)this + 0x338));
    CloseHandle(*(HANDLE *)((int)this + 0x33c));
    *(undefined4 *)((int)this + 0x338) = 0;
    *(undefined4 *)((int)this + 0x33c) = 0;
    if (param_1 != '\0') {
      *(undefined1 *)((int)this + 0x759) = 1;
      puVar2 = (undefined4 *)((int)this + 0x340);
      puVar3 = (undefined4 *)((int)this + 0x54c);
      for (iVar1 = 0x83; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      return 1;
    }
  }
  return 0;
}

