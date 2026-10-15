/*
 * FUN_1800b4958 at 1800b4958
 * undefined FUN_1800b4958(void)
 * Address ranges: 1800b4958-1800b49b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800b4958(longlong param_1)

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

