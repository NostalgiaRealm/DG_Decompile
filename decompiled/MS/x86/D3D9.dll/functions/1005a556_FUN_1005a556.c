/*
 * FUN_1005a556 at 1005a556
 * undefined __stdcall FUN_1005a556(int * param_1, int * param_2)
 * Address ranges: 1005a556-1005a5c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005a556(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  
  if (param_1[0x82] == 0) {
    uVar2 = 0;
    uVar1 = FUN_100c2e34((int)param_1,4,'\x01');
    param_1[0x82] = uVar1;
    if (*(char *)((int)param_1 + 0x1fe) != '\x0f') {
      FUN_100c40de(CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)((int)param_1 + 0x202)),
                   CONCAT31((int3)((uint)extraout_EDX >> 8),*(char *)((int)param_1 + 0x1fe)) ^ 0xf);
      FUN_100c3be1(param_1,param_2,0x2036);
    }
  }
  return;
}

