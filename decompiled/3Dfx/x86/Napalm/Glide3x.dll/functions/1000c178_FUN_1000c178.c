/*
 * FUN_1000c178 at 1000c178
 * undefined __fastcall FUN_1000c178(int param_1)
 * Address ranges: 1000c178-1000c350
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000c178(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
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
  FUN_1000c10e(param_1);
  if (*(char *)(param_1 + 0x3651) != '\0') {
    uVar4 = FUN_100118f8((void *)(param_1 + 0x37b8),*(int *)(param_1 + 0x2b1c));
    if (uVar4 != 0xffffffff) {
      local_c = *(int *)(param_1 + 0x2b48);
      local_10 = uVar4 * 0x104;
      local_14 = *(int *)(param_1 + 0x2b44);
      local_8 = *(int *)(param_1 + 0x2b40);
      if (*(int *)(param_1 + 0x2dc8) == 1) {
        iVar5 = *(int *)(local_10 + 0x3918 + param_1);
        local_8 = iVar5 - local_c;
        local_c = iVar5 - *(int *)(param_1 + 0x2b40);
      }
      iVar5 = *(int *)(local_10 + 0x391c + param_1);
      local_24 = *(uint *)(local_10 + 0x3914 + param_1);
      local_2c = (uint)(iVar5 * *(int *)(param_1 + 0x2b3c)) / local_24;
      iVar2 = *(int *)(local_10 + 0x3920 + param_1);
      local_20 = *(uint *)(local_10 + 0x3918 + param_1);
      local_28 = (uint)(iVar2 * local_8) / local_20;
      local_24 = (uint)(iVar5 * local_14) / local_24;
      local_20 = (uint)(iVar2 * local_c) / local_20;
      param_1 = local_1c._4_4_;
      piVar3 = *(int **)(*(int *)(local_1c._4_4_ + 0x3688) + 4);
      (**(code **)(*piVar3 + 0xb4))(piVar3,1,&local_2c);
    }
    *(undefined1 *)(param_1 + 0x3651) = 0;
  }
  if (*(char *)(param_1 + 0x3652) != '\0') {
    piVar3 = *(int **)(*(int *)(param_1 + 0x3688) + 4);
    iVar5 = (**(code **)(*piVar3 + 0x38))(piVar3,*(undefined4 *)(param_1 + 0x369c),0,4,0,&local_28);
    if (-1 < iVar5) {
      uVar6 = 0;
      uVar4 = 0;
      if (*(int *)(param_1 + 0xdc) != 0) {
        do {
          local_1c._4_4_ = (uint)*(byte *)(param_1 + 0x3d4 + uVar6);
          *(float *)(local_28 + uVar6 * 4) = (float)local_1c._4_4_ / 255.0;
          uVar4 = *(uint *)(param_1 + 0xdc);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      bVar1 = *(byte *)(uVar4 + 0x3d3 + param_1);
      local_1c = (double)bVar1;
      *(float *)(local_28 + uVar4 * 4) = (float)bVar1 / 255.0;
      piVar3 = *(int **)(*(int *)(param_1 + 0x3688) + 4);
      (**(code **)(*piVar3 + 0x3c))(piVar3,*(undefined4 *)(param_1 + 0x369c),0);
      *(undefined1 *)(param_1 + 0x3652) = 0;
    }
  }
  uVar4 = 0;
  do {
    if (*(char *)(param_1 + 0x3653 + uVar4) != '\0') {
      FUN_1001f6db(*(undefined4 **)(param_1 + 0xd4f0 + uVar4 * 4));
      *(undefined1 *)(param_1 + 0x3653 + uVar4) = 0;
    }
    if (*(char *)(param_1 + 0x3656 + uVar4) != '\0') {
      FUN_1001dffd(*(int *)(param_1 + 0xd4f0 + uVar4 * 4));
      *(undefined1 *)(param_1 + 0x3656 + uVar4) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  return;
}

