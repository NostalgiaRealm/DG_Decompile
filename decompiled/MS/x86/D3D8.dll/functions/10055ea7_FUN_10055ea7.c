/*
 * FUN_10055ea7 at 10055ea7
 * undefined __stdcall FUN_10055ea7(int param_1, int * param_2)
 * Address ranges: 10055ea7-10056237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055ea7(int param_1,int *param_2)

{
  int iVar1;
  uint local_a0 [12];
  uint local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  FUN_1005cba4(param_1,param_2);
  if ((*(char *)(param_1 + 0xc9) != '\0') && (*(char *)(*(int *)(param_1 + 0x10) + 0x442) != '\0'))
  {
    local_1c = *(uint *)(param_1 + 0x1ec);
    local_14 = FUN_100a05ed(param_1 + 0x18,4,'\x01');
    local_18 = (local_1c & 0xc0000) + 0x40000 | local_1c & 0xffb3ffff | 0x300000;
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x38);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x38);
    local_24 = 0;
    local_28 = 0x3fb8aa3b;
    local_2c = 0x3fb8aa3b;
    local_20 = 0;
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x38);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x2019);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0xe);
    iVar1 = FUN_100a15c6(*(uint *)(param_1 + 0x18));
    if (iVar1 == 0x40) {
      local_20 = 0x3f800000;
      FUN_100a138c((int *)(param_1 + 0x18),param_2,0x200e);
    }
    else {
      FUN_100a138c((int *)(param_1 + 0x18),param_2,0x2081);
    }
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x20);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x37);
    FUN_100a138c((int *)(param_1 + 0x18),param_2,0x37);
    FUN_1005abfa(param_1,*(uint *)(param_1 + 0x1bc),1,local_a0);
    local_50 = local_14;
    local_70 = local_18;
    local_4c = 0;
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    local_34 = 0xffffffff;
    local_6c = 0xaa;
    local_60 = 0xffffffff;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
    FUN_100a14a8((int *)(param_1 + 0x18),param_2,0x37);
    FUN_100a068b(param_1 + 0x18,local_14);
  }
  FUN_10056238(param_1,param_2,4,
               (*(char *)(*(int *)(param_1 + 0x10) + 0x443) != '\0') - 1U & 0xe |
               *(char *)(*(int *)(param_1 + 0x10) + 0x442) == '\0');
  FUN_10056238(param_1,param_2,2,~*(byte *)(*(int *)(param_1 + 0x10) + 0x444));
  FUN_10056238(param_1,param_2,3,~*(byte *)(*(int *)(param_1 + 0x10) + 0x445));
  local_18 = 0;
  do {
    FUN_10056238(param_1,param_2,local_18 + 5,
                 ~*(byte *)(local_18 + 0x446 + *(int *)(param_1 + 0x10)));
    FUN_1005a8c7(param_1,(uint *)(param_1 + (local_18 + 0x7f) * 4));
    local_18 = local_18 + 1;
  } while (local_18 < 8);
  FUN_1005a8c7(param_1,(uint *)(param_1 + 0x1ec));
  FUN_1005a8c7(param_1,(uint *)(param_1 + 0x1f0));
  FUN_1005a8c7(param_1,(uint *)(param_1 + 500));
  FUN_1005a8c7(param_1,(uint *)(param_1 + 0x1f8));
  return;
}

