/*
 * FUN_10036255 at 10036255
 * int * __thiscall FUN_10036255(void * this, int * param_1)
 * Address ranges: 10036255-100362d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10036255(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  WNDPROC pWVar4;
  int iVar5;
  
  piVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0;
  pWVar4 = FUN_1005d3eb();
  if (pWVar4 != (WNDPROC)0x0) {
    param_1 = (int *)0x0;
    if (*(int *)(pWVar4 + 0x58) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(pWVar4 + 0x54) + (int)param_1 * 4);
        if ((piVar1 != (int *)0x0) && (iVar5 = (**(code **)*piVar1)(), iVar5 == 1)) {
          iVar5 = (**(code **)(**(int **)this + 0x24))();
          cVar3 = (**(code **)(*piVar1 + 4))(iVar5);
          if (cVar3 != '\0') {
            *piVar2 = (int)piVar1;
            piVar2[1] = iVar5;
            break;
          }
        }
        param_1 = (int *)((int)param_1 + 1);
      } while (param_1 < *(int **)(pWVar4 + 0x58));
    }
    FUN_1005d470((undefined4 *)pWVar4);
  }
  return piVar2;
}

