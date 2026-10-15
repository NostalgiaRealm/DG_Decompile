/*
 * FUN_10006455 at 10006455
 * undefined __stdcall FUN_10006455(int param_1, int param_2, uint param_3)
 * Address ranges: 10006455-100064b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006455(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  uVar5 = 0;
  uVar3 = 0;
  iVar4 = 0;
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      iVar4 = iVar1;
      if (*(char *)(uVar3 + param_1) != '\0') {
        if (uVar5 != uVar2) {
          if (uVar2 == uVar3) {
            uVar2 = uVar2 + 1;
            goto LAB_10006490;
          }
          *(short *)(param_2 + iVar4 * 4) = (short)uVar5;
          *(short *)(param_2 + 2 + iVar4 * 4) = (short)uVar2;
          iVar4 = iVar4 + 1;
        }
        uVar2 = uVar3 + 1;
        uVar5 = uVar3;
      }
LAB_10006490:
      uVar3 = uVar3 + 1;
      iVar1 = iVar4;
    } while (uVar3 < param_3);
    if (uVar5 != uVar2) {
      *(short *)(param_2 + iVar4 * 4) = (short)uVar5;
      *(short *)(param_2 + 2 + iVar4 * 4) = (short)uVar2;
      iVar4 = iVar4 + 1;
    }
  }
  *(undefined2 *)(param_2 + iVar4 * 4) = 0xffff;
  return;
}

