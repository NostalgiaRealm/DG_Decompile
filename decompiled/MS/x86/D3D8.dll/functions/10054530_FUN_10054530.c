/*
 * FUN_10054530 at 10054530
 * undefined1 __stdcall FUN_10054530(uint param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 10054530-1005464a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10054530(uint param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_9;
  
  local_58 = 0x43425844;
  local_9 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_44 = 1;
  local_3c = 3;
  FUN_100a14c1(param_2,&local_58,0x2c);
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  FUN_1002d6f1(&local_2c,0x800);
  iVar2 = FUN_10055981(&local_2c,param_1);
  *(int *)(param_1 + 0x48c) = iVar2;
  if (iVar2 != 0) {
    FUN_1002d6f1(&local_1c,0x800);
    cVar1 = FUN_10054413(&local_1c,param_1);
    if (cVar1 != '\0') {
      *(int *)(*param_2 + 0x20) = param_2[1] - *param_2;
      uVar3 = FUN_100565eb(param_2,param_1);
      if ((char)uVar3 != '\0') {
        *(int *)(*param_2 + 0x24) = param_2[1] - *param_2;
        FUN_100a14c1(param_2,local_2c,local_28 - (int)local_2c);
        *(int *)(*param_2 + 0x28) = param_2[1] - *param_2;
        FUN_100a14c1(param_2,local_1c,local_18 - (int)local_1c);
        FUN_100a15a6(param_2);
        if (param_3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(param_1 + 0x20);
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *param_3 = *puVar4;
            puVar4 = puVar4 + 1;
            param_3 = param_3 + 1;
          }
        }
        local_9 = 1;
      }
    }
    thunk_FUN_100ad48c(local_1c);
  }
  thunk_FUN_100ad48c(local_2c);
  return local_9;
}

