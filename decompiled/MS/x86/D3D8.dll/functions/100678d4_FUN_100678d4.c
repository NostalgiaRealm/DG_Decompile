/*
 * FUN_100678d4 at 100678d4
 * undefined __stdcall FUN_100678d4(int param_1, byte param_2, undefined4 param_3, byte param_4, undefined4 param_5, int * param_6, int * param_7)
 * Address ranges: 100678d4-100679a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100678d4(int param_1,byte param_2,undefined4 param_3,byte param_4,undefined4 param_5,
                 int *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 local_78 [16];
  uint local_68;
  uint local_60;
  short local_5c;
  short local_5a;
  undefined4 local_54;
  undefined1 local_40 [16];
  uint local_30;
  uint local_28;
  short local_24;
  short local_22;
  undefined4 local_1c;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),local_78);
  (**(code **)(**(int **)(param_1 + 8) + 0x28))(*(int **)(param_1 + 8),local_40);
  uVar4 = 1;
  if ((((*param_6 == 0) && (param_6[1] == 0)) && (param_6[2] == local_68 >> (param_2 & 0x1f))) &&
     (param_6[3] == local_60 >> (param_2 & 0x1f))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*param_7 == 0) && (param_7[1] == 0)) &&
     ((param_7[2] == local_30 >> (param_4 & 0x1f) && (param_7[3] == local_28 >> (param_4 & 0x1f)))))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(undefined4 *)(param_1 + 0x1c) = local_1c;
  *(undefined4 *)(param_1 + 0x20) = local_54;
  if ((bVar1) && (bVar2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x4a) = uVar3;
  if (((((!bVar1) || (!bVar2)) || (local_22 != 1)) || ((local_5a != 1 || (local_24 != 1)))) ||
     (local_5c != 1)) {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x49) = uVar4;
  return;
}

