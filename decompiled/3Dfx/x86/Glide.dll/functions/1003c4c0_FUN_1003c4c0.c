/*
 * FUN_1003c4c0 at 1003c4c0
 * undefined __fastcall FUN_1003c4c0(void * param_1)
 * Address ranges: 1003c4c0-1003c500
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c4c0(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x48) != 0) {
    if (*(int *)((int)param_1 + 0x48) == 0) {
      puVar1 = (undefined4 *)0x0;
      goto LAB_1003c4e1;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 8) + *(int *)((int)param_1 + 0x44));
LAB_1003c4e1:
      uVar3 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
      FUN_1003c3e4(param_1,(int *)puVar1[1],(uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0x48));
  }
  return;
}

