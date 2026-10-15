/*
 * FUN_10008f4a at 10008f4a
 * undefined4 __stdcall FUN_10008f4a(int param_1)
 * Address ranges: 10008f4a-10008faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10008f4a(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (((((*(int *)(param_1 + 4) != 0xd) && (*(int *)(param_1 + 4) != 0xe)) &&
       (*(int *)(param_1 + 0xc) != 0xd)) &&
      (((*(int *)(param_1 + 0xc) != 0xe && (*(int *)(param_1 + 0x14) != 0xd)) &&
       ((*(int *)(param_1 + 0x14) != 0xe &&
        ((*(int *)(param_1 + 0x1c) != 0xd && (*(int *)(param_1 + 0x1c) != 0xe)))))))) &&
     ((*(int *)(param_1 + 0x2c) != 0xd &&
      (((((*(int *)(param_1 + 0x2c) != 0xe && (*(int *)(param_1 + 0x34) != 0xd)) &&
         (*(int *)(param_1 + 0x34) != 0xe)) &&
        ((*(int *)(param_1 + 0x3c) != 0xd && (*(int *)(param_1 + 0x3c) != 0xe)))) &&
       ((*(int *)(param_1 + 0x44) != 0xd && (*(int *)(param_1 + 0x44) != 0xe)))))))) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}

