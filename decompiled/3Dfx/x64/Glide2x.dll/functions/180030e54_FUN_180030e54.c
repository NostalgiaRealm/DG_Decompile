/*
 * FUN_180030e54 at 180030e54
 * undefined1 __fastcall FUN_180030e54(longlong param_1)
 * Address ranges: 180030e54-180030faa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_180030e54(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_1078;
  undefined4 local_1074;
  undefined4 local_1070;
  undefined4 local_106c;
  undefined4 local_1068;
  undefined4 local_1064;
  undefined1 *local_1060;
  undefined8 local_1058;
  undefined4 local_1050;
  undefined8 local_104c;
  undefined4 local_1044;
  undefined8 local_1040;
  undefined1 local_1038 [4088];
  undefined8 uStack_40;
  
  uStack_40 = 0x180030e71;
  plVar2 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3028) + 0x31c0);
  FUN_18005f374((undefined1 *)(param_1 + 0x3030),0,0x78);
  FUN_18005f374((undefined1 *)(param_1 + 0x30a8),0,0x78);
  uVar5 = 0;
  while( true ) {
    iVar4 = (int)uVar5;
    if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4)) {
      local_1074 = 2;
      local_106c = 0x10000;
    }
    else {
      local_106c = 0;
      local_1074 = 1;
    }
    local_1078 = 0x1000;
    local_1070 = 8;
    local_1068 = 0x40;
    local_1064 = 0x10;
    FUN_180034f50(local_1038,iVar4);
    local_1060 = local_1038;
    local_1058 = 0;
    lVar1 = param_1 + uVar5 * 8;
    iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_1078,&local_1060,lVar1 + 0x3030);
    if (iVar3 < 0) break;
    local_1050 = 0;
    local_1040 = 0;
    local_104c = 1;
    local_1044 = 0x100;
    iVar3 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined8 *)(lVar1 + 0x3030),&local_1050,
                       param_1 + 0x30a8 + uVar5 * 8);
    if (iVar3 < 0) break;
    uVar5 = (ulonglong)(iVar4 + 1U);
    if (0xe < iVar4 + 1U) {
      return 1;
    }
  }
  FUN_1800308e0(param_1);
  return 0;
}

