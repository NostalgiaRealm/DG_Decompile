/*
 * FUN_100d9ea0 at 100d9ea0
 * undefined FUN_100d9ea0(void)
 * Address ranges: 100d9ea0-100da0bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d9ea0(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  uStack_68 = param_2[1];
  local_70 = *param_2;
  local_40 = *(undefined4 *)(param_2 + 6);
  iVar4 = 0;
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  local_5c = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_58 = (undefined4)param_2[3];
  uVar2 = 0;
  if (((int)local_70 - 0x55U & 0xffffff7f) == 0) {
    uVar2 = local_5c;
  }
  if ((int)local_70 < 0x80) {
    uStack_58 = 1;
  }
  _uStack_60 = CONCAT44(uVar2,(int)param_2[2]);
  uStack_54 = (undefined4)((ulonglong)param_2[3] >> 0x20);
  iVar3 = FUN_100da158(param_1,&local_70);
  if (iVar3 != 0) {
    uVar6 = 0xffffffff;
    uVar5 = 0;
    do {
      if (*(int *)(iVar3 + 0x1c + uVar5 * 0x24) == 0) {
        if (uVar6 == 0xffffffff) {
          uVar6 = uVar5;
        }
      }
      else {
        piVar1 = (int *)(iVar3 + uVar5 * 0x24);
        if ((((*(int *)(param_2 + 2) == *piVar1) && (*(int *)((int)param_2 + 0x1c) == piVar1[1])) &&
            (*(int *)((int)param_2 + 0x24) == piVar1[3])) && (*(int *)(param_2 + 6) == piVar1[5]))
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x14);
    if (uVar5 == 0x14) {
      if (uVar6 == 0xffffffff) {
        uVar6 = 0;
        while (*(char *)(iVar3 + 0x20 + uVar6 * 0x24) != '\0') {
          uVar6 = uVar6 + 1;
          if (0x13 < uVar6) {
            return 0;
          }
        }
      }
      piVar1 = (int *)(iVar3 + uVar6 * 0x24);
      *piVar1 = *(int *)(param_2 + 2);
      piVar1[1] = *(int *)((int)param_2 + 0x1c);
      piVar1[2] = *(int *)(param_2 + 4);
      piVar1[3] = *(int *)((int)param_2 + 0x24);
      piVar1[4] = *(int *)(param_2 + 5);
      iVar4 = piVar1[7];
      piVar1[5] = *(int *)(param_2 + 6);
      piVar1[6] = *(int *)((int)param_2 + 0x2c);
      if (iVar4 != 0) {
        FUN_100d7500(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar4);
      }
      iVar4 = FUN_100d79c0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),param_2);
      piVar1[7] = iVar4;
    }
    else {
      piVar1 = (int *)(iVar3 + uVar5 * 0x24);
      iVar4 = piVar1[7];
    }
    *(undefined1 *)(piVar1 + 8) = 1;
  }
  return iVar4;
}

