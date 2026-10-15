/*
 * FUN_180063038 at 180063038
 * undefined FUN_180063038(void)
 * Address ranges: 180063038-1800630ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_180063038(undefined8 param_1,int *param_2,longlong param_3,uint param_4,undefined1 param_5
                   )

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_4 & 0xe000000) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1800f42d0(param_3,4,1);
    if (iVar2 != 0) {
      uVar3 = 0;
      do {
        if (*(int *)(param_3 + 0x3c0 + uVar3 * 4) == 0) {
          *(int *)(param_3 + uVar3 * 4 + 0x3c0) = iVar2;
          break;
        }
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < 4);
    }
  }
  *param_2 = iVar2;
  *(undefined1 *)(param_2 + 1) = param_5;
  return param_2;
}

