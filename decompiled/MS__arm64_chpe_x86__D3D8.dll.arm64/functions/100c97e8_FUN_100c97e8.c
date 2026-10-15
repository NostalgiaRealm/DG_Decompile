/*
 * FUN_100c97e8 at 100c97e8
 * undefined FUN_100c97e8(void)
 * Address ranges: 100c97e8-100c9873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100c97e8(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  piVar1 = (int *)(param_1 + 0x24);
  pcVar3 = (char *)*piVar1;
  if (pcVar3 != (char *)0x0) {
    do {
      if (*pcVar3 != ' ' && *pcVar3 != '\t') {
        return 1;
      }
      *piVar1 = (int)(pcVar3 + 1);
      if ((pcVar3 + 1 == *(char **)(param_1 + 0x28)) &&
         (uVar2 = FUN_100c9748(param_1), (uVar2 & 1) == 0)) {
        *piVar1 = 0;
      }
      pcVar3 = (char *)*piVar1;
    } while (pcVar3 != (char *)0x0);
  }
  return *(undefined1 *)(param_1 + 0x2c);
}

