/*
 * FUN_18004e418 at 18004e418
 * ulonglong __fastcall FUN_18004e418(undefined8 param_1, longlong param_2, int param_3, int param_4, undefined8 * param_5)
 * Address ranges: 18004e418-18004e4cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004e418(undefined8 param_1,longlong param_2,int param_3,int param_4,
                       undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_2 + 0x24) != 0;
  if (bVar3) {
    *param_5 = 0;
    *(int *)(param_5 + 1) = param_3;
    *(undefined4 *)((longlong)param_5 + 0xc) = *(undefined4 *)(param_2 + 0x24);
  }
  uVar2 = (ulonglong)bVar3;
  uVar1 = uVar2;
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar1 = (ulonglong)(bVar3 + 1);
    *(undefined4 *)(param_5 + uVar2 * 2) = 0;
    *(undefined4 *)((longlong)param_5 + uVar2 * 0x10 + 4) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_5 + uVar2 * 2 + 1) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_5 + uVar2 * 0x10 + 0xc) = *(undefined4 *)(param_2 + 0x2c);
  }
  uVar2 = uVar1;
  if (*(int *)(param_2 + 0x28) != param_3) {
    uVar2 = (ulonglong)((int)uVar1 + 1);
    *(int *)(param_5 + uVar1 * 2) = *(int *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_5 + uVar1 * 0x10 + 4) = *(undefined4 *)(param_2 + 0x24);
    *(int *)(param_5 + uVar1 * 2 + 1) = param_3;
    *(undefined4 *)((longlong)param_5 + uVar1 * 0x10 + 0xc) = *(undefined4 *)(param_2 + 0x2c);
  }
  uVar1 = uVar2;
  if (*(int *)(param_2 + 0x2c) != param_4) {
    uVar1 = (ulonglong)((int)uVar2 + 1);
    *(undefined4 *)(param_5 + uVar2 * 2) = 0;
    *(undefined4 *)((longlong)param_5 + uVar2 * 0x10 + 4) = *(undefined4 *)(param_2 + 0x2c);
    *(int *)(param_5 + uVar2 * 2 + 1) = param_3;
    *(int *)((longlong)param_5 + uVar2 * 0x10 + 0xc) = param_4;
  }
  return uVar1;
}

