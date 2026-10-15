/*
 * FUN_10080e28 at 10080e28
 * undefined __fastcall FUN_10080e28(LPVOID param_1)
 * Address ranges: 10080e28-10080e3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10080e28(LPVOID param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = (int *)((int)param_1 + 0x54);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*(int *)((int)param_1 + 0x50) + iVar2 + -1 != 0) {
    return;
  }
  puVar3 = (uint *)(*(int *)((int)param_1 + 0x2c) + -0x4dd4);
  if (*(int *)((int)param_1 + 0x2c) == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar3 >> 2) & 1);
  FUN_100067fc((void *)(-(uint)(*(int *)((int)param_1 + 0x2c) != 0) &
                       *(int *)((int)param_1 + 0x2c) - 0x58e0U),(int)param_1);
  FUN_1000dbd2((int)param_1);
  FUN_1000dae0(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

