/*
 * FUN_1006ff90 at 1006ff90
 * undefined1 __thiscall FUN_1006ff90(void * this, int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int * param_5, undefined4 param_6, undefined4 * param_7)
 * Address ranges: 1006ff90-10070182
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1006ff90(void *this,int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5,
            undefined4 param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  undefined4 local_728 [150];
  undefined4 local_4d0 [6];
  uint local_4b8 [2];
  undefined4 local_4b0 [10];
  undefined1 *local_488;
  undefined2 local_484;
  int local_480 [5];
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_46a [90];
  int local_410 [55];
  uint local_334;
  int local_330;
  undefined1 local_31d;
  void *local_4c;
  undefined4 local_48 [4];
  undefined4 *local_38 [4];
  int local_28;
  undefined4 local_24;
  undefined1 local_11;
  
  local_4c = this;
  local_38[0] = local_728;
  local_28 = 0;
  local_24 = 0;
  local_38[3] = (undefined4 *)param_3;
  local_38[2] = (undefined4 *)param_2;
  ppuVar4 = local_38;
  puVar5 = local_4d0;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *ppuVar4;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_100cfed0(local_480,0,0x430);
  FUN_100cfed0(local_410,0,0xf8);
  local_330 = param_1;
  local_334 = *(uint *)(param_1 + 0x44) & 0xfffff;
  if ((param_4 == 0x10051) || (local_31d = 1, param_4 == 0x20051)) {
    local_31d = 0;
  }
  uVar1 = FUN_100c3e1b(param_4);
  local_46b = uVar1 < 0x50;
  local_46c = 0;
  FUN_100cfed0((int *)local_4b8,0,0x38);
  local_4b8[0] = param_4;
  local_488 = local_46a;
  local_484 = 0x40;
  FUN_1006ba6c((int)local_4d0);
  local_48[0] = 0x43425844;
  local_38[1] = (undefined4 *)0x1;
  local_38[3] = (undefined4 *)0x3;
  local_28 = extraout_ECX;
  FUN_100c3d16(param_5,local_48,0x2c);
  local_11 = 0;
  *(int *)(*param_5 + 0x20) = param_5[1] - *param_5;
  FUN_10036e19(local_38 + 3,0x800);
  uVar2 = FUN_1006fe5a(local_4c,local_38 + 3,(uint)local_4d0);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_1006bdf6(param_5,(int)local_4d0,0);
    if ((char)uVar2 != '\0') {
      *(int *)(*param_5 + 0x24) = param_5[1] - *param_5;
      iVar3 = FUN_10068d4b(param_5,(int)local_4d0);
      if (iVar3 != 0) {
        *(int *)(*param_5 + 0x28) = param_5[1] - *param_5;
        FUN_100c3d16(param_5,local_38[3],local_28 - (int)local_38[3]);
        FUN_100c3dfb(param_5);
        if (param_7 != (undefined4 *)0x0) {
          puVar5 = local_4b0;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *param_7 = *puVar5;
            puVar5 = puVar5 + 1;
            param_7 = param_7 + 1;
          }
        }
        local_11 = 1;
      }
    }
  }
  thunk_FUN_100cfd6c(local_38[3]);
  return local_11;
}

