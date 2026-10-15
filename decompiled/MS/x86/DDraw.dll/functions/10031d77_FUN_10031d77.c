/*
 * FUN_10031d77 at 10031d77
 * int __cdecl FUN_10031d77(int param_1)
 * Address ranges: 10031d77-10031dba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10031d77(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_10031a59((uint *)(param_1 + 0x48),(uint *)(&DAT_100646b8 + uVar2 * 0x20),0);
    if ((char)uVar1 != '\0') {
      return ((&DAT_100646c4)[uVar2 * 8] == 0x20) + 5;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  return -1;
}

