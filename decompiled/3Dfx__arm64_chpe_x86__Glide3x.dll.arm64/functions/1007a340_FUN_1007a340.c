/*
 * FUN_1007a340 at 1007a340
 * undefined FUN_1007a340(void)
 * Address ranges: 1007a340-1007a54f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1007a340(int param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong extraout_x1;
  undefined4 *puVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = *(int *)(param_2 + 8);
  iVar3 = param_1 + iVar1 * 0x16c0;
  if (param_4 == 0) {
    local_4c = 4;
  }
  else {
    local_4c = *(undefined4 *)(&DAT_1009ba30 + param_4 * 4);
  }
  local_70 = param_3[2];
  uStack_78 = param_3[1];
  local_80 = *param_3;
  local_64 = 1;
  uStack_50 = 1;
  local_68 = *(undefined4 *)(param_3 + 3);
  local_5c = 0x200000060;
  uStack_48 = 0x802;
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    uStack_48 = 2;
  }
  cVar5 = '\0';
  local_54 = param_5;
  if (*(uint *)(param_1 + 0x518) != 0) {
    uVar10 = 0;
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x19c0) + 8);
    uVar2 = *(uint *)(param_1 + 0x4ec);
    uVar8 = (ulonglong)uVar2;
    do {
      if (cVar5 != '\0') break;
      uVar6 = (*pcVar4)(*(undefined4 *)(*(int *)(param_1 + 0x514) + uVar10 * 4),uVar8);
      cVar5 = (*extraout_w11)(uVar6,iVar1,(ulonglong)uVar2,uVar7,&local_80,param_2 + 4);
      uVar10 = uVar10 + 1;
      uVar8 = extraout_x1;
    } while (uVar10 < *(uint *)(param_1 + 0x518));
  }
  if (cVar5 == '\0') {
    puVar9 = (undefined4 *)(*(int *)(iVar3 + 0x19c0) + 8);
    uVar7 = (*pcVar4)();
    (*extraout_w11_01)(uVar7,*puVar9,&local_80,(int *)(param_2 + 4));
  }
  else {
    uVar7 = (*pcVar4)();
    (*extraout_w11_00)(uVar7);
  }
  *(char *)(param_2 + 0xd5c) = *(char *)(param_1 + 0x2d7);
  return *(int *)(param_2 + 4) != 0;
}

