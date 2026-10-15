/*
 * FUN_1004f718 at 1004f718
 * undefined1 __thiscall FUN_1004f718(void * this, int param_1)
 * Address ranges: 1004f718-1004f7de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1004f718(void *this,int param_1)

{
  int *piVar1;
  HMODULE pHVar2;
  DWORD DVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 uVar6;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  
  pHVar2 = DAT_1006bbd4;
  uVar6 = 1;
  *in_stack_00000018 = 0;
  if (DAT_10061070 != 0) {
    DVar3 = FUN_1005c3a0(pHVar2,(LPCWSTR)(uint)DAT_10061070);
    puVar4 = FUN_1005c3d0(pHVar2,(LPCWSTR)(uint)DAT_10061070);
    if (((puVar4 != (undefined4 *)0x0) &&
        (piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this),
        iVar5 = (**(code **)(*piVar1 + 0x30))(piVar1,puVar4,DVar3,0), -1 < iVar5)) &&
       (piVar1 = *(int **)(param_1 * 0x1510 + 0x510 + (int)this),
       iVar5 = (**(code **)(*piVar1 + 0x2c))
                         (piVar1,PTR_PTR_10061030,DAT_10061034,puVar4,DVar3,in_stack_0000001c),
       -1 < iVar5)) {
      thunk_FUN_1005c76c(puVar4);
      return 1;
    }
    thunk_FUN_1005c76c(puVar4);
    uVar6 = 0;
    FUN_1004f7df(puVar4,puVar4,in_stack_00000018,in_stack_0000001c);
  }
  return uVar6;
}

