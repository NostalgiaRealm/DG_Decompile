/*
 * FUN_100036fd at 100036fd
 * undefined __fastcall FUN_100036fd(int param_1)
 * Address ranges: 100036fd-100037c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100036fd(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int *piVar2;
  undefined4 *puStack_4c;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puStack_4c = (undefined4 *)0x10003711;
  GdiFlush();
  puStack_4c = &local_38;
  local_30 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x20) + -1,
                      (int)*(undefined8 *)(param_1 + 0x1c) + -1);
  local_38 = 0;
  local_34 = 0;
  (**(code **)(**(int **)(param_1 + 8) + 0x3c))
            (0,0,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  uStack_3c = *(undefined4 *)(param_1 + 0x6c);
  piVar2 = (int *)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x65) = 0;
  local_38 = 0;
  local_34 = 0;
  uVar1 = FUN_1005d9c9((int *)(*piVar2 + 4));
  local_30 = CONCAT44(2,uVar1);
  uStack_28 = 2;
  puStack_4c = *(undefined4 **)(param_1 + 0x70);
  uStack_24 = 0;
  uStack_20 = 0;
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  FUN_10004bf5(&uStack_3c,extraout_EDX,(int)piVar2,0,0,(LONG *)0x0,(LONG *)0x0,
               (RECT *)(param_1 + 0x78),0,extraout_ECX,extraout_ECX,(int *)&puStack_4c);
  return;
}

