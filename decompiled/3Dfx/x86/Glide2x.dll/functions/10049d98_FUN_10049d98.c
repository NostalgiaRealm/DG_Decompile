/*
 * FUN_10049d98 at 10049d98
 * undefined __thiscall FUN_10049d98(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 10049d98-10049de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049d98(void *this,int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x54) != 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      puVar1 = (undefined4 *)0x0;
      goto LAB_10049dbc;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 8) + *(int *)((int)this + 0x50));
LAB_10049dbc:
      uVar3 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
      FUN_10049c3a(this,(int *)puVar1[1],(uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),param_1,
                   param_2,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x54));
  }
  return;
}

