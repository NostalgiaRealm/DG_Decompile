/*
 * FUN_1001d128 at 1001d128
 * undefined FUN_1001d128(void)
 * Address ranges: 1001d128-1001d373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001d128(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
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
  uVar10 = 0x8876086c;
  if ((((*(char *)(param_1 + 0x91) != '\0') && (*(char *)(param_1 + 0x92) == '\0')) &&
      ((param_4 & 0xffff57ef) == 0)) &&
     (((param_4 >> 0xd & 1) == 0 || (*(char *)(param_1 + 0x90) != '\0')))) {
    local_a0 = 0;
    local_70 = *(int *)(param_1 + 0x80);
    uVar5 = *(uint *)(param_1 + 0x7c);
    iStack_6c = *(int *)(param_1 + 0x84);
    local_90 = *(undefined8 *)(param_1 + 0x80);
    lStack_98 = (ulonglong)uVar5 << 0x20;
    if (param_3 == (int *)0x0) {
      iVar8 = 0;
      iVar9 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = *param_3;
      iVar8 = param_3[1];
      local_70 = param_3[3];
      iVar9 = param_3[4];
      iStack_6c = param_3[5];
      uVar5 = param_3[2];
    }
    local_60 = CONCAT44(iVar8,iVar7);
    uStack_58 = CONCAT44(uVar5,iVar9);
    local_50 = CONCAT44(iStack_6c,local_70);
    puVar3 = (undefined8 *)FUN_1001cdd0(&local_60,auStack_80,&local_a0);
    lStack_98 = puVar3[1];
    local_a0 = *puVar3;
    local_90 = puVar3[2];
    uVar4 = FUN_1001cd30(&local_a0,&local_60);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(param_1 + 0x74) == 3) {
        iVar6 = *(int *)(param_1 + 100);
      }
      else {
        if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x58bd) != '\0') &&
           (*(int *)(param_1 + 0x74) == 0)) {
          return 0x8876086c;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          return 0x80004005;
        }
        FUN_100355a0(param_1);
        iVar6 = *(int *)(param_1 + 0x20);
      }
      iVar1 = *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x10);
      uVar10 = 0;
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar7 = (uint)*(byte *)(param_1 + 0x1e) * iVar7 + iVar1 * iVar9 + iVar2 * iVar8;
      }
      else {
        iVar7 = ((int)(iVar8 + ((uint)(iVar8 >> 1) >> 0x1e)) >> 2) * iVar2 +
                ((int)(iVar7 + ((uint)(iVar7 >> 1) >> 0x1e)) >> 2) * *(int *)(param_1 + 0x18) +
                iVar1 * iVar9;
      }
      param_2[2] = iVar7 + iVar6;
      *param_2 = iVar2;
      param_2[1] = iVar1;
      FUN_1001d650(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x88),param_3);
      *(char *)(param_1 + 0x92) = '\x01';
    }
  }
  return uVar10;
}

