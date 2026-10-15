/*
 * FUN_1001922c at 1001922c
 * undefined __stdcall FUN_1001922c(int param_1, int param_2, int param_3, int param_4, uint param_5, int param_6)
 * Address ranges: 1001922c-10019287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001922c(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 7;
  do {
    iVar1 = param_2 + 0x14 + uVar3 * 8;
    if ((*(char *)(param_2 + 0x14 + uVar3 * 8) != -1) &&
       (piVar2 = (int *)(param_1 + uVar3 * 0xc), *piVar2 != 0)) {
      if ((char)piVar2[2] == *(char *)(param_2 + 0x18 + uVar3 * 8)) {
        FUN_10018fa1(piVar2,iVar1,param_3,param_4,param_5,param_6);
      }
      else {
        FUN_1001911a(piVar2,iVar1,param_3,param_4,param_5,param_6);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xf);
  return;
}

