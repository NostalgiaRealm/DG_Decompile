/*
 * FUN_1800b78f4 at 1800b78f4
 * undefined1 __fastcall FUN_1800b78f4(longlong param_1)
 * Address ranges: 1800b78f4-1800b7939
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800b78f4(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0xc50b) == '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0xc506);
  }
  else {
    uVar1 = *(longlong *)(param_1 + 0x30) != 0;
    if ((bool)uVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                (*(longlong **)(param_1 + 0x28),param_1 + 0x58);
    }
    *(undefined1 *)(param_1 + 0xc506) = uVar1;
    *(undefined1 *)(param_1 + 0xc50b) = 0;
  }
  return uVar1;
}

