/*
 * FUN_100681c0 at 100681c0
 * undefined1 __stdcall FUN_100681c0(uint param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, int param_5, int param_6, undefined4 param_7, int param_8, int * param_9, undefined4 * param_10, undefined4 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 100681c0-100683b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_100681c0(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,int param_8,int *param_9,undefined4 *param_10,
            undefined4 param_11,undefined1 param_12,undefined1 param_13)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_5300 [4764];
  int local_890 [6];
  int local_878;
  undefined4 local_874;
  undefined4 local_870;
  int local_86c [9];
  undefined1 *local_848;
  undefined2 local_844;
  undefined1 local_82c;
  undefined1 local_82a [90];
  int local_7d0;
  undefined4 local_7cc;
  undefined1 local_7c8;
  undefined1 local_7c7;
  int local_7a4 [229];
  int local_410 [36];
  uint local_380;
  undefined4 local_37c;
  int local_374;
  undefined2 local_362;
  undefined1 local_360;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38 [4];
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x100681df;
  FUN_1006743f(local_5300,param_3,param_1);
  local_38[0] = param_5;
  local_28 = local_5300;
  local_24 = param_7;
  local_38[2] = 0;
  local_38[3] = 0;
  piVar4 = local_38;
  piVar5 = local_890;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_874 = param_4;
  local_870 = 1;
  FUN_100cfed0(local_86c,0,0x45c);
  FUN_100cfed0(local_410,0,0x3c0);
  FUN_100cfed0(local_7a4,0,0x1ec);
  local_7d0 = param_6 + 4;
  local_7cc = param_4;
  local_7c7 = param_12;
  local_380 = param_1;
  local_37c = param_2;
  local_82c = param_13;
  local_7c8 = 1;
  local_362 = 0;
  local_360 = 0;
  FUN_100cfed0(&local_878,0,0x38);
  local_878 = param_8;
  local_848 = local_82a;
  local_844 = 0x40;
  local_48 = 0x43425844;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38[0] = 0;
  local_38[1] = 1;
  local_38[2] = 0;
  local_38[3] = 3;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  FUN_100c3d16(param_9,&local_48,0x2c);
  uStack_14 = uStack_14 & 0xffffff;
  *(int *)(*param_9 + 0x20) = param_9[1] - *param_9;
  uVar2 = FUN_100678f9(param_9,local_890);
  if ((char)uVar2 != '\0') {
    *(int *)(*param_9 + 0x24) = param_9[1] - *param_9;
    local_374 = FUN_10068d4b(param_9,(int)local_890);
    if (local_374 != 0) {
      *(int *)(*param_9 + 0x28) = param_9[1] - *param_9;
      bVar1 = FUN_10067aac(param_9,(uint)local_890);
      if (bVar1) {
        FUN_100c3dfb(param_9);
        FUN_10072b48((int)local_890,param_10);
        return 1;
      }
    }
  }
  return uStack_14._3_1_;
}

