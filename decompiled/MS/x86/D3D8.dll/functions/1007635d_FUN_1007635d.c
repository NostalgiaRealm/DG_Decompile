/*
 * FUN_1007635d at 1007635d
 * undefined4 __fastcall FUN_1007635d(undefined4 param_1, uint * param_2)
 * Address ranges: 1007635d-10076526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1007635d(void *param_1,uint *param_2)

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
  FUN_1002d6f1(&local_1c,0x200);
  puVar1 = param_2 + 3;
  local_8 = FUN_100a160b((int *)&local_1c,*puVar1);
  FUN_1002d6f1(local_2c,0x80);
  FUN_10076082((int *)local_2c,param_2);
  uVar4 = 0;
  FUN_100a138c((int *)puVar1,(int *)local_2c,0x3e);
  FUN_100a19d8(*puVar1,(int *)&local_1c);
  if ((param_2[5] & 1) != 0) {
    FUN_100a1a54(*puVar1,(int *)&local_1c);
  }
LAB_1007641a:
  do {
    if (*(char *)((int)param_2 + uVar4 + 0x73) != '\0') {
      if (uVar4 == 0) {
        FUN_100a1b89((int *)&local_1c);
        uVar4 = 1;
        goto LAB_1007641a;
      }
      FUN_100a1b5c((int *)&local_1c);
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      uVar4 = 0;
      do {
        if (*(char *)((int)param_2 + uVar4 + 0x75) != '\0') {
          FUN_100a1bb8((int *)&local_1c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 6);
      uVar4 = 0;
      do {
        if ((1 << ((byte)uVar4 & 0x1f) & (param_2[8] | param_2[7])) != 0) {
          iVar2 = FUN_100a15c6(*puVar1);
          if (((iVar2 == 0x40) || (iVar2 == 0x41)) || (iVar2 == 0x50)) {
            FUN_100a1902((int *)&local_1c);
          }
          else if (iVar2 == 0x51) {
            FUN_100a1964((int *)&local_1c);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
      FUN_10072f31((int *)&local_1c,(int)param_2);
      if (*(char *)((int)param_2 + 0x41) != '\0') {
        FUN_100a14fb((int *)&local_1c,2);
      }
      FUN_100a165c((int *)&local_1c,(int *)local_2c,local_8);
      FUN_100a14c1(local_c,local_1c,local_18 - (int)local_1c);
      thunk_FUN_100ad48c(local_2c[0]);
      uVar3 = thunk_FUN_100ad48c(local_1c);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  } while( true );
}

