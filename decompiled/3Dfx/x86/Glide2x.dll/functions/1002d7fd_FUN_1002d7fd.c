/*
 * FUN_1002d7fd at 1002d7fd
 * undefined4 * __stdcall FUN_1002d7fd(undefined4 * param_1, int param_2, uint param_3)
 * Address ranges: 1002d7fd-1002da0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1002d7fd(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 != 0) {
    do {
      iVar3 = uVar4 * 0x180;
      local_8 = 2;
      if (*(float *)(param_2 + 0x124 + iVar3) == *(float *)(param_2 + 0x120 + iVar3)) {
        local_8 = 0;
      }
      iVar1 = *(int *)(param_2 + 0x108 + iVar3);
      param_1[uVar4] =
           ((((((((*(int *)(param_2 + 0x138 + iVar3) << 2 | *(uint *)(param_2 + 0x134 + iVar3)) << 2
                 | *(uint *)(param_2 + 0x148 + iVar3) & 3) << 2 | local_8 |
                *(uint *)(param_2 + 0x140 + iVar3)) * 2 | *(uint *)(param_2 + 0x13c + iVar3)) << 2 |
              *(uint *)(param_2 + 0x144 + iVar3)) << 4 | *(uint *)(param_2 + 0x114 + iVar3)) << 4 |
            *(uint *)(param_2 + 0x104 + iVar3)) << 5 | *(uint *)(param_2 + 0x110 + iVar3)) << 5 |
           *(uint *)(param_2 + 0x100 + iVar3);
      param_1[uVar4 + 3] =
           -(uint)(*(int *)(param_2 + 0x118 + iVar3) != 0) & 0x40 | -(uint)(iVar1 != 0) & 0x20 |
           (uint)((byte)(&DAT_1005354c)[*(int *)(param_2 + 0x130 + iVar3)] >> 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  uVar4 = *(uint *)(param_2 + 0x8c);
  iVar3 = *(int *)(param_2 + 0xd0);
  uVar2 = *(uint *)(param_2 + 0x1c);
  iVar1 = *(int *)(param_2 + 0xa0);
  param_1[6] = (((((((((*(int *)(param_2 + 0xc4) << 2 | *(uint *)(param_2 + 0xd4)) << 2 |
                      *(uint *)(param_2 + 0xd8)) << 2 | *(uint *)(param_2 + 200)) << 3 |
                     -(uint)(*(int *)(param_2 + 0x4c) != 0) & 4 | *(uint *)(param_2 + 0xcc)) << 3 |
                   *(uint *)(param_2 + 0x78)) << 6 | -(uint)(*(int *)(param_2 + 0xf0) != 0) & 0x20 |
                  *(uint *)(param_2 + 0xe0)) << 4 | *(uint *)(param_2 + 0xe4)) << 2 |
                *(uint *)(param_2 + 0xe8)) << 2 | *(uint *)(param_2 + 0xf8)) << 2 |
               *(uint *)(param_2 + 0xec);
  param_1[7] = (((((uVar2 & 0xf | param_3 << 0xb) << 4 | -(uint)(*(int *)(param_2 + 0x28) != 0) & 8
                   | uVar2 & 0xf00 | *(uint *)(param_2 + 0x24)) << 4 | *(uint *)(param_2 + 0x74)) <<
                 4 | uVar4 & 3) << 6 | -(uint)(iVar1 != 0) & 0x20 | -(uint)(iVar3 != 0) & 0x10 |
               uVar4 & 0x300) * 2 | *(uint *)(param_2 + 0xc0);
  return param_1;
}

