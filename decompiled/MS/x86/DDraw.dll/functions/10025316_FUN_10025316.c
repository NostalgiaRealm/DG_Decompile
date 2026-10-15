/*
 * FUN_10025316 at 10025316
 * undefined1 __fastcall FUN_10025316(void * param_1)
 * Address ranges: 10025316-1002538f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10025316(void *param_1)

{
  undefined1 uVar1;
  HWND pHVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = 1;
  iVar4 = *(int *)((int)param_1 + 0x11c) * 0x228;
  if ((&DAT_1006c49a)[iVar4] != '\0') {
    if ((*(int *)(&DAT_1006c448 + iVar4) == *(int *)(&DAT_1006c42c + iVar4)) &&
       (*(int *)(&DAT_1006c44c + iVar4) == *(int *)(&DAT_1006c430 + iVar4))) {
      pHVar2 = FUN_100245b0(param_1,'\0');
      if (pHVar2 != (HWND)0x0) {
        piVar3 = (int *)(**(code **)(**(int **)((int)param_1 + 0x118) + 0x30))
                                  (pHVar2,0,0,4,2,2,0,0,0);
        if (piVar3 != (int *)0x0) {
          uVar1 = (**(code **)(*piVar3 + 0x28))();
          (**(code **)(*piVar3 + 0x10))();
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

