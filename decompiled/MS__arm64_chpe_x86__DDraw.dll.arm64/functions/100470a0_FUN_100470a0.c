/*
 * FUN_100470a0 at 100470a0
 * undefined FUN_100470a0(void)
 * Address ranges: 100470a0-10047263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100470a0(int param_1,int *param_2,int *param_3,undefined8 param_4,int param_5,uint param_6,
                 int param_7,undefined4 *param_8)

{
  uint *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  
  *(undefined1 *)((int)param_8 + 6) = *(undefined1 *)(DAT_100be0c0 + 0x7e8);
  *(undefined1 *)((int)param_8 + 7) = *(undefined1 *)(DAT_100be0c0 + 0x7e8);
  puVar1 = (uint *)(param_7 + 4);
  if ((param_6 & 0x800) != 0) {
    if ((*puVar1 & 1) != 0) {
      *(undefined1 *)((int)param_8 + 7) = 1;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      bVar4 = true;
      goto LAB_1004713c;
    }
  }
  bVar4 = false;
LAB_1004713c:
  *(bool *)(param_8 + 1) = bVar4;
  if (((param_6 & 0x800) == 0) || ((*puVar1 >> 2 & 1) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  *(bool *)((int)param_8 + 5) = bVar5;
  cVar6 = FUN_10047060(param_1,param_6,param_5);
  *(char *)(param_8 + 2) = cVar6;
  if ((param_6 & 0x18000) == 0x10000) {
    puVar2 = (undefined4 *)(param_7 + 0x5c);
  }
  else {
    puVar2 = (undefined4 *)(param_5 + 400);
  }
  *param_8 = *puVar2;
  if ((param_3[2] - *param_3 != param_2[2] - *param_2) ||
     (bVar3 = true, param_3[3] - param_3[1] != param_2[3] - param_2[1])) {
    bVar3 = false;
  }
  param_8[3] = 3;
  if ((bVar3) && (*(int *)(param_1 + 0x1cc) == *(int *)(param_5 + 0x1cc))) {
    if (cVar6 == '\0') {
      uVar7 = (uint)(bVar4 || bVar5);
    }
    else {
      uVar7 = 2;
    }
    param_8[3] = uVar7;
  }
  return;
}

