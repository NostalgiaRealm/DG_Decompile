/*
 * FUN_10022728 at 10022728
 * undefined FUN_10022728(void)
 * Address ranges: 10022728-100229af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022728(int param_1,uint *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_a0;
  longlong lStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [16];
  int local_70;
  int iStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar9 = 0x8876086c;
  if ((((*(char *)(param_1 + 0x8d) != '\0') && (*(char *)(param_1 + 0x8e) == '\0')) &&
      ((param_4 & 0xffff17ef) == 0)) &&
     (((param_4 >> 0xd & 1) == 0 || (*(char *)(param_1 + 0x8c) != '\0')))) {
    local_a0 = 0;
    local_70 = *(int *)(param_1 + 0x7c);
    uVar4 = *(uint *)(param_1 + 0x78);
    iStack_6c = *(int *)(param_1 + 0x80);
    local_90 = *(undefined8 *)(param_1 + 0x7c);
    lStack_98 = (ulonglong)uVar4 << 0x20;
    if (param_3 == (int *)0x0) {
      iVar7 = 0;
      iVar8 = 0;
      iVar6 = 0;
    }
    else {
      iVar6 = *param_3;
      iVar7 = param_3[1];
      local_70 = param_3[3];
      iVar8 = param_3[4];
      iStack_6c = param_3[5];
      uVar4 = param_3[2];
    }
    local_60 = CONCAT44(iVar7,iVar6);
    uStack_58 = CONCAT44(uVar4,iVar8);
    local_50 = CONCAT44(iStack_6c,local_70);
    puVar2 = (undefined8 *)FUN_10022430(&local_60,auStack_80,&local_a0);
    lStack_98 = puVar2[1];
    local_a0 = *puVar2;
    local_90 = puVar2[2];
    uVar3 = FUN_10022390(&local_a0,&local_60);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(param_1 + 0x74) == 3) {
        iVar5 = *(int *)(param_1 + 100);
      }
      else {
        if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x669d) != '\0') &&
           (*(int *)(param_1 + 0x74) == 0)) {
          return 0x8876086c;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return 0x80004005;
        }
        FUN_1003f3e0(param_1);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar1 = *(uint *)(param_1 + 0x10);
      uVar9 = 0;
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar6 = (uint)*(byte *)(param_1 + 0x1e) * iVar6 + uVar4 * iVar8 + uVar1 * iVar7;
      }
      else {
        iVar6 = ((int)(iVar7 + ((uint)(iVar7 >> 1) >> 0x1e)) >> 2) * uVar1 +
                ((int)(iVar6 + ((uint)(iVar6 >> 1) >> 0x1e)) >> 2) * *(int *)(param_1 + 0x18) +
                uVar4 * iVar8;
      }
      param_2[2] = iVar6 + iVar5;
      *param_2 = uVar1;
      param_2[1] = uVar4;
      if (*(int *)(param_1 + 0x68) == 0x31495441) {
        *param_2 = uVar1 >> 1;
        param_2[1] = uVar4 << 1;
      }
      else if (*(int *)(param_1 + 0x68) == 0x32495441) {
        *param_2 = uVar1 >> 2;
      }
      FUN_10022c90(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x84),param_3);
      *(char *)(param_1 + 0x8e) = '\x01';
    }
  }
  return uVar9;
}

