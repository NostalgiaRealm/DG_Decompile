/*
 * FUN_10023d50 at 10023d50
 * undefined FUN_10023d50(void)
 * Address ranges: 10023d50-10023de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023d50(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  uint local_34;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    iVar1 = (*(code *)PTR_FUN_100a00fc)(*(undefined4 *)(param_1 + 0x54),auStack_48,0x1c);
    if (iVar1 != 0) {
      iVar1 = 4;
      if (*(char *)(param_1 + 0x7c) == '\0') {
        iVar1 = 2;
      }
      (*(code *)PTR_FUN_100a00f8)
                (*(undefined4 *)(param_1 + 0x54),iVar1 * *(int *)(param_1 + 0x58) * param_2,
                 local_34 | 0x100,auStack_50);
    }
  }
  return;
}

