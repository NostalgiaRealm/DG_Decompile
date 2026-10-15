/*
 * FUN_10092800 at 10092800
 * undefined FUN_10092800(void)
 * Address ranges: 10092800-100929cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10092800(undefined4 param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  
  uVar4 = FUN_10098500(param_1,param_2,param_3,param_4,param_5);
  iVar1 = *(int *)(param_3 + 0x1a4);
  if (iVar1 != 0) {
    uVar8 = 0xf;
    if (param_4 != 0 && param_4 != 3) {
      uVar8 = (uint)param_5;
    }
    uVar4 = uVar4 & 0xff;
    uVar2 = *(undefined1 *)(uVar8 + 0x101623c0);
    puVar7 = &DAT_101623d0;
    uVar5 = FUN_10121590(param_3 + 0x18,(&DAT_101623d0)[uVar8 * 2],1);
    uVar6 = uVar5 & 0xffffffff;
    uVar3 = puVar7[uVar8 * 2 + 1];
    uStack_7c = param_2;
    if (param_4 == 0) {
      if (*(char *)(iVar1 + 0x52e) == '\0') {
        uVar4 = FUN_100926b8(uVar5,param_2,iVar1,uVar6,uVar3,uVar4,uVar2);
      }
      else {
        uVar4 = FUN_10092018();
      }
      local_60 = 0;
      local_68 = 0xe4;
      local_6c = *(undefined4 *)(iVar1 + 0x488);
      local_80 = iVar1 + 0x18;
      local_64 = 0x3f800000;
      local_70 = 8;
      local_78 = 0x36;
      uStack_74 = uVar4;
      FUN_10122a88(&local_80,0x24);
    }
    else if (param_4 == 3) {
      if (*(char *)(iVar1 + 0x52f) == '\0') {
        uVar4 = FUN_100926b8(uVar5,param_2,iVar1,uVar6,uVar3,uVar4,uVar2);
      }
      else {
        uVar4 = FUN_10092490();
      }
      local_60 = 0;
      local_68 = 0xe4;
      local_6c = *(undefined4 *)(iVar1 + 0x488);
      local_80 = iVar1 + 0x18;
      local_64 = 0x3f800000;
      local_70 = 8;
      local_78 = 0x36;
      uStack_74 = uVar4;
      FUN_10122a88(&local_80,0x24);
    }
    else {
      uVar4 = FUN_100926b8(uVar5,param_2,iVar1,uVar6,uVar3,uVar4,uVar2);
    }
  }
  return uVar4;
}

