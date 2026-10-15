/*
 * FUN_100350b0 at 100350b0
 * undefined FUN_100350b0(void)
 * Address ranges: 100350b0-10035147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100350b0(int param_1,int param_2)

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

