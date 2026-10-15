/*
 * FUN_1003c0da at 1003c0da
 * undefined1 __stdcall FUN_1003c0da(int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int * param_5, char param_6, undefined4 * param_7)
 * Address ranges: 1003c0da-1003c305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1003c0da(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5,
            char param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4f0 [44];
  undefined4 *local_440 [2];
  undefined4 uStack_438;
  undefined4 uStack_434;
  uint local_430 [2];
  undefined4 local_428 [10];
  undefined1 *local_400;
  undefined2 local_3fc;
  int local_3f8 [5];
  undefined1 local_3e4;
  undefined1 local_3e3;
  undefined1 local_3e2 [66];
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  int local_390 [51];
  uint local_2c4;
  int local_2c0;
  undefined1 local_2ad;
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
  void *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_11;
  
  local_440[0] = local_4f0;
  local_20 = param_2;
  local_1c = param_3;
  uStack_438 = param_2;
  uStack_434 = param_3;
  local_28 = local_440[0];
  FUN_1005c9cc(local_3f8,0,0x398);
  FUN_1005c9cc(local_390,0,0xe8);
  local_2c0 = param_1;
  local_2c4 = *(uint *)(param_1 + 0x44) & 0xfffff;
  if ((param_4 == 0x10051) || (local_2ad = 1, param_4 == 0x20051)) {
    local_2ad = 0;
  }
  uVar1 = FUN_10057dfe(param_4);
  local_3e3 = uVar1 < 0x50;
  local_3e4 = 0;
  FUN_1005c9cc((int *)local_430,0,0x38);
  local_430[0] = param_4;
  local_400 = local_3e2;
  local_3fc = 0x40;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_390[3] = 0x110800;
  local_390[2] = 0x210800;
  local_390[1] = 0x310800;
  local_390[0] = 0x410800;
  local_390[4] = 0x410802;
  local_3a0 = 0x110400;
  local_39c = 0x410400;
  local_398 = 0x20000d00;
  local_58 = 0x43425844;
  local_44 = 1;
  local_3c = 3;
  FUN_10057cf9(param_5,&local_58,0x2c);
  local_11 = 0;
  *(int *)(*param_5 + 0x20) = param_5[1] - *param_5;
  FUN_10019cac(&local_28,0x800);
  uVar2 = FUN_1003bf23(local_2c,&local_28,(uint)local_440,param_6);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_10037f10(param_5,(int)local_440);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_5 + 0x24) = param_5[1] - *param_5;
      iVar3 = FUN_1003792c(param_5,(int)local_440);
      if (iVar3 != 0) {
        *(int *)(*param_5 + 0x28) = param_5[1] - *param_5;
        FUN_10057cf9(param_5,local_28,local_24 - (int)local_28);
        FUN_10057dde(param_5);
        if (param_7 != (undefined4 *)0x0) {
          puVar4 = local_428;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *param_7 = *puVar4;
            puVar4 = puVar4 + 1;
            param_7 = param_7 + 1;
          }
        }
        local_11 = 1;
      }
    }
  }
  thunk_FUN_1005c76c(local_28);
  return local_11;
}

