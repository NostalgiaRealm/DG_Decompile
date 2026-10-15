/*
 * FUN_10055548 at 10055548
 * undefined1 __stdcall FUN_10055548(uint param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, int param_5, int param_6, undefined4 param_7, int param_8, int * param_9, undefined4 * param_10, undefined4 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 10055548-1005573a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_10055548(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,int param_8,int *param_9,undefined4 *param_10,
            undefined4 param_11,undefined1 param_12,undefined1 param_13)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_5058 [4630];
  int local_800 [6];
  int local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  int local_7dc [9];
  undefined1 *local_7b8;
  undefined2 local_7b4;
  undefined1 local_79c;
  undefined1 local_79a [90];
  int local_740;
  undefined4 local_73c;
  undefined1 local_738;
  undefined1 local_737;
  int local_714 [193];
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
  
  uStack_14 = 0x10055567;
  FUN_10054904(local_5058,param_3,param_1);
  local_38[0] = param_5;
  local_28 = local_5058;
  local_24 = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  piVar4 = local_38;
  piVar5 = local_800;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_7e0 = 0;
  local_7e4 = param_4;
  FUN_100ada8e(local_7dc,0,0x3cc);
  FUN_100ada8e(local_410,0,0x3c0);
  FUN_100ada8e(local_714,0,0x15c);
  local_740 = param_6 + 4;
  local_73c = param_4;
  local_737 = param_12;
  local_380 = param_1;
  local_37c = param_2;
  local_79c = param_13;
  local_738 = 0;
  local_362 = 0;
  local_360 = 0;
  FUN_100ada8e(&local_7e8,0,0x38);
  local_7e8 = param_8;
  local_7b8 = local_79a;
  local_7b4 = 0x40;
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
  FUN_100a14c1(param_9,&local_48,0x2c);
  uStack_14 = uStack_14 & 0xffffff;
  *(int *)(*param_9 + 0x20) = param_9[1] - *param_9;
  uVar2 = FUN_10054daa(param_9,local_800);
  if ((char)uVar2 != '\0') {
    *(int *)(*param_9 + 0x24) = param_9[1] - *param_9;
    local_374 = FUN_10055981(param_9,(int)local_800);
    if (local_374 != 0) {
      *(int *)(*param_9 + 0x28) = param_9[1] - *param_9;
      bVar1 = FUN_10054f5d(param_9,(uint)local_800);
      if (bVar1) {
        FUN_100a15a6(param_9);
        FUN_1005ce91((int)local_800,param_10);
        return 1;
      }
    }
  }
  return uStack_14._3_1_;
}

