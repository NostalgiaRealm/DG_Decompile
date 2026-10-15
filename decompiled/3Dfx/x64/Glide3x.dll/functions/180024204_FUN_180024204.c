/*
 * FUN_180024204 at 180024204
 * undefined8 __fastcall FUN_180024204(longlong param_1)
 * Address ranges: 180024204-1800243d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180024204(longlong param_1)

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
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  
  pHVar2 = DAT_18006d9d0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  cVar3 = FUN_18004ed40(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3330),
                        (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x280) + 0x3338),pHVar2,2,
                        0x18006c2ac,0x18006d1d0,(LPCWSTR)(param_1 + 0x2a0),param_1 + 0x2b0);
  uVar6 = extraout_var;
  if (cVar3 != '\0') {
    local_68 = 0x140000;
    local_64 = 2;
    puVar1 = (undefined8 *)(param_1 + 0x2c0);
    local_60 = 1;
    puVar8 = &local_68;
    local_5c = 0x10000;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    local_54 = 0x50;
    plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x280) + 0x3340);
    iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,0,puVar1);
    if (-1 < iVar4) {
      local_50 = 0x10000;
      puVar8 = &local_50;
      local_4c = 2;
      local_48 = 2;
      local_44 = 0x10000;
      local_3c = 4;
      plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x280) + 0x3340);
      iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,0,param_1 + 0x2c8);
      if (-1 < iVar4) {
        *(undefined4 *)(param_1 + 0x168) = 0;
        *(undefined2 *)(param_1 + 0x224) = 0;
        *(undefined1 *)(param_1 + 0x226) = 0;
        *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
        *(undefined4 *)(*(longlong *)(param_1 + 0x280) + 0x32c0) = *(undefined4 *)(param_1 + 0x158);
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x3340);
        *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x3330);
        *(undefined8 *)(param_1 + 0x2e8) = uVar5;
        *(undefined1 *)(param_1 + 0x2dc) = 1;
        uVar5 = FUN_180027564(param_1,1,1);
        return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      plVar7 = (longlong *)*puVar1;
      (**(code **)(*plVar7 + 0x10))();
      *puVar1 = 0;
    }
    FUN_18004eeec(plVar7,puVar8,2,param_1 + 0x2a0,param_1 + 0x2b0);
    uVar6 = extraout_var_00;
  }
  return (ulonglong)uVar6 << 8;
}

