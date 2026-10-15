/*
 * FUN_10017e9c at 10017e9c
 * undefined __fastcall FUN_10017e9c(int param_1)
 * Address ranges: 10017e9c-1001806e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10017e9c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = (double)CONCAT44(param_1,(undefined4)local_1c);
  FUN_10017e32(param_1);
  if (*(char *)(param_1 + 0x3151) != '\0') {
    iVar4 = FUN_1001c41a(*(int *)(param_1 + 0x2964));
    if (iVar4 != -1) {
      local_c = *(int *)(param_1 + 0x2990);
      local_10 = iVar4 * 0x104;
      local_14 = *(int *)(param_1 + 0x298c);
      local_8 = *(int *)(param_1 + 0x2988);
      if (*(int *)(param_1 + 0x2bd8) == 1) {
        iVar4 = *(int *)(local_10 + 0x3418 + param_1);
        local_8 = iVar4 - local_c;
        local_c = iVar4 - *(int *)(param_1 + 0x2988);
      }
      iVar4 = *(int *)(local_10 + 0x341c + param_1);
      local_24 = *(uint *)(local_10 + 0x3414 + param_1);
      local_2c = (uint)(iVar4 * *(int *)(param_1 + 0x2984)) / local_24;
      iVar2 = *(int *)(local_10 + 0x3420 + param_1);
      local_20 = *(uint *)(local_10 + 0x3418 + param_1);
      local_28 = (uint)(iVar2 * local_8) / local_20;
      local_24 = (uint)(iVar4 * local_14) / local_24;
      local_20 = (uint)(iVar2 * local_c) / local_20;
      param_1 = local_1c._4_4_;
      piVar3 = *(int **)(*(int *)(local_1c._4_4_ + 0x3188) + 4);
      (**(code **)(*piVar3 + 0xb4))(piVar3,1,&local_2c);
    }
    *(undefined1 *)(param_1 + 0x3151) = 0;
  }
  if (*(char *)(param_1 + 0x3152) != '\0') {
    piVar3 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
    iVar4 = (**(code **)(*piVar3 + 0x38))(piVar3,*(undefined4 *)(param_1 + 0x319c),0,4,0,&local_28);
    if (-1 < iVar4) {
      uVar5 = 0;
      uVar6 = 0;
      if (*(int *)(param_1 + 0xd8) != 0) {
        do {
          local_1c._4_4_ = (uint)*(byte *)(param_1 + 0x21c + uVar5);
          *(float *)(local_28 + uVar5 * 4) = (float)local_1c._4_4_ / 255.0;
          uVar6 = *(uint *)(param_1 + 0xd8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      bVar1 = *(byte *)(uVar6 + 0x21b + param_1);
      local_1c = (double)bVar1;
      *(float *)(local_28 + uVar6 * 4) = (float)bVar1 / 255.0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x3188) + 4);
      (**(code **)(*piVar3 + 0x3c))(piVar3,*(undefined4 *)(param_1 + 0x319c),0);
      *(undefined1 *)(param_1 + 0x3152) = 0;
    }
  }
  uVar6 = 0;
  do {
    if (*(char *)(param_1 + 0x3153 + uVar6) != '\0') {
      FUN_1002be41(*(undefined4 **)(param_1 + 0xc9fc + uVar6 * 4));
      *(undefined1 *)(param_1 + 0x3153 + uVar6) = 0;
    }
    if (*(char *)(param_1 + 0x3156 + uVar6) != '\0') {
      FUN_10028535(*(int *)(param_1 + 0xc9fc + uVar6 * 4));
      *(undefined1 *)(param_1 + 0x3156 + uVar6) = 0;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  return;
}

