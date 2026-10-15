/*
 * FUN_1003289c at 1003289c
 * undefined __stdcall FUN_1003289c(int * param_1, int * param_2)
 * Address ranges: 1003289c-10032906
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003289c(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  if (param_1[0x7e] == 0) {
    uVar2 = 0;
    uVar1 = FUN_10056ee5((int)param_1,4,'\x01');
    param_1[0x7e] = uVar1;
    if (*(char *)((int)param_1 + 0x1ee) != '\x0f') {
      FUN_100580c1(CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)((int)param_1 + 0x1f2)),
                   CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)((int)param_1 + 0x1ee)) ^ 0xf);
      FUN_10057c8a(param_1,param_2,0x2036);
    }
  }
  return;
}

