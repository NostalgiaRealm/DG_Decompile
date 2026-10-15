/*
 * FUN_180031788 at 180031788
 * undefined8 __fastcall FUN_180031788(longlong param_1)
 * Address ranges: 180031788-180031915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180031788(longlong param_1)

{
  undefined8 *puVar1;
  HMODULE pHVar2;
  char cVar3;
  int iVar4;
  uint7 extraout_var;
  undefined8 uVar5;
  uint7 extraout_var_00;
  uint7 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  pHVar2 = DAT_18006c870;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  cVar3 = FUN_18004c734(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),pHVar2,1,
                        0x18006c300,0x18006c308,(LPCWSTR)(param_1 + 0x80),param_1 + 0x88);
  uVar6 = extraout_var;
  if (cVar3 != '\0') {
    local_58 = 0xf0000;
    local_54 = 2;
    puVar1 = (undefined8 *)(param_1 + 0x90);
    local_50 = 1;
    puVar8 = &local_58;
    local_4c = 0x10000;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_44 = 0x3c;
    plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x31c0);
    iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,0,puVar1);
    if (-1 < iVar4) {
      local_3c = 2;
      local_38 = 2;
      puVar8 = &local_40;
      local_2c = 4;
      local_40 = 0x10000;
      local_34 = 0x10000;
      plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x31c0);
      iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,0,param_1 + 0x98);
      if (-1 < iVar4) {
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x31c0);
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x31b0);
        *(undefined8 *)(param_1 + 0xb8) = uVar5;
        *(undefined1 *)(param_1 + 0xac) = 1;
        uVar5 = FUN_180034988(param_1,1,1);
        return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      plVar7 = (longlong *)*puVar1;
      (**(code **)(*plVar7 + 0x10))();
      *puVar1 = 0;
    }
    FUN_18004c8e0(plVar7,puVar8,1,param_1 + 0x80,param_1 + 0x88);
    uVar6 = extraout_var_00;
  }
  return (ulonglong)uVar6 << 8;
}

