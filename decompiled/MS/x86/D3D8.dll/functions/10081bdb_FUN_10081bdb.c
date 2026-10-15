/*
 * FUN_10081bdb at 10081bdb
 * undefined __fastcall FUN_10081bdb(int * param_1)
 * Address ranges: 10081bdb-10081bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10081bdb(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uStack_8;
  
  LOCK();
  piVar1 = param_1 + 0x1c;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (param_1[0x1b] + iVar2 + -1 != 0) {
    return;
  }
  puVar3 = (uint *)(param_1[0xb] + -0x4dd4);
  if (param_1[0xb] == 0) {
    puVar3 = (uint *)&DAT_00000b0c;
  }
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*puVar3 >> 2) & 1);
  FUN_10006765((void *)(-(uint)(param_1[0xb] != 0) & param_1[0xb] - 0x58e0U),(int)param_1);
  FUN_10010c10((int)param_1);
  (**(code **)(*param_1 + 4))(1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

