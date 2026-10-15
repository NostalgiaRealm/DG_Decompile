/*
 * FUN_1004a760 at 1004a760
 * undefined FUN_1004a760(void)
 * Address ranges: 1004a760-1004aa4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1004a760(undefined8 param_1,undefined8 *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = 0;
  uVar6 = 0x20;
  if (param_4 != 0) {
    do {
      uVar5 = 2;
      if (*(float *)(param_3 + 0x120 + uVar4 * 0x180) == *(float *)(param_3 + 0x124 + uVar4 * 0x180)
         ) {
        uVar5 = 0;
      }
      *(uint *)((int)param_2 + uVar4 * 4) =
           *(uint *)(param_3 + 0x100 + uVar4 * 0x180) |
           (*(uint *)(param_3 + 0x110 + uVar4 * 0x180) |
           (*(uint *)(param_3 + 0x104 + uVar4 * 0x180) |
           (*(uint *)(param_3 + 0x114 + uVar4 * 0x180) |
           (*(uint *)(param_3 + 0x144 + uVar4 * 0x180) |
           (*(uint *)(param_3 + 0x13c + uVar4 * 0x180) |
           (uVar5 | (*(uint *)(param_3 + 0x148 + uVar4 * 0x180) & 3 |
                    (*(uint *)(param_3 + 0x134 + uVar4 * 0x180) |
                    *(int *)(param_3 + 0x138 + uVar4 * 0x180) << 2) << 2) << 2 |
           *(uint *)(param_3 + 0x140 + uVar4 * 0x180)) << 1) << 2) << 4) << 4) << 5) << 5;
      iVar1 = uVar4 * 0x180;
      uVar5 = 0x40;
      if (*(int *)(param_3 + 0x118 + uVar4 * 0x180) == 0) {
        uVar5 = 0;
      }
      uVar3 = uVar6;
      if (*(int *)(param_3 + 0x108 + uVar4 * 0x180) == 0) {
        uVar3 = 0;
      }
      iVar2 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(uint *)((int)param_2 + iVar2 + 0xc) =
           uVar5 | *(byte *)(*(int *)(param_3 + 0x130 + iVar1) + 0x10096940) >> 1 | uVar3;
    } while (uVar4 < param_4);
  }
  uVar4 = 4;
  if (*(int *)(param_3 + 0x4c) == 0) {
    uVar4 = 0;
  }
  uVar5 = uVar6;
  if (*(int *)(param_3 + 0xf0) == 0) {
    uVar5 = 0;
  }
  *(uint *)(param_2 + 3) =
       *(uint *)(param_3 + 0xec) |
       (*(uint *)(param_3 + 0xf8) |
       (*(uint *)(param_3 + 0xe8) |
       (*(uint *)(param_3 + 0xe4) |
       (uVar5 | (*(uint *)(param_3 + 0x78) |
                (uVar4 | (*(uint *)(param_3 + 200) |
                         (*(uint *)(param_3 + 0xd8) |
                         (*(uint *)(param_3 + 0xd4) | *(int *)(param_3 + 0xc4) << 2) << 2) << 2) <<
                         3 | *(uint *)(param_3 + 0xcc)) << 3) << 6 | *(uint *)(param_3 + 0xe0)) << 4
       ) << 2) << 2) << 2;
  uVar4 = 8;
  if (*(int *)(param_3 + 0x28) == 0) {
    uVar4 = 0;
  }
  if (*(int *)(param_3 + 0xd0) == 0) {
    uVar6 = 0;
  }
  uVar5 = 0x40;
  if (*(int *)(param_3 + 0xa0) == 0) {
    uVar5 = 0;
  }
  *(uint *)((int)param_2 + 0x1c) =
       uVar6 | (*(uint *)(param_3 + 0x8c) & 3 |
               (*(uint *)(param_3 + 0x8c) >> 8 & 3 |
               (*(uint *)(param_3 + 0x74) |
               (uVar4 | (*(uint *)(param_3 + 0x1c) >> 4 & 0xf0 | *(uint *)(param_3 + 0x1c) & 0xf |
                        param_4 << 0xb) << 4 | *(uint *)(param_3 + 0x24)) << 4) << 2) << 2) << 7 |
       uVar5 | *(uint *)(param_3 + 0xc0);
  return param_2;
}

