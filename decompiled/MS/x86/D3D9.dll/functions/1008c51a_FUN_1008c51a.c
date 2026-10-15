/*
 * FUN_1008c51a at 1008c51a
 * undefined4 __fastcall FUN_1008c51a(undefined4 param_1, uint * param_2)
 * Address ranges: 1008c51a-1008c6e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1008c51a(void *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  LPVOID local_2c [4];
  undefined4 *local_1c;
  int local_18;
  void *local_c;
  int local_8;
  
  local_c = param_1;
  FUN_10036e19(&local_1c,0x200);
  puVar1 = param_2 + 3;
  local_8 = FUN_100c3e60((int *)&local_1c,*puVar1);
  FUN_10036e19(local_2c,0x80);
  FUN_1008c23f((int *)local_2c,param_2);
  uVar4 = 0;
  FUN_100c3be1((int *)puVar1,(int *)local_2c,0x3e);
  FUN_100c422d(*puVar1,(int *)&local_1c);
  if ((param_2[5] & 1) != 0) {
    FUN_100c42a9(*puVar1,(int *)&local_1c);
  }
LAB_1008c5d7:
  do {
    if (*(char *)((int)param_2 + uVar4 + 0x73) != '\0') {
      if (uVar4 == 0) {
        FUN_100c43de((int *)&local_1c);
        uVar4 = 1;
        goto LAB_1008c5d7;
      }
      FUN_100c43b1((int *)&local_1c);
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      uVar4 = 0;
      do {
        if (*(char *)((int)param_2 + uVar4 + 0x75) != '\0') {
          FUN_100c440d((int *)&local_1c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      uVar4 = 0;
      do {
        if ((1 << ((byte)uVar4 & 0x1f) & (param_2[8] | param_2[7])) != 0) {
          iVar2 = FUN_100c3e1b(*puVar1);
          if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
            FUN_100c4157((int *)&local_1c);
          }
          else if (iVar2 == 0x51) {
            FUN_100c41b9((int *)&local_1c);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
      FUN_100890ee((int *)&local_1c,(int)param_2);
      if (*(char *)((int)param_2 + 0x41) != '\0') {
        FUN_100c3d50((int *)&local_1c,2);
      }
      FUN_100c3eb1((int *)&local_1c,(int *)local_2c,local_8);
      FUN_100c3d16(local_c,local_1c,local_18 - (int)local_1c);
      thunk_FUN_100cfd6c(local_2c[0]);
      uVar3 = thunk_FUN_100cfd6c(local_1c);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  } while( true );
}

