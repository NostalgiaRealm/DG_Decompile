/*
 * FUN_1000bfb0 at 1000bfb0
 * undefined FUN_1000bfb0(void)
 * Address ranges: 1000bfb0-1000c03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000bfb0(undefined8 param_1,int param_2,int param_3,uint param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      if (*(char *)(uVar2 + param_2) != '\0') {
        if (uVar4 != uVar3) {
          if (uVar3 == uVar2) {
            uVar3 = uVar3 + 1;
            goto LAB_1000c004;
          }
          puVar1 = (undefined2 *)(param_3 + iVar5 * 4);
          iVar5 = iVar5 + 1;
          *puVar1 = (short)uVar4;
          puVar1[1] = (short)uVar3;
        }
        uVar3 = uVar2 + 1;
        uVar4 = uVar2;
      }
LAB_1000c004:
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
    if (uVar4 != uVar3) {
      puVar1 = (undefined2 *)(param_3 + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *puVar1 = (short)uVar4;
      puVar1[1] = (short)uVar3;
    }
  }
  *(undefined2 *)(param_3 + iVar5 * 4) = 0xffff;
  return;
}

