/*
 * FUN_10032308 at 10032308
 * undefined FUN_10032308(void)
 * Address ranges: 10032308-100324d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032308(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(char *)(param_2 + 9) != '\0') && (*(char *)((int)param_2 + 0x25) == '\0')) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    puVar3 = param_2 + 5;
    (*pcVar2)();
    (*extraout_w11_00)(param_1,&local_90,*puVar3);
    iVar1 = *(int *)(param_1 + 4);
    if ((int)param_2[2] < 4) {
      uStack_4c = *(undefined4 *)(&DAT_100b3568 + param_2[2] * 4);
    }
    else {
      uStack_4c = 0;
    }
    local_34 = *(undefined4 *)(iVar1 + 0xde);
    uStack_38 = *(undefined4 *)(iVar1 + 0xda);
    local_40 = *(undefined1 *)(iVar1 + 0x26);
    local_48 = *(undefined4 *)(&DAT_100b5478 + *(int *)(iVar1 + 0xce) * 4);
    uStack_54 = *(undefined4 *)(&DAT_100b5490 + *(int *)(iVar1 + 0x1c) * 4);
    local_70 = *(undefined4 *)*param_2;
    local_50 = 0;
    uStack_74 = *(undefined4 *)(param_1 + 0x14);
    uStack_44 = (uint)(param_2[3] == 1);
    local_3f = *(int *)(iVar1 + 0x18) == 1;
    local_58 = 1;
    local_3c = 0;
    uStack_6c = local_90;
    uStack_64 = param_2[7];
    local_68 = uStack_8c;
    local_60 = param_2[8];
    uStack_5c = local_80;
    local_78 = param_1;
    puVar3 = (undefined4 *)FUN_1006e920(*(undefined4 *)(param_1 + 0x10),&local_78);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_10031f98(param_1,param_2);
      *param_2 = puVar3;
      *(char *)((int)param_2 + 0x25) = '\x01';
      FUN_1006f598(*(undefined4 *)(param_1 + 0x10),*puVar3,0);
    }
  }
  return;
}

