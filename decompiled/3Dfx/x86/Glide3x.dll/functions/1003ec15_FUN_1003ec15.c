/*
 * FUN_1003ec15 at 1003ec15
 * undefined __fastcall FUN_1003ec15(void * param_1)
 * Address ranges: 1003ec15-1003ec55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003ec15(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x48) != 0) {
    if (*(int *)((int)param_1 + 0x48) == 0) {
      puVar1 = (undefined4 *)0x0;
      goto LAB_1003ec36;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 8) + *(int *)((int)param_1 + 0x44));
LAB_1003ec36:
      uVar3 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
      FUN_1003eb39(param_1,(int *)puVar1[1],(uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x48));
  }
  return;
}

