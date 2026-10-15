/*
 * FUN_10068968 at 10068968
 * undefined FUN_10068968(void)
 * Address ranges: 10068968-10068adb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068968(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  int iStack_6c;
  int local_68;
  uint uStack_64;
  uint local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar6 = 0x80070057;
  if ((param_2 != (int *)0x0) && (*param_2 == 0x2c)) {
    uVar6 = 0x88760306;
    if (*(int *)(param_1 + 0x84) != 0) {
      local_4c = 0;
      iVar1 = param_2[1];
      iVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      local_70 = 0x2c;
      uVar6 = 0x80070057;
      fVar8 = (float)uVar3 / ((float)param_2[5] + (float)param_2[5]);
      fVar9 = fVar8 * -1.0;
      fVar8 = fVar8 - fVar9;
      fVar7 = (float)uVar4 / ((float)param_2[6] + (float)param_2[6]);
      local_48 = 0x3f800000;
      iStack_6c = iVar1;
      local_68 = iVar2;
      uStack_64 = uVar3;
      local_60 = uVar4;
      local_5c = fVar9;
      fStack_58 = fVar7;
      local_54 = fVar8;
      fStack_50 = fVar7 + fVar7;
      uVar5 = FUN_10056170(*(int *)(param_1 + 0x84),&local_70);
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xa4) = 0x2c;
        *(int *)(param_1 + 0xa8) = iVar1;
        *(int *)(param_1 + 0xac) = iVar2;
        *(uint *)(param_1 + 0xb0) = uVar3;
        *(uint *)(param_1 + 0xb4) = uVar4;
        *(float *)(param_1 + 0xb8) = fVar9;
        *(float *)(param_1 + 0xbc) = fVar7;
        uVar6 = 0;
        *(float *)(param_1 + 0xc0) = fVar8;
        *(float *)(param_1 + 0xc4) = fVar7 + fVar7;
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
      }
      *(undefined1 *)(param_1 + 0xd2) = 1;
      *(undefined1 *)(param_1 + 0xd0) = 1;
    }
  }
  return uVar6;
}

