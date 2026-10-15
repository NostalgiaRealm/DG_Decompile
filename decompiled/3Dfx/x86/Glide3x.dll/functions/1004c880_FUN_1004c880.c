/*
 * FUN_1004c880 at 1004c880
 * undefined __thiscall FUN_1004c880(void * this, int param_1, int param_2, int * param_3)
 * Address ranges: 1004c880-1004c8cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c880(void *this,int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x54) != 0) {
    if (*(int *)((int)this + 0x54) == 0) {
      puVar1 = (undefined4 *)0x0;
      goto LAB_1004c8a4;
    }
    do {
      puVar1 = (undefined4 *)((uVar2 << 4 | 8) + *(int *)((int)this + 0x50));
LAB_1004c8a4:
      uVar3 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
      FUN_1004c722(this,(int *)puVar1[1],(uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),param_1,
                   param_2,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x54));
  }
  return;
}

