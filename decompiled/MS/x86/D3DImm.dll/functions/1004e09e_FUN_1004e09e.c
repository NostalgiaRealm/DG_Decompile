/*
 * FUN_1004e09e at 1004e09e
 * undefined4 __stdcall FUN_1004e09e(int param_1, int * param_2)
 * Address ranges: 1004e09e-1004e0ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e09e(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 0x80070057;
  iVar1 = *(int *)(param_1 + 4);
  if ((param_2 != (int *)0x0) && (*param_2 == 0x14)) {
    uVar2 = 0x887602ca;
    piVar4 = (int *)(iVar1 + 0x94);
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    if (iVar3 == 0) {
      piVar4 = (int *)(iVar1 + 0x48);
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *piVar4;
        piVar4 = piVar4 + 1;
        param_2 = param_2 + 1;
      }
      *(undefined1 *)(iVar1 + 0x99) = 1;
      uVar2 = 0;
    }
    else {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
  }
  return uVar2;
}

