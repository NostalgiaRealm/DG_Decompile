/*
 * FUN_180219070 at 180219070
 * undefined FUN_180219070(void)
 * Address ranges: 180219070-1802191f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180219070(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  uVar1 = *(uint *)(param_2 + 0x10);
  lVar7 = param_1 + (ulonglong)uVar1 * 0x1ac0;
  if (param_4 == 0) {
    uStack_54 = 4;
  }
  else {
    uStack_54 = *(undefined4 *)(&DAT_180238850 + (longlong)param_4 * 4);
  }
  local_80 = param_3[2];
  local_74 = 1;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_58 = 1;
  local_78 = *(undefined4 *)(param_3 + 3);
  local_6c = 0x200000060;
  local_50 = 0x802;
  if (*(char *)(param_1 + 0x313) == '\0') {
    local_50 = 2;
  }
  cVar3 = '\0';
  local_60 = param_5;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x688);
    uVar6 = 0;
    uVar4 = *(undefined8 *)(*(longlong *)(lVar7 + 0x1e00) + 0x10);
    do {
      if (cVar3 != '\0') break;
      uVar5 = (*(code *)puVar2)(0x180224000);
      cVar3 = (*extraout_x11)(uVar5,uVar1,uVar8,uVar4,&local_90,param_2 + 8);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x6c8));
  }
  if (cVar3 == '\0') {
    lVar7 = *(longlong *)(lVar7 + 0x1e00);
    uVar4 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_01)(uVar4,*(undefined8 *)(lVar7 + 0x10),&local_90,param_2 + 8);
  }
  else {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)();
  }
  *(undefined1 *)(param_2 + 0xd6c) = *(undefined1 *)(param_1 + 0x313);
  return *(longlong *)(param_2 + 8) != 0;
}

