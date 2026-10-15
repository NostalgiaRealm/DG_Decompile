/*
 * FUN_1005e926 at 1005e926
 * int __stdcall FUN_1005e926(int * param_1, HWND param_2, UINT param_3, WPARAM param_4, int param_5)
 * Address ranges: 1005e926-1005e9ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005e926(int *param_1,HWND param_2,UINT param_3,WPARAM param_4,int param_5)

{
  UINT UVar1;
  char cVar2;
  WNDPROC this;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = 0;
  this = FUN_1005d3eb();
  piVar3 = FUN_1005e8f7(this,(int)param_2);
  UVar1 = param_3;
  iVar4 = 0;
  if (piVar3 == (int *)0x0) {
    iVar4 = DefWindowProcW(param_2,param_3,param_4,param_5);
    goto LAB_1005e9dd;
  }
  piVar3[9] = piVar3[9] + 1;
  cVar2 = FUN_1005f258(param_3,param_4,param_5);
  if (cVar2 == '\0') {
    param_3 = param_3 & 0xffffff;
    iVar4 = (*(code *)**(undefined4 **)piVar3[2])
                      (this,piVar3,param_2,UVar1,param_4,param_5,(int)&param_3 + 3);
    if (param_3._3_1_ != '\0') {
      *param_1 = piVar3[5];
    }
    if ((UVar1 == 6) || (UVar1 == 0x1c)) {
      bVar5 = param_4 != 0;
    }
    else {
      if (UVar1 != 0x21) goto LAB_1005e9ca;
      bVar5 = true;
      if ((iVar4 != 1) && (iVar4 != 2)) {
        bVar5 = false;
      }
    }
    *(bool *)((int)piVar3 + 0x2d) = bVar5;
  }
  else {
    this[0x971] = (code)0x1;
  }
LAB_1005e9ca:
  piVar3[9] = piVar3[9] + -1;
LAB_1005e9dd:
  FUN_1005d470((undefined4 *)this);
  return iVar4;
}

