/*
 * FUN_10074cb1 at 10074cb1
 * undefined __stdcall FUN_10074cb1(int param_1, byte param_2, undefined4 param_3, byte param_4, undefined4 param_5, int * param_6, int * param_7)
 * Address ranges: 10074cb1-10074d8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074cb1(int param_1,byte param_2,undefined4 param_3,byte param_4,undefined4 param_5,
                 int *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),&local_5c);
  (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(int **)(param_1 + 4),&local_30);
  uVar4 = 1;
  if ((((*param_6 == 0) && (param_6[1] == 0)) && (param_6[2] == local_5c >> (param_2 & 0x1f))) &&
     (param_6[3] == local_58 >> (param_2 & 0x1f))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*param_7 == 0) && (param_7[1] == 0)) &&
     ((param_7[2] == local_30 >> (param_4 & 0x1f) && (param_7[3] == local_2c >> (param_4 & 0x1f)))))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(undefined4 *)(param_1 + 0x10) = local_20;
  *(undefined4 *)(param_1 + 0x14) = local_4c;
  *(undefined4 *)(param_1 + 0x18) = local_1c;
  *(undefined4 *)(param_1 + 0x1c) = local_48;
  if ((bVar1) && (bVar2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x46) = uVar3;
  if (((((!bVar1) || (!bVar2)) || (local_28 != 1)) || ((local_54 != 1 || (local_24 != 1)))) ||
     (local_50 != 1)) {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar4;
  return;
}

