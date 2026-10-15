/*
 * FUN_1800ed1a8 at 1800ed1a8
 * undefined FUN_1800ed1a8(void)
 * Address ranges: 1800ed1a8-1800ed323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800ed1a8(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x20000;
  if (param_2[1] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x200;
  if (param_2[0x21] == 0) {
    uVar2 = 0;
  }
  return ((ulonglong)
          (param_2[0x19] & 0x1fU |
          (param_2[0x1a] & 7U |
          (param_2[0x1b] & 0x1fU | (param_2[0x1c] & 0x1fU | (param_2[0x1d] & 7U) << 5) << 5) << 3)
          << 5) << 5 |
          ((ulonglong)(uint)param_2[0x22] & 0x1f |
          ((ulonglong)(uint)param_2[0x23] & 0x1f |
          ((ulonglong)(uint)param_2[0x24] & 7 |
          ((ulonglong)(uint)param_2[0x25] & 0x1f |
          ((ulonglong)(uint)param_2[0x26] & 0x1f | ((ulonglong)(uint)param_2[0x27] & 7) << 5) << 5)
          << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_2[0x18] & 0x1f) +
         ((ulonglong)
          (param_2[5] & 0x1fU |
          (param_2[6] & 7U |
          (param_2[7] & 0x1fU | (param_2[8] & 0x1fU | (param_2[9] & 7U) << 5) << 5) << 3) << 5) << 5
          | ((ulonglong)(uint)param_2[0xe] & 0x1f |
            ((ulonglong)(uint)param_2[0xf] & 0x1f |
            ((ulonglong)(uint)param_2[0x10] & 7 |
            ((ulonglong)(uint)param_2[0x11] & 0x1f |
            ((ulonglong)(uint)param_2[0x12] & 0x1f | ((ulonglong)(uint)param_2[0x13] & 7) << 5) << 5
            ) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_2[4] & 0x1f) +
         (uVar2 | ((ulonglong)(uint)param_2[10] & 0xf |
                  ((ulonglong)(uint)param_2[0x14] & 0xf |
                  ((ulonglong)(uint)param_2[0x1e] & 0xf |
                  ((ulonglong)(uint)param_2[0x28] & 0xf |
                  ((ulonglong)*(byte *)(param_2 + 0xb) & 0xf |
                  ((ulonglong)*(byte *)(param_2 + 0x15) & 0xf |
                  ((ulonglong)*(byte *)(param_2 + 0x1f) & 0xf |
                  (uVar1 | (ulonglong)(*param_2 != 0) << 0x10 |
                  (ulonglong)*(byte *)(param_2 + 0x29) & 0xf) << 4) << 4) << 4) << 0xc) << 4) << 4)
                  << 4) << 10 | (ulonglong)(param_2[0x20] != 0) << 8 |
          (ulonglong)(param_2[0x17] != 0) << 7 | (ulonglong)(param_2[0x16] != 0) << 6 |
          (ulonglong)(param_2[0xd] != 0) << 5 | (ulonglong)(param_2[0xc] != 0) << 4 |
          (ulonglong)(param_2[3] != 0) << 3 | (ulonglong)(param_2[2] != 0) << 2);
}

