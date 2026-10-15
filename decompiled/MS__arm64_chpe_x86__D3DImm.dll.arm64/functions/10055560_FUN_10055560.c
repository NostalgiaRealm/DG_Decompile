/*
 * FUN_10055560 at 10055560
 * undefined FUN_10055560(void)
 * Address ranges: 10055560-100557f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055560(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80070057;
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    iVar1 = *param_2;
    iVar2 = *param_3;
    if (((iVar2 == 0xac || iVar2 == 0xcc) || iVar2 == 0xfc) &&
        ((iVar1 == 0xac || iVar1 == 0xcc) || iVar1 == 0xfc)) {
      if (iVar1 == 0xac) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          FUN_1004f990(*(int *)(param_1 + 0xa58),param_2);
        }
        else {
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xf] = 0;
          param_2[0x10] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x11] = 0;
          param_2[0x12] = 0;
          param_2[0x17] = 0;
          param_2[0x18] = 0;
          param_2[0x15] = 0;
          param_2[0x16] = 0;
          param_2[0x1b] = 0;
          param_2[0x1c] = 0;
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          param_2[0x1f] = 0;
          param_2[0x20] = 0;
          param_2[0x1d] = 0;
          param_2[0x1e] = 0;
          param_2[0x23] = 0;
          param_2[0x24] = 0;
          param_2[0x21] = 0;
          param_2[0x22] = 0;
          param_2[0x27] = 0;
          param_2[0x28] = 0;
          param_2[0x25] = 0;
          param_2[0x26] = 0;
          param_2[0x29] = 0;
          param_2[0x2a] = 0;
          *param_2 = 0xac;
        }
      }
      else if (iVar1 == 0xcc) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          FUN_1004fa60(*(int *)(param_1 + 0xa58),param_2);
        }
        else {
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xf] = 0;
          param_2[0x10] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x11] = 0;
          param_2[0x12] = 0;
          param_2[0x17] = 0;
          param_2[0x18] = 0;
          param_2[0x15] = 0;
          param_2[0x16] = 0;
          param_2[0x1b] = 0;
          param_2[0x1c] = 0;
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          param_2[0x1f] = 0;
          param_2[0x20] = 0;
          param_2[0x1d] = 0;
          param_2[0x1e] = 0;
          param_2[0x23] = 0;
          param_2[0x24] = 0;
          param_2[0x21] = 0;
          param_2[0x22] = 0;
          param_2[0x27] = 0;
          param_2[0x28] = 0;
          param_2[0x25] = 0;
          param_2[0x26] = 0;
          param_2[0x2b] = 0;
          param_2[0x2c] = 0;
          param_2[0x29] = 0;
          param_2[0x2a] = 0;
          param_2[0x2f] = 0;
          param_2[0x30] = 0;
          param_2[0x2d] = 0;
          param_2[0x2e] = 0;
          param_2[0x31] = 0;
          param_2[0x32] = 0;
          *param_2 = 0xcc;
        }
      }
      else if (iVar1 == 0xfc) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          FUN_1004fbb0(*(int *)(param_1 + 0xa58),param_2);
        }
        else {
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[1] = 0;
          param_2[2] = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xf] = 0;
          param_2[0x10] = 0;
          param_2[0xd] = 0;
          param_2[0xe] = 0;
          param_2[0x13] = 0;
          param_2[0x14] = 0;
          param_2[0x11] = 0;
          param_2[0x12] = 0;
          param_2[0x17] = 0;
          param_2[0x18] = 0;
          param_2[0x15] = 0;
          param_2[0x16] = 0;
          param_2[0x1b] = 0;
          param_2[0x1c] = 0;
          param_2[0x19] = 0;
          param_2[0x1a] = 0;
          param_2[0x1f] = 0;
          param_2[0x20] = 0;
          param_2[0x1d] = 0;
          param_2[0x1e] = 0;
          param_2[0x23] = 0;
          param_2[0x24] = 0;
          param_2[0x21] = 0;
          param_2[0x22] = 0;
          param_2[0x27] = 0;
          param_2[0x28] = 0;
          param_2[0x25] = 0;
          param_2[0x26] = 0;
          param_2[0x2b] = 0;
          param_2[0x2c] = 0;
          param_2[0x29] = 0;
          param_2[0x2a] = 0;
          param_2[0x2f] = 0;
          param_2[0x30] = 0;
          param_2[0x2d] = 0;
          param_2[0x2e] = 0;
          param_2[0x33] = 0;
          param_2[0x34] = 0;
          param_2[0x31] = 0;
          param_2[0x32] = 0;
          param_2[0x37] = 0;
          param_2[0x38] = 0;
          param_2[0x35] = 0;
          param_2[0x36] = 0;
          param_2[0x3b] = 0;
          param_2[0x3c] = 0;
          param_2[0x39] = 0;
          param_2[0x3a] = 0;
          param_2[0x3d] = 0;
          param_2[0x3e] = 0;
          *param_2 = 0xfc;
        }
      }
      iVar1 = *param_3;
      if (iVar1 == 0xac) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[7] = 0;
          param_3[8] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[0xb] = 0;
          param_3[0xc] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xf] = 0;
          param_3[0x10] = 0;
          param_3[0xd] = 0;
          param_3[0xe] = 0;
          param_3[0x13] = 0;
          param_3[0x14] = 0;
          param_3[0x11] = 0;
          param_3[0x12] = 0;
          param_3[0x17] = 0;
          param_3[0x18] = 0;
          param_3[0x15] = 0;
          param_3[0x16] = 0;
          param_3[0x1b] = 0;
          param_3[0x1c] = 0;
          param_3[0x19] = 0;
          param_3[0x1a] = 0;
          param_3[0x1f] = 0;
          param_3[0x20] = 0;
          param_3[0x1d] = 0;
          param_3[0x1e] = 0;
          param_3[0x23] = 0;
          param_3[0x24] = 0;
          param_3[0x21] = 0;
          param_3[0x22] = 0;
          param_3[0x27] = 0;
          param_3[0x28] = 0;
          param_3[0x25] = 0;
          param_3[0x26] = 0;
          param_3[0x29] = 0;
          param_3[0x2a] = 0;
          *param_3 = 0xac;
        }
        else {
          FUN_1004f990(*(int *)(param_1 + 0xa58),param_3);
        }
      }
      else if (iVar1 == 0xcc) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[7] = 0;
          param_3[8] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[0xb] = 0;
          param_3[0xc] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xf] = 0;
          param_3[0x10] = 0;
          param_3[0xd] = 0;
          param_3[0xe] = 0;
          param_3[0x13] = 0;
          param_3[0x14] = 0;
          param_3[0x11] = 0;
          param_3[0x12] = 0;
          param_3[0x17] = 0;
          param_3[0x18] = 0;
          param_3[0x15] = 0;
          param_3[0x16] = 0;
          param_3[0x1b] = 0;
          param_3[0x1c] = 0;
          param_3[0x19] = 0;
          param_3[0x1a] = 0;
          param_3[0x1f] = 0;
          param_3[0x20] = 0;
          param_3[0x1d] = 0;
          param_3[0x1e] = 0;
          param_3[0x23] = 0;
          param_3[0x24] = 0;
          param_3[0x21] = 0;
          param_3[0x22] = 0;
          param_3[0x27] = 0;
          param_3[0x28] = 0;
          param_3[0x25] = 0;
          param_3[0x26] = 0;
          param_3[0x2b] = 0;
          param_3[0x2c] = 0;
          param_3[0x29] = 0;
          param_3[0x2a] = 0;
          param_3[0x2f] = 0;
          param_3[0x30] = 0;
          param_3[0x2d] = 0;
          param_3[0x2e] = 0;
          param_3[0x31] = 0;
          param_3[0x32] = 0;
          *param_3 = 0xcc;
        }
        else {
          FUN_1004fa60(*(int *)(param_1 + 0xa58),param_3);
        }
      }
      else if (iVar1 == 0xfc) {
        if (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0') {
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[1] = 0;
          param_3[2] = 0;
          param_3[7] = 0;
          param_3[8] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[0xb] = 0;
          param_3[0xc] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xf] = 0;
          param_3[0x10] = 0;
          param_3[0xd] = 0;
          param_3[0xe] = 0;
          param_3[0x13] = 0;
          param_3[0x14] = 0;
          param_3[0x11] = 0;
          param_3[0x12] = 0;
          param_3[0x17] = 0;
          param_3[0x18] = 0;
          param_3[0x15] = 0;
          param_3[0x16] = 0;
          param_3[0x1b] = 0;
          param_3[0x1c] = 0;
          param_3[0x19] = 0;
          param_3[0x1a] = 0;
          param_3[0x1f] = 0;
          param_3[0x20] = 0;
          param_3[0x1d] = 0;
          param_3[0x1e] = 0;
          param_3[0x23] = 0;
          param_3[0x24] = 0;
          param_3[0x21] = 0;
          param_3[0x22] = 0;
          param_3[0x27] = 0;
          param_3[0x28] = 0;
          param_3[0x25] = 0;
          param_3[0x26] = 0;
          param_3[0x2b] = 0;
          param_3[0x2c] = 0;
          param_3[0x29] = 0;
          param_3[0x2a] = 0;
          param_3[0x2f] = 0;
          param_3[0x30] = 0;
          param_3[0x2d] = 0;
          param_3[0x2e] = 0;
          param_3[0x33] = 0;
          param_3[0x34] = 0;
          param_3[0x31] = 0;
          param_3[0x32] = 0;
          param_3[0x37] = 0;
          param_3[0x38] = 0;
          param_3[0x35] = 0;
          param_3[0x36] = 0;
          param_3[0x3b] = 0;
          param_3[0x3c] = 0;
          param_3[0x39] = 0;
          param_3[0x3a] = 0;
          param_3[0x3d] = 0;
          param_3[0x3e] = 0;
          *param_3 = 0xfc;
        }
        else {
          FUN_1004fbb0(*(int *)(param_1 + 0xa58),param_3);
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

