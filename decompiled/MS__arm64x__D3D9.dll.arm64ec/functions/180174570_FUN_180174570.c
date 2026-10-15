/*
 * FUN_180174570 at 180174570
 * undefined FUN_180174570(void)
 * Address ranges: 180174570-1801745eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_180174570(undefined8 param_1,int *param_2,longlong param_3,uint param_4,undefined1 param_5
                   )

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_4 & 0xe000000) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_180213760(param_3,4,1);
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

