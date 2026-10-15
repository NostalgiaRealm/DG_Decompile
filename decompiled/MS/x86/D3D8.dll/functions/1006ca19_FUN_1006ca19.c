/*
 * FUN_1006ca19 at 1006ca19
 * undefined1 __thiscall FUN_1006ca19(void * this, void * param_1, int * param_2, undefined4 param_3, void * param_4, int * param_5, uint * param_6, uint param_7, undefined4 param_8, int param_9)
 * Address ranges: 1006ca19-1006cb35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1006ca19(void *this,void *param_1,int *param_2,undefined4 param_3,void *param_4,int *param_5,
            uint *param_6,uint param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  int local_64;
  int local_60;
  int local_3c;
  int local_38;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_5;
  piVar1 = param_2;
  param_5 = (int *)CONCAT13(1,param_5._0_3_);
  local_8 = this;
  FUN_1006bef4(&local_3c,*(int *)((int)this + 0x44),param_1,param_2,param_4,piVar2,param_6,param_7,0
               ,param_9);
  param_2 = local_8;
  if (local_38 == 0) {
    local_c = FUN_1009b200(extraout_ECX,piVar2,piVar1);
    local_14 = piVar2[1];
    local_1c = piVar2[4];
    if (local_14 < local_1c) {
      local_10 = local_c * param_7;
      do {
        local_2c = *piVar2;
        uVar3 = local_14 + local_c;
        local_24 = piVar2[2];
        if (uVar3 < local_1c) {
          local_1c = uVar3;
        }
        local_20 = piVar2[3];
        local_18 = piVar2[5];
        local_28 = local_14;
        local_14 = uVar3;
        FUN_1006bef4(&local_64,local_8[0x11],param_1,piVar1,param_4,&local_2c,param_6,param_7,0,
                     param_9);
        if (local_60 == 0) {
          FUN_10082bc4(
                      "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                      );
          DebugBreak();
          return 0;
        }
        FUN_1006cb36(&param_2,param_1,piVar1,param_3,param_4,&local_64,piVar2);
        param_6 = (uint *)((int)param_6 + local_10);
        local_1c = piVar2[4];
      } while (local_14 < local_1c);
    }
  }
  else {
    FUN_1006cb36(&param_2,param_1,piVar1,param_3,param_4,&local_3c,piVar2);
  }
  return param_5._3_1_;
}

