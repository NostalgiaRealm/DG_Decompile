/*
 * FUN_10034c30 at 10034c30
 * undefined FUN_10034c30(void)
 * Address ranges: 10034c30-10034cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034c30(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  uint local_34;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    iVar1 = (*(code *)PTR_FUN_1009d0fc)(*(undefined4 *)(param_1 + 0x54),auStack_48,0x1c);
    if (iVar1 != 0) {
      iVar1 = 4;
      if (*(char *)(param_1 + 0x7c) == '\0') {
        iVar1 = 2;
      }
      (*(code *)PTR_FUN_1009d0f8)
                (*(undefined4 *)(param_1 + 0x54),iVar1 * *(int *)(param_1 + 0x58) * param_2,
                 local_34 | 0x100,auStack_50);
    }
  }
  return;
}

