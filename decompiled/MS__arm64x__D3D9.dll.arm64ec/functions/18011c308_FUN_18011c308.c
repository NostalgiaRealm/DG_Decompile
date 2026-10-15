/*
 * FUN_18011c308 at 18011c308
 * undefined FUN_18011c308(void)
 * Address ranges: 18011c308-18011c36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18011c308(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if ((param_2 != 1) || (*(char *)(*(longlong *)(param_1 + 0x18) + 0x887) == '\0')) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x878);
    if ((uVar1 - 0x200 & 0xfffffdff) == 0) {
      iVar2 = 2;
    }
    else if ((uVar1 - 0x300 & 0xfffffdff) != 0) {
      if (uVar1 == 0x100) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
        if (0x10 < (uVar1 & 0xff) || uVar1 == 0) {
          iVar2 = param_2;
        }
      }
    }
  }
  return iVar2;
}

