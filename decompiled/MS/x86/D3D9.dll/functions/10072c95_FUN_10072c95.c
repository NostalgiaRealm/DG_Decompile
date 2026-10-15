/*
 * FUN_10072c95 at 10072c95
 * undefined1 __thiscall FUN_10072c95(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, int param_6, undefined4 param_7, uint param_8, int * param_9, undefined4 * param_10, undefined4 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 10072c95-10072e3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_10072c95(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,undefined4 param_7,uint param_8,int *param_9,
            undefined4 *param_10,undefined4 param_11,undefined1 param_12,undefined1 param_13)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_4d0 [6];
  uint local_4b8 [12];
  undefined1 *local_488;
  undefined2 local_484;
  int local_480 [5];
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_46a [90];
  int local_410;
  undefined4 local_40c;
  undefined1 local_408;
  undefined1 local_407;
  int local_3e4 [231];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [8];
  void *local_18;
  undefined1 local_11;
  
  local_38[0] = param_6;
  local_38[2] = param_2;
  local_18 = this;
  local_38[4] = param_5;
  local_38[5] = param_7;
  local_38[3] = param_3;
  piVar5 = local_38;
  piVar6 = local_4d0;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  FUN_100cfed0(local_480,0,0x430);
  FUN_100cfed0(local_3e4,0,0x1ec);
  local_410 = param_4 + 4;
  local_40c = param_1;
  local_408 = 1;
  local_407 = param_12;
  uVar2 = FUN_100c3e1b(param_8);
  local_46b = uVar2 < 0x50;
  local_46c = param_13;
  FUN_100cfed0((int *)local_4b8,0,0x38);
  local_4b8[0] = param_8;
  local_488 = local_46a;
  local_484 = 0x40;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_38[2] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_48 = 0x43425844;
  local_38[1] = 1;
  local_38[3] = 3;
  FUN_100c3d16(param_9,&local_48,0x2c);
  local_11 = 0;
  *(int *)(*param_9 + 0x20) = param_9[1] - *param_9;
  cVar1 = FUN_10070483(param_9,local_4d0);
  if (cVar1 != '\0') {
    *(int *)(*param_9 + 0x24) = param_9[1] - *param_9;
    iVar4 = FUN_10068d4b(param_9,(int)local_4d0);
    if (iVar4 != 0) {
      *(int *)(*param_9 + 0x28) = param_9[1] - *param_9;
      uVar3 = FUN_100729e6(local_18,param_9,(uint)local_4d0);
      if ((char)uVar3 != '\0') {
        FUN_100c3dfb(param_9);
        FUN_10072b48((int)local_4d0,param_10);
        local_11 = 1;
      }
    }
  }
  return local_11;
}

