/*
 * FUN_10004ca8 at 10004ca8
 * undefined FUN_10004ca8(void)
 * Address ranges: 10004ca8-10004d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10004ca8(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_10170ad0 + 2000);
  if (iVar2 == 0) {
    if (param_4 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = param_4;
      if (param_4 == 1) {
        puVar1 = &DAT_10170f84;
        if (param_3 != 2) {
          puVar1 = &DAT_10170f78;
        }
        iVar2 = *(int *)(*(int *)(puVar1 + param_2 * 4) + param_5 * 4);
      }
    }
  }
  return iVar2;
}

