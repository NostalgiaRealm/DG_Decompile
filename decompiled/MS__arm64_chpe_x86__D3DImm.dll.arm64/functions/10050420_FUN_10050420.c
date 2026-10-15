/*
 * FUN_10050420 at 10050420
 * undefined FUN_10050420(void)
 * Address ranges: 10050420-1005052b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050420(int *param_1,byte param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (iVar2 == 0x16c) {
    iVar2 = 0xc0;
    if (param_2 == 0) {
      iVar2 = 0x14;
    }
    puVar1 = (undefined8 *)(iVar2 + (int)param_1);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    iVar3 = 0xac;
    iVar2 = 0xac;
    if ((param_2 & 1) != 0) {
      param_1 = param_1 + 0x30;
      goto LAB_10050524;
    }
  }
  else if (iVar2 == 0x1ac) {
    iVar2 = 0xe0;
    if (param_2 == 0) {
      iVar2 = 0x14;
    }
    puVar1 = (undefined8 *)(iVar2 + (int)param_1);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    iVar3 = 0xcc;
    iVar2 = 0xcc;
    if ((param_2 & 1) != 0) {
      param_1 = param_1 + 0x38;
      goto LAB_10050524;
    }
  }
  else {
    if (iVar2 != 0x20c) {
      return;
    }
    iVar2 = 0x110;
    if (param_2 == 0) {
      iVar2 = 0x14;
    }
    puVar1 = (undefined8 *)(iVar2 + (int)param_1);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    iVar3 = 0xfc;
    iVar2 = 0xfc;
    if ((param_2 & 1) != 0) {
      param_1 = param_1 + 0x44;
      goto LAB_10050524;
    }
  }
  iVar3 = iVar2;
  param_1 = param_1 + 5;
LAB_10050524:
  *param_1 = iVar3;
  return;
}

