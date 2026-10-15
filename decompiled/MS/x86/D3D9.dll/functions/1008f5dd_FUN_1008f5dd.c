/*
 * FUN_1008f5dd at 1008f5dd
 * undefined __thiscall FUN_1008f5dd(void * this, uint * param_1, uint * param_2, uint * param_3, uint * param_4)
 * Address ranges: 1008f5dd-1008f620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008f5dd(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30 [10];
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  puVar2 = (undefined4 *)(&DAT_100dcd80 + *(int *)((int)this + 0x1c) * 0x2c);
  puVar3 = local_30;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = (uint)local_8;
  *param_2 = (uint)local_7;
  *param_3 = (uint)local_6;
  *param_4 = (uint)local_5;
  return;
}

