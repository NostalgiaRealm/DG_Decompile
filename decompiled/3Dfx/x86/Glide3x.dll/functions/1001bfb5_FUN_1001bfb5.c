/*
 * FUN_1001bfb5 at 1001bfb5
 * undefined4 __fastcall FUN_1001bfb5(int param_1)
 * Address ranges: 1001bfb5-1001c0e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __fastcall FUN_1001bfb5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_1044 [1024];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_8 = (int *)**(undefined4 **)(*(int *)(param_1 + 0x3018) + 0x3308);
  FUN_10052de1((int *)(param_1 + 0x301c),0,0x3c);
  FUN_10052de1((int *)(param_1 + 0x3058),0,0x3c);
  uVar2 = 1;
  uVar3 = 0;
  do {
    if (((uVar3 == 2) || (uVar3 == 3)) || (uVar3 == 4)) {
      local_28 = 2;
      local_20 = 0x10000;
    }
    else {
      local_20 = 0;
      local_28 = uVar2;
    }
    local_2c = 0x1000;
    local_24 = 8;
    local_1c = 0x40;
    local_18 = 0x10;
    FUN_1001f6ec(local_1044,uVar3);
    local_14 = local_1044;
    local_10 = 0;
    local_c = 0;
    iVar1 = (**(code **)(*local_8 + 0xc))(local_8,&local_2c,&local_14,param_1 + 0x301c + uVar3 * 4);
    if (iVar1 < 0) {
LAB_1001c0d3:
      uVar2 = 0;
      iVar1 = FUN_1001bbe4(param_1);
      break;
    }
    local_44 = 0;
    local_34 = 0;
    local_30 = 0;
    local_40 = 1;
    local_3c = 0;
    local_38 = 0x100;
    iVar1 = (**(code **)(*local_8 + 0x1c))
                      (local_8,*(undefined4 *)(param_1 + 0x301c + uVar3 * 4),&local_44,
                       param_1 + 0x3058 + uVar3 * 4);
    if (iVar1 < 0) goto LAB_1001c0d3;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xf);
  return CONCAT31((int3)((uint)iVar1 >> 8),(char)uVar2);
}

