/*
 * FUN_10024768 at 10024768
 * undefined FUN_10024768(void)
 * Address ranges: 10024768-100247ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024768(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  uint local_34;
  
  if (*(char *)(param_1 + 0x81) != '\0') {
    iVar1 = (*(code *)PTR_FUN_100a80fc)(*(undefined4 *)(param_1 + 0x54),auStack_48,0x1c);
    if (iVar1 != 0) {
      iVar1 = 4;
      if (*(char *)(param_1 + 0x7c) == '\0') {
        iVar1 = 2;
      }
      (*(code *)PTR_FUN_100a80f8)
                (*(undefined4 *)(param_1 + 0x54),iVar1 * *(int *)(param_1 + 0x58) * param_2,
                 local_34 | 0x100,auStack_50);
    }
  }
  return;
}

