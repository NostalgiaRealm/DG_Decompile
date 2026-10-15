/*
 * FUN_1005464b at 1005464b
 * undefined1 __stdcall FUN_1005464b(uint param_1, int * param_2, int param_3, int param_4, uint param_5, undefined4 * param_6)
 * Address ranges: 1005464b-1005477e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1005464b(uint param_1,int *param_2,int param_3,int param_4,uint param_5,undefined4 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  uVar5 = 0;
  local_34 = 0x43425844;
  local_5 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 1;
  local_1c = 0;
  local_18 = 3;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_100a14c1(param_2,&local_34,0x2c);
  FUN_100ada8e((int *)(param_1 + 0xc0),0,0xd8);
  FUN_100562fd(param_1);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  if ((*(int *)(param_1 + 0x18) == 0x10051) || (uVar1 = 1, *(int *)(param_1 + 0x18) == 0x20051)) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x1af) = uVar1;
  FUN_10056357(param_1);
  if (param_5 != 0) {
    do {
      uVar3 = (uint)*(byte *)(uVar5 + param_3);
      if (uVar3 != 0x11) {
        FUN_100563a4(param_1,uVar3,*(byte *)(uVar3 + param_4));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_5);
  }
  *(int *)(*param_2 + 0x20) = param_2[1] - *param_2;
  uVar2 = FUN_100565eb(param_2,param_1);
  if ((char)uVar2 != '\0') {
    iVar4 = *param_2;
    *(int *)(iVar4 + 0x24) = param_2[1] - iVar4;
    uVar2 = FUN_10053c4e(param_2,iVar4,param_3,param_4,param_5);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_2 + 0x28) = param_2[1] - *param_2;
      uVar2 = FUN_10053d60(param_2,param_1,param_3,param_4,param_5);
      if ((char)uVar2 != '\0') {
        FUN_100a15a6(param_2);
        if (param_6 != (undefined4 *)0x0) {
          puVar6 = (undefined4 *)(param_1 + 0x20);
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *param_6 = *puVar6;
            puVar6 = puVar6 + 1;
            param_6 = param_6 + 1;
          }
        }
        local_5 = 1;
      }
    }
  }
  return local_5;
}

